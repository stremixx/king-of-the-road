
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00583f00(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  undefined4 uVar18;
  byte bVar19;
  float local_124;
  float local_120;
  float local_11c;
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
  puStack_8 = &LAB_0064717b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005eebf0();
  if ((*(int *)(param_4 + 0x188) == 1) ||
     ((*(int *)(param_4 + 0x188) == 2 && (*(int *)(param_4 + 0xf88) == 3)))) {
    if (param_4 == 0) {
      param_4 = 0;
    }
    else {
      param_4 = param_4 + 0x100;
    }
    bVar19 = FUN_004e4f9f(param_4,param_1,param_2,local_10c);
  }
  else {
    pfVar15 = (float *)FUN_00631d33(0x10);
    if (pfVar15 == (float *)0x0) {
      pfVar15 = (float *)0x0;
    }
    else {
      *pfVar15 = 0.0;
      pfVar15[1] = 0.0;
      pfVar15[2] = 0.0;
      pfVar15[3] = 0.0;
    }
    pfVar16 = (float *)FUN_0057d570(local_3c);
    fVar1 = pfVar16[4];
    fVar2 = *(float *)(param_4 + 0xd7c);
    fVar3 = pfVar16[1];
    fVar4 = *(float *)(param_4 + 0xd78);
    fVar5 = pfVar16[7];
    fVar6 = *(float *)(param_4 + 0xd80);
    fVar7 = pfVar16[10];
    fVar8 = pfVar16[5];
    fVar9 = *(float *)(param_4 + 0xd7c);
    fVar10 = pfVar16[2];
    fVar11 = *(float *)(param_4 + 0xd78);
    fVar12 = pfVar16[8];
    fVar13 = *(float *)(param_4 + 0xd80);
    fVar14 = pfVar16[0xb];
    *pfVar15 = *(float *)(param_4 + 0xd78) * *pfVar16 +
               pfVar16[6] * *(float *)(param_4 + 0xd80) + pfVar16[3] * *(float *)(param_4 + 0xd7c) +
               pfVar16[9];
    pfVar15[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
    pfVar15[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
    pfVar15[3] = *(float *)(param_4 + 0xcd4);
    local_4 = 0;
    local_118 = *param_1;
    local_114 = param_1[1];
    local_124 = *param_2;
    local_110 = param_1[2];
    local_120 = param_2[1];
    local_11c = param_2[2];
    iVar17 = FUN_005f5e90(0,&local_118,&local_124,0);
    bVar19 = iVar17 != 0;
    local_d8 = local_118;
    local_d4 = local_114;
    local_d0 = local_110;
    local_cc = local_124;
    local_c8 = local_120;
    local_c4 = local_11c;
    local_98 = 0;
    local_4 = 0xffffffff;
    FUN_005f4100();
  }
  if (0x3e < *(int *)(param_3 + 0xb00)) {
    FUN_004e1e9c(s_try_SharpPoint_col_Node_arr____a_0067c6e4);
  }
  *(uint *)(param_3 + 0xb04 + *(int *)(param_3 + 0xb00) * 4) = (uint)((bVar19 & 1) == 1);
  *(undefined4 *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = 0x3f800000;
  if (*(int *)(param_3 + 0xb04 + *(int *)(param_3 + 0xb00) * 4) == 0) {
    uVar18 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = 0;
    pfVar15 = (float *)(param_3 + *(int *)(param_3 + 0xb00) * 0xc);
    *pfVar15 = local_d8;
    pfVar15[1] = local_d4;
    pfVar15[2] = local_d0;
    pfVar15 = (float *)(param_3 + (*(int *)(param_3 + 0xb00) + 0x40) * 0xc);
    *pfVar15 = -local_cc;
    pfVar15[1] = -local_c8;
    pfVar15[2] = -local_c4;
    *(undefined4 *)(param_3 + 0x600 + *(int *)(param_3 + 0xb00) * 4) = 0;
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    *(float *)(param_3 + 0xa00 + *(int *)(param_3 + 0xb00) * 4) =
         local_cc * (local_d8 - *param_2) +
         (local_d0 - param_2[2]) * local_c4 + local_c8 * (local_d4 - param_2[1]);
    fVar1 = (local_ac - fVar3) * (local_ac - fVar3) +
            (local_b0 - fVar2) * (local_b0 - fVar2) + (local_b4 - fVar1) * (local_b4 - fVar1);
    fVar2 = (local_d0 - fVar6) * (local_d0 - fVar6) +
            (local_d4 - fVar5) * (local_d4 - fVar5) + (local_d8 - fVar4) * (local_d8 - fVar4);
    if ((fVar2 <= fVar1) && ((float)_DAT_0064a738 <= fVar1)) {
      fVar2 = fVar2 / fVar1;
      if ((float)_DAT_0064a660 < fVar2) {
        fVar2 = _DAT_0064b240;
      }
      *(float *)(param_3 + 0x800 + *(int *)(param_3 + 0xb00) * 4) = SQRT(fVar2);
    }
    *(int *)(param_3 + 0xb00) = *(int *)(param_3 + 0xb00) + 1;
    uVar18 = 1;
  }
  ExceptionList = local_c;
  return uVar18;
}

