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

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 31;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_3);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 30;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_4);

	deltaX = (int)(-1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_5);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 93;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_7);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_wf_dl_Dash_Left_001_mesh_layer_1_vtx_1();
	scroll_wf_dl_Dash_Left_005_mesh_layer_1_vtx_1();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_3();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_4();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_5();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_7();
}
