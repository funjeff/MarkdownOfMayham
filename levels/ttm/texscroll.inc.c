void scroll_ttm_dl_Cube_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_Cube_002_mesh_layer_1_vtx_0);

	deltaY = (int)(3.1299996376037598 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_Cube_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_Cube_003_mesh_layer_1_vtx_0);

	deltaY = (int)(3.0399999618530273 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_Cube_004_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_Cube_004_mesh_layer_1_vtx_0);

	deltaY = (int)(3.0399999618530273 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_Cube_005_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_Cube_005_mesh_layer_1_vtx_0);

	deltaY = (int)(3.0399999618530273 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm() {
	scroll_ttm_dl_Cube_002_mesh_layer_1_vtx_0();
	scroll_ttm_dl_Cube_003_mesh_layer_1_vtx_0();
	scroll_ttm_dl_Cube_004_mesh_layer_1_vtx_0();
	scroll_ttm_dl_Cube_005_mesh_layer_1_vtx_0();
}
