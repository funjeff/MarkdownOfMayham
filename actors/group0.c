#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "elevator_pole_collision/collision.inc.c"

#include "thwomp/model.inc.c"
#include "thwomp/collision.inc.c"
#include "bombomb_king_gate/model.inc.c"
#include "bombomb_king_gate/collision.inc.c"
#include "ice_cream/model.inc.c"

#include "king_bobomb/model.inc.c"
#include "king_bobomb/anims/data.inc.c"
#include "king_bobomb/anims/table.inc.c"
UNUSED static const u64 binid_0 = 0;

#include "toad/model.inc.c"
#include "toad/anims/data.inc.c"
#include "toad/anims/table.inc.c"
UNUSED static const u64 binid_1 = 1;
#include "toad_new/model.inc.c"
#include "baljeet/model.inc.c"
#include "peter/model.inc.c"
#include "ggoblin/model.inc.c"
#include "quincy/model.inc.c"
#include "louie/model.inc.c"
#include "purp/model.inc.c"
#include "freddy/model.inc.c"
#include "kirby/model.inc.c"