/*
 *
 *  Created on: Aug 10, 2022
 *      Author: 12242
 */

void bhv_ground_clip_disable_loop(void) {
	gMarioState->groundClipDisabled = 1;
	obj_mark_for_deletion(o);

}