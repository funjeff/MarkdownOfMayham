const Collision bob_area_2_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(12),
	COL_VERTEX(4692, 5082, -9126),
	COL_VERTEX(-3505, 5082, -9126),
	COL_VERTEX(-3505, 5082, -928),
	COL_VERTEX(4692, 5082, -928),
	COL_VERTEX(4692, 4949, -928),
	COL_VERTEX(-3505, 4949, -928),
	COL_VERTEX(-3505, 4949, -9126),
	COL_VERTEX(4692, 4949, -9126),
	COL_VERTEX(-5950, 723, 1902),
	COL_VERTEX(5833, 723, 1902),
	COL_VERTEX(5833, 723, -9881),
	COL_VERTEX(-5950, 723, -9881),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 3, 2),
	COL_TRI(4, 2, 5),
	COL_TRI(5, 2, 1),
	COL_TRI(5, 1, 6),
	COL_TRI(6, 7, 4),
	COL_TRI(6, 4, 5),
	COL_TRI(7, 0, 3),
	COL_TRI(7, 3, 4),
	COL_TRI(6, 1, 0),
	COL_TRI(6, 0, 7),
	COL_TRI_INIT(SURFACE_DEATH_PLANE, 2),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI_STOP(),
	COL_END()
};
