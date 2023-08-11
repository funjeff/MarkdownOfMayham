#include "src/game/print.h"


static struct ObjectHitbox sElevatorPoleButtonHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 40,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};

/*
 * elevator_pole.inc.c
 *
 *  Created on: july 26, 2023
 *      Author: Jeffrey
 */


void bhv_elevator_pole_loop (void){

	obj_set_hitbox(o, &sElevatorPoleButtonHitbox);

	if (determine_interaction(gMarioState, o) == 2 && gMarioObject->oPosX > o->oPosX - 30 && gMarioObject->oPosX < o->oPosX + 30 && gMarioObject->oPosZ > 3145 && gMarioObject->oPosZ < 3205 && gMarioState->action != ACT_BUTTON_CUTSCENE){
	 	set_mario_action(gMarioState, ACT_BUTTON_CUTSCENE, 0);
		gMarioState->actionTimer = 0;
	}

}