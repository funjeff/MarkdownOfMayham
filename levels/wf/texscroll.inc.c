void scroll_wf_dl_DashPlatform_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DashPlatform_mesh_layer_1_vtx_3);

	deltaY = (int)(1.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DashPlatform_001_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DashPlatform_001_mesh_layer_1_vtx_3);

	deltaY = (int)(1.5 * 0x20) % height;

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
	int count = 32;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_3);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 46;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_4);

	deltaY = (int)(-0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
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

void scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_mesh_layer_1_vtx_6);

	deltaY = (int)(1.1299999952316284 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 11;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_2);

	deltaX = (int)(-0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_3);

	deltaX = (int)(-0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_4);

	deltaX = (int)(-0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 16;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_5);

	deltaX = (int)(-0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 102;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_7);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 124;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_8);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_9() {
	int i = 0;
	int count = 75;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_9);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_10() {
	int i = 0;
	int count = 96;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_10);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_11() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_GeometryLower_001_mesh_layer_1_vtx_11);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_wf_dl_DashPlatform_mesh_layer_1_vtx_3();
	scroll_wf_dl_DashPlatform_001_mesh_layer_1_vtx_3();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_3();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_4();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_5();
	scroll_wf_dl_GeometryLower_mesh_layer_1_vtx_6();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_2();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_3();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_4();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_5();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_7();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_8();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_9();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_10();
	scroll_wf_dl_GeometryLower_001_mesh_layer_1_vtx_11();
}
