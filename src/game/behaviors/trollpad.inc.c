

static struct ObjectHitbox sTrollpadHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 800,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};

void bhv_trollpad_loop (void){
     obj_set_hitbox(o, &sTrollpadHitbox);
	  

      if (o->trollPadTimer > 0 && o->trollPadTimer != 80){
        obj_set_angle(o,o->oFaceAnglePitch,o->oFaceAngleYaw - 200, o->oFaceAngleRoll);
        o->trollPadTimer = o->trollPadTimer + 1;
      }

      if (obj_check_if_collided_with_object(o, gMarioObject) && o->trollPadTimer == 0) {
        play_sound(SOUND_STONE_PUSH, gMarioState->marioObj->header.gfx.pos);
	 	set_mario_action(gMarioState,ACT_DO_NOTHING,0);
        set_mario_animation(gMarioState, MARIO_ANIM_IDLE_HEAD_CENTER);
        o->trollPadTimer = 1;
	  }
      if (obj_check_if_collided_with_object(o, gMarioObject) && o->trollPadTimer == 80 & gMarioState->action != ACT_DASHING) {
            set_mario_action(gMarioState,ACT_DASHING, 0);
            if ( gMarioState->forwardVel < 200){
                 gMarioState->forwardVel = 200;
             }
            gMarioState->dashTime = 100;
            gMarioState->faceAngle [1] = 16340 * 3;
            if (!gMarioState->onPad){
                gMarioState->onPad = 1;
                if (RAND(3)) {
                    play_sound(SOUND_DASH_PANNEL_2, gMarioState->marioObj->header.gfx.pos);
                } else {
                    play_sound(SOUND_DASH_PANNEL_1, gMarioState->marioObj->header.gfx.pos);
                }
            }  
      }
      
}
