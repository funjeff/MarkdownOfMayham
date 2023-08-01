void bhv_bombomb_king_gate_loop (void){
    uintptr_t *behaviorAddr = segmented_to_virtual(bhvKingBobomb);

	  struct ObjectNode *listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

	  struct Object *king = (struct Object *) listHead->next;

	   while (king != (struct Object *) listHead) {
	  	 if (king->behavior == behaviorAddr) {
	  		 break;
	  	 }
	  	 king = (struct Object *) king->header.next;
	   }

       if (king->oAction == KING_BOBOMB_ACT_STOP_MUSIC){
            play_sound(SOUND_GENERAL_BOWSER_BOMB_EXPLOSION, o->header.gfx.cameraToObject);
			struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
			explosion->oGraphYOffset += 100.0f;
            obj_mark_for_deletion(o);
       }

}