#include "piano.h" // http://www.freesound.org/people/kiddpark/sounds/201159/
#include <Bounce.h>
#include <wavetable.h>


///////////////////////////////////
// copy the Design Tool code here
///////////////////////////////////

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioWavetable          wavetable1;       //xy=163.3333282470703,120.33332824707031
AudioWavetable          wavetable2;       //xy=165.3333282470703,196.3333282470703
AudioWavetable          wavetable3;       //xy=169.3333282470703,256.3333282470703
AudioMixer4              mixer1;         //xy=371.3332977294922,158.3333282470703
AudioOutputI2S           i2s1;           //xy=525.3333282470703,184.3333282470703
AudioConnection          patchCord1(wavetable1, 0, mixer1, 0);
AudioConnection          patchCord2(wavetable2, 0, mixer1, 1);
AudioConnection          patchCord3(wavetable3, 0, mixer1, 2);
AudioConnection          patchCord4(mixer1, 0, i2s1, 0);
AudioConnection          patchCord5(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=353.3333282470703,260.33331298828125
// GUItool: end automatically generated code

// Bounce objects to read pushbuttons 
Bounce button0 = Bounce(0, 15);
Bounce button1 = Bounce(1, 15);  // 15 ms debounce time
Bounce button2 = Bounce(2, 15);

void setup() {
  Serial.begin(9600);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  AudioMemory(10);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);
  mixer1.gain(0, 0.4);
  mixer1.gain(1, 0.4);
  mixer1.gain(2, 0.4);
  mixer1.gain(3, 0.4);
  float x;
  int x1, x2;
  wavetable1.begin(2, 0.5);
  wavetable2.begin(1.5, 0.5);
  wavetable3.begin(1.8, 0.5);
}

void loop() {
  // Update all the button objects
  button0.update();
  button1.update();
  button2.update();

  if (button0.fallingEdge()) {
    wavetable1.play(AudioWaveform_Loop);
  }
  if (button1.fallingEdge()) {
    wavetable2.play(AudioWaveform_Loop);
  }
  if (button2.fallingEdge()) {
    wavetable3.play(AudioWaveform_Loop);
  }
  if (button0.risingEdge()) {
    wavetable1.stop();
  }
  if (button1.risingEdge()) {
    wavetable2.stop();
  }
  if (button2.risingEdge()) {
    wavetable3.stop();
  }
  
}
