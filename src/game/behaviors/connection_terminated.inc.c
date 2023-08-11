
#include "src/game/hud.h"

int clipLength = 57;

void bhv_connection_terminated_loop(void) {
    


    if (o->oTimer == clipLength * 0){
        play_sound(SOUND_CONNECTION1, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 1){
        play_sound(SOUND_CONNECTION2, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 2){
        play_sound(SOUND_CONNECTION3, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 3){
        play_sound(SOUND_CONNECTION4, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 4){
        play_sound(SOUND_CONNECTION5, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 5){
        play_sound(SOUND_CONNECTION6, gMarioState->marioObj->header.gfx.cameraToObject);
    }
    
    if (o->oTimer == clipLength * 6){
        play_sound(SOUND_CONNECTION7, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 7){
        play_sound(SOUND_CONNECTION8, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 8){
        play_sound(SOUND_CONNECTION9, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 9){
        play_sound(SOUND_CONNECTION10, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 10){
        play_sound(SOUND_CONNECTION11, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 11){
        play_sound(SOUND_CONNECTION12, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 12){
        play_sound(SOUND_CONNECTION13, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 13){
        play_sound(SOUND_CONNECTION14, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 14){
        play_sound(SOUND_CONNECTION15, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 15){
        play_sound(SOUND_CONNECTION16, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 16){
        play_sound(SOUND_CONNECTION17, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 17){
        play_sound(SOUND_CONNECTION18, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 18){
        play_sound(SOUND_CONNECTION19, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 19){
        play_sound(SOUND_CONNECTION20, gMarioState->marioObj->header.gfx.cameraToObject);
    }
    
    if (o->oTimer == clipLength * 20){
        play_sound(SOUND_CONNECTION21, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 21){
        play_sound(SOUND_CONNECTION22, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 22){
        play_sound(SOUND_CONNECTION23, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 23){
        play_sound(SOUND_CONNECTION24, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 24){
        play_sound(SOUND_CONNECTION25, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 25){
        play_sound(SOUND_CONNECTION26, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 26){
        play_sound(SOUND_CONNECTION27, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 27){
        play_sound(SOUND_CONNECTION28, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 28){
        play_sound(SOUND_CONNECTION29, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 29){
        play_sound(SOUND_CONNECTION30, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 30){
        play_sound(SOUND_CONNECTION31, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 31){
        play_sound(SOUND_CONNECTION32, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 32){
        play_sound(SOUND_CONNECTION33, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 33){
        play_sound(SOUND_CONNECTION34, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 34){
        play_sound(SOUND_CONNECTION35, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 35){
        play_sound(SOUND_CONNECTION36, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oTimer == clipLength * 36){
        play_sound(SOUND_CONNECTION37, gMarioState->marioObj->header.gfx.cameraToObject);
    }
    
    if (o->oTimer == clipLength * 37){
         play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(15, SEQ_LEVEL_SNOW), 0);
         set_reaction_num(1);
        obj_mark_for_deletion(o);
    }
    
    //o->oTimer = o->oTimer + 1;
}
