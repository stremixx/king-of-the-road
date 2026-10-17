
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00584350(float *param_1,float *param_2,float param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  byte bVar11;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float *local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_10c [52];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_98;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064719b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005eebf0();
  if ((*(int *)(param_5 + 0x188) == 1) ||
     ((*(int *)(param_5 + 0x188) == 2 && (*(int *)(param_5 + 0xf88) == 3)))) {
    if (param_5 == 0) {
      param_5 = 0;
    }
    else {
      param_5 = param_5 + 0x100;
    }
    bVar11 = FUN_004e6fda(param_5,param_3,param_1,param_2,local_10c);
  }
  else {
    local_11c = (float *)FUN_00631d33(0x10);
    if (local_11c == (float *)0x0) {
      local_11c = (float *)0x0;
    }
    else {
      *local_11c = 0.0;
      local_11c[1] = 0.0;
      local_11c[2] = 0.0;
      local_11c[3] = 0.0;
    }
    pfVar8 = (float *)FUN_0057d570(local_3c);
    local_128 = pfVar8[1] * *(float *)(param_5 + 0xd78) +
                pfVar8[7] * *(float *)(param_5 + 0xd80) + pfVar8[4] * *(float *)(param_5 + 0xd7c) +
                pfVar8[10];
    fVar1 = pfVar8[5];
    fVar2 = *(float *)(param_5 + 0xd7c);
    fVar3 = pfVar8[8];
    fVar4 = *(float *)(param_5 + 0xd80);
    fVar5 = pfVar8[2];
    fVar6 = *(float *)(param_5 + 0xd78);
    fVar7 = pfVar8[0xb];
    *local_11c = *pfVar8 * *(float *)(param_5 + 0xd78) +
                 pfVar8[6] * *(float *)(param_5 + 0xd80) + pfVar8[3] * *(float *)(param_5 + 0xd7c) +
                 pfVar8[9];
    local_11c[1] = local_128;
    local_11c[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
    local_11c[3] = *(float *)(param_5 + 0xcd4);
    local_124 = 1;
    local_4 = 0;
    local_134 = *param_1;
    local_130 = param_1[1];
    local_118 = *param_2;
    local_12c = param_1[2];
    local_114 = param_2[1];
    local_110 = param_2[2];
    iVar9 = FUN_005f5e90(2,&local_134,&local_118,param_3);
    bVar11 = iVar9 != 0;
    local_d0 = local_12c;
    local_d8 = local_134;
    local_d4 = local_130;
    local_c4 = local_110;
    local_cc = local_118;
    local_c8 = local_114;
    local_98 = 0;
    local_4 = 0xffffffff;
    FUN_005f4100();
  }
  if (0x3e < *(int *)(param_4 + 0xb00)) {
    FUN_004e1e9c(s_try_SharpSphere_col_Node_arr____a_0067c718);
  }
  *(uint *)(param_4 + 0xb04 + *(int *)(param_4 + 0xb00) * 4) = (uint)((bVar11 & 1) == 1) * param_6;
  *(undefined4 *)(param_4 + 0x800 + *(int *)(param_4 + 0xb00) * 4) = 0x3f800000;
  if (*(int *)(param_4 + 0xb04 + *(int *)(param_4 + 0xb00) * 4) == 0) {
    uVar10 = 0;
  }
  else {
    *(undefined4 *)(param_4 + 0x800 + *(int *)(param_4 + 0xb00) * 4) = 0;
    pfVar8 = (float *)(param_4 + *(int *)(param_4 + 0xb00) * 0xc);
    *pfVar8 = local_d8;
    pfVar8[1] = local_d4;
    pfVar8[2] = local_d0;
    pfVar8 = (float *)(param_4 + (*(int *)(param_4 + 0xb00) + 0x40) * 0xc);
    *pfVar8 = -local_cc;
    pfVar8[1] = -local_c8;
    pfVar8[2] = -local_c4;
    *(undefined4 *)(param_4 + 0x600 + *(int *)(param_4 + 0xb00) * 4) = 0;
    local_d8 = local_d8 + local_cc * param_3;
    local_d4 = local_c8 * param_3 + local_d4;
    local_d0 = local_c4 * param_3 + local_d0;
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = local_d8 - *param_1;
    fVar5 = local_d4 - param_1[1];
    fVar6 = local_d0 - param_1[2];
    *(float *)(param_4 + 0xa00 + *(int *)(param_4 + 0xb00) * 4) =
         local_cc * (local_d8 - *param_2) +
         (local_d0 - param_2[2]) * local_c4 + local_c8 * (local_d4 - param_2[1]);
    fVar1 = (local_ac - fVar3) * (local_ac - fVar3) +
            (local_b0 - fVar2) * (local_b0 - fVar2) + (local_b4 - fVar1) * (local_b4 - fVar1);
    fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if ((fVar2 <= fVar1) && ((float)_DAT_0064a738 <= fVar1)) {
      fVar2 = fVar2 / fVar1;
      if ((float)_DAT_0064a660 < fVar2) {
        fVar2 = _DAT_0064b240;
      }
      *(float *)(param_4 + 0x800 + *(int *)(param_4 + 0xb00) * 4) = SQRT(fVar2);
      iVar9 = *(int *)(param_4 + 0xb00);
      if (*(float *)(param_4 + 0xa00 + iVar9 * 4) < _DAT_0064b254) {
        *(float *)(param_4 + 0x800 + iVar9 * 4) = -*(float *)(param_4 + 0x800 + iVar9 * 4);
      }
    }
    *(int *)(param_4 + 0xb00) = *(int *)(param_4 + 0xb00) + 1;
    uVar10 = 1;
  }
  ExceptionList = local_c;
  return uVar10;
}

