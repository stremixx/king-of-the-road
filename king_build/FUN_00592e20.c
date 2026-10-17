
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00592e20(int param_1,undefined4 *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float local_90;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    if ((*param_3 == _DAT_0064b254) && (param_3[1] == _DAT_0064b254)) {
      local_74 = DAT_007015a8 * param_3[1] - DAT_007015a4 * param_3[2];
      pfVar7 = &local_74;
      local_70 = DAT_007015a0 * param_3[2] - DAT_007015a8 * *param_3;
      pfVar11 = &local_18;
      local_6c = DAT_007015a4 * *param_3 - DAT_007015a0 * param_3[1];
    }
    else {
      local_30 = DAT_00701598 * param_3[1] - DAT_00701594 * param_3[2];
      pfVar7 = &local_30;
      local_2c = DAT_00701590 * param_3[2] - DAT_00701598 * *param_3;
      pfVar11 = &local_24;
      local_28 = DAT_00701594 * *param_3 - DAT_00701590 * param_3[1];
    }
    pfVar7 = (float *)FUN_005aaad0(pfVar11,pfVar7);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    local_74 = fVar3 * param_3[1] - fVar2 * param_3[2];
    local_70 = fVar1 * param_3[2] - fVar3 * *param_3;
    local_6c = fVar2 * *param_3 - fVar1 * param_3[1];
    local_60 = local_74;
    fStack_5c = local_70;
    local_58 = local_6c;
    FUN_005aaad0(&local_c,&local_74);
    local_30 = *param_3;
    uStack_50 = 0;
    local_54 = (float)param_4;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_4c = (float)param_4;
    local_64 = (float)param_4 * _DAT_0064b250;
    local_68 = 0.0;
    if (_DAT_0064b254 < local_64) {
      do {
        uStack_50 = 0;
        iVar8 = FUN_005937d0();
        if (iVar8 == 0) break;
        iVar9 = _rand();
        fVar4 = (float)iVar9 * _DAT_0064b244;
        iVar9 = _rand();
        fVar4 = ((float)iVar9 * _DAT_0064b244 - fVar4) * _DAT_0064b3f8;
        iVar9 = _rand();
        fVar5 = (float)iVar9 * _DAT_0064b244;
        iVar9 = _rand();
        fVar5 = ((float)iVar9 * _DAT_0064b244 - fVar5) * _DAT_0064b3f8;
        iVar9 = _rand();
        fVar6 = (float)iVar9 * _DAT_0064b244;
        iVar9 = _rand();
        local_40 = ((float)iVar9 * _DAT_0064b244 - fVar6) * _DAT_0064b3f8;
        fVar6 = fVar4;
        if ((ABS(fVar4) < (float)_DAT_0064a660) && (fVar6 = _DAT_0064b928, _DAT_0064b254 < fVar4)) {
          fVar6 = _DAT_0064b240;
        }
        fVar4 = fVar5;
        if ((ABS(fVar5) < (float)_DAT_0064a660) && (fVar4 = _DAT_0064b928, _DAT_0064b254 < fVar5)) {
          fVar4 = _DAT_0064b240;
        }
        local_58 = fVar4;
        if ((ABS(fVar4) < (float)_DAT_0064a660) && (local_58 = _DAT_0064b928, _DAT_0064b254 < fVar4)
           ) {
          local_58 = _DAT_0064b240;
        }
        local_48 = DAT_00701590 * local_40;
        local_44 = DAT_00701594 * local_40;
        local_40 = DAT_00701598 * local_40;
        local_60 = DAT_00701580 * local_58;
        fStack_5c = DAT_00701584 * local_58;
        local_58 = DAT_00701588 * local_58;
        local_74 = DAT_007015a0 * fVar6;
        local_70 = DAT_007015a4 * fVar6;
        fVar6 = fVar6 * DAT_007015a8;
        local_24 = local_74 + local_60;
        local_20 = fStack_5c + local_70;
        local_3c = local_24 + local_48;
        local_38 = local_44 + local_20;
        *(float *)(iVar8 + 0x28) = local_3c;
        local_34 = local_40 + fVar6 + local_58;
        *(float *)(iVar8 + 0x2c) = local_38;
        *(float *)(iVar8 + 0x30) = local_34;
        *(float *)(iVar8 + 4) = local_3c;
        *(float *)(iVar8 + 8) = local_38;
        *(float *)(iVar8 + 0xc) = local_34;
        *(undefined4 *)(iVar8 + 0x10) = DAT_007015b0;
        *(undefined4 *)(iVar8 + 0x14) = DAT_007015b4;
        *(undefined4 *)(iVar8 + 0x18) = DAT_007015b8;
        *(undefined4 *)(iVar8 + 0x34) = *param_2;
        *(undefined4 *)(iVar8 + 0x38) = param_2[1];
        *(undefined4 *)(iVar8 + 0x3c) = param_2[2];
        *(undefined4 *)(iVar8 + 0x1c) = *param_2;
        *(undefined4 *)(iVar8 + 0x20) = param_2[1];
        uVar10 = param_2[2];
        *(undefined4 *)(iVar8 + 0x78) = 0;
        *(undefined4 *)(iVar8 + 0x24) = uVar10;
        *(float *)(iVar8 + 0x40) = (float)*(double *)(*(int *)(param_1 + 0x60) + 0xb98);
        iVar9 = _rand();
        if (_DAT_0064b438 <= (float)iVar9 * _DAT_0064f95c) {
          *(undefined4 *)(iVar8 + 0x44) = DAT_006f55f8;
          *(undefined4 *)(iVar8 + 0x48) = DAT_006f55fc;
          *(undefined4 *)(iVar8 + 0x4c) = DAT_006f5600;
          *(undefined4 *)(iVar8 + 0x50) = DAT_006f5604;
          *(undefined4 *)(iVar8 + 0x54) = DAT_006f55b8;
          *(undefined4 *)(iVar8 + 0x58) = DAT_006f55bc;
          *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55c0;
          *(undefined4 *)(iVar8 + 0x60) = DAT_006f55c4;
          *(undefined4 *)(iVar8 + 100) = DAT_006f55a8;
          *(undefined4 *)(iVar8 + 0x68) = DAT_006f55ac;
          *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55b0;
          uVar10 = DAT_006f55b4;
        }
        else {
          *(undefined4 *)(iVar8 + 0x44) = DAT_006f55c8;
          *(undefined4 *)(iVar8 + 0x48) = DAT_006f55cc;
          *(undefined4 *)(iVar8 + 0x4c) = DAT_006f55d0;
          *(undefined4 *)(iVar8 + 0x50) = DAT_006f55d4;
          *(undefined4 *)(iVar8 + 0x54) = DAT_006f55e8;
          *(undefined4 *)(iVar8 + 0x58) = DAT_006f55ec;
          *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55f0;
          *(undefined4 *)(iVar8 + 0x60) = DAT_006f55f4;
          *(undefined4 *)(iVar8 + 100) = DAT_006f55d8;
          *(undefined4 *)(iVar8 + 0x68) = DAT_006f55dc;
          *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55e0;
          uVar10 = DAT_006f55e4;
        }
        *(undefined4 *)(iVar8 + 0x70) = uVar10;
        local_68 = (float)((int)local_68 + 1);
        uStack_50 = 0;
        *(undefined4 *)(iVar8 + 0x74) = 0x3f800000;
        local_54 = local_68;
      } while ((float)(uint)local_68 < local_64);
    }
    local_68 = 0.0;
    local_64 = local_4c * _DAT_0064dd78 + _DAT_0064b240;
    fVar5 = local_4c * _DAT_0064b24c;
    fVar4 = _DAT_0064b254;
    while ((fVar4 < fVar5 && (iVar8 = FUN_005937d0(), iVar8 != 0))) {
      iVar9 = _rand();
      fVar4 = (float)iVar9 * _DAT_0064b244;
      iVar9 = _rand();
      local_54 = ((float)iVar9 * _DAT_0064b244 - fVar4) * local_64;
      iVar9 = _rand();
      fVar4 = (float)iVar9 * _DAT_0064b244;
      iVar9 = _rand();
      fVar4 = ((float)iVar9 * _DAT_0064b244 - fVar4) * local_64;
      iVar9 = _rand();
      local_90 = (float)iVar9 * _DAT_0064b244 + _DAT_0064b240;
      fVar6 = local_54;
      if ((ABS(local_54) < (float)_DAT_0064a660) &&
         (fVar6 = _DAT_0064b928, _DAT_0064b254 < local_54)) {
        fVar6 = _DAT_0064b240;
      }
      local_34 = fVar4;
      if ((ABS(fVar4) < (float)_DAT_0064a660) && (local_34 = _DAT_0064b928, _DAT_0064b254 < fVar4))
      {
        local_34 = _DAT_0064b240;
      }
      if (_DAT_0064b340 < local_90) {
        local_90 = 1.5;
      }
      local_48 = local_30 * local_90;
      local_44 = local_2c * local_90;
      local_40 = local_28 * local_90;
      local_3c = local_c * local_34;
      local_38 = local_8 * local_34;
      local_34 = local_4 * local_34;
      local_24 = fVar1 * fVar6;
      local_20 = fVar2 * fVar6;
      local_18 = local_24 + local_3c;
      local_14 = local_38 + local_20;
      local_74 = local_18 + local_48;
      local_70 = local_44 + local_14;
      *(float *)(iVar8 + 0x28) = local_74;
      local_6c = local_40 + fVar6 * fVar3 + local_34;
      *(float *)(iVar8 + 0x2c) = local_70;
      *(float *)(iVar8 + 0x30) = local_6c;
      *(float *)(iVar8 + 4) = local_74;
      *(float *)(iVar8 + 8) = local_70;
      *(float *)(iVar8 + 0xc) = local_6c;
      *(undefined4 *)(iVar8 + 0x10) = DAT_007015b0;
      *(undefined4 *)(iVar8 + 0x14) = DAT_007015b4;
      *(undefined4 *)(iVar8 + 0x18) = DAT_007015b8;
      *(undefined4 *)(iVar8 + 0x34) = *param_2;
      *(undefined4 *)(iVar8 + 0x38) = param_2[1];
      *(undefined4 *)(iVar8 + 0x3c) = param_2[2];
      *(undefined4 *)(iVar8 + 0x1c) = *param_2;
      *(undefined4 *)(iVar8 + 0x20) = param_2[1];
      uVar10 = param_2[2];
      *(undefined4 *)(iVar8 + 0x78) = 0;
      *(undefined4 *)(iVar8 + 0x24) = uVar10;
      *(float *)(iVar8 + 0x40) = (float)*(double *)(*(int *)(param_1 + 0x60) + 0xb98);
      local_54 = (float)_rand();
      if (_DAT_0064b438 <= (float)(int)local_54 * _DAT_0064f95c) {
        *(undefined4 *)(iVar8 + 0x44) = DAT_006f55f8;
        *(undefined4 *)(iVar8 + 0x48) = DAT_006f55fc;
        *(undefined4 *)(iVar8 + 0x4c) = DAT_006f5600;
        *(undefined4 *)(iVar8 + 0x50) = DAT_006f5604;
        *(undefined4 *)(iVar8 + 0x54) = DAT_006f55b8;
        *(undefined4 *)(iVar8 + 0x58) = DAT_006f55bc;
        *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55c0;
        *(undefined4 *)(iVar8 + 0x60) = DAT_006f55c4;
        *(undefined4 *)(iVar8 + 100) = DAT_006f55a8;
        *(undefined4 *)(iVar8 + 0x68) = DAT_006f55ac;
        *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55b0;
        uVar10 = DAT_006f55b4;
      }
      else {
        *(undefined4 *)(iVar8 + 0x44) = DAT_006f55c8;
        *(undefined4 *)(iVar8 + 0x48) = DAT_006f55cc;
        *(undefined4 *)(iVar8 + 0x4c) = DAT_006f55d0;
        *(undefined4 *)(iVar8 + 0x50) = DAT_006f55d4;
        *(undefined4 *)(iVar8 + 0x54) = DAT_006f55e8;
        *(undefined4 *)(iVar8 + 0x58) = DAT_006f55ec;
        *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55f0;
        *(undefined4 *)(iVar8 + 0x60) = DAT_006f55f4;
        *(undefined4 *)(iVar8 + 100) = DAT_006f55d8;
        *(undefined4 *)(iVar8 + 0x68) = DAT_006f55dc;
        *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55e0;
        uVar10 = DAT_006f55e4;
      }
      fStack_5c = 0.0;
      local_68 = (float)((int)local_68 + 1);
      *(undefined4 *)(iVar8 + 0x70) = uVar10;
      fVar4 = (float)(uint)local_68;
      *(undefined4 *)(iVar8 + 0x74) = 0x3f800000;
      local_60 = local_68;
    }
    FUN_00594390(*(undefined4 *)(param_1 + 0x60),param_2,local_4c * _DAT_0064b258,DAT_0064f8e4,
                 0x3da3d70a);
  }
  return;
}

