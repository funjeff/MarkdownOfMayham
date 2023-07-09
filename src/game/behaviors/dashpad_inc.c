#include "src/game/print.h"



/*
 * dashpad.inc.c
 *
 *  Created on: july 8, 2023
 *      Author: Jeffrey
 */


void bhv_dashpad_loop (void){
	 if (obj_check_if_collided_with_object(o, gMarioObject) ) {
	 		
	 }
	 print_text(100,100,"bruh");

}

void bhv_dashpad_init (void){
	o->dashpadSpeed = GET_BPARAM1(o->oBehParams);
	obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw + (16340*GET_BPARAM2(o->oBehParams)), o->oFaceAngleRoll);
}