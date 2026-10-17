
int * __thiscall FUN_004618d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = param_2[1];
  puVar4 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)*param_2;
  uVar5 = iVar2 - (int)puVar8 >> 4;
  if ((uint)(param_1[2] - (int)puVar4 >> 4) < uVar5) {
    iVar1 = FUN_00461de0(uVar5,puVar8,iVar2);
    iVar2 = param_1[1];
    for (iVar7 = *param_1; iVar7 != iVar2; iVar7 = iVar7 + 0x10) {
      FUN_00602380();
    }
    iVar2 = param_1[2] - *param_1 >> 4;
    if (iVar2 != 0) {
      FUN_0044b440(*param_1,iVar2 << 4);
    }
    param_1[1] = uVar5 * 0x10 + iVar1;
    *param_1 = iVar1;
    param_1[2] = uVar5 * 0x10 + iVar1;
    return param_1;
  }
  uVar3 = param_1[1] - (int)puVar4 >> 4;
  if (uVar3 < uVar5) {
    local_8 = (int)(uVar3 << 4) >> 4;
    if (0 < local_8) {
      puVar6 = puVar8 + 1;
      do {
        *puVar4 = *puVar8;
        FUN_0044c100(puVar6);
        puVar8 = puVar8 + 4;
        puVar6 = puVar6 + 4;
        puVar4 = puVar4 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    FUN_004662a0((param_1[1] - *param_1 >> 4) * 0x10 + *param_2,param_2[1],param_1[1],param_2);
  }
  else {
    param_2 = (int *)(iVar2 - (int)puVar8 >> 4);
    if (0 < (int)param_2) {
      do {
        FUN_0042c0c0(puVar8);
        puVar8 = puVar8 + 4;
        puVar4 = puVar4 + 4;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
    }
    puVar8 = (undefined4 *)param_1[1];
    if (puVar4 != puVar8) {
      do {
        FUN_00602380();
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar8);
      param_1[1] = uVar5 * 0x10 + *param_1;
      return param_1;
    }
  }
  param_1[1] = uVar5 * 0x10 + *param_1;
  return param_1;
}

