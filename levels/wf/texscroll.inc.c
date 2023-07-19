void scroll_wf_dl_Dash_E_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_E_mesh_layer_1_vtx_0);

	deltaY = (int)(3.1299996376037598 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_001_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_001_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_002_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_002_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_003_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_003_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_004_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_004_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_005_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_005_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Left_006_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Left_006_mesh_layer_1_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Dash_Right_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Dash_Right_mesh_layer_1_vtx_1);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_wf_dl_Dash_E_mesh_layer_1_vtx_0();
	scroll_wf_dl_Dash_Left_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_001_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_002_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_003_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_004_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_005_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_006_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Right_mesh_layer_1_vtx_1();
}