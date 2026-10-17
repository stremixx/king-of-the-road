
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058b8e0(int *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float10 fVar16;
  char *pcVar17;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [7];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar16 = (float10)FUN_004e1fd9();
  fVar2 = (float)fVar16;
  pfVar1 = (float *)(param_1 + 0x68);
  local_58[0] = 100.0;
  local_58[1] = 100.0;
  local_80 = *pfVar1;
  local_58[2] = 100.0;
  local_7c = (float)param_1[0x69];
  local_58[3] = 100.0;
  local_78 = (float)param_1[0x6a];
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  if (_DAT_0064b254 <= fVar2 * (float)param_1[199] + (float)param_1[0x6a]) {
    FUN_0041ce10(fVar2 * (float)param_1[0xc5],fVar2 * (float)param_1[0xc6],
                 fVar2 * (float)param_1[199]);
    param_1[0x77] = (int)local_74;
    param_1[0x78] = (int)local_70;
    param_1[0x79] = (int)local_6c;
    FUN_0041ce10(*pfVar1 + (float)param_1[0x77],(float)param_1[0x69] + (float)param_1[0x78],
                 (float)param_1[0x6a] + (float)param_1[0x79]);
    *pfVar1 = local_74;
    param_1[0x69] = (int)local_70;
    param_1[0x6a] = (int)local_6c;
  }
  else {
    local_24 = 0.0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0.0;
    local_14 = 0;
    local_10 = 0;
    iVar9 = FUN_0058c7f0(&local_3c);
    while (iVar9 != 0) {
      fVar3 = local_3c * (float)param_1[0x7d] +
              local_38 * (float)param_1[0x80] + local_34 * (float)param_1[0x83] +
              (float)param_1[0x86];
      pfVar15 = (float *)(param_1 + iVar9 * 0x34 + 0x513);
      local_70 = local_34 * (float)param_1[0x84] +
                 local_38 * (float)param_1[0x81] + local_3c * (float)param_1[0x7e] +
                 (float)param_1[0x87];
      local_6c = local_38 * (float)param_1[0x82] +
                 local_3c * (float)param_1[0x7f] + local_34 * (float)param_1[0x85] +
                 (float)param_1[0x88];
      fVar4 = *pfVar15 - fVar3;
      local_2c = (float)param_1[iVar9 * 0x34 + 0x514] - local_70;
      local_28 = (float)param_1[iVar9 * 0x34 + 0x515] - local_6c;
      if (fVar4 * fVar4 + local_28 * local_28 + local_2c * local_2c < (float)_DAT_0064a6c0) {
        local_68 = (float *)(param_1 + iVar9 * 0x34 + 0x516);
        fVar3 = (fVar3 - *pfVar15) * *local_68 +
                (local_70 - (float)param_1[iVar9 * 0x34 + 0x514]) *
                (float)param_1[iVar9 * 0x34 + 0x517] +
                (local_6c - (float)param_1[iVar9 * 0x34 + 0x515]) *
                (float)param_1[iVar9 * 0x34 + 0x518];
        if (fVar3 < local_58[3]) {
          iVar13 = 0;
          pfVar10 = local_58;
LAB_0058bad2:
          if (*pfVar10 <= fVar3) goto code_r0x0058badf;
          if (iVar13 < 3) {
            pfVar10 = local_58 + 3;
            iVar14 = 3 - iVar13;
            do {
              *pfVar10 = pfVar10[-1];
              pfVar10 = pfVar10 + -1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          local_58[iVar13] = fVar3;
          if (iVar13 == 0) {
            local_24 = *pfVar15;
            local_20 = param_1[iVar9 * 0x34 + 0x514];
            local_1c = param_1[iVar9 * 0x34 + 0x515];
            local_18 = *local_68;
            local_14 = param_1[iVar9 * 0x34 + 0x517];
            local_10 = param_1[iVar9 * 0x34 + 0x518];
          }
        }
      }
LAB_0058baea:
      iVar9 = FUN_0058c7f0(&local_3c);
    }
    local_58[6] = local_58[0];
    if (local_58[0] < (float)_DAT_0064c0e0) {
      pfVar15 = (float *)(param_1 + 0x6b);
      local_74 = 0.0;
      local_70 = 0.0;
      local_6c = 0.0;
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 0.0;
      iVar9 = FUN_0058b1a0(param_1 + 0x7d,param_1 + 0x95,pfVar1,pfVar15,param_1 + 0x65,&local_24,
                           &local_18,param_1[99],0x3f800000,&local_74,&local_30);
      if (iVar9 != 0) {
        param_1[0x7a] = (int)(local_30 * fVar2);
        param_1[0x7b] = (int)(local_2c * fVar2);
        local_80 = local_74 * fVar2;
        param_1[0x7c] = (int)(local_28 * fVar2);
        local_7c = local_70 * fVar2;
        local_78 = local_6c * fVar2;
        param_1[0x77] = (int)local_80;
        param_1[0x78] = (int)local_7c;
        param_1[0x79] = (int)local_78;
        FUN_005aae00(&local_80,param_1 + 0x77);
        FUN_005aae00(&local_80,param_1 + 0x7a);
        pfVar10 = (float *)FUN_004e2984(local_58,pfVar15,param_1 + 0x65);
        fVar3 = pfVar10[1];
        fVar4 = *pfVar10;
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[1];
        fVar7 = *pfVar10;
        fVar8 = pfVar10[2];
        param_1[0x6e] =
             (int)(*pfVar10 * (float)param_1[0x7d] +
                  (float)param_1[0x83] * pfVar10[2] + (float)param_1[0x80] * pfVar10[1]);
        param_1[0x6f] =
             (int)((float)param_1[0x84] * fVar5 +
                  (float)param_1[0x7e] * fVar4 + (float)param_1[0x81] * fVar3);
        param_1[0x70] =
             (int)((float)param_1[0x85] * fVar8 +
                  (float)param_1[0x7f] * fVar7 + (float)param_1[0x82] * fVar6);
        param_1[0x313] = (int)(fVar2 * *pfVar1);
        param_1[0x314] = (int)(fVar2 * (float)param_1[0x69]);
        param_1[0x315] = (int)(fVar2 * (float)param_1[0x6a]);
        param_1[0x316] = (int)(fVar2 * *pfVar15);
        param_1[0x317] = (int)(fVar2 * (float)param_1[0x6c]);
        param_1[0x318] = (int)(fVar2 * (float)param_1[0x6d]);
        return;
      }
    }
    local_58[0] = 100.0;
    local_58[1] = 100.0;
    local_58[2] = 100.0;
    local_58[3] = 100.0;
    if (0 < param_1[0x503]) {
      pfVar15 = (float *)(param_1 + 0x3ea);
      local_68 = (float *)param_1[0x503];
      do {
        local_70 = (float)param_1[0x81] * *pfVar15 +
                   pfVar15[1] * (float)param_1[0x84] + (float)param_1[0x7e] * pfVar15[-1] +
                   (float)param_1[0x87];
        local_6c = pfVar15[1] * (float)param_1[0x85] +
                   (float)param_1[0x7f] * pfVar15[-1] + *pfVar15 * (float)param_1[0x82] +
                   (float)param_1[0x88];
        fVar3 = (local_6c - (float)param_1[0xf3]) * (float)param_1[0xf6] +
                (((float)param_1[0x80] * *pfVar15 +
                  (float)param_1[0x83] * pfVar15[1] + (float)param_1[0x7d] * pfVar15[-1] +
                 (float)param_1[0x86]) - (float)param_1[0xf1]) * (float)param_1[0xf4] +
                (local_70 - (float)param_1[0xf2]) * (float)param_1[0xf5];
        if (fVar3 < local_58[3]) {
          iVar9 = 0;
          pfVar10 = local_58;
LAB_0058be8d:
          if (*pfVar10 <= fVar3) goto code_r0x0058be96;
          if (iVar9 < 3) {
            pfVar10 = local_58 + 3;
            iVar13 = 3 - iVar9;
            do {
              *pfVar10 = pfVar10[-1];
              pfVar10 = pfVar10 + -1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          local_58[iVar9] = fVar3;
        }
LAB_0058bea1:
        pfVar15 = pfVar15 + 7;
        local_68 = (float *)((int)local_68 + -1);
      } while (local_68 != (float *)0x0);
    }
    if (local_58[0] <=
        ABS(fVar2 * (float)param_1[199] * fVar2 * _DAT_0064b248) * (float)_DAT_0064a7b0) {
      fVar3 = (local_58[0] * _DAT_0064b8f4 - local_58[6]) * _DAT_0064c484;
    }
    else {
      fVar3 = (local_58[0] * _DAT_0064b248 - local_58[6]) * _DAT_0064b324;
    }
    local_64 = *pfVar1;
    local_60 = (float)param_1[0x69];
    local_5c = (float)param_1[0x6a];
    if ((fVar3 + local_58[6] < _DAT_0064b254) &&
       (*pfVar1 * (float)param_1[0xf4] +
        (float)param_1[0x69] * (float)param_1[0xf5] + (float)param_1[0x6a] * (float)param_1[0xf6] <
        (float)_DAT_0064a668)) {
      fVar3 = (float)param_1[0x6a] * (float)param_1[0xf5] -
              (float)param_1[0xf6] * (float)param_1[0x69];
      local_7c = (float)param_1[0xf6] * *pfVar1 - (float)param_1[0xf4] * (float)param_1[0x6a];
      local_78 = (float)param_1[0xf4] * (float)param_1[0x69] - *pfVar1 * (float)param_1[0xf5];
      FUN_0041ce10(local_7c * (float)param_1[0xf6] - local_78 * (float)param_1[0xf5],
                   local_78 * (float)param_1[0xf4] - fVar3 * (float)param_1[0xf6],
                   fVar3 * (float)param_1[0xf5] - local_7c * (float)param_1[0xf4]);
      local_64 = local_80;
      local_60 = local_7c;
      local_5c = local_78;
      FUN_004e20b1(&local_64,s__MovingBox__make_new_Pos__0_0067cc34,0x43160000);
      *pfVar1 = local_64;
      param_1[0x69] = (int)local_60;
      param_1[0x6a] = (int)local_5c;
      FUN_0041ce10(fVar2 * *pfVar1,fVar2 * (float)param_1[0x69],fVar2 * (float)param_1[0x6a]);
      param_1[0x313] = (int)local_80;
      param_1[0x314] = (int)local_7c;
      param_1[0x315] = (int)local_78;
      return;
    }
    iVar9 = FUN_004e7119((float)param_1[199] * _DAT_0064b868,-(float)param_1[0x6a],
                         -(fVar3 + local_58[6]),local_58 + 4,local_58 + 5);
    if (iVar9 == 0) {
      FUN_0041ce10(fVar2 * (float)param_1[0xc5],fVar2 * (float)param_1[0xc6],
                   fVar2 * (float)param_1[199]);
      param_1[0x77] = (int)local_74;
      param_1[0x78] = (int)local_70;
      param_1[0x79] = (int)local_6c;
      FUN_0041ce10(*pfVar1 + (float)param_1[0x77],(float)param_1[0x69] + (float)param_1[0x78],
                   (float)param_1[0x6a] + (float)param_1[0x79]);
      *pfVar1 = local_74;
      param_1[0x69] = (int)local_70;
      param_1[0x6a] = (int)local_6c;
    }
    else {
      if (local_58[4] < local_58[5]) {
        if (fVar2 < ABS(local_58[5])) {
          local_68 = (float *)0x1;
          if (local_58[5] <= _DAT_0064b254) {
            local_68 = (float *)0xffffffff;
          }
          local_58[5] = (float)(int)local_68 * fVar2;
        }
        fVar3 = fVar2 * param_2 + (_DAT_0064b240 - param_2) * local_58[5];
        FUN_0041ce10(fVar3 * (float)param_1[0xc5],fVar3 * (float)param_1[0xc6],
                     fVar3 * (float)param_1[199]);
        param_1[0x77] = (int)local_74;
        param_1[0x78] = (int)local_70;
        param_1[0x79] = (int)local_6c;
        FUN_0041ce10((float)param_1[0x77] + *pfVar1,(float)param_1[0x69] + (float)param_1[0x78],
                     (float)param_1[0x6a] + (float)param_1[0x79]);
        pcVar17 = s__MovingBox__make_new_Pos__2_0067cbfc;
      }
      else {
        if (fVar2 < ABS(local_58[4])) {
          local_68 = (float *)0x1;
          if (local_58[4] <= _DAT_0064b254) {
            local_68 = (float *)0xffffffff;
          }
          local_58[4] = (float)(int)local_68 * fVar2;
        }
        fVar3 = fVar2 * param_2 + (_DAT_0064b240 - param_2) * local_58[4];
        FUN_0041ce10(fVar3 * (float)param_1[0xc5],fVar3 * (float)param_1[0xc6],
                     fVar3 * (float)param_1[199]);
        param_1[0x77] = (int)local_74;
        param_1[0x78] = (int)local_70;
        param_1[0x79] = (int)local_6c;
        FUN_0041ce10((float)param_1[0x77] + *pfVar1,(float)param_1[0x69] + (float)param_1[0x78],
                     (float)param_1[0x6a] + (float)param_1[0x79]);
        pcVar17 = s__MovingBox__make_new_Pos__1_0067cc18;
      }
      local_64 = local_74;
      local_60 = local_70;
      local_5c = local_6c;
      FUN_004e20b1(&local_64,pcVar17,0x43160000);
      *pfVar1 = local_64;
      param_1[0x69] = (int)local_60;
      param_1[0x6a] = (int)local_5c;
    }
  }
  FUN_0041ce10(*pfVar1 - local_80,(float)param_1[0x69] - local_7c,(float)param_1[0x6a] - local_78);
  local_c = local_80;
  local_8 = local_7c;
  local_4 = local_78;
  fVar16 = (float10)FUN_005aabc0(pfVar1);
  local_68 = (float *)(float)fVar16;
  fVar16 = (float10)FUN_005aabc0(&local_c);
  if (((float10)fVar2 * (float10)_DAT_0064c4d8 < fVar16) || (_DAT_0064b2e8 < (float)local_68)) {
    iVar9 = *param_1;
    uVar11 = FUN_004bdd80(local_58,pfVar1,0x3f000000,0);
    (**(code **)(iVar9 + 0x90))(uVar11);
    iVar9 = *param_1;
    uVar11 = FUN_004bdd80(&local_60,param_1 + 0x6e,0x3f000000,0);
    (**(code **)(iVar9 + 0x98))(uVar11);
    FUN_005aabc0(pfVar1);
    iVar9 = *param_1;
    uVar11 = FUN_004bdd80(&local_68,pfVar1,0x3f000000,0);
    (**(code **)(iVar9 + 0x90))(uVar11);
    iVar9 = *param_1;
    uVar11 = FUN_004bdd80(&local_70,param_1 + 0x6e,0x3f000000,0);
    (**(code **)(iVar9 + 0x98))(uVar11);
  }
  FUN_004e20b1(pfVar1,s__MovingBox__make_new_Pos__3_0067cbe0,0x43160000);
  piVar12 = (int *)FUN_004bdd80(local_58,pfVar1,fVar2);
  param_1[0x313] = *piVar12;
  param_1[0x314] = piVar12[1];
  param_1[0x315] = piVar12[2];
  return;
code_r0x0058badf:
  iVar13 = iVar13 + 1;
  pfVar10 = pfVar10 + 1;
  if (3 < iVar13) goto LAB_0058baea;
  goto LAB_0058bad2;
code_r0x0058be96:
  iVar9 = iVar9 + 1;
  pfVar10 = pfVar10 + 1;
  if (3 < iVar9) goto LAB_0058bea1;
  goto LAB_0058be8d;
}

