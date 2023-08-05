static struct ObjectHitbox sIceCreamHitbox = {
    /* interactType:      */ 0,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 60,
};

void bhv_yum_loop(void){
    obj_set_hitbox(o, &sIceCreamHitbox);
    if (obj_check_if_collided_with_object(o, gMarioObject) && o->header.gfx.node.flags & GRAPH_RENDER_ACTIVE){
        play_sound(SOUND_ICE_CHOMP,gMarioObject->header.gfx.cameraToObject);
       o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
    }

    if (gMarioState->respawnIceCream){
        o->header.gfx.node.flags = o->header.gfx.node.flags | GRAPH_RENDER_ACTIVE;
        gMarioState->respawnIceCream = 0;
    }
}