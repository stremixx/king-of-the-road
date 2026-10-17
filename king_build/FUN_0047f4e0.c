
undefined4 *
FUN_0047f4e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    iVar1 = 10;
    puVar3 = param_1;
    puVar5 = param_3;
    puVar6 = param_5;
    if ((int)param_3[8] < (int)param_1[8]) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_3 = param_3 + 10;
    }
    else {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1 = param_1 + 10;
    }
    param_5 = param_5 + 10;
  }
  iVar1 = ((int)param_2 - (int)param_1) / 0x28;
  if (0 < iVar1) {
    iVar4 = (int)param_1 - (int)param_5;
    puVar3 = param_5;
    do {
      param_5 = puVar3 + 10;
      iVar1 = iVar1 + -1;
      puVar5 = (undefined4 *)((int)puVar3 + iVar4);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar3 = param_5;
    } while (iVar1 != 0);
  }
  iVar1 = ((int)param_4 - (int)param_3) / 0x28;
  if (0 < iVar1) {
    iVar4 = (int)param_3 - (int)param_5;
    puVar3 = param_5;
    do {
      param_5 = puVar3 + 10;
      iVar1 = iVar1 + -1;
      puVar5 = (undefined4 *)(iVar4 + (int)puVar3);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar3 = param_5;
    } while (iVar1 != 0);
  }
  return param_5;
}

