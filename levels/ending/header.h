#ifndef ENDING_HEADER_H
#define ENDING_HEADER_H

#include "types.h"

// geo
extern const GeoLayout ending_geo_area_1[];
extern const GeoLayout ending_geo_area_2[];
extern const GeoLayout ending_geo_area_3[];
extern const GeoLayout ending_geo_area_4[];
extern const GeoLayout ending_geo_area_5[];

// leveldata
extern const Gfx dl_cake_end_screen1[];
extern const Gfx dl_cake_end_screen2[];
extern const Gfx dl_cake_end_screen3[];
extern const Gfx dl_cake_end_screen4[];
extern const Gfx dl_cake_end_screen5[];
#ifndef EU_CUSTOM_CAKE_FIX
extern const Gfx dl_cake_end_screen_eu_english[];
extern const Gfx dl_cake_end_screen_eu_french[];
extern const Gfx dl_cake_end_screen_eu_german[];
#else
extern const Gfx dl_cake_end_screen_eu_fix[];
#endif

// script
extern const LevelScript level_ending_entry[];
extern const LevelScript level_ending_entry2[];
extern const LevelScript level_ending_entry3[];
extern const LevelScript level_ending_entry4[];
extern const LevelScript level_ending_entry5[];

#endif
