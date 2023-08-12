#include "src/game/print.h"


void bhv_train_loop(void){
    if (o->zoomOutTimer == 40){
        o->oPosZ = o->oPosZ - 115;
    }

    // print_text_fmt_int(100,100,"%d",o->oPosZ);
    // print_text_fmt_int(190,100,"%d",gMarioState->pos[2]);

    // print_text(100,140,"TRAIN");
    // print_text(190,140,"MARIO");
    

     if (gMarioState->statusForCamera->cameraEvent != CAM_EVENT_TRAIN){
        gMarioState->statusForCamera->cameraEvent = CAM_EVENT_TRAIN;
        o->zoomOutTimer = 1;
        gMarioState->zoomStop = 0;
        set_mario_action(gMarioState,ACT_DO_NOTHING,0);
    }

    if (o->zoomOutTimer && o->zoomOutTimer != 40){
        o->zoomOutTimer = o->zoomOutTimer + 1;
        if (o->zoomOutTimer == 40){
            gMarioState->zoomStop = 1;
            set_mario_action(gMarioState,ACT_DASH_NO_CONTROL,0);
            gMarioState->forwardVel = 113;
            gMarioState->faceAngle [1] = 16340 * 2;
            gMarioState->dashTime = 1000; 
        }
    }
}