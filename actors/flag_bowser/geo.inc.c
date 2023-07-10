#include "src/game/envfx_snow.h"

const GeoLayout flag_bowser_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, flag_bowser_CheckpointFlag__CheckpointFlagMarkMat00_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, flag_bowser_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
