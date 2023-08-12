#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/area.h"
#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ending/header.h"

const LevelScript level_ending_entry[] = {
    /*0*/ INIT_LEVEL(),
    /*1*/ LOAD_LEVEL_DATA(ending),
    /*4*/ ALLOC_LEVEL_POOL(),

    /*5*/ AREA(/*index*/ 1, ending_geo_area_1),
    /*7*/ END_AREA(),

    /*8*/ FREE_LEVEL_POOL(),
    /*9*/ SLEEP(/*frames*/ 60),
    /*10*/ BLACKOUT(/*active*/ FALSE),
    /*11*/ LOAD_AREA(/*area*/ 1),
    /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
    /*14*/ SLEEP(/*frames*/ 70),
    /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound5),
    // L1:
    /*17*/ SLEEP(/*frames*/ 1),
    /*18*/ JUMP(level_ending_entry + 17), // goto L1 (loop sleep 1 forever)
};


 const LevelScript level_ending_entry2[] = {
     /*0*/ INIT_LEVEL(),
     /*1*/ LOAD_LEVEL_DATA(ending),
     /*4*/ ALLOC_LEVEL_POOL(),

     /*5*/ AREA(/*index*/ 1, ending_geo_area_2),
     /*7*/ END_AREA(),

     /*8*/ FREE_LEVEL_POOL(),
     /*9*/ SLEEP(/*frames*/ 60),
     /*10*/ BLACKOUT(/*active*/ FALSE),
     /*11*/ LOAD_AREA(/*area*/ 1),
     /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
     /*14*/ SLEEP(/*frames*/ 70),
     /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound2),
     /*17*/ SLEEP(/*frames*/ 90),
     /*18*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound22),
    // L1:
    /*20*/ SLEEP(/*frames*/ 1),
    /*21*/ JUMP(level_ending_entry + 17), // goto L1 (loop sleep 1 forever)
 };

 const LevelScript level_ending_entry3[] = {
     /*0*/ INIT_LEVEL(),
     /*1*/ LOAD_LEVEL_DATA(ending),
     /*4*/ ALLOC_LEVEL_POOL(),

     /*5*/ AREA(/*index*/ 1, ending_geo_area_3),
     /*7*/ END_AREA(),

     /*8*/ FREE_LEVEL_POOL(),
     /*9*/ SLEEP(/*frames*/ 60),
     /*10*/ BLACKOUT(/*active*/ FALSE),
     /*11*/ LOAD_AREA(/*area*/ 1),
     /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
     /*14*/ SLEEP(/*frames*/ 70),
     /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound3),
     // L1:
     /*17*/ SLEEP(/*frames*/ 1),
     /*18*/ JUMP(level_ending_entry3 + 17), // goto L1 (loop sleep 1 forever)
 };

 const LevelScript level_ending_entry4[] = {
     /*0*/ INIT_LEVEL(),
     /*1*/ LOAD_LEVEL_DATA(ending),
     /*4*/ ALLOC_LEVEL_POOL(),

     /*5*/ AREA(/*index*/ 1, ending_geo_area_4),
     /*7*/ END_AREA(),

     /*8*/ FREE_LEVEL_POOL(),
     /*9*/ SLEEP(/*frames*/ 60),
     /*10*/ BLACKOUT(/*active*/ FALSE),
     /*11*/ LOAD_AREA(/*area*/ 1),
     /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
     /*14*/ SLEEP(/*frames*/ 70),
     /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound4),
//     // L1:
     /*17*/ SLEEP(/*frames*/ 1),
     /*18*/ JUMP(level_ending_entry4 + 17), // goto L1 (loop sleep 1 forever)
 };

  const LevelScript level_ending_entry5[] = {
      /*0*/ INIT_LEVEL(),
      /*1*/ LOAD_LEVEL_DATA(ending),
      /*4*/ ALLOC_LEVEL_POOL(),

      /*5*/ AREA(/*index*/ 1, ending_geo_area_5),
      /*7*/ END_AREA(),

      /*8*/ FREE_LEVEL_POOL(),
      /*9*/ SLEEP(/*frames*/ 60),
      /*10*/ BLACKOUT(/*active*/ FALSE),
      /*11*/ LOAD_AREA(/*area*/ 1),
      /*12*/ TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 75, /*color*/ 0x00, 0x00, 0x00),
      /*14*/ SLEEP(/*frames*/ 70),
     /*15*/ CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound),
            SLEEP(/*frames*/ 70),
            CALL(/*arg*/ 0, /*func*/ lvl_play_the_end_screen_sound12),
    // L1:
    /*17*/ SLEEP(/*frames*/ 1),
    /*18*/ JUMP(level_ending_entry5 + 20), // goto L1 (loop sleep 1 forever)
  };
