#include "THISDUST.H"
#include "MAP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ NewProcessRoadMapLump(struct ROAD_MAP_LUMP_DATA *pRoadMapLumpData /*$s0*/, char *pLumpFile /*$s1*/)
 // line 237, offset 0x0005d7bc
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x0005D7BC
	/* end block 1 */
	// End offset: 0x0005D814
	// End Line: 243

	/* begin block 2 */
		// Start line: 2217
	/* end block 2 */
	// End Line: 2218

	/* begin block 3 */
		// Start line: 474
	/* end block 3 */
	// End Line: 475

void NewProcessRoadMapLump(ROAD_MAP_LUMP_DATA *pRoadMapLumpData, char *pLumpFile)
{
	UNIMPLEMENTED();
	/*
	Getlong((char *)pRoadMapLumpData, pLumpFile);
	Getlong((char *)&pRoadMapLumpData->height, pLumpFile + 4);
	pRoadMapLumpData->unitXMid = (pRoadMapLumpData->width + 1) * 0x200;
	pRoadMapLumpData->unitZMid = pRoadMapLumpData->height << 9;
	return;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessJunctionsLump(char *lump_file /*$a0*/, int lump_size /*$a1*/)
 // line 247, offset 0x0005d6cc
	/* begin block 1 */
		// Start line: 494
	/* end block 1 */
	// End Line: 495

	/* begin block 2 */
		// Start line: 1664
	/* end block 2 */
	// End Line: 1665

