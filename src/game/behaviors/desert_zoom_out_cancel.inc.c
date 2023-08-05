static struct ObjectHitbox sDesertZoomOutCancelHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 950,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};


void bhv_desert_zoom_out_cancel_loop (void){
    obj_set_hitbox(o, &sDesertZoomOutCancelHitbox);
    if (obj_check_if_collided_with_object(o, gMarioObject) && gMarioState->statusForCamera->cameraEvent != CAM_EVENT_NONE){
        gMarioState->statusForCamera->cameraEvent = CAM_EVENT_NONE;
        reset_camera(gCurrentArea->camera);
    }
}