
/* WARNING: Removing unreachable block (ram,0x005ca65d) */
/* WARNING: Removing unreachable block (ram,0x005ca5e1) */
/* WARNING: Removing unreachable block (ram,0x005ca7dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c9fb0(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int **ppiVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int **ppiVar14;
  float fVar15;
  float local_134;
  float local_130;
  float *local_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int *piStack_118;
  float fStack_114;
  float fStack_110;
  int *piStack_10c;
  float fStack_108;
  float fStack_104;
  int *piStack_100;
  float local_fc;
  float local_f8;
  int *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float *pfStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int *piStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int *local_94;
  float *pfStack_90;
  float fStack_8c;
  float fStack_88;
  float *pfStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  int iStack_1c;
  
  if ((((param_3 == 0) || (puVar1 = (uint *)(param_3 + 0x3c), puVar1 == (uint *)0x0)) ||
      (*(int *)(param_3 + 0x44) != 2)) || (*(int *)(param_3 + 0x40) != 1)) {
    return 0;
  }
  local_e8 = *(float *)(param_3 + 0x48);
  local_fc = *(float *)(param_3 + 0x14);
  local_f8 = *(float *)(param_3 + 0x18);
  local_f4 = *(int **)(param_3 + 0x1c);
  local_f0 = *(float *)(param_3 + 0x20);
  uVar9 = *puVar1 >> 4;
  iVar8 = *(int *)(param_2 + 0x202c) * 0x30;
  pfVar7 = (float *)(iVar8 + 0x1460 + param_2);
  local_130 = local_f8 * pfVar7[4] +
              (float)local_f4 * *(float *)(iVar8 + 0x147c + param_2) +
              local_fc * *(float *)(iVar8 + 0x1464 + param_2) + pfVar7[10];
  local_12c = (float *)(local_f8 * pfVar7[5] + (float)local_f4 * pfVar7[8] + local_fc * pfVar7[2] +
                       pfVar7[0xb]);
  local_134 = local_fc * *pfVar7 + local_f8 * pfVar7[3] + (float)local_f4 * pfVar7[6] + pfVar7[9];
  FUN_005c9d30(&local_134);
  local_f8 = *(float *)(param_3 + 0x18);
  local_fc = *(float *)(param_3 + 0x14);
  local_f4 = *(int **)(param_3 + 0x1c);
  local_f0 = *(float *)(param_3 + 0x20);
  uVar4 = __ftol();
  local_ec = local_f0 * _DAT_0064b8f4;
  ppiVar14 = &local_94;
  uVar4 = uVar4 & 1;
  local_a8 = local_ec * _DAT_0064b318;
  (**(code **)(*DAT_0071f868 + 0x54))(DAT_0071f868,0x16,ppiVar14);
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,1);
  if (*piStack_100 != 0) {
    _DAT_0067e87c = (float)*(ushort *)(*(int *)(*piStack_100 + 0x4c) + 0x14);
  }
  if (*(int *)(param_2 + 0x2050) == 0) {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,0);
  }
  else {
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
  }
  ppiVar5 = &piStack_100;
  iVar8 = 4;
  do {
    ppiVar5[-2] = (int *)0x0;
    ppiVar5[-1] = (int *)0x0;
    *ppiVar5 = (int *)0x0;
    ppiVar5 = ppiVar5 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  fVar12 = DAT_00701590 * fStack_110;
  fStack_108 = fStack_120;
  fStack_104 = fStack_11c;
  fVar15 = DAT_00701594 * fStack_110;
  piStack_100 = piStack_118;
  local_130 = DAT_00701598 * fStack_110;
  local_fc = fVar12 + fStack_120;
  local_f8 = fVar15 + fStack_11c;
  local_f4 = (int *)(local_130 + (float)piStack_118);
  local_f0 = fVar12 + local_fc;
  local_ec = local_f8 + fVar15;
  local_e8 = (float)local_f4 + local_130;
  pfStack_e4 = (float *)(fVar12 + local_f0);
  fStack_e0 = local_ec + fVar15;
  iVar8 = 4;
  fStack_dc = local_e8 + local_130;
  pfVar7 = &fStack_ac;
  do {
    pfVar7[-2] = 0.0;
    pfVar7[-1] = 0.0;
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 3;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  switch(*puVar1 >> 8 & 0xf) {
  case 0:
    fVar15 = 0.0;
    local_130 = fStack_114;
    break;
  case 1:
    fVar15 = fStack_114 * _DAT_0064b248;
    local_130 = fStack_114 * _DAT_00650cfc;
    break;
  case 2:
    fVar15 = fStack_114 * _DAT_00650cf4;
    local_130 = fStack_114 * _DAT_00650cf8;
    break;
  case 3:
    fVar15 = fStack_114 * _DAT_00650cec;
    local_130 = fStack_114 * _DAT_00650cf0;
    break;
  case 4:
    fVar15 = 0.0;
    local_130 = fStack_114 * _DAT_0064ca28;
    break;
  case 5:
    fVar15 = fStack_114 * _DAT_00650ce8;
    local_130 = fVar15;
    break;
  case 6:
    fVar15 = fStack_114 * _DAT_00650ce4;
    local_130 = fStack_114 * _DAT_0064b320;
  }
  local_130 = local_130 * _DAT_0064b8f4;
  fStack_b4 = fVar15 * DAT_00701590 + fStack_120;
  fStack_b0 = fVar15 * DAT_00701594 + fStack_11c;
  fStack_ac = fVar15 * DAT_00701598 + (float)piStack_118;
  fVar15 = local_130 * DAT_00701590;
  fVar2 = local_130 * DAT_00701594;
  fVar3 = local_130 * DAT_00701598;
  local_a8 = fVar15 + fStack_b4;
  fStack_a4 = fStack_b0 + fVar2;
  fStack_a0 = fStack_ac + fVar3;
  fVar11 = fVar15 + local_a8;
  fVar12 = fStack_a4 + fVar2;
  piVar13 = (int *)(fStack_a0 + fVar3);
  ppiVar5 = (int **)(fVar15 + fVar11);
  fStack_d8 = 0.0;
  fVar15 = fVar12 + fVar2;
  fStack_d4 = 0.0;
  local_134 = (float)piVar13 + fVar3;
  piStack_d0 = (int *)0x0;
  local_12c = (float *)0x0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  fStack_9c = fVar11;
  fStack_98 = fVar12;
  local_94 = piVar13;
  pfStack_90 = (float *)ppiVar5;
  fStack_8c = fVar15;
  fStack_88 = local_134;
  if (*piStack_10c != 0) {
    FUN_005b06d0(*piStack_10c,0,0,0);
  }
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  switch(*puVar1 >> 8 & 0xf) {
  case 0:
    fStack_124 = fStack_dc;
    fStack_d8 = fStack_108;
    fStack_d4 = fStack_104;
    local_12c = pfStack_e4;
    fStack_128 = fStack_e0;
    piStack_d0 = piStack_100;
    uVar6 = 0x3f000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_005c67e0(uVar4,fStack_108,fStack_104,piStack_100,pfStack_e4,fStack_e0,fStack_dc,uVar6,
                 0x40000000,0x3e4ccccd);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3e4ccccd;
    goto LAB_005ca9be;
  case 1:
    uVar6 = 0x3f000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_005c6ae0(&fStack_108,1,fStack_cc,fStack_110,0,0,uVar6);
    fStack_d8 = local_fc;
    fStack_d4 = local_f8;
    piStack_d0 = local_f4;
    uVar6 = 0x3f000000;
    local_134 = (fStack_dc - local_e8) * _DAT_0064b248;
    local_12c = (float *)((float)pfStack_e4 + ((float)pfStack_e4 - local_f0) * _DAT_0064b248);
    fStack_128 = (fStack_e0 - local_ec) * _DAT_0064b248 + fStack_e0;
    fStack_124 = local_134 + fStack_dc;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_005c67e0(uVar4,local_fc,local_f8,local_f4,local_12c,fStack_128,fStack_124,uVar6,0x40000000,
                 0x3e4ccccd);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3e4ccccd;
    uVar10 = 0x40000000;
    goto LAB_005cafa7;
  case 2:
    uVar6 = 0x3f000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_005c6ae0(&fStack_108,1,fStack_cc,fStack_110,0,0,uVar6);
    fVar2 = fStack_e0 - local_ec;
    fVar3 = fStack_dc - local_e8;
    FUN_0041ce10((float)pfStack_e4 + ((float)pfStack_e4 - local_f0) * _DAT_0064b248,
                 fVar2 * _DAT_0064b248 + fStack_e0,fVar3 * _DAT_0064b248 + fStack_dc);
    local_12c = (float *)ppiVar14;
    fStack_128 = fVar2;
    fStack_124 = fVar3;
    FUN_0041ce10(local_fc - fStack_108,local_f8 - fStack_104,(float)local_f4 - (float)piStack_100);
    FUN_0041ce10((float)ppiVar14 * _DAT_0064b248,fVar2 * _DAT_0064b248,fVar3 * _DAT_0064b248);
    FUN_0041ce10(fStack_108 + (float)ppiVar5,fStack_104 + fVar15,(float)piStack_100 + local_134);
    uVar6 = 0x3f000000;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    fStack_d8 = fVar11;
    fStack_d4 = fVar12;
    piStack_d0 = piVar13;
    FUN_005c67e0(uVar4,fVar11,fVar12,piVar13,local_12c,fStack_128,fStack_124,uVar6,0x3fc00000,
                 0x3e99999a);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3e99999a;
LAB_005ca9be:
    uVar10 = 0x40000000;
    uVar4 = uVar4 >> 8 & 0xf;
    iVar8 = piStack_10c[1];
    iStack_1c = param_2;
    break;
  case 3:
    FUN_005c5f00(&fStack_108,1,fStack_cc,fStack_110,0,0,0x3f000000);
    FUN_0041ce10((float)pfStack_e4 - local_f0,fStack_e0 - local_ec,fStack_dc - local_e8);
    FUN_0041ce10((float)ppiVar14 * _DAT_0064b248,fVar2 * _DAT_0064b248,fVar3 * _DAT_0064b248);
    FUN_0041ce10((float)pfStack_e4 + fVar11,fVar12 + fStack_e0,(float)piVar13 + fStack_dc);
    fStack_124 = local_134;
    local_12c = (float *)ppiVar5;
    fStack_128 = fVar15;
    FUN_0041ce10(local_fc - fStack_108,local_f8 - fStack_104,(float)local_f4 - (float)piStack_100);
    FUN_0041ce10((float)ppiVar14 * _DAT_0064b248,fVar2 * _DAT_0064b248,fVar3 * _DAT_0064b248);
    FUN_0041ce10(fStack_108 + (float)ppiVar5,fStack_104 + fVar15,(float)piStack_100 + local_134);
    fStack_d8 = fVar11;
    fStack_d4 = fVar12;
    piStack_d0 = piVar13;
    FUN_005c67e0(uVar4,fVar11,fVar12,piVar13,local_12c,fStack_128,fStack_124,0xbf800000,0x3f800000,
                 0x3e99999a);
    if ((*puVar1 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3e99999a;
    uVar4 = *puVar1 >> 8 & 0xf;
    uVar10 = 0x3f800000;
    iVar8 = piStack_10c[1];
    iStack_1c = param_2;
    break;
  case 4:
    fStack_d4 = fStack_104;
    piStack_d0 = piStack_100;
    fStack_124 = fStack_dc;
    local_12c = pfStack_e4;
    fStack_128 = fStack_e0;
    fStack_d8 = fStack_108;
    FUN_005c67e0(uVar4,fStack_108,fStack_104,piStack_100,pfStack_e4,fStack_e0,fStack_dc,0xbf800000,
                 0x3f800000,0x3e99999a);
    if ((*puVar1 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3e99999a;
    uVar4 = *puVar1 >> 8 & 0xf;
    uVar10 = 0x3f800000;
    iVar8 = piStack_10c[1];
    break;
  case 5:
    FUN_005c5f00(&fStack_108,2,fStack_cc * _DAT_00650ce0,fStack_110,0,0,0x3f000000);
    FUN_0041ce10((float)pfStack_e4 - local_f0,fStack_e0 - local_ec,fStack_dc - local_e8);
    FUN_0041ce10((float)ppiVar14 * _DAT_0064b248,fVar2 * _DAT_0064b248,fVar3 * _DAT_0064b248);
    FUN_0041ce10((float)pfStack_e4 + fVar11,fVar12 + fStack_e0,(float)piVar13 + fStack_dc);
    fStack_124 = local_134;
    local_12c = (float *)ppiVar5;
    fStack_128 = fVar15;
    FUN_0041ce10(local_f0 - local_fc,local_ec - local_f8,local_e8 - (float)local_f4);
    pfStack_84 = (float *)ppiVar14;
    fStack_80 = fVar2;
    fStack_7c = fVar3;
    uVar6 = FUN_004e1030(auStack_78,&pfStack_84,0x40000000);
    pfVar7 = (float *)FUN_004bddd0(auStack_6c,&local_fc,uVar6);
    fStack_d8 = *pfVar7;
    fStack_d4 = pfVar7[1];
    piStack_d0 = (int *)pfVar7[2];
    FUN_005c7490(uVar4,&fStack_d8,&local_12c,0x3f800000,0x3f000000);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3f000000;
    goto LAB_005cafa2;
  case 6:
    FUN_005c6ae0(&fStack_108,1,fStack_cc * _DAT_0064c2e8,fStack_110,0,0,0x3f000000);
    uVar6 = FUN_004bde20(auStack_60,&pfStack_e4,&local_f0,0x40000000);
    uVar6 = FUN_004e1030(auStack_48,uVar6);
    pfVar7 = (float *)FUN_004bddd0(auStack_30,&pfStack_e4,uVar6);
    local_12c = (float *)*pfVar7;
    fStack_128 = pfVar7[1];
    fStack_124 = pfVar7[2];
    uVar6 = FUN_004bde20(auStack_3c,&pfStack_e4,&fStack_108,0x40800000);
    uVar6 = FUN_004e1030(auStack_54,uVar6);
    pfVar7 = (float *)FUN_004bddd0(&fStack_120,&fStack_108,uVar6);
    fStack_d8 = *pfVar7;
    fStack_d4 = pfVar7[1];
    piStack_d0 = (int *)pfVar7[2];
    FUN_005c7490(uVar4,&fStack_d8,&local_12c,0x3f800000,0x3ecccccd);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto switchD_005ca590_default;
    uVar6 = 0x3ecccccd;
LAB_005cafa2:
    uVar10 = 0x3f800000;
LAB_005cafa7:
    uVar4 = uVar4 >> 8 & 0xf;
    iVar8 = piStack_10c[1];
    iStack_1c = param_2;
    break;
  default:
    goto switchD_005ca590_default;
  }
  FUN_005c5c50(iStack_1c,iVar8,&fStack_b4,&uStack_c8,local_130,uVar4,uVar10,uVar6,1);
switchD_005ca590_default:
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x16,uStack_b8);
  return 1;
}

