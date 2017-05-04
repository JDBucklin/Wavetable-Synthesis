#include "mutedgtr_samples.h"
const sample_data mutedgtr_samples[1] = {
	{
		(int16_t*)sample_0_mutedgtr_mgtr, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * CENTS_SHIFT(-46) * 44100.0 / NOTE(76) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)835 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)831 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)831 - 1) << (32 - 10)) - (((uint32_t)766 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * DECIBEL_SHIFT(-0.0)), // INITIAL_ATTENUATION_SCALAR
		RATE_NORMALIZED_ENV_COUNT(0.00), // DELAY_COUNT
		RATE_NORMALIZED_ENV_COUNT(6.20), // ATTACK_COUNT
		RATE_NORMALIZED_ENV_COUNT(20.01), // HOLD_COUNT
		RATE_NORMALIZED_ENV_COUNT(5467.32), // DECAY_COUNT
		RATE_NORMALIZED_ENV_COUNT(100.02), // RELEASE_COUNT
		NEG_INV_COUNT(100.02), // RELEASE_COUNT
		SUSTAIN_DROP(100.0, 5467.32), // SUSTAIN_MULT
		LFO_NORMALIZED_DELAY_COUNT(0.000), // VIBRATO_DELAY
		LFO_INCREMENT(0.001), // VIBRATO_INCREMENT
		LFO_FREQ_MULT(0.001, 0), // VIRBRATO_FREQ_MULT
		LFO_NORMALIZED_DELAY_COUNT(0.000), // MODULATION_DELAY
		LFO_INCREMENT(5.292), // MODULATION_INCREMENT
		LFO_FREQ_MULT(5.292, 9), // MODULATION_FREQ_MULT
		LFO_AMP_MULT(5.292, 0), // MODULTATION_AMP_MULT
	},
};

