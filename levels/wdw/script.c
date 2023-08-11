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
#include "levels/wdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM, wdw_geo_000580), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT, wdw_geo_000598), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND, wdw_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM, wdw_geo_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR, wdw_geo_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM, wdw_geo_000640), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(2, wdw_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_WF, 0x01, 0x05, WARP_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		TERRAIN(wdw_area_2_collision),
		MACRO_OBJECTS(wdw_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(1, wdw_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WDW, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_WF, 0x01, 0x05, WARP_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BALJEET, -2050, 2293, 2781, 0, 0, 0, (0 << 24) | (1 << 8) | (5), bhvGoomba),
		OBJECT(MODEL_FREDDY, -3757, 2293, 133, 0, -90, 0, (0 << 24) | (1 << 8) | (3), bhvGoomba),
		OBJECT(MODEL_GREEN_GOBLIN, -2050, 2293, 1818, 0, 0, 0, (0 << 24) | (1 << 8) | (6), bhvGoomba),
		OBJECT(MODEL_KIRBY, -4141, 2511, 2425, 30, 90, 0, (0 << 24) | (1 << 8) | (4), bhvGoomba),
		OBJECT(MODEL_LOUIE, -16, 2423, 2161, 0, -4, 0, (0 << 24) | (1 << 8) | (7), bhvGoomba),
		OBJECT(MODEL_PETER, -2050, 2293, 2284, 0, 0, 0, (0 << 24) | (1 << 8) | (2), bhvGoomba),
		OBJECT(MODEL_PURP, -16, 2399, 2753, -1, 1, -5, (0 << 24) | (1 << 8) | (8), bhvGoomba),
		OBJECT(MODEL_QUINCY, -2050, 2293, 1321, 0, 0, 0, (0 << 24) | (1 << 8) | (1), bhvGoomba),
		OBJECT(MODEL_TOAD_NEW, -2060, 2302, 3201, 89, 177, 0, 0x00000000, bhvSpaghettiClerk),
		OBJECT(MODEL_NONE, -5268, 2663, -5732, 0, 180, 0, (0 << 24), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2505, 2663, -1507, 0, 180, 0, (0 << 24), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 4686, 2173, -6052, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4797, 2173, -5770, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4695, 2173, -5485, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4434, 2173, -5294, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4188, 2173, -5444, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4082, 2173, -5658, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 4131, 2173, -5886, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -4009, 2544, -5779, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -4034, 2157, -5779, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4034, 2157, -5538, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4034, 2157, -5296, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4034, 2157, -6018, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4033, 2160, -6243, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2787, 4118, 839, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2856, 4118, 1148, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -2912, 4118, 1455, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -2817, 4103, 1871, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2688, 4105, 2145, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2500, 4105, 2354, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2279, 4105, 2485, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1980, 4105, 2497, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -1693, 4105, 2502, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -1368, 4105, 2438, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1080, 4108, 2351, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -907, 4109, 2059, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -776, 4113, 1798, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -695, 4116, 1465, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, 4380, 2173, -6114, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -733, 4118, 1128, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -809, 4118, 853, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1024, 4119, 590, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1229, 4121, 446, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1480, 4121, 378, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -1760, 4121, 332, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -2009, 4129, 338, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2261, 4129, 399, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2526, 4132, 471, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2695, 4132, 596, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(BOMBOMB_KING_GATE, -2206, 2256, -873, 0, 2, 0, (0 << 24), bhvBombombKingGate),
		OBJECT(MODEL_KING_BOBOMB, -2129, 2079, -2385, 0, -180, 0, 0x00000000, bhvKingBobomb),
		OBJECT(MODEL_NONE, -2856, 2262, -21101, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -2877, 2272, -21044),
		OBJECT(MODEL_NONE, -2863, 2255, -21065, 0, 0, 0, 0x000A0000, bhvGroundClipDisable),
		TERRAIN(wdw_area_1_collision),
		MACRO_OBJECTS(wdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -2877, 2272, -21044),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
