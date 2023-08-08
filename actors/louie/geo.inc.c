#include "src/game/envfx_snow.h"

const GeoLayout louie_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, louie_rdmobj00_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, louie_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
