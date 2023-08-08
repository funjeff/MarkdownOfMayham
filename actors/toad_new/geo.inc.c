#include "src/game/envfx_snow.h"

const GeoLayout toad_new_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, toad_new_Toad_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, toad_new_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
