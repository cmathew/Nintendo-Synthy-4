#define NS4_GAME							u8"Banjo-Kazooie"
#define NS4_COMPOSERS						u8"Grant Kirkhope"
#define NS4_YEAR							u8"1998"
#define NS4_FOLDER							u8"Banjo-Kazooie"
#define NS4_BANK							u8"01"
#define NS4_REVERB_TRACKS					1
#define NS4_REVERB							ns4::CReverb::NS4_T_BANJO_KAZOOIE_0
#define NS4_ORIG_HZ							21998
#define NS4_CURVE							20.0
#define NS4_OUT_DIRECTORY					u8"D:\\N64OST\\Banjo-Kazooie\\"
#define NS4_OUT_DIRECTORY_NUMBERS			NS4_OUT_DIRECTORY u8"Numbered\\"
#define NS4_WET_FILTER_FREQ					8832.0//8832.0//(NS4_ORIG_HZ / std::pow( 2.0, 1.75 ))
#define NS4_ENV_MULTIPLIER					(1.0 / 3.0)

{ u8"Banjo-Kazooie (U) (V1.0) 00000020 00D3DAC0 Gobi's Valley.mid", u8"Banjo-Kazooie (U) (V1.0) 00000020 00D3DAC0 Gobi's Valley.mid TrackParseDebug.txt", u8"Gobi amb", 0,
2 + 1, {
	{ ns4::CMidiFile::NS4_ES_PRE_UNROLL, ns4::CMidiFile::NS4_E_TAG_TRACK_BY_CHNL, 14 - 1 },
	{ ns4::CMidiFile::NS4_ES_PRE_UNROLL, ns4::CMidiFile::NS4_E_TAG_TRACK_BY_CHNL, 15 - 1 },

	{ ns4::CMidiFile::NS4_ES_PRE_UNROLL, ns4::CMidiFile::NS4_E_MUTE_UNTAGGED_TRACKS },
} },
