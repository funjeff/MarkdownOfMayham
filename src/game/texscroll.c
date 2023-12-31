#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "tile_scroll.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif


#include "src/game/texscroll/common0_texscroll.inc.c"
#include "src/game/texscroll/bob_texscroll.inc.c"
#include "src/game/texscroll/wf_texscroll.inc.c"
#include "src/game/texscroll/ttm_texscroll.inc.c"
#include "src/game/texscroll/wdw_texscroll.inc.c"
#include "src/game/texscroll/ssl_texscroll.inc.c"
#include "src/game/texscroll/ttc_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x8] == (uintptr_t)_common0_mio0SegmentRomStart)) {
		scroll_textures_common0();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bob_segment_7SegmentRomStart)) {
		scroll_textures_bob();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wf_segment_7SegmentRomStart)) {
		scroll_textures_wf();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttm_segment_7SegmentRomStart)) {
		scroll_textures_ttm();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wdw_segment_7SegmentRomStart)) {
		scroll_textures_wdw();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ssl_segment_7SegmentRomStart)) {
		scroll_textures_ssl();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ssl_segment_7SegmentRomStart)) {
		scroll_textures_ssl();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttc_segment_7SegmentRomStart)) {
		scroll_textures_ttc();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wdw_segment_7SegmentRomStart)) {
		scroll_textures_wdw();
	}

}
