
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004cd4a0(uint *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_68 [26];
  
  uVar1 = param_1[1];
  if (((_DAT_0064b448 <= (float)uVar1) || (param_4 == 0)) || (DAT_00695184 == 0)) {
    return -0x7fffbffb;
  }
  puVar6 = local_68;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1[3] + uVar1 * 0x78);
  puVar6[0x1d] = uVar1;
  puVar6[0x1c] = 0;
  puVar5 = local_68;
  puVar7 = puVar6;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6[0x1a] = param_4;
  if (param_1[2] < *param_1) {
    iVar3 = param_1[3] + param_1[1] * 0x78;
    iVar2 = *(int *)(param_1[3] + 0x68 + param_1[1] * 0x78);
    if (*(int *)(iVar2 + 0x48) < 0x83) {
      iVar2 = FUN_004ccda0(iVar2,1);
      if (iVar2 == 0) {
        FUN_004ccbf0(*(undefined4 *)(iVar3 + 0x68));
      }
      else {
        FUN_004ccdf0(*(undefined4 *)(iVar3 + 0x68),iVar3);
        (**(code **)(*DAT_006951c0 + 0x48))(DAT_006951c0,*(undefined4 *)(iVar3 + 0x74),iVar3);
      }
      if (iVar2 == *(int *)(iVar3 + 0x70)) {
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        return 0;
      }
      if (iVar2 == 0) {
        *(undefined4 *)(iVar3 + 0x70) = 0;
        DAT_006951bc = DAT_006951bc + -1;
        iVar4 = *DAT_006951c0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = 1;
        DAT_006951bc = DAT_006951bc + 1;
        iVar4 = *DAT_006951c0;
      }
      iVar2 = (**(code **)(iVar4 + 0xb0))(DAT_006951c0,*(undefined4 *)(iVar3 + 0x74),iVar2 != 0);
    }
    else {
      if (*(int *)(iVar3 + 0x70) == 1) {
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        return 0;
      }
      iVar2 = (**(code **)(*DAT_006951c0 + 0x48))(DAT_006951c0,*(undefined4 *)(iVar3 + 0x74),iVar3);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(iVar3 + 0x74),1);
        if (-1 < iVar2) {
          *(undefined4 *)(iVar3 + 0x70) = 1;
          param_1[2] = param_1[2] + 1;
          param_1[1] = param_1[1] + 1;
          return iVar2;
        }
      }
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + 1;
    return iVar2;
  }
  param_1[1] = param_1[1] + 1;
  iVar3 = FUN_004ccf60(param_3);
  return iVar3;
}

