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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x02, 0x0A, WARP_CHECKPOINT),
		WARP_NODE(0x83, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOBOMB_BUDDY, 1362, 5158, -5084, 0, 0, 0, 0x00000000, bhvSpaghettiClerk),
		OBJECT(MODEL_BLUE_COIN, -34, 5131, -5507, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -34, 5142, -5351, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -61, 5144, -5436, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -45, 5147, -5761, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -54, 5157, -5962, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -18, 5082, -5629, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -30, 5137, -5212, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -74, 5139, -5762, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -58, 5154, -6192, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -12, 5101, -5031, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 151, 5109, -5551, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 150, 5120, -5395, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 124, 5123, -5481, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 139, 5125, -5806, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 131, 5135, -6006, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 167, 5060, -5673, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 155, 5116, -5256, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 111, 5118, -5806, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 127, 5133, -6237, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 173, 5080, -5076, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -183, 5140, -5471, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -184, 5152, -5315, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -210, 5154, -5400, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -195, 5156, -5726, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -203, 5167, -5926, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -167, 5091, -5593, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -179, 5147, -5176, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -223, 5149, -5726, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -207, 5164, -6157, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -161, 5111, -4996, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -396, 5147, -5421, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -397, 5158, -5265, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -424, 5161, -5350, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -408, 5163, -5675, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -417, 5173, -5876, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -381, 5098, -5543, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -392, 5154, -5126, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -437, 5156, -5676, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -421, 5171, -6107, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -375, 5118, -4946, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -546, 5112, -5484, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -547, 5124, -5328, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -573, 5126, -5413, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -558, 5129, -5739, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -566, 5139, -5939, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -530, 5063, -5606, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -542, 5119, -5189, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -586, 5121, -5739, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -570, 5136, -6170, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, -524, 5083, -5009, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 170, 5136, -5196, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 169, 5148, -5040, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 143, 5150, -5125, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 158, 5152, -5450, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 150, 5163, -5651, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 186, 5087, -5318, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 174, 5143, -4900, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 130, 5145, -5451, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 146, 5160, -5881, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 192, 5107, -4720, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 306, 5112, -5268, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 305, 5123, -5112, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 278, 5125, -5198, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 294, 5128, -5523, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 286, 5138, -5723, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 321, 5063, -5390, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 310, 5119, -4973, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 265, 5120, -5524, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 281, 5135, -5954, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 327, 5083, -4793, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 422, 5121, -5330, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 422, 5132, -5173, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 395, 5134, -5259, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 410, 5137, -5584, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 402, 5147, -5784, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 438, 5072, -5451, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 426, 5127, -5034, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 382, 5129, -5585, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 398, 5144, -6015, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_BLUE_COIN, 444, 5091, -4854, 0, 0, 0, 0x00000000, bhvBlueCoin),
		OBJECT(MODEL_THI_WARP_PIPE, 0, 5117, -4769, 0, 0, 0, 0x00010000, bhvWarpPipe),
		OBJECT(MODEL_NONE, 410, 5314, -4067, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 266, 5199, -4216),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x02, 0x01, WARP_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x83, LEVEL_ENDING, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3365, 5091, -3066, 0, 0, 0, (03 << 16), bhvRestartCheckpoint),
		OBJECT(MODEL_NONE, 1620, 5091, -1793, 0, 0, 0, (04 << 16), bhvRestartCheckpoint),
		OBJECT(MODEL_THI_WARP_PIPE, 3365, 5117, -7788, 0, 0, 0, (01 << 16), bhvWarpPipe),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 266, 5199, -4216),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
