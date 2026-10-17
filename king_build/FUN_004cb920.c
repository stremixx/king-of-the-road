
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb920(int param_1,float *param_2,float *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  float *pfVar7;
  float fVar8;
  undefined4 *puVar9;
  float local_c0;
  float local_bc;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
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
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d12;
  local_c = ExceptionList;
  if ((param_1 != *(int *)(DAT_006d0fd8 + 0x268)) || (*(int *)(DAT_006d0fd8 + 0x578) != 0)) {
    ExceptionList = &local_c;
    uVar1 = FUN_0059fa10(param_1,param_4);
    FUN_0059f920(param_1,param_2,param_3,param_4,param_5);
    fVar6 = (float10)fsin((float10)param_2[1] * (float10)_DAT_0064b318);
    fsin((float10)*param_2 * (float10)_DAT_0064b960 + fVar6);
    fVar6 = (float10)fsin((float10)*param_2 * (float10)_DAT_0064b318);
    fsin((float10)param_2[1] * (float10)_DAT_0064b960 + fVar6);
    if (param_5 == 0) {
      iVar2 = __ftol();
      iVar3 = __ftol();
      uVar4 = (iVar3 - iVar2) + 5;
    }
    else if (param_5 == 2) {
      iVar2 = __ftol();
      iVar3 = __ftol();
      uVar4 = (iVar3 - iVar2) + 5;
    }
    else {
      if (param_5 != 1) {
        ExceptionList = local_c;
        return;
      }
      iVar2 = __ftol();
      iVar3 = __ftol();
      uVar4 = (iVar3 - iVar2) + 0x1e;
    }
    if ((-1 < (int)uVar4) && (uVar1 < uVar4)) {
      iVar2 = uVar4 - uVar1;
      local_ac = *(float *)(param_1 + 0x1b0);
      local_a8 = *(float *)(param_1 + 0x1b4);
      local_a4 = *(float *)(param_1 + 0x1b8);
      fVar6 = (float10)FUN_005aabc0(&local_ac);
      local_b4 = (float)(fVar6 * (float10)_DAT_0064b960);
      if ((float10)_DAT_0064b954 < fVar6 * (float10)_DAT_0064b960) {
        local_b4 = 0.95;
      }
      local_c0 = 0.0;
      local_bc = 0.0;
      if ((param_5 == 0) || (param_5 == 2)) {
        local_bc = 0.05;
        local_c0 = 1.5;
      }
      else if (param_5 == 1) {
        local_bc = 0.05;
        local_c0 = 3.0;
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar3 = _rand();
        if (_DAT_0064b248 <= (float)iVar3 * _DAT_0064b244) {
          iVar3 = _rand();
          if ((float)_DAT_0064b948 <= (float)iVar3 * _DAT_0064b244) {
            iVar3 = _rand();
            fVar8 = (float)iVar3 * _DAT_0064b944 + _DAT_0064b93c;
          }
          else {
            iVar3 = _rand();
            fVar8 = (float)iVar3 * _DAT_0064b944 + _DAT_0064b940;
          }
        }
        else {
          iVar3 = _rand();
          fVar8 = (float)iVar3 * _DAT_0064b950;
        }
        fVar8 = fVar8 * local_c0 + local_bc;
        if (param_5 == 0) {
          local_a0 = FUN_00578a50(0xbc,DAT_006f5a18);
          local_4 = 2;
          if (local_a0 != 0) {
            local_70 = local_a4 * _DAT_0064b954;
            local_74 = local_a8 * _DAT_0064b954;
            local_78 = local_ac * _DAT_0064b954;
            puVar9 = &DAT_00694c2c;
            local_58 = fVar8 * param_3[2] + param_2[2];
            local_5c = fVar8 * param_3[1] + param_2[1];
            local_60 = fVar8 * *param_3 + *param_2;
            fVar8 = _DAT_0064b240 - local_b4;
            pfVar7 = &local_30;
            pfVar5 = &local_18;
            local_30 = local_78;
            local_2c = local_74;
            local_28 = local_70;
            local_18 = local_60;
            local_14 = local_5c;
            local_10 = local_58;
LAB_004cbec8:
            FUN_0059fa60(param_1,param_4,pfVar5,pfVar7,fVar8,0x3f800000,puVar9,1);
          }
LAB_004cbed2:
          local_4 = 0xffffffff;
        }
        else {
          if (param_5 == 1) {
            local_a0 = FUN_00578a50(0xbc,DAT_006f5a18);
            local_4 = 0;
            if (local_a0 != 0) {
              local_64 = local_a4 * _DAT_0064b954;
              local_68 = local_a8 * _DAT_0064b954;
              local_6c = local_ac * _DAT_0064b954;
              puVar9 = &DAT_00694c1c;
              local_88 = fVar8 * param_3[2] + param_2[2];
              local_8c = fVar8 * param_3[1] + param_2[1];
              local_90 = fVar8 * *param_3 + *param_2;
              fVar8 = _DAT_0064b240 - local_b4;
              pfVar7 = &local_24;
              pfVar5 = &local_48;
              local_48 = local_90;
              local_44 = local_8c;
              local_40 = local_88;
              local_24 = local_6c;
              local_20 = local_68;
              local_1c = local_64;
              goto LAB_004cbec8;
            }
            goto LAB_004cbed2;
          }
          if (param_5 == 2) {
            local_a0 = FUN_00578a50(0xbc,DAT_006f5a18);
            local_4 = 1;
            if (local_a0 != 0) {
              local_7c = local_a4 * _DAT_0064b954;
              local_80 = local_a8 * _DAT_0064b954;
              local_84 = local_ac * _DAT_0064b954;
              puVar9 = &DAT_00694c30;
              local_94 = fVar8 * param_3[2] + param_2[2];
              local_98 = fVar8 * param_3[1] + param_2[1];
              local_9c = fVar8 * *param_3 + *param_2;
              fVar8 = _DAT_0064b240 - local_b4;
              pfVar7 = &local_54;
              pfVar5 = &local_3c;
              local_54 = local_84;
              local_50 = local_80;
              local_4c = local_7c;
              local_3c = local_9c;
              local_38 = local_98;
              local_34 = local_94;
              goto LAB_004cbec8;
            }
            goto LAB_004cbed2;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

