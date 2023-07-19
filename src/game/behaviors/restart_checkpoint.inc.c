#include "src/game/print.h"

/*
 * luigiable_bomb.inc.c
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */
struct ObjectHitbox sRestartCheckpointHitbox = {
    /* interactType: */ 0,
    /* downOffset: */65,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */800,
    /* height: */ 250,
    /* hurtboxRadius: */ 100,
    /* hurtboxHeight: */ 100,
};

struct ObjectHitbox sRestartCheckpointFlagHitbox = {
    /* interactType: */ 0,
    /* downOffset: */65,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */20,
    /* height: */ 250,
    /* hurtboxRadius: */ 100,
    /* hurtboxHeight: */ 100,
};

void bhv_restart_checkpoint_init(void) {
    if (!GET_BPARAM1(o->oBehParams)){
        cur_obj_set_model(MODEL_FLAG_BOWSER);
        obj_set_hitbox(o, &sRestartCheckpointFlagHitbox);
    } else {
        obj_set_hitbox(o, &sRestartCheckpointHitbox);
    }
}

void bhv_restart_checkpoint_loop(void) {
	//print_text(100,100,"memes");
	if (obj_check_if_collided_with_object(o, gMarioObject) && !o->checkpointUsed) {

        o->checkpointUsed = 1;
		gWarpCheckpoint.courseNum = gCurrCourseNum;

		gWarpCheckpoint.levelID = gCurrLevelNum;

		gWarpCheckpoint.areaNum = gCurrAreaIndex;

    	gWarpCheckpoint.warpNode = GET_BPARAM2(o->oBehParams);

        if (!GET_BPARAM1(o->oBehParams)){
            cur_obj_set_model(MODEL_FLAG_MARIO);
            play_sound(SOUND_CHECKPOINT, gMarioObject->header.gfx.pos);
        }

	}
}
