static struct ObjectHitbox sDesertZoomOutHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 150,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};

void bhv_desert_zoom_out_loop (void){
    obj_set_hitbox(o, &sDesertZoomOutHitbox);
    if (obj_check_if_collided_with_object(o, gMarioObject) && gMarioState->statusForCamera->cameraEvent != CAM_EVENT_DESERT){
        gMarioState->statusForCamera->cameraEvent = CAM_EVENT_DESERT;
        o->zoomOutTimer = 1;
        gMarioState->zoomStop = 0;
    }

    if (o->zoomOutTimer && o->zoomOutTimer != 40){
        o->zoomOutTimer = o->zoomOutTimer + 1;
        if (o->zoomOutTimer == 40){
            gMarioState->zoomStop = 1; 
        }
    }

}