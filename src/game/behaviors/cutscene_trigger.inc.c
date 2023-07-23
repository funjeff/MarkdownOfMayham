#include "libc/math.h"
#include "src/game/print.h"

/*
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */

void bhv_cutscene_trigger_init (void){

}

void bhv_cutscene_trigger_loop(void) {
	if (gMarioState->action != ACT_EMERGE_FROM_PIPE){
		set_mario_action(gMarioState,ACT_FIRST_CUTSCENE, 0);
		set_mario_animation(gMarioState, MARIO_ANIM_SLEEP_LYING);
	}
	obj_mark_for_deletion(o);

}
