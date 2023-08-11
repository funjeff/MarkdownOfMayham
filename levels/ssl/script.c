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
#include "levels/ssl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group5_yay0SegmentRomStart, _group5_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ssl_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ssl_geo_0005D8), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP, ssl_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL, ssl_geo_000734), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL, ssl_geo_000764), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR, ssl_geo_0007AC), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX, ssl_geo_000630), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ssl_area_1),
		WARP_NODE(0x0A, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_TTC, 0x01, 0x0A, WARP_CHECKPOINT),
		OBJECT(MODEL_BLUE_COIN, 0, -276, 3563, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 0, 967, 2864, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 8757, 1212, 13037, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 8757, 1212, 13900, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -1081, 113, 23179, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -2081, 113, 23179, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 5921, 676, 19076, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -3819, 2232, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5532, 2053, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4780, 2644, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5023, 1275, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -5023, 329, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -7540, 1637, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -7540, 831, 17235, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 5238, 1669, 16486, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 5538, 919, 16486, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 5702, 1276, 16486, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 6180, 2085, 16786, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 6180, 2085, 16186, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4294, 1026, 13709, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -4294, 1026, 13215, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -3819, 2232, 17135, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -3819, 2232, 17335, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 5721, 676, 19076, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_NONE, -8116, 2204, 1200, 0, 0, 0, (03 << 16), bhvRestartCheckpoint),
		OBJECT(MODEL_YELLOW_COIN, -9810, 2146, -16595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8120, 2216, -218, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8120, 2149, -1925, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7416, 1846, -6633, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7795, 1846, -5219, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1846, -9709, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1816, -13617, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7876, 1816, -16193, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -12666, 2418, -16595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -15241, 2418, -16595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -19806, 2418, -15509, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8120, 2009, -2796, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8120, 2216, -1079, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8127, 1846, -8629, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3934, 3219, -2472, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4234, 3219, -2472, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4534, 3219, -2472, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -15841, 2418, -17895, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -15841, 2418, -15295, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -14541, 2418, -17595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -14731, 3062, -3305, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -5726, 1846, -7260, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -6440, 1846, -3815, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -6720, 2025, -2254, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7025, 2299, -474, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -6480, 2299, 315, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4147, 2702, 108, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3506, 2914, -703, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3459, 3219, -2478, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -8050, 1846, -4317, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7133, 1846, -8587, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1846, -10837, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1816, -12819, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1816, -14295, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -7072, 1816, -14933, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -17337, 2418, -16595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -19309, 2418, -16163, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20115, 2418, -14649, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -20265, 2418, -12711, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -19616, 2418, -11064, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -18269, 2418, -10041, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -14541, 2418, -15595, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -14941, 2418, -18095, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -14941, 2418, -15095, 0, -90, 0, 0x00000000, bhvOneCoin),
		OBJECT(MODEL_SDOOR, -8364, 2205, 3853, 90, 90, 0, (31 << 24), bhvStarDoor),
		OBJECT(MODEL_SDOORR, -8364, 2205, 3698, 90, -90, 0, (31 << 24), bhvStarDoor),
		OBJECT(MODEL_ELEVATOR_POLE, -752, -715, 3105, 0, 90, 0, 0x00000000, bhvElevatorPole),
		OBJECT(MODEL_STAR, -8137, 2304, 1005, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -3200, 3201, -1572, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -13319, 2965, -3344, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -8120, 1930, -3521, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -7311, 1930, -7570, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -7072, 1900, -11984, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -7367, 1900, -15587, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -8864, 1900, -16595, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -13866, 2518, -16595, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -5726, 1923, -5483, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -9763, 1923, -8629, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -16489, 2518, -17095, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -16289, 2518, -16595, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -16489, 2518, -16095, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -15489, 2518, -14795, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -15489, 2518, -18395, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -11416, 2518, -16595, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -14816, 2959, -2643, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -18750, 2518, -16595, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -20429, 2518, -13738, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -20033, 2518, -11720, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -19068, 2518, -10616, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -17311, 2518, -9725, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -5222, 2445, 315, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -13339, 3421, -3344, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -13339, 2350, -3344, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -14096, 2350, -3344, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -7570, 1930, -5942, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -8637, 2304, 805, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_STAR, -7637, 2304, 805, 0, -90, 0, 0x00000000, bhvRealStar),
		OBJECT(MODEL_THI_WARP_PIPE, 453, 107, 19633, 0, 0, 0, (41 << 16), bhv1Up),
		OBJECT(MODEL_WOODEN_SIGNPOST, 6341, 2090, 16475, 0, -90, 0, (46 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1576, 115, 23153, -3, -178, 0, (43 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3673, 2245, 17226, -6, -94, 2, (48 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 8502, 1252, 13431, 0, 90, 0, (49 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -8120, 2202, 2730, 0, -90, 0, 0x00000000, bhvHudStarsEnable),
		OBJECT(MODEL_TOAD_NEW, -2147, -797, 3552, 90, -12, 0, (41 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, 1463, 119, 12880, 0, 0, 0, (50 << 16), bhvBobombBuddy),
		OBJECT(MODEL_WOODEN_SIGNPOST, -3951, 102, 13492, 0, 90, 0, (166 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -4314, 1028, 13470, 0, 90, 0, (167 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -527, -797, 3070, 0, 0, 0, (169 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -7704, 2264, 2308, 0, -159, 0, (170 << 16), bhvSignOnWall),
		OBJECT(MODEL_WOODEN_SIGNPOST, -14, 102, 13255, 0, 0, 0, (171 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -8613, 2205, 3775, 0, -90, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, 451, 206, 19292, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 451, 206, 19292),
		TERRAIN(ssl_area_1_collision),
		MACRO_OBJECTS(ssl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 451, 206, 19292),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
