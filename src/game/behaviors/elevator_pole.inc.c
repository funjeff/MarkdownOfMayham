#include "src/game/print.h"



/*
 * elevator_pole.inc.c
 *
 *  Created on: july 26, 2023
 *      Author: Jeffrey
 */


void bhv_elevator_pole_loop (void){
	if (determine_interaction(gMarioState, o) == 2 && gMarioState->action != ACT_BUTTON_CUTSCENE){
	 	set_mario_action(gMarioState, ACT_BUTTON_CUTSCENE, 0);
		gMarioState->actionTimer = 0;
	}

}