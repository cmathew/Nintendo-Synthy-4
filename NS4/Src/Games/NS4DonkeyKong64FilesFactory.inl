#define NS4_GAME							u8"Donkey Kong 64"
#define NS4_COMPOSERS						u8"Grant Kirkhope"
#define NS4_YEAR							u8"1999"
#define NS4_FOLDER							u8"Donkey Kong 64"
#define NS4_BANK							u8"00"
#define NS4_REVERB_TRACKS					2
#define NS4_REVERB							ns4::CReverb::NS4_T_DONKEY_KONG_64_0
#define NS4_ORIG_HZ							22047
#define NS4_CURVE							20.0
#define NS4_OUT_DIRECTORY					u8"D:\\N64OST\\Donkey Kong 64\\Factory"
#define NS4_OUT_DIRECTORY_NUMBERS			NS4_OUT_DIRECTORY u8"Numbered\\"
#define NS4_WET_FILTER_FREQ					0.0//(NS4_ORIG_HZ / 2.0)
#define NS4_VIB_SCALE						2.0
#define NS4_ENV_MULTIPLIER					(1.0 / 3.0)



{ u8"Donkey Kong 64 (E) 00000032 00116EC8.mid", u8"Donkey Kong 64 (E) 00000032 00116EC8.mid TrackParseDebug.txt", u8"Channel 15", 0,
	1 + 1, {
		{ ns4::CMidiFile::NS4_ES_PRE_UNROLL, ns4::CMidiFile::NS4_E_TAG_TRACK_BY_CHNL, 15 - 1 },

		{ ns4::CMidiFile::NS4_ES_PRE_UNROLL, ns4::CMidiFile::NS4_E_MUTE_UNTAGGED_TRACKS },
} },