const uint32_t sample_0_mutedgtr_mgtr[512] = {
0x00000000,0xfe46fb78,0xfe5dfe26,0xfb55fcb3,0xf8def9f3,0xfa15f944,0xfb86fb59,0xfc14fc22,
0xfd72fd0b,0xfd30fdc9,0xfddafd22,0x026cfffc,0x066304d1,0x079d074e,0x05f90728,0x02c9046b,
0x00550189,0xfc99feb6,0xf9b1fa78,0xfdf9fb27,0x00f3002f,0xff6a0059,0xff0cfef6,0x00f8ffa7,
0x049702bc,0x065605f9,0x04da05dd,0x02c603ca,0x007001ad,0xfdbcff45,0xf917fb9e,0xf607f6aa,
0xfadef7f6,0xfc82fcb6,0xf8d4fa89,0xfa5ff90d,0xf8e9faa3,0xf0abf543,0xeca6eda9,0xe88febad,
0xda39e35f,0xb416cc49,0xa0868a29,0x38e4ed91,0x69cd660a,0x46ce543c,0x37743e3e,0x2a5532c5,
0x1b9f2299,0x0ea415e9,0x06410a7b,0xfdb50203,0xf9c0fb72,0xf789f7eb,0xf99df9bd,0xfc88f9f3,
0x026aff3d,0x020e02aa,0xfe1c011e,0x0025fc1e,0x00220214,0xfbc6fdc9,0xf9f5f6b2,0x004e00b8,
0x1a1613a9,0x188d1a1e,0x06f90b6a,0x21f219ba,0x017b1ea0,0xba28d5ae,0xa9deae98,0xb887adf4,
0xb68eba4a,0xbdd9b461,0xec80cfc3,0x2f1a10ed,0x38c339d7,0x2f3c344f,0x29732b80,0x22c824c8,
0x1aca1e79,0x14381816,0x0e7210a7,0x065a0a34,0x01880488,0xfd42ffaa,0xfcbdfe0a,0x00c5fefd,
0x039a0421,0x009201ca,0xfd3bffc8,0x019d0141,0xff3dfd9b,0xf8b4fc0e,0xfdc9fc11,0x10a104f2,
0x0e971334,0x0bec09b8,0x1c971437,0x14231c8b,0xf5bf0706,0xc7cedee3,0xb596b8a2,0xb2ddb551,
0xb90db34d,0xcff4c30a,0xfd4be2a6,0x25831664,0x2b142b8e,0x25142817,0x1f4e2266,0x1ae61d20,
0x17431926,0x142115c1,0x1005120c,0x0b940db6,0x0614083d,0x00a70399,0x026e010a,0x04150203,
0x008903f5,0xffe7014e,0xffadfef9,0xfde2fe6a,0xfbecfe00,0xfb75f9d5,0x076300fc,0x07ac09d5,
0x079204f3,0x11a90d3d,0x1133135d,0x08bf0cd0,0xf7aa02f0,0xd687e6fc,0xc3abcb29,0xb3b7bbf4,
0xb9c5b1d1,0xd674c6b8,0x02b1eaae,0x221e16e2,0x241a2566,0x1de720c8,0x17891a9f,0x1382150e,
0x118912a5,0x11ae118e,0x10301011,0x0d080fb5,0x0a6a0c0a,0x07ae081f,0x06330767,0x03ad0556,
0x00e001d8,0xfe00ff7e,0xfd0bfd48,0xfac0fc14,0xf9a4f908,0x034afe63,0x04da04fa,0x062a04e8,
0x0d340983,0x0dbc0ea4,0x0acb0c79,0x04fa0830,0xf7b5fff3,0xe275ed1d,0xcecbd8b2,0xb5f5c26c,
0xb5dab057,0xd634c3aa,0x0385ec54,0x20a91697,0x20a022c8,0x19731c88,0x13c416fa,0x11591204,
0x0fa10fec,0x0fa50fc7,0x0f790f8a,0x0ded0ee2,0x0ca00d41,0x0b490c1f,0x09480a63,0x06e80817,
0x0304054c,0xffcc014b,0xfac6fe18,0xf7ebf818,0xfba1f996,0xfec4fdc0,0x016eff69,0x079d04af,
0x0afd09c0,0x0a820b0f,0x088c09a7,0x027e061b,0xf8c2fe14,0xebbff285,0xd9d6e3fc,0xbc5fcb9d,
0xb45bb2cb,0xd41fc124,0x010bea4a,0x1e0313bc,0x1c401fed,0x143517d8,0x0ed8113b,0x0c850d42,
0x0c970c6b,0x0e0e0d3d,0x0eaf0e85,0x0ee60ebc,0x0ebc0eda,0x0de10e71,0x0cab0d53,0x09a20b3d,
0x07290889,0x01f904c6,0xfc75fee9,0xfbe8fb89,0xfc4cfc55,0xfdcafca1,0x01e4ff88,0x06490499,
0x08520781,0x088f08af,0x066b07b8,0x0186045c,0xfa7bfe12,0xf16ef629,0xe1faeb4b,0xc47bd497,
0xb538b7ad,0xcff6be8b,0xfb59e577,0x19380df9,0x194f1c54,0x108714ba,0x0bac0da0,0x0a3a0a8c,
0x0b3d0aca,0x0cc70bde,0x0e3d0d89,0x0f6b0ef4,0x0fa50f64,0x0f7e0fd1,0x0dfe0eaf,0x0bfc0d07,
0x086e0a7e,0x028b055c,0xfeeb00ae,0xfca7fd94,0xfc34fc4b,0xfe56fce1,0x0173ffdd,0x046d0303,
0x05d40536,0x061c0641,0x0458056a,0x00cc02d8,0xfc85febc,0xf61ff99a,0xe9b0f147,0xcf9ede39,
0xbc51c1e7,0xcfe3c1ae,0xf652e299,0x12a40792,0x1407160f,0x0bdb0fe2,0x077508e8,0x072006d5,
0x09260822,0x0bac0a3d,0x0e110d1d,0x0fd70ef3,0x10791061,0x107510a5,0x0fdb1031,0x0de50f4b,
0x0a040c07,0x054207ca,0x01230328,0xfda1ff2a,0xfd2dfd42,0xfeaffdb2,0x00c2ff96,0x02e801b8,
0x040303a0,0x040e0460,0x027f0360,0x00070182,0xfd18feab,0xf7d3faef,0xed4bf3b9,0xd80be42e,
0xc496cb96,0xd1fac6f3,0xf297e1b6,0x0bf9017a,0x0eb80fdf,0x07b60b48,0x037004e8,0x03a60312,
0x069704e1,0x0a41086e,0x0dc40c0f,0x100c0f03,0x10ca10ab,0x110c10fa,0x106410e1,0x0e570f94,
0x0ae80cc6,0x06f00918,0x02be04b1,0xfff30140,0xff53ff56,0xffdbff88,0x0123008e,0x025201be,
0x02c702cd,0x028802be,0x012201e9,0xffa3006d,0xfd7bfeab,0xf97efc0e,0xf02ff5b6,0xdecee898,
0xcdebd49a,0xd607ce4b,0xf0aee292,0x0664fd2c,0x0a8a0aa8,0x04c007f9,0x001401c8,0xffd7ff88,
0x02f60104,0x076b051b,0x0be509bd,0x0f2a0dab,0x11631071,0x12681204,0x11d11253,0x0fe21111,
0x0c940e5e,0x08530a91,0x040b060e,0x0171029e,0x006d00b4,0x0090008c,0x017a00f2,0x020101ae,
0x02370234,0x018201e0,0x0082011c,0xff53ffe1,0xfdb9feb9,0xfa90fc93,0xf276f739,0xe420ec06,
0xd654dc1a,0xda5ed56c,0xef07e3dc,0x0125f95a,0x05fd0556,0x015c0421,0xfceffec4,0xfc8afc53,
0xff70fda8,0x042501c5,0x09150699,0x0d340b30,0x10860f0e,0x126511a5,0x12b912c8,0x116d1243,
0x0e7b102a,0x0a6a0c88,0x06470844,0x03770499,0x02070290,0x01c001d0,0x01ef01c8,0x022f0229,
0x022c023d,0x015101cc,0x003200d3,0xfeedff99,0xfd78fe5c,0xfa67fc36,0xf340f762,0xe79bedd6,
0xdd1de187,0xdf4ddc0f,0xef00e631,0xfe30f78f,0x02fd020b,0xff4201a8,0xfab8fcc2,0xf9c2f9cd,
0xfc4bfaae,0x00effe6b,0x0628037b,0x0b1608b8,0x0f160d38,0x11ca109b,0x12f01291,0x124912c8,
0x0ffb114f,0x0c600e46,0x084e0a5f,0x04c50664,0x02b1039c,0x01e10225,0x01c801c6,0x020401f1,
0x021f01c6,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,
};
