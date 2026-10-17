
undefined4 __thiscall FUN_005e5c80(ushort *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  ushort *local_4;
  
  uVar4 = param_2;
  local_4 = param_1;
  uVar5 = FUN_005aa810(param_2);
  *param_1 = uVar5;
  param_1[3] = uVar5 >> 8;
  FUN_0061d8bf(&local_4,4,1,param_2);
  uVar5 = FUN_005aa810(param_2);
  param_1[0x11] = uVar5;
  uVar5 = FUN_005aa810(param_2);
  param_1[0x10] = uVar5;
  uVar5 = FUN_005aa810(param_2);
  param_1[2] = uVar5;
  param_1[1] = (ushort)DAT_0071efcc;
  DAT_0071efcc = DAT_0071efcc + 1;
  uVar6 = FUN_00631d33((uint)param_1[2] << 2);
  *(undefined4 *)(param_1 + 8) = uVar6;
  uVar6 = FUN_00631d33((uint)param_1[2] << 2);
  *(undefined4 *)(param_1 + 10) = uVar6;
  if ((*param_1 & 2) != 0) {
    param_1[3] = param_1[3] + 1;
    uVar6 = FUN_00631d33((uint)param_1[3] * (uint)param_1[2] * 4);
    *(undefined4 *)(param_1 + 4) = uVar6;
    uVar6 = FUN_00631d33((uint)param_1[3] * (uint)param_1[2] * 4);
    *(undefined4 *)(param_1 + 6) = uVar6;
  }
  param_2 = 0;
  if (param_1[2] != 0) {
    do {
      iVar7 = param_2 * 4;
      fVar9 = (float10)FUN_005aa860(uVar4);
      *(float *)(iVar7 + *(int *)(param_1 + 8)) = (float)fVar9;
      fVar9 = (float10)FUN_005aa860(uVar4);
      *(float *)(*(int *)(param_1 + 10) + iVar7) = (float)fVar9;
      if (((*param_1 & 2) != 0) && (iVar8 = 0, param_1[3] != 0)) {
        do {
          fVar9 = (float10)FUN_005aa860(uVar4);
          *(float *)(iVar7 + *(int *)(param_1 + 4)) = (float)fVar9;
          fVar9 = (float10)FUN_005aa860(uVar4);
          iVar8 = iVar8 + 1;
          *(float *)(*(int *)(param_1 + 6) + iVar7) = (float)fVar9;
          iVar7 = iVar7 + 8;
        } while (iVar8 < (int)(uint)param_1[3]);
      }
      param_2 = param_2 + 1;
    } while (param_2 < (int)(uint)param_1[2]);
  }
  if ((*param_1 & 2) != 0) {
    fVar1 = (*(float **)(param_1 + 4))[1] - **(float **)(param_1 + 4);
    fVar2 = (*(float **)(param_1 + 6))[1] - **(float **)(param_1 + 6);
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    *(float *)(param_1 + 0xe) = fVar1;
    fVar3 = (*(float **)(param_1 + 10))[1] - **(float **)(param_1 + 10);
    fVar2 = (*(float **)(param_1 + 8))[1] - **(float **)(param_1 + 8);
    *(float *)(param_1 + 0xe) = SQRT(fVar3 * fVar3 + fVar2 * fVar2) / fVar1;
  }
  return 1;
}

