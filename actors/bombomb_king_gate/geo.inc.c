#include "src/game/envfx_snow.h"

const GeoLayout bombomb_king_gate_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bombomb_king_gate_Cube_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bombomb_king_gate_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
