static struct ObjectHitbox sHudStarEnableHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 250,
    /* height:            */ 300,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};



void bhv_hud_star_enable_loop (void){
        obj_set_hitbox(o, &sHudStarEnableHitbox);
     if (obj_check_if_collided_with_object(o, gMarioObject)){
  	    gHudDisplay.flags = gHudDisplay.flags | HUD_DISPLAY_FLAG_STAR_COUNT;
	    obj_mark_for_deletion(o);
     }

}