// [D]
void ProcessJunctionsLump(char *lump_file, int lump_size)
{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessRoadsLump(char *lump_file /*$a0*/, int lump_size /*$a1*/)
 // line 252, offset 0x0005d6c4
	/* begin block 1 */
		// Start line: 1668
	/* end block 1 */
	// End Line: 1669

	/* begin block 2 */
		// Start line: 504
	/* end block 2 */
	// End Line: 505

// [D]
void ProcessRoadsLump(char *lump_file, int lump_size)
{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessRoadBoundsLump(char *lump_file /*$a0*/, int lump_size /*$a1*/)
 // line 253, offset 0x0005d6d4
	/* begin block 1 */
		// Start line: 1675
	/* end block 1 */
	// End Line: 1676

// [D]
void ProcessRoadBoundsLump(char *lump_file, int lump_size)
{
	return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessJuncBoundsLump(char *lump_file /*$a0*/, int lump_size /*$a1*/)
 // line 254, offset 0x0005d6dc
	/* begin block 1 */
		// Start line: 1677
	/* end block 1 */
	// End Line: 1678

// [D]
void ProcessJuncBoundsLump(char *lump_file, int lump_size)
{
	return;
}



// decompiled code
// original method signature: 
// struct MODEL * /*$ra*/ FindModelPtrWithName(char *name /*$s4*/)
 // line 289, offset 0x0005d40c
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x0005D40C
		// Variables:
	// 		int dummy; // stack offset -32

		/* begin block 1.1 */
			// Start line: 290
			// Start offset: 0x0005D40C
			// Variables:
		// 		char *name; // $s4
		// 		int *num; // $s2

			/* begin block 1.1.1 */
				// Start line: 290
				// Start offset: 0x0005D40C
				// Variables:
			// 		int count; // $s1
			// 		char *temp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x0005D4A4
			// End Line: 290
		/* end block 1.1 */
		// End offset: 0x0005D4A4
		// End Line: 290
	/* end block 1 */
	// End offset: 0x0005D4C4
	// End Line: 293

	/* begin block 2 */
		// Start line: 1545
	/* end block 2 */
	// End Line: 1546

	/* begin block 3 */
		// Start line: 578
	/* end block 3 */
	// End Line: 579

MODEL * FindModelPtrWithName(char *name)
{
	UNIMPLEMENTED();
	return 0;
	/*
	char cVar1;
	int iVar2;
	int iVar3;
	char *__s1;
	int iVar4;

	iVar4 = 0;
	__s1 = modelname_buffer;
	if (0 < num_models_in_pack) {
		do {
			iVar2 = strcmp(__s1, name);
			iVar3 = iVar4 + 1;
			if (iVar2 == 0) {
				return modelpointers1536[iVar4];
			}
			do {
				cVar1 = *__s1;
				__s1 = __s1 + 1;
			} while (cVar1 != '\0');
			iVar4 = iVar3;
		} while (iVar3 < num_models_in_pack);
	}
	return (MODEL *)0x0;
	*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindModelIdxWithName(char *name /*$s3*/)
 // line 295, offset 0x0005d4c4
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x0005D4C4
		// Variables:
	// 		int i; // stack offset -32

		/* begin block 1.1 */
			// Start line: 296
			// Start offset: 0x0005D4C4
			// Variables:
		// 		char *name; // $s3
		// 		int *num; // $s2

			/* begin block 1.1.1 */
				// Start line: 296
				// Start offset: 0x0005D4C4
				// Variables:
			// 		int count; // $s1
			// 		char *temp; // $s0
			/* end block 1.1.1 */
			// End offset: 0x0005D540
			// End Line: 296
		/* end block 1.1 */
		// End offset: 0x0005D540
		// End Line: 296
	/* end block 1 */
	// End offset: 0x0005D560
	// End Line: 300

	/* begin block 2 */
		// Start line: 1554
	/* end block 2 */
	// End Line: 1555

	/* begin block 3 */
		// Start line: 1557
	/* end block 3 */
	// End Line: 1558

int FindModelIdxWithName(char *name)
{
	UNIMPLEMENTED();
	return 0;
	/*
	char cVar1;
	int iVar2;
	int iVar3;
	char *__s1;
	int iVar4;

	iVar4 = 0;
	__s1 = modelname_buffer;
	if (0 < num_models_in_pack) {
		do {
			iVar2 = strcmp(__s1, name);
			iVar3 = iVar4 + 1;
			if (iVar2 == 0) {
				return iVar4;
			}
			do {
				cVar1 = *__s1;
				__s1 = __s1 + 1;
			} while (cVar1 != '\0');
			iVar4 = iVar3;
		} while (iVar3 < num_models_in_pack);
	}
	return -1;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitCellData()
 // line 311, offset 0x0005d36c
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x0005D36C
		// Variables:
	// 		char *alloclist; // $a2
	// 		int loop; // $v1
	/* end block 1 */
	// End offset: 0x0005D40C
	// End Line: 360

	/* begin block 2 */
		// Start line: 622
	/* end block 2 */
	// End Line: 623

	/* begin block 3 */
		// Start line: 1465
	/* end block 3 */
	// End Line: 1466

	/* begin block 4 */
		// Start line: 1472
	/* end block 4 */
	// End Line: 1473

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitCellData(void)
{
	UNIMPLEMENTED();
	/*
	undefined2 *puVar1;
	int iVar2;

	iVar2 = 0xfff;
	puVar1 = (undefined2 *)(mallocptr + 0x1ffe);
	cell_ptrs = (ushort *)mallocptr;
	do {
		*puVar1 = 0xffff;
		iVar2 = iVar2 + -1;
		puVar1 = puVar1 + -1;
	} while (0 < iVar2);
	cell_objects = (PACKED_CELL_OBJECT *)(mallocptr + 0x2000);
	mallocptr = (char *)(&cell_objects[num_straddlers + cell_objects_add[4]].pos.vx +
		cell_slots_add[4]);
	if (((uint)mallocptr & 2) != 0) {
		mallocptr = (char *)((ushort *)mallocptr + 1);
	}
	sizeof_cell_object_computed_values = num_straddlers + cell_objects_add[4] + 7 >> 3;
	cells = (CELL_DATA *)(cell_objects + num_straddlers + cell_objects_add[4]);
	return;
	*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ newPositionVisible(struct VECTOR *pos /*$a0*/, char *pvs /*$a1*/, int ccx /*$a2*/, int ccz /*$a3*/)
 // line 378, offset 0x0005d61c
	/* begin block 1 */
		// Start line: 379
		// Start offset: 0x0005D61C
		// Variables:
	// 		int dx; // $a2
	// 		int dz; // $a0
	// 		int cellx; // $v1
	// 		int cellz; // $v0
	/* end block 1 */
	// End offset: 0x0005D6C4
	// End Line: 398

	/* begin block 2 */
		// Start line: 1770
	/* end block 2 */
	// End Line: 1771

	/* begin block 3 */
		// Start line: 756
	/* end block 3 */
	// End Line: 757

	/* begin block 4 */
		// Start line: 1773
	/* end block 4 */
	// End Line: 1774

int newPositionVisible(VECTOR *pos, char *pvs, int ccx, int ccz)
{
	UNIMPLEMENTED();
	return 0;
	/*
	int iVar1;
	int iVar2;

	iVar2 = pos->vx + units_across_halved;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x7ff;
	}
	iVar1 = pos->vz + units_down_halved;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 0x7ff;
	}
	ccx = (iVar2 >> 0xb) - ccx;
	ccz = (iVar1 >> 0xb) - ccz;
	iVar2 = ccx;
	if (ccx < 0) {
		iVar2 = -ccx;
	}
	if (iVar2 <= view_dist) {
		iVar2 = ccz;
		if (ccz < 0) {
			iVar2 = -ccz;
		}
		if (iVar2 <= view_dist) {
			return (uint)(pvs[ccx + 10 + (ccz + 10) * pvs_square] != '\0');
		}
	}
	return 0;*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ PositionVisible(struct VECTOR *pos /*$a0*/)
 // line 400, offset 0x0005d560
	/* begin block 1 */
		// Start line: 401
		// Start offset: 0x0005D560
		// Variables:
	// 		int dx; // $a1
	// 		int dz; // $a0
	// 		int cellx; // $v1
	// 		int cellz; // $v0
	/* end block 1 */
	// End offset: 0x0005D61C
	// End Line: 420

	/* begin block 2 */
		// Start line: 1666
	/* end block 2 */
	// End Line: 1667

	/* begin block 3 */
		// Start line: 1767
	/* end block 3 */
	// End Line: 1768

	/* begin block 4 */
		// Start line: 1770
	/* end block 4 */
	// End Line: 1771

int PositionVisible(VECTOR *pos)
{
	UNIMPLEMENTED();
	return 0;
	/*
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = pos->vx + units_across_halved;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x7ff;
	}
	iVar1 = pos->vz + units_down_halved;
	if (iVar1 < 0) {
		iVar1 = iVar1 + 0x7ff;
	}
	iVar3 = (iVar2 >> 0xb) - current_cell_x;
	iVar1 = (iVar1 >> 0xb) - current_cell_z;
	iVar2 = iVar3;
	if (iVar3 < 0) {
		iVar2 = -iVar3;
	}
	if (iVar2 <= view_dist) {
		iVar2 = iVar1;
		if (iVar1 < 0) {
			iVar2 = -iVar1;
		}
		if (iVar2 <= view_dist) {
			return (uint)(CurrentPVS[iVar3 + (iVar1 + 10) * pvs_square + 10] != '\0');
		}
	}
	return 0;
	*/
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckUnpackNewRegions()
 // line 438, offset 0x0005c824
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x0005C824
		// Variables:
	// 		struct AREA_LOAD_INFO regions_to_unpack[3]; // stack offset -104
	// 		int leftright_unpack; // $a1
	// 		int topbottom_unpack; // $a2
	// 		int num_regions_to_unpack; // $s5
	// 		int x; // $a2
	// 		int z; // $v1
	// 		int loop; // $s6
	// 		int barrel_region; // $s1
	// 		int sortcount; // $s4
	// 		int i; // $v1
	// 		int j; // $a2
	// 		struct SVECTOR sortregions[4]; // stack offset -80
	// 		unsigned short sortorder[4]; // stack offset -48
	// 		int force_load_boundary; // $a0

		/* begin block 1.1 */
			// Start line: 539
			// Start offset: 0x0005C9F4
			// Variables:
		// 		int region_to_unpack; // $s0
		// 		struct Spool *spoolptr; // $a1

			/* begin block 1.1.1 */
				// Start line: 559
				// Start offset: 0x0005CA74
			/* end block 1.1.1 */
			// End offset: 0x0005CB00
			// End Line: 579
		/* end block 1.1 */
		// End offset: 0x0005CB00
		// End Line: 580

		/* begin block 1.2 */
			// Start line: 584
			// Start offset: 0x0005CB28
		/* end block 1.2 */
		// End offset: 0x0005CB94
		// End Line: 594
	/* end block 1 */
	// End offset: 0x0005CC00
	// End Line: 598

	/* begin block 2 */
		// Start line: 876
	/* end block 2 */
	// End Line: 877

	/* begin block 3 */
		// Start line: 877
	/* end block 3 */
	// End Line: 878

	/* begin block 4 */
		// Start line: 878
	/* end block 4 */
	// End Line: 879

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CheckUnpackNewRegions(void)
{
	UNIMPLEMENTED();
	return 0;
	/*
	byte bVar1;
	ushort uVar2;
	bool bVar3;
	int iVar4;
	uint uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	ushort *puVar10;
	ushort *puVar11;
	int target_region;
	int iVar12;
	int local_68[4];
	undefined4 local_58;
	undefined4 local_54;
	short local_50[16];
	ushort local_30[4];

	iVar7 = 0;
	iVar9 = 0;
	iVar12 = 0;
	if (saved_leadcar_pos != 0) {
		return 0;
	}
	iVar6 = 0xd;
	if (lead_car == 0) {
		iVar6 = 0x12;
	}
	if (current_barrel_region_xcell < iVar6) {
		iVar4 = -1;
		if (region_x != 0) {
			iVar7 = 1;
		LAB_0005c8f8:
			iVar12 = 1;
			local_68[0] = iVar4;
			local_68[1] = 0;
		}
	}
	else {
		if (0x20 - iVar6 < current_barrel_region_xcell) {
			iVar8 = cells_across;
			if (cells_across < 0) {
				iVar8 = cells_across + 0x1f;
			}
			iVar4 = 1;
			if (region_x < iVar8 >> 5) {
				iVar7 = 2;
				goto LAB_0005c8f8;
			}
		}
	}
	if (current_barrel_region_zcell < iVar6) {
		if (region_z != 0) {
			iVar9 = 1;
			local_68[iVar12 * 2] = 0;
			iVar6 = -1;
		LAB_0005c978:
			local_68[iVar12 * 2 + 1] = iVar6;
			iVar12 = iVar12 + 1;
		}
	}
	else {
		if ((0x20 - iVar6 < current_barrel_region_zcell) && (region_z != 0)) {
			iVar9 = 2;
			local_68[iVar12 * 2] = 0;
			iVar6 = 1;
			goto LAB_0005c978;
		}
	}
	if (iVar12 == 2) {
		if (iVar9 == 1) {
			iVar12 = 3;
			if (iVar7 == 1) {
				local_58 = 0xffffffff;
				local_54 = 0xffffffff;
				goto LAB_0005c9dc;
			}
			local_58 = 1;
			local_54 = 0xffffffff;
		}
		else {
			if (iVar7 == 1) {
				local_58 = 0xffffffff;
			}
			else {
				local_58 = 1;
			}
			local_54 = 1;
		}
		iVar12 = 3;
	}
LAB_0005c9dc:
	iVar9 = 0;
	iVar7 = 0;
	if (iVar12 != 0) {
		iVar6 = 0;
		do {
			iVar4 = *(int *)((int)local_68 + iVar6 + 4);
			iVar8 = cells_across;
			if (cells_across < 0) {
				iVar8 = cells_across + 0x1f;
			}
			target_region =
				(region_x + *(int *)((int)local_68 + iVar6) & 1U) + (region_z + iVar4 & 1U) * 2;
			iVar6 = current_region + *(int *)((int)local_68 + iVar6) + iVar4 * (iVar8 >> 5);
			if ((iVar6 != regions_unpacked[target_region]) && (loading_region[target_region] == -1)) {
				ClearRegion(target_region);
				if (spoolinfo_offsets[iVar6] == 0xffff) {
					regions_unpacked[target_region] = iVar6;
				}
				else {
					uVar2 = spoolinfo_offsets[iVar6];
					if ((old_region == -1) && (bVar1 = (RegionSpoolInfo + uVar2)[4], bVar1 != 0xff)) {
						initarea = (uint)bVar1;
					}
					local_50[iVar7 * 4] = (short)iVar6;
					local_50[iVar7 * 4 + 1] = (short)target_region;
					local_50[iVar7 * 4 + 2] = *(short *)(RegionSpoolInfo + uVar2);
					local_30[iVar7] = (ushort)iVar7;
					iVar7 = iVar7 + 1;
				}
			}
			iVar9 = iVar9 + 1;
			iVar6 = iVar9 * 8;
		} while (iVar9 < iVar12);
	}
	if (0 < iVar7) {
		iVar12 = 0;
		iVar9 = 1;
		do {
			if (iVar9 < iVar7) {
				puVar11 = local_30 + iVar12;
				puVar10 = local_30 + iVar9;
				iVar6 = iVar7 - iVar9;
				do {
					uVar2 = *puVar11;
					if ((local_50 + 2)[(uint)*puVar10 * 4] < (local_50 + 2)[(uint)uVar2 * 4]) {
						*puVar11 = *puVar10;
						*puVar10 = uVar2;
					}
					iVar6 = iVar6 + -1;
					puVar10 = puVar10 + 1;
				} while (iVar6 != 0);
			}
			uVar5 = (uint)local_30[iVar12];
			UnpackRegion((int)local_50[uVar5 * 4], (int)local_50[uVar5 * 4 + 1]);
			bVar3 = iVar9 < iVar7;
			iVar12 = iVar9;
			iVar9 = iVar9 + 1;
		} while (bVar3);
	}
	return 1;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ ControlMap()
 // line 612, offset 0x0005cc00
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x0005CC00
		// Variables:
	// 		int x; // $a2
	// 		int z; // $a1

		/* begin block 1.1 */
			// Start line: 639
			// Start offset: 0x0005CCE4
		/* end block 1.1 */
		// End offset: 0x0005CCEC
		// End Line: 640

		/* begin block 1.2 */
			// Start line: 648
			// Start offset: 0x0005CD10
		/* end block 1.2 */
		// End offset: 0x0005CD20
		// End Line: 649
	/* end block 1 */
	// End offset: 0x0005CD80
	// End Line: 654

	/* begin block 2 */
		// Start line: 1306
	/* end block 2 */
	// End Line: 1307

	/* begin block 3 */
		// Start line: 1321
	/* end block 3 */
	// End Line: 1322

	/* begin block 4 */
		// Start line: 1322
	/* end block 4 */
	// End Line: 1323

	/* begin block 5 */
		// Start line: 1327
	/* end block 5 */
	// End Line: 1328

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ControlMap(void)
{
	UNIMPLEMENTED();
	/*
	bool bVar1;
	int region_to_unpack;

	current_cell_x = (player.spoolXZ)->vx + units_across_halved;
	if (current_cell_x < 0) {
		current_cell_x = current_cell_x + 0x7ff;
	}
	current_cell_z = (player.spoolXZ)->vz + units_down_halved;
	current_cell_x = current_cell_x >> 0xb;
	if (current_cell_z < 0) {
		current_cell_z = current_cell_z + 0x7ff;
	}
	current_cell_z = current_cell_z >> 0xb;
	region_x = current_cell_x;
	if (current_cell_x < 0) {
		region_x = current_cell_x + 0x1f;
	}
	region_x = region_x >> 5;
	region_z = current_cell_z;
	if (current_cell_z < 0) {
		region_z = current_cell_z + 0x1f;
	}
	region_z = region_z >> 5;
	old_region = current_region;
	region_to_unpack = cells_across;
	if (cells_across < 0) {
		region_to_unpack = cells_across + 0x1f;
	}
	current_barrel_region_xcell = current_cell_x + region_x * -0x20;
	current_barrel_region_zcell = current_cell_z + region_z * -0x20;
	region_to_unpack = region_x + region_z * (region_to_unpack >> 5);
	bVar1 = current_region == -1;
	current_region = region_to_unpack;
	if (bVar1) {
		UnpackRegion(region_to_unpack, region_x & 1U | (region_z & 1U) << 1);
	}
	CheckUnpackNewRegions();
	if ((old_region == current_region) || (old_region == -1)) {
		CheckLoadAreaData(current_barrel_region_xcell, current_barrel_region_zcell);
	}
	current_cell_x = camera_position.vx + units_across_halved;
	if (current_cell_x < 0) {
		current_cell_x = current_cell_x + 0x7ff;
	}
	current_cell_x = current_cell_x >> 0xb;
	current_cell_z = camera_position.vz + units_down_halved;
	if (current_cell_z < 0) {
		current_cell_z = current_cell_z + 0x7ff;
	}
	current_cell_z = current_cell_z >> 0xb;
	StartSpooling();
	return;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitMap()
 // line 677, offset 0x0005cd80
	/* begin block 1 */
		// Start line: 679
		// Start offset: 0x0005CD80
		// Variables:
	// 		int i; // $s0
	// 		int tpage; // $v0
	// 		char result[8]; // stack offset -24

		/* begin block 1.1 */
			// Start line: 707
			// Start offset: 0x0005CE30

			/* begin block 1.1.1 */
				// Start line: 716
				// Start offset: 0x0005CE88
				// Variables:
			// 		int region; // $a3
			// 		int barrel_region; // $a1
			// 		struct Spool *spoolptr; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 726
					// Start offset: 0x0005CEF4
				/* end block 1.1.1.1 */
				// End offset: 0x0005CF20
				// End Line: 732
			/* end block 1.1.1 */
			// End offset: 0x0005CF20
			// End Line: 733
		/* end block 1.1 */
		// End offset: 0x0005CF90
		// End Line: 742

		/* begin block 1.2 */
			// Start line: 678
			// Start offset: 0x0005CF90
		/* end block 1.2 */
		// End offset: 0x0005CFA8
		// End Line: 678
	/* end block 1 */
	// End offset: 0x0005CFA8
	// End Line: 744

	/* begin block 2 */
		// Start line: 1451
	/* end block 2 */
	// End Line: 1452

	/* begin block 3 */
		// Start line: 1475
	/* end block 3 */
	// End Line: 1476

	/* begin block 4 */
		// Start line: 1476
	/* end block 4 */
	// End Line: 1477

	/* begin block 5 */
		// Start line: 1484
	/* end block 5 */
	// End Line: 1485

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitMap(void)
{
	UNIMPLEMENTED();
	/*
	int iVar1;
	byte *pbVar2;
	int region_to_unpack;
	int iVar3;
	int *piVar4;

	initarea = -1;
	LoadedArea = -1;
	current_region = -1;
	if (slotsused < 0x13) {
		pbVar2 = &tpageslots + slotsused;
		iVar3 = slotsused;
		do {
			if (*pbVar2 != 0xff) {
				tpageloaded[*pbVar2] = '\0';
			}
			*pbVar2 = 0xff;
			iVar3 = iVar3 + 1;
			pbVar2 = pbVar2 + 1;
		} while (iVar3 < 0x13);
	}
	if (doSpooling == 0) {
		old_region = -1;
		if (multiplayerregions[1] == -1) {
			multiplayerregions[1] = multiplayerregions[0] + 1;
			iVar3 = cells_across;
			if (cells_across < 0) {
				iVar3 = cells_across + 0x1f;
			}
			multiplayerregions[2] = multiplayerregions[0] - (iVar3 >> 5);
			multiplayerregions[3] = multiplayerregions[2] + 1;
		}
		piVar4 = multiplayerregions;
		iVar3 = 3;
		do {
			region_to_unpack = *piVar4;
			iVar1 = cells_across;
			if (cells_across < 0) {
				iVar1 = cells_across + 0x1f;
			}
			iVar1 = iVar1 >> 5;
			if (iVar1 == 0) {
				trap(7);
			}
			if (iVar1 == 0) {
				trap(7);
			}
			if (spoolinfo_offsets[region_to_unpack] != 0xffff) {
				if (RegionSpoolInfo[(uint)spoolinfo_offsets[region_to_unpack] + 8] != 0xff) {
					initarea = (uint)(byte)RegionSpoolInfo[(uint)spoolinfo_offsets[region_to_unpack] + 8];
				}
				UnpackRegion(region_to_unpack,
					(region_to_unpack % iVar1 & 1U) + (region_to_unpack / iVar1 & 1U) * 2);
			}
			iVar3 = iVar3 + -1;
			piVar4 = piVar4 + 1;
		} while (-1 < iVar3);
		LoadInAreaTSets(initarea);
		LoadInAreaModels(initarea);
		current_cell_x = camera_position.vx + units_across_halved;
		if (current_cell_x < 0) {
			current_cell_x = current_cell_x + 0x7ff;
		}
		current_cell_x = current_cell_x >> 0xb;
		current_cell_z = camera_position.vz + units_down_halved;
		if (current_cell_z < 0) {
			current_cell_z = current_cell_z + 0x7ff;
		}
		current_cell_z = current_cell_z >> 0xb;
		StartSpooling();
	}
	else {
		regions_unpacked[0] = -1;
		regions_unpacked[1] = -1;
		regions_unpacked[2] = -1;
		regions_unpacked[3] = -1;
		ControlMap();
	}
	return;*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetVisSetAtPosition(struct VECTOR *pos /*$a0*/, char *tgt /*$t3*/, int *ccx /*$a1*/, int *ccz /*$a3*/)
 // line 756, offset 0x0005d6e4
	/* begin block 1 */
		// Start line: 757
		// Start offset: 0x0005D6E4
		// Variables:
	// 		int x; // $t2
	// 		int z; // $t1
	// 		int cx; // $t0
	// 		int cz; // $a2
	// 		int rx; // $a3
	// 		int rz; // $a0

		/* begin block 1.1 */
			// Start line: 767
			// Start offset: 0x0005D76C
			// Variables:
		// 		int barrel_region_x; // $v0
		// 		int barrel_region_z; // $a0
		/* end block 1.1 */
		// End offset: 0x0005D7BC
		// End Line: 778
	/* end block 1 */
	// End offset: 0x0005D7BC
	// End Line: 779

	/* begin block 2 */
		// Start line: 2681
	/* end block 2 */
	// End Line: 2682

	/* begin block 3 */
		// Start line: 2685
	/* end block 3 */
	// End Line: 2686

void GetVisSetAtPosition(VECTOR *pos, char *tgt, int *ccx, int *ccz)
{
	UNIMPLEMENTED();
	/*
	int iVar1;
	int iVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;

	iVar5 = pos->vx + units_across_halved;
	if (iVar5 < 0) {
		iVar5 = iVar5 + 0x7ff;
	}
	iVar2 = pos->vz + units_down_halved;
	iVar5 = iVar5 >> 0xb;
	if (iVar2 < 0) {
		iVar2 = iVar2 + 0x7ff;
	}
	iVar2 = iVar2 >> 0xb;
	*ccx = iVar5;
	*ccz = iVar2;
	iVar1 = iVar5;
	if (iVar5 < 0) {
		iVar1 = iVar5 + 0x1f;
	}
	uVar4 = iVar1 >> 5;
	iVar1 = iVar2;
	if (iVar2 < 0) {
		iVar1 = iVar2 + 0x1f;
	}
	uVar3 = iVar1 >> 5;
	iVar1 = cells_across;
	if (cells_across < 0) {
		iVar1 = cells_across + 0x1f;
	}
	GetPVSRegionCell2(uVar4 & 1 | (uVar3 & 1) << 1, uVar4 + uVar3 * (iVar1 >> 5),
		(iVar2 + uVar3 * -0x20) * 0x20 + iVar5 + uVar4 * -0x20, tgt);
	return;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ PVSDecode(char *output /*$s2*/, char *celldata /*$s3*/, unsigned short sz /*$s0*/, int havanaCorruptCellBodge /*$s4*/)
 // line 824, offset 0x0005cfa8
	/* begin block 1 */
		// Start line: 825
		// Start offset: 0x0005CFA8
		// Variables:
	// 		char *decodeBuf; // $s1

		/* begin block 1.1 */
			// Start line: 825
			// Start offset: 0x0005CFA8
			// Variables:
		// 		int pixelIndex; // $t0
		// 		int i; // $a0
		// 		int ni; // $a3
			// Labels:
			//		0x000008EC	spod

			/* begin block 1.1.1 */
				// Start line: 835
				// Start offset: 0x0005CFF4
			/* end block 1.1.1 */
			// End offset: 0x0005CFF4
			// End Line: 835

			/* begin block 1.1.2 */
				// Start line: 842
				// Start offset: 0x0005D03C
				// Variables:
			// 		int symIndex; // $a2
			// 		int sym; // $a0

				/* begin block 1.1.2.1 */
					// Start line: 825
					// Start offset: 0x0005D0A8
					// Variables:
				// 		unsigned char *pt; // $v0
				/* end block 1.1.2.1 */
				// End offset: 0x0005D0A8
				// End Line: 825

				/* begin block 1.1.2.2 */
					// Start line: 825
					// Start offset: 0x0005D0BC
					// Variables:
				// 		unsigned char *pt; // $v0
				/* end block 1.1.2.2 */
				// End offset: 0x0005D0BC
				// End Line: 825
			/* end block 1.1.2 */
			// End offset: 0x0005D104
			// End Line: 869
		/* end block 1.1 */
		// End offset: 0x0005D110
		// End Line: 872

		/* begin block 1.2 */
			// Start line: 873
			// Start offset: 0x0005D110
			// Variables:
		// 		int i; // $a2
		// 		int j; // $v1
		// 		int sz; // $a3
		// 		char *op; // $a1
		/* end block 1.2 */
		// End offset: 0x0005D1E4
		// End Line: 904

		/* begin block 1.3 */
			// Start line: 906
			// Start offset: 0x0005D1E4
			// Variables:
		// 		int i; // $v1
		/* end block 1.3 */
		// End offset: 0x0005D224
		// End Line: 911
	/* end block 1 */
	// End offset: 0x0005D224
	// End Line: 913

	/* begin block 2 */
		// Start line: 1725
	/* end block 2 */
	// End Line: 1726

	/* begin block 3 */
		// Start line: 1806
	/* end block 3 */
	// End Line: 1807

void PVSDecode(char *output, char *celldata, ushort sz, int havanaCorruptCellBodge)
{
	UNIMPLEMENTED();
	/*
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	char *pcVar4;
	byte *pbVar5;
	uint uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined4 *puVar11;

	puVar11 = &DAT_1f800000;
	ClearMem((char *)&DAT_1f800000, pvs_square_sq);
	iVar3 = 0;
	if (sz != 0) {
		pcVar4 = nybblearray;
		do {
			pbVar5 = (byte *)(celldata + iVar3);
			iVar3 = iVar3 + 1;
			*(ushort *)pcVar4 = CONCAT11(*pbVar5, *pbVar5 >> 4) & 0xf0f;
			pcVar4 = (char *)((ushort *)pcVar4 + 1);
		} while (iVar3 < (int)(uint)sz);
	}
	iVar10 = ((uint)sz & 0x7fff) << 1;
	iVar3 = 0;
	if ((sz & 0x7fff) != 0) {
		pcVar4 = nybblearray;
		iVar9 = 0;
		do {
			bVar1 = *pcVar4;
			iVar8 = iVar9 + 1;
			if (bVar1 < 0xc) {
				iVar9 = (uint)bVar1 * 2;
			LAB_0005d0c8:
				uVar6 = (uint)CONCAT11(PVSEncodeTable[iVar9], (PVSEncodeTable + iVar9)[1]);
			}
			else {
				if (iVar8 == iVar10) break;
				uVar6 = ((uint)bVar1 & 3) * 0x10 + (uint)(byte)nybblearray[iVar9 + 1];
				iVar8 = iVar9 + 2;
				if (uVar6 < 0x3c) {
					iVar9 = uVar6 * 2 + 0x18;
					goto LAB_0005d0c8;
				}
				iVar8 = iVar9 + 4;
				uVar6 = ((uVar6 & 3) * 0x10 + (uint)(byte)nybblearray[iVar9 + 2]) * 0x10 +
					(uint)(byte)nybblearray[iVar9 + 3];
			}
			iVar9 = iVar3 + ((int)uVar6 >> 1);
			*(undefined *)(iVar9 + 0x1f800000) = 1;
			iVar3 = iVar9 + 1;
			if ((uVar6 & 1) != 0) {
				*(undefined *)((int)&DAT_1f800000 + iVar9 + 1) = 1;
				iVar3 = iVar9 + 2;
			}
			pcVar4 = nybblearray + iVar8;
			iVar9 = iVar8;
		} while (iVar8 < iVar10);
	}
	iVar3 = pvs_square;
	if (havanaCorruptCellBodge == 0) {
		*(byte *)(pvs_square_sq + 0x1f7fffff) = *(byte *)(pvs_square_sq + 0x1f7fffff) ^ 1;
	}
	iVar8 = iVar3 + -2;
	iVar9 = iVar3 + -1;
	pbVar5 = (byte *)(iVar8 * iVar3 + iVar3 + 0x1f7fffff);
	iVar10 = iVar8;
	while (-1 < iVar10) {
		iVar10 = iVar10 + -1;
		iVar7 = iVar3;
		if (0 < iVar3) {
			do {
				iVar7 = iVar7 + -1;
				*pbVar5 = *pbVar5 ^ pbVar5[iVar3];
				pbVar5 = pbVar5 + -1;
			} while (iVar7 != 0);
		}
	}
	pbVar5 = (byte *)(iVar9 * iVar3 + iVar3 + 0x1f7ffffe);
	while (-1 < iVar9) {
		iVar9 = iVar9 + -1;
		iVar3 = iVar8;
		while (-1 < iVar3) {
			iVar3 = iVar3 + -1;
			*pbVar5 = *pbVar5 ^ pbVar5[1];
			pbVar5 = pbVar5 + -1;
		}
		pbVar5 = pbVar5 + -1;
	}
	iVar3 = 0x6e;
	do {
		uVar2 = *puVar11;
		puVar11 = puVar11 + 1;
		iVar3 = iVar3 + -1;
		*(undefined4 *)output = uVar2;
		output = (char *)((undefined4 *)output + 1);
	} while (iVar3 != -1);
	return;
	*/
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPVSRegionCell2(int source_region /*$a0*/, int region /*$a1*/, int cell /*$t2*/, char *output /*$a3*/)
 // line 928, offset 0x0005d224
	/* begin block 1 */
		// Start line: 929
		// Start offset: 0x0005D224
		// Variables:
	// 		char *bp; // $a2
	// 		char *tbp; // $a1
	// 		int j; // $v1
	// 		unsigned short length; // $t0

		/* begin block 1.1 */
			// Start line: 945
			// Start offset: 0x0005D29C
			// Variables:
		// 		unsigned char *pt; // $a0
		/* end block 1.1 */
		// End offset: 0x0005D29C
		// End Line: 945

		/* begin block 1.2 */
			// Start line: 945
			// Start offset: 0x0005D29C
		/* end block 1.2 */
		// End offset: 0x0005D29C
		// End Line: 945

		/* begin block 1.3 */
			// Start line: 929
			// Start offset: 0x0005D32C
			// Variables:
		// 		char *output; // $a0

			/* begin block 1.3.1 */
				// Start line: 929
				// Start offset: 0x0005D32C
				// Variables:
			// 		int k; // $v1
			/* end block 1.3.1 */
			// End offset: 0x0005D35C
			// End Line: 929
		/* end block 1.3 */
		// End offset: 0x0005D35C
		// End Line: 929
	/* end block 1 */
	// End offset: 0x0005D35C
	// End Line: 963

	/* begin block 2 */
		// Start line: 2027
	/* end block 2 */
	// End Line: 2028

	/* begin block 3 */
		// Start line: 2029
	/* end block 3 */
	// End Line: 2030

	/* begin block 4 */
		// Start line: 2045
	/* end block 4 */
	// End Line: 2046

	/* begin block 5 */
		// Start line: 2054
	/* end block 5 */
	// End Line: 2055

void GetPVSRegionCell2(int source_region, int region, int cell, char *output)
{
	UNIMPLEMENTED();
	/*
	int iVar1;
	uint havanaCorruptCellBodge;
	char *pcVar2;
	char *pcVar3;
	uint uVar4;

	if ((regions_unpacked[source_region] == region) && (loading_region[source_region] == -1)) {
		pcVar3 = PVS_Buffers4[source_region];
		PVSEncodeTable = (uchar *)(pcVar3 + 0x802);
		pcVar2 = pcVar3 + cell * 2;
		uVar4 = (uint)CONCAT11(pcVar2[2], pcVar2[3]) - (uint)CONCAT11(*pcVar2, pcVar2[1]) & 0xffff;
		if (uVar4 == 0) {
			iVar1 = 0;
			if (0 < pvs_square_sq) {
				do {
					*output = '\x01';
					iVar1 = iVar1 + 1;
					output = output + 1;
				} while (iVar1 < pvs_square_sq);
			}
		}
		else {
			havanaCorruptCellBodge = 0;
			if ((regions_unpacked[source_region] == 0x9e) && (cell == 0xa8)) {
				havanaCorruptCellBodge = (uint)(GameLevel == 1);
			}
			PVSDecode(output, pcVar3 + (uint)CONCAT11(*pcVar2, pcVar2[1]), (ushort)uVar4,
				havanaCorruptCellBodge);
		}
	}
	else {
		iVar1 = 0;
		if (0 < pvs_square_sq) {
			do {
				*output = '\0';
				iVar1 = iVar1 + 1;
				output = output + 1;
			} while (iVar1 < pvs_square_sq);
		}
	}
	return;
	*/
}




