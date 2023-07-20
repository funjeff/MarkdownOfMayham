
#define OK_END_ID    103
#define GOOD_END_ID  104
#define GREAT_END_ID 110
#define BEST_END_ID  109


enum ClerkMessageStates {
    CLERK_MESSAGE_OPAQUE,
    CLERK_MESSAGE_TALKING
};


void bhv_clerk_message_init(void) {
    //TODO change this to a contant ID for the
    o->oToadMessageDialogId = OK_END_ID;
    o->oToadMessageState = CLERK_MESSAGE_OPAQUE;
}

static void clerk_message_opaque(void) {
    o->oInteractionSubtype = INT_SUBTYPE_NPC;
        if (o->oInteractStatus & INT_STATUS_INTERACTED) {
            level_control_timer(TIMER_CONTROL_HIDE);
            if (gMarioState->numCoins >= 100){
                o->oToadMessageDialogId = GOOD_END_ID;
            }

            if (gMarioState->numCoins >= 200){
                o->oToadMessageDialogId = GREAT_END_ID;
            }

            if (gMarioState->numCoins >= 300){
                o->oToadMessageDialogId = BEST_END_ID;
            }
            

            o->oInteractStatus = INT_STATUS_NONE;
            o->oToadMessageState = CLERK_MESSAGE_TALKING;
        }
}

static void clerk_message_talking(void) {
    if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_DOWN,
        DIALOG_FLAG_TURN_TO_MARIO, CUTSCENE_DIALOG, o->oToadMessageDialogId)) {
        switch (o->oToadMessageDialogId) {
            case OK_END_ID:
                level_trigger_warp(gMarioState, WARP_OP_CREDITS_END4);
                break;
            case GOOD_END_ID:
                level_trigger_warp(gMarioState, WARP_OP_CREDITS_END3);
                break;
            case GREAT_END_ID:
                level_trigger_warp(gMarioState, WARP_OP_CREDITS_END5);
                break;
             case BEST_END_ID:
               level_trigger_warp(gMarioState, WARP_OP_CREDITS_END);
            break;
        }
        o->oToadMessageState = CLERK_MESSAGE_OPAQUE;
    }
}

void bhv_clerk_message_loop(void) {
    if (o->header.gfx.node.flags & GRAPH_RENDER_ACTIVE) {
        o->oInteractionSubtype = INT_STATUS_NONE;
        switch (o->oToadMessageState) {
            case CLERK_MESSAGE_OPAQUE:
                clerk_message_opaque();
                break;
            case CLERK_MESSAGE_TALKING:
                clerk_message_talking();
                break;
        }
    }
}