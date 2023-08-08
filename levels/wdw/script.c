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
		OBJECT(MODEL_TOAD_NEW, -2060, 2526, 2491, 89, 177, 0, 0x00000000, bhvSpaghettiClerk),
		OBJECT(MODEL_NONE, -3366, 2663, -5732, 0, 180, 0, (0 << 24), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2505, 2663, -1507, 0, 180, 0, (0 << 24), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 2014, 2392, 811, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2125, 2392, 1094, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 2023, 2392, 1379, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1762, 2392, 1569, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1517, 2392, 1419, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1410, 2392, 1205, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1460, 2392, 977, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_BLUE_COIN, -4185, 2795, -5779, 0, 90, 0, (0 << 24), bhvBlueCoin),
		OBJECT(MODEL_YELLOW_COIN, -4210, 2409, -5779, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4210, 2409, -5538, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4210, 2409, -5296, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4210, 2409, -6018, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4209, 2411, -6243, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2787, 3508, 811, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2856, 3508, 1120, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2912, 3508, 1501, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2817, 3494, 1843, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2688, 3495, 2117, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2500, 3495, 2325, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2279, 3495, 2457, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1980, 3495, 2469, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1693, 3495, 2473, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1368, 3495, 2410, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1080, 3498, 2323, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -907, 3500, 2031, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -776, 3503, 1769, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -695, 3507, 1437, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 1709, 2392, 749, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -733, 3508, 1100, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -809, 3508, 824, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1024, 3509, 562, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1229, 3511, 417, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1480, 3511, 350, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -1705, 3511, 303, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2009, 3519, 309, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2261, 3519, 371, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2526, 3523, 442, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -2695, 3523, 568, 0, 90, 0, (0 << 24), bhvOneCoin),
		OBJECT(MODEL_KIRBY, -3656, 2724, 1871, 90, 83, 90, (0 << 24) | (1 << 8) | (4), bhvGoomba),
		OBJECT(MODEL_BALJEET, -2050, 2390, 2094, 0, 1, 0, (0 << 24) | (1 << 8) | (5), bhvGoomba),
		OBJECT(MODEL_PETER, -2050, 2390, 1697, 0, 5, 0, (0 << 24) | (1 << 8) | (2), bhvGoomba),
		OBJECT(MODEL_GREEN_GOBLIN, -2050, 2390, 1332, 0, 1, 0, (0 << 24) | (1 << 8) | (6), bhvGoomba),
		OBJECT(MODEL_QUINCY, -2050, 2390, 935, 0, 4, 0, (0 << 24) | (1 << 8) | (1), bhvGoomba),
		OBJECT(MODEL_FREDDY, -2050, 2390, 590, 0, 4, 0, (0 << 24) | (1 << 8) | (3), bhvGoomba),
		OBJECT(MODEL_LOUIE, -16, 2591, 416, 0, -4, 0, (0 << 24) | (1 << 8) | (7), bhvGoomba),
		OBJECT(MODEL_PURP, -16, 2568, 892, -1, -179, 5, (0 << 24) | (1 << 8) | (8), bhvGoomba),
		OBJECT(BOMBOMB_KING_GATE, -2038, 2601, -127, 0, 92, 0, (0 << 24), bhvBombombKingGate),
		OBJECT(MODEL_KING_BOBOMB, 2258, 2450, -2798, 0, 0, 0, 0x00000000, bhvKingBobomb),
		OBJECT(MODEL_NONE, -778, 2772, -3578, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -822, 2616, -3496),
		OBJECT(MODEL_NONE, -1573, 2772, -3578, 0, 0, 0, 0x000A0000, bhvGroundClipDisable),
		TERRAIN(wdw_area_1_collision),
		MACRO_OBJECTS(wdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -822, 2616, -3496),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
