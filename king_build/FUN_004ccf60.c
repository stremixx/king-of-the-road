
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004ccf60(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  uint local_58;
  uint local_54;
  undefined1 local_3c [12];
  undefined4 local_30 [9];
  float local_c;
  float local_8;
  
  if (param_1[1] == 0) {
    param_1[2] = 0;
    return 0;
  }
  local_58 = 0;
  if (param_1[1] != 0) {
    local_54 = 0;
    do {
      piVar3 = (int *)(local_54 + param_1[3]);
      fVar8 = (float10)_DAT_0064b254;
      iVar5 = *piVar3;
      if (iVar5 != 1) {
        if (iVar5 == 2) {
          fVar8 = (float10)_DAT_0064b310;
        }
        else if (iVar5 == 3) {
          fVar8 = (float10)_DAT_0064b9c4;
        }
      }
      fVar8 = ((float10)(float)piVar3[9] * (float10)_DAT_0064b328 +
              (float10)(float)piVar3[10] * (float10)_DAT_0064b9bc +
              (float10)(float)piVar3[0xb] * (float10)_DAT_0064b9c0) * (float10)_DAT_0064b440 +
              ((float10)(float)piVar3[5] * (float10)_DAT_0064b328 +
              (float10)(float)piVar3[6] * (float10)_DAT_0064b9bc +
              (float10)(float)piVar3[7] * (float10)_DAT_0064b9c0) * (float10)_DAT_0064b440 +
              ((float10)(float)piVar3[1] * (float10)_DAT_0064b328 +
              (float10)(float)piVar3[2] * (float10)_DAT_0064b9bc +
              (float10)(float)piVar3[3] * (float10)_DAT_0064b9c0) * (float10)_DAT_0064b440 + fVar8;
      if (iVar5 != 3) {
        iVar5 = 4;
        do {
          FUN_004042a0();
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puVar4 = &DAT_00701550;
        puVar6 = local_30;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_005f1c30(local_30);
        FUN_0041ce10(local_c - (float)piVar3[0xd],local_8 - (float)piVar3[0xe],0);
        fVar9 = (float10)FUN_005aabc0(local_3c);
        fVar8 = ((float10)_DAT_0064b240 - fVar9 / (float10)*(double *)(param_2 + 0x2118)) *
                (float10)_DAT_0064b33c + (float10)(float)fVar8;
      }
      local_58 = local_58 + 1;
      piVar3[0x1b] = (int)(float)((float10)*(int *)(piVar3[0x1a] + 0x48) * (float10)_DAT_0064b9b8 +
                                 fVar8);
      local_54 = local_54 + 0x78;
    } while (local_58 < param_1[1]);
  }
  FUN_0061e57b(param_1[3],param_1[1],0x78,&LAB_004cce80);
  uVar7 = *param_1;
  if (param_1[1] <= *param_1) {
    uVar7 = param_1[1];
  }
  param_1[2] = uVar7;
  param_2 = 0;
  local_54 = 0;
  if (uVar7 != 0) {
    local_58 = 0;
    do {
      iVar5 = local_58 + param_1[3];
      if (*(int *)(*(int *)(iVar5 + 0x68) + 0x48) < 0x83) {
        iVar1 = FUN_004ccda0(*(int *)(iVar5 + 0x68),1);
        if (iVar1 == 0) {
          FUN_004ccbf0(*(undefined4 *)(iVar5 + 0x68));
        }
        else {
          FUN_004ccdf0(*(undefined4 *)(iVar5 + 0x68),iVar5);
          (**(code **)(*DAT_006951c0 + 0x48))(DAT_006951c0,*(undefined4 *)(iVar5 + 0x74),iVar5);
        }
        if (iVar1 != *(int *)(iVar5 + 0x70)) {
          if (iVar1 == 0) {
            *(undefined4 *)(iVar5 + 0x70) = 0;
            DAT_006951bc = DAT_006951bc + -1;
            iVar2 = *DAT_006951c0;
          }
          else {
            *(undefined4 *)(iVar5 + 0x70) = 1;
            DAT_006951bc = DAT_006951bc + 1;
            iVar2 = *DAT_006951c0;
          }
          iVar1 = (**(code **)(iVar2 + 0xb0))(DAT_006951c0,*(undefined4 *)(iVar5 + 0x74),iVar1 != 0)
          ;
LAB_004cd232:
          if (iVar1 < 0) goto LAB_004cd236;
        }
      }
      else if (*(int *)(iVar5 + 0x70) != 1) {
        iVar1 = (**(code **)(*DAT_006951c0 + 0x48))
                          (DAT_006951c0,*(undefined4 *)(iVar5 + 0x74),iVar5);
        if ((-1 < iVar1) &&
           (iVar1 = (**(code **)(*DAT_006951c0 + 0xb0))
                              (DAT_006951c0,*(undefined4 *)(iVar5 + 0x74),1), -1 < iVar1)) {
          *(undefined4 *)(iVar5 + 0x70) = 1;
          goto LAB_004cd232;
        }
LAB_004cd236:
        param_2 = iVar1;
      }
      local_54 = local_54 + 1;
      local_58 = local_58 + 0x78;
    } while (local_54 < param_1[2]);
  }
  uVar7 = param_1[2];
  if (uVar7 < param_1[1]) {
    do {
      iVar5 = FUN_004cd2a0(0,0);
      if (iVar5 < 0) {
        param_2 = iVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1[1]);
  }
  return param_2;
}

