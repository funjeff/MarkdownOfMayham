void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 12;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_2);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_3);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_5);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_10() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_10);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_11() {
	int i = 0;
	int count = 20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_11);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 32;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_12);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 32;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_mesh_layer_1_vtx_13);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_003_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_003_mesh_layer_1_vtx_3);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_004_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_004_mesh_layer_1_vtx_3);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_005_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_005_mesh_layer_1_vtx_3);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_006_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_006_mesh_layer_1_vtx_3);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_007_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_007_mesh_layer_1_vtx_3);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_010_mesh_layer_1_vtx_2);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 8;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_010_mesh_layer_1_vtx_3);

	deltaY = (int)(3.130000114440918 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_010_mesh_layer_1_vtx_4);

	deltaY = (int)(1.13100004196167 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 5;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_010_mesh_layer_1_vtx_5);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 5;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_010_mesh_layer_1_vtx_6);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_016_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_016_mesh_layer_1_vtx_3);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl_dl_Geometry1_017_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 4;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Geometry1_017_mesh_layer_1_vtx_3);

	deltaY = (int)(1.312999963760376 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl() {
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_2();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_5();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_10();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_11();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_12();
	scroll_ssl_dl_Geometry1_mesh_layer_1_vtx_13();
	scroll_ssl_dl_Geometry1_003_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_004_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_005_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_006_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_007_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_2();
	scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_4();
	scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_5();
	scroll_ssl_dl_Geometry1_010_mesh_layer_1_vtx_6();
	scroll_ssl_dl_Geometry1_016_mesh_layer_1_vtx_3();
	scroll_ssl_dl_Geometry1_017_mesh_layer_1_vtx_3();
}
