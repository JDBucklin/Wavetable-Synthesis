from tkinter import *
import sf2elements
from sf2utils.sf2parse import Sf2File
import decoder
from tkinter import Tk, Label, Button, filedialog
from tkinter.ttk import *


class MyModel():
    def __init__(self,vc):
        #set delegate/callback pointer
        self.controller = vc
        #initialize model
        self.inFile = None
        # currInst logic needs to be changed if implementing ordering
        self.curr_instrument = None
        self.out_dir = None
        self.out_name = None
        self.total_sample_size = None
        self.curr_samples = list()
        self.Instruments = list()

#Model would call this on internal change
    def modelChange(self):
        self.controller.modelChanged()
#Setters and getters for the model
    def setInFile(self, _new):
        self.inFile =_new
    def getInFile(self):
        return self.inFile
    def setOutDir(self, _new):
        self.out_dir.set(_new)
    def setCurrInstrument(self, _index):
        self.curr_instrument = self.Instruments[_index]
    def getCurrInstrument(self):
        return self.curr_instrument
    def setInstrumentList(self, _new):
        self.Instruments = _new
    def getInstrumentList(self):
        return self.Instruments
    def setCurrSamples(self, _idxs):
        temp = list()
        samps = self.curr_instrument.getSamples()
        for idx in _idxs:
            temp.append(samps[idx])
        self.curr_samples = temp
    def getCurrSamples(self):
        return self.curr_samples
# Internal processing for the model
    def loadSoundfont(self):
        """
        This function is constrained by the size of main memory. It
        will instantiate an object for each instrument which will
        contain a list of all the layers/bags that make up said
        instrument. The data used us no-where near the entirety of
        the Soundfont/SF2 so available main memory does not need to
        be greater than the size of the SF2. I don't see this as a
        serious concern but felt it should be noted.
        """
        with open(self.inFile, 'rb') as sf2_file:
            sf2 = Sf2File(sf2_file)
        sf2Instruments = list()
        inst_index = 0
        for inst in sf2.instruments:
            if inst.name == 'EOI':
                break
            sf2Instruments.append(sf2elements.Instrument(inst.name, inst_index))
            inst_index += 1
            bag_index = 0
            for bag in inst.bags:
                if bag.sample is None:
                    sf2Instruments[-1].setGlobalBag(bag_index)
                elif bag.sample is not None and bag.sample not in sf2Instruments[-1].Samples:
                    sf2Instruments[-1].Samples.append(sf2elements.Sample(bag.sample.name, bag_index, bag.key_range))
                bag_index += 1
        # sorted ascending by ascii value of instrument names
        # preserves case but sorts indifferent to it
        # the result is upper and lower case being intermingled
        sf2Instruments.sort(key=lambda x: str.lower(x.i_name))
        self.setInstrumentList(sf2Instruments)