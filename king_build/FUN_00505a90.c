
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00505a90(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  int local_10c;
  int *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8 [8];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_60 [24];
  
  if (*(int *)(param_1 + 0xdd4) != 4) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
    return;
  }
  pfVar6 = &local_b8;
  local_10c = 0;
  iVar9 = 8;
  do {
    pfVar6[-2] = 0.0;
    pfVar6[-1] = 0.0;
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  puVar8 = local_60 + 2;
  iVar9 = 8;
  do {
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    *puVar8 = 0;
    puVar8 = puVar8 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_104 = DAT_007015b0;
  local_100 = DAT_007015b4;
  local_fc = DAT_007015b8;
  if (((*(char *)(param_1 + 0x19b9) == '\0') ||
      ((param_2 != 0 && (*(float *)(param_1 + 0xe38) < _DAT_0064b240)))) &&
     (*(int *)(param_1 + 0x8b8) == 0)) {
    sVar1 = *(short *)(param_1 + 0x110);
    if (((sVar1 == 0) || (*(short *)(param_1 + 0x208) == 0)) || (*(short *)(param_1 + 0x300) == 0))
    {
      local_f8[0] = 0;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0xf8);
      fVar5 = *(float *)(param_1 + 500) - *(float *)(param_1 + 0xfc);
      fVar3 = *(float *)(param_1 + 0x1f8) - *(float *)(param_1 + 0x100);
      local_118 = *(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0xf8);
      local_f8[0] = 1;
      local_114 = *(float *)(param_1 + 0x2ec) - *(float *)(param_1 + 0xfc);
      fVar4 = *(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x100);
      local_124 = fVar3 * local_114 - fVar5 * fVar4;
      local_120 = fVar4 * fVar2 - fVar3 * local_118;
      local_11c = fVar5 * local_118 - local_114 * fVar2;
      local_c0 = local_124;
      local_bc = local_120;
      local_b8 = local_11c;
    }
    if (((sVar1 == 0) || (*(short *)(param_1 + 0x208) == 0)) || (*(short *)(param_1 + 0x3f8) == 0))
    {
      local_f8[1] = 0;
    }
    else {
      local_f8[1] = 1;
      fVar2 = *(float *)(param_1 + 0x3e0) - *(float *)(param_1 + 0x1f0);
      fVar5 = *(float *)(param_1 + 0x3e4) - *(float *)(param_1 + 500);
      fVar3 = *(float *)(param_1 + 1000) - *(float *)(param_1 + 0x1f8);
      local_118 = *(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0x1f0);
      local_114 = *(float *)(param_1 + 0xfc) - *(float *)(param_1 + 500);
      fVar4 = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x1f8);
      local_124 = fVar3 * local_114 - fVar5 * fVar4;
      local_120 = fVar4 * fVar2 - fVar3 * local_118;
      local_11c = fVar5 * local_118 - local_114 * fVar2;
      local_b4 = local_124;
      local_b0 = local_120;
      local_ac = local_11c;
    }
    if (((sVar1 == 0) || (*(short *)(param_1 + 0x300) == 0)) || (*(short *)(param_1 + 0x3f8) == 0))
    {
      local_f8[2] = 0;
    }
    else {
      local_124 = *(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0x2e8);
      local_f8[2] = 1;
      local_120 = *(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0x2ec);
      local_11c = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x2f0);
      FUN_0041ce10(*(float *)(param_1 + 0x3e0) - *(float *)(param_1 + 0x2e8),
                   *(float *)(param_1 + 0x3e4) - *(float *)(param_1 + 0x2ec),
                   *(float *)(param_1 + 1000) - *(float *)(param_1 + 0x2f0));
      FUN_0041ce10(local_114 * local_11c - local_110 * local_120,
                   local_110 * local_124 - local_118 * local_11c,
                   local_118 * local_120 - local_114 * local_124);
      local_a8 = local_124;
      local_a4 = local_120;
      local_a0 = local_11c;
    }
    if (((*(short *)(param_1 + 0x208) == 0) || (*(short *)(param_1 + 0x300) == 0)) ||
       (*(short *)(param_1 + 0x3f8) == 0)) {
      local_f8[3] = 0;
    }
    else {
      local_f8[3] = 1;
      FUN_0041ce10(*(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x3e0),
                   *(float *)(param_1 + 0x2ec) - *(float *)(param_1 + 0x3e4),
                   *(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 1000));
      local_124 = local_118;
      local_120 = local_114;
      local_11c = local_110;
      uVar7 = FUN_004bde20(local_cc,param_1 + 0x1f0,(float *)(param_1 + 0x3e0),&local_124);
      puVar8 = (undefined4 *)FUN_004bde70(local_d8,uVar7);
      local_9c = *puVar8;
      local_98 = puVar8[1];
      local_94 = puVar8[2];
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0xdd4)) {
      local_108 = local_f8;
      iVar10 = 0;
      do {
        if (*local_108 != 0) {
          puVar8 = (undefined4 *)FUN_005aaad0(local_d8,(int)&local_c0 + iVar10);
          *(undefined4 *)((int)local_60 + iVar10) = *puVar8;
          *(undefined4 *)((int)local_60 + iVar10 + 4) = puVar8[1];
          *(undefined4 *)((int)local_60 + iVar10 + 8) = puVar8[2];
          FUN_005aae00(local_cc,(undefined4 *)((int)local_60 + iVar10));
          local_10c = local_10c + 1;
        }
        iVar9 = iVar9 + 1;
        local_108 = local_108 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < *(int *)(param_1 + 0xdd4));
    }
    if ((param_2 != 0) && (local_10c == 0)) {
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
      return;
    }
    puVar8 = (undefined4 *)FUN_005aaad0(local_d8,&local_104);
    *(undefined4 *)(param_1 + 0xd0) = *puVar8;
    *(undefined4 *)(param_1 + 0xd4) = puVar8[1];
    *(undefined4 *)(param_1 + 0xd8) = puVar8[2];
    return;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
  return;
}

