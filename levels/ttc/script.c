#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ttc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _machine_yay0SegmentRomStart, _machine_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE, ttc_geo_000240), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM, ttc_geo_000258), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM, ttc_geo_000270), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL, ttc_geo_000288), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL, ttc_geo_0002A8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK, ttc_geo_0002C8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON, ttc_geo_0002E0), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK, ttc_geo_000310), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED, ttc_geo_000328), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND, ttc_geo_000358), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER, ttc_geo_000370), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR, ttc_geo_000388), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR, ttc_geo_0003A0), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		WARP_NODE(0x0A, LEVEL_TTC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_TTC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_TTC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_YELLOW_COIN, 1503, 90, 26416, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1503, 90, 26750, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1503, 90, 27043, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1503, 90, 27316, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1503, 90, 26098, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1503, 90, 26416, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1503, 90, 26750, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1503, 90, 27043, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1503, 90, 27316, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1503, 90, 26098, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 3, 90, 23379, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 3, 90, 23714, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 3, 90, 24006, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 3, 90, 24279, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 3, 90, 23061, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1493, 90, 20219, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1493, 90, 20554, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1493, 90, 20846, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1493, 90, 21119, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1493, 90, 19902, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3, 90, 29284, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3, 90, 30502, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1496, 93, 17187, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1496, 93, 17521, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1496, 93, 17814, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1496, 93, 18087, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1496, 93, 16869, 0, 90, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1507, 93, 17187, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1507, 93, 17521, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1507, 93, 17814, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1507, 93, 18087, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1507, 93, 16869, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 13536, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 13871, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 14163, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 14436, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 13218, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 12021, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 12356, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 12648, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 12921, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 11704, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20, 93, 11393, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -739, 90, 20474, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4, 1775, 2872, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 4, 1775, 2520, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 1, 1778, 2173, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 1950, -17031, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 1950, -16696, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 1950, -16404, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 1950, -16131, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 1950, -17348, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 3147, -17031, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 3147, -16696, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 3147, -16404, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 3147, -16131, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1718, 3147, -17348, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 723, 2881, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1057, 2881, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1350, 2881, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1623, 2881, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 405, 2881, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 723, 1651, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1057, 1651, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1350, 1651, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 1623, 1651, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, 405, 1651, -15645, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1024, 3452, -19122, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -690, 3452, -19122, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -397, 3452, -19122, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -124, 3452, -19122, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1342, 3452, -19122, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1023, 2268, -19121, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -689, 2268, -19121, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -396, 2268, -19121, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -123, 2268, -19121, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_YELLOW_COIN, -1341, 2268, -19121, 0, -180, 0, (0 << 24), bhvTrollCoin),
		OBJECT(MODEL_BLUE_COIN, 2065, 3716, -18995, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 3053, 5042, -19079, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2093, 4636, -19847, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1776, 6153, -19392, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1776, 6641, -19593, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1776, 7145, -19794, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -1769, 8568, -20180, 90, 0, 90, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1769, 8233, -20180, 90, 0, 90, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1769, 7941, -20180, 90, 0, 90, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1769, 7668, -20180, 90, 0, 90, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 2546, -18339, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 2546, -18004, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 2546, -17712, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 2546, -17439, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 2546, -18657, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 8751, -16209, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 8751, -15875, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 8751, -15582, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 8751, -15309, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 8751, -16527, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 9747, -16532, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 9747, -16198, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 9747, -15905, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 9747, -15632, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2100, 9747, -16850, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -890, 8451, -17806, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -556, 8451, -17806, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -263, 8451, -17806, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 10, 8451, -17806, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1208, 8451, -17806, 0, -180, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, 2113, 9747, -18821, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 2139, 10775, -19766, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -3, 90, 30229, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3, 90, 29936, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3, 90, 29602, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -3052, 11118, -15972, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -864, 11118, -15956, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_THWOMP, 621, 2596, -10371, 0, -90, 0, (0 << 24), bhvThwomp),
		OBJECT(MODEL_DASHPAD, -6, 12246, -16843, 0, -180, 0, 0x00000000, bhvTrollpad),
		OBJECT(MODEL_NONE, 0, 199, 32210, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 0, 199, 32210),
		OBJECT(MODEL_NONE, 0, 12426, -20977, 0, 90, 0, 0x00060000, bhvWarp),
		TERRAIN(ttc_area_1_collision),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, 199, 32210),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
