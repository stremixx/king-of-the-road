
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bd870(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [12];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [12];
  float local_a0 [8];
  float local_80 [8];
  float local_60 [8];
  float local_40 [16];
  
  param_2 = param_2 * 0xf0;
  local_130 = 4;
  pfVar6 = (float *)(param_2 + *(int *)(param_1 + 8));
  do {
    FUN_004042a0();
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  local_e4 = pfVar6[6];
  local_e0 = pfVar6[7];
  local_dc = pfVar6[8];
  local_d0 = pfVar6[9];
  local_cc = pfVar6[10];
  local_c8 = pfVar6[0xb];
  FUN_0041ce10(pfVar6[0x12] * pfVar6[2] - pfVar6[0x13] * pfVar6[1],
               *pfVar6 * pfVar6[0x13] - pfVar6[0x11] * pfVar6[2],
               pfVar6[0x11] * pfVar6[1] - *pfVar6 * pfVar6[0x12]);
  local_b8 = local_12c;
  local_b4 = local_128;
  local_b0 = local_124;
  FUN_004bde70(local_ac,pfVar6 + 0x28,pfVar6 + 3);
  uVar1 = FUN_004bde20(&local_12c,&local_d0,&local_e4);
  fVar8 = (float10)FUN_005aabc0(uVar1);
  fVar13 = (float)(fVar8 / (float10)pfVar6[0xd]);
  fVar12 = pfVar6[0xc] * _DAT_0064b248;
  local_d4 = pfVar6[0xd] * _DAT_0064b248;
  local_d8 = fVar12;
  uVar1 = FUN_004bdd80(&local_12c,&local_b8,fVar12);
  puVar2 = (undefined4 *)FUN_004bde20(local_120,&local_e4,uVar1);
  local_114 = *puVar2;
  local_110 = puVar2[1];
  local_10c = puVar2[2];
  uVar1 = FUN_004bdd80(local_120,&local_b8,fVar12);
  puVar2 = (undefined4 *)FUN_004bddd0(&local_12c,&local_e4,uVar1);
  fVar12 = local_d4;
  local_108 = *puVar2;
  local_104 = puVar2[1];
  local_100 = puVar2[2];
  uVar1 = FUN_004bdd80(local_120,local_ac,local_d4);
  puVar2 = (undefined4 *)FUN_004bde20(&local_12c,&local_d0,uVar1);
  local_fc = *puVar2;
  local_f8 = puVar2[1];
  local_f4 = puVar2[2];
  uVar1 = FUN_004bdd80(local_120,local_ac,fVar12);
  puVar2 = (undefined4 *)FUN_004bddd0(&local_12c,&local_d0,uVar1);
  local_f0 = *puVar2;
  local_ec = puVar2[1];
  local_e8 = puVar2[2];
  FUN_0041ce10(0,0,0x3f800000);
  uVar11 = 0;
  puVar9 = local_c4;
  uVar10 = 0;
  uVar1 = FUN_0041ce10(local_114,local_110,local_10c);
  pfVar6 = (float *)FUN_004bded0(uVar1,puVar9,uVar10,uVar11);
  uVar1 = 0;
  pfVar7 = local_a0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar9 = local_c4;
  uVar11 = 0x3f800000;
  uVar10 = FUN_0041ce10(local_108,local_104,local_100);
  pfVar6 = (float *)FUN_004bded0(uVar10,puVar9,uVar11,uVar1);
  pfVar7 = local_80;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar9 = local_c4;
  uVar10 = 0;
  fVar12 = fVar13;
  uVar1 = FUN_0041ce10(local_fc,local_f8,local_f4);
  pfVar6 = (float *)FUN_004bded0(uVar1,puVar9,uVar10,fVar12);
  pfVar7 = local_60;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar9 = local_c4;
  uVar10 = 0x3f800000;
  uVar1 = FUN_0041ce10(local_f0,local_ec,local_e8);
  pfVar6 = (float *)FUN_004bded0(uVar1,puVar9,uVar10,fVar13);
  pfVar7 = local_40;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_a0;
  iVar4 = 4;
  do {
    iVar3 = *(int *)(param_1 + 8) + param_2;
    fVar8 = (float10)FUN_004bdf10(*pfVar6,pfVar6[1],iVar3 + 0x94,iVar3 + 0x38);
    pfVar6[2] = (float)fVar8;
    pfVar6 = pfVar6 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (local_a0[2] == _DAT_0064b1d0) {
    local_a0[2] = (float)*(undefined4 *)(param_2 + 0x40 + *(int *)(param_1 + 8));
  }
  if (local_80[2] == _DAT_0064b1d0) {
    local_80[2] = (float)*(undefined4 *)(param_2 + 0x40 + *(int *)(param_1 + 8));
  }
  if (local_60[2] == _DAT_0064b1d0) {
    iVar4 = *(int *)(param_1 + 8) + param_2;
    local_60[2] = (*(float *)(iVar4 + 0x9c) + *(float *)(iVar4 + 0x40)) * _DAT_0064b248;
  }
  if (local_40[2] == _DAT_0064b1d0) {
    param_2 = param_2 + *(int *)(param_1 + 8);
    local_40[2] = (*(float *)(param_2 + 0x9c) + *(float *)(param_2 + 0x40)) * _DAT_0064b248;
  }
  iVar4 = 4;
  pfVar6 = local_a0 + 2;
  do {
    iVar4 = iVar4 + -1;
    *pfVar6 = _DAT_0064b1cc + *pfVar6;
    pfVar6 = pfVar6 + 8;
  } while (iVar4 != 0);
  iVar4 = *(int *)(param_1 + 0x28 + (*(uint *)(param_1 + 0x54) % 10) * 4);
  uVar5 = *(uint *)(iVar4 + 0x58 + param_3 * 4) % 0x4b0;
  pfVar6 = local_80;
  pfVar7 = (float *)(uVar5 * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_40;
  pfVar7 = (float *)((uVar5 + 1) * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_60;
  pfVar7 = (float *)((uVar5 + 2) * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_60;
  pfVar7 = (float *)((uVar5 + 3) * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_80;
  pfVar7 = (float *)((uVar5 + 4) * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  pfVar6 = local_a0;
  pfVar7 = (float *)((uVar5 + 5) * 0x20 + *(int *)(iVar4 + 0x4c + param_3 * 4));
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *(int *)(iVar4 + 0x58 + param_3 * 4) = *(int *)(iVar4 + 0x58 + param_3 * 4) + 6;
  return;
}

