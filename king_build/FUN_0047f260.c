
int FUN_0047f260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_18;
  int local_10;
  
  local_10 = (int)param_2 - (int)param_1;
  puVar5 = param_1;
  if ((int)param_4 * 2 <= local_10 / 0x28) {
    local_18 = param_1 + (int)param_4 * 10;
    puVar4 = param_3;
    do {
      param_3 = local_18;
      puVar5 = param_1;
      while ((puVar5 != local_18 && (param_3 != local_18 + (int)param_4 * 10))) {
        iVar2 = 10;
        puVar7 = puVar5;
        puVar8 = puVar4;
        if ((int)param_3[8] < (int)puVar5[8]) {
          puVar7 = param_3;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          param_3 = param_3 + 10;
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar5 = puVar5 + 10;
        }
        puVar4 = puVar4 + 10;
      }
      iVar2 = ((int)local_18 - (int)puVar5) / 0x28;
      if (0 < iVar2) {
        iVar6 = (int)puVar5 - (int)puVar4;
        puVar5 = puVar4;
        do {
          puVar4 = puVar5 + 10;
          iVar2 = iVar2 + -1;
          puVar7 = (undefined4 *)((int)puVar5 + iVar6);
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar5 = puVar4;
        } while (iVar2 != 0);
      }
      iVar2 = ((int)(local_18 + (int)param_4 * 10) - (int)param_3) / 0x28;
      if (0 < iVar2) {
        iVar6 = (int)param_3 - (int)puVar4;
        puVar5 = puVar4;
        do {
          puVar4 = puVar5 + 10;
          iVar2 = iVar2 + -1;
          puVar7 = (undefined4 *)(iVar6 + (int)puVar5);
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar5 = puVar4;
        } while (iVar2 != 0);
      }
      local_18 = local_18 + (int)param_4 * 0x14;
      param_1 = param_1 + (int)param_4 * 0x14;
      local_10 = local_10 + (int)param_4 * -0x50;
      param_3 = puVar4;
      puVar5 = param_1;
    } while ((int)param_4 * 2 <= local_10 / 0x28);
  }
  param_1 = (undefined4 *)(((int)param_2 - (int)puVar5) / 0x28);
  piVar1 = (int *)&param_4;
  if ((int)param_1 <= (int)param_4) {
    piVar1 = (int *)&param_1;
  }
  puVar4 = puVar5 + *piVar1 * 10;
  param_4 = puVar4;
  while ((puVar5 != puVar4 && (param_4 != param_2))) {
    iVar2 = 10;
    puVar7 = puVar5;
    puVar8 = param_4;
    puVar9 = param_3;
    if ((int)param_4[8] < (int)puVar5[8]) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      param_4 = param_4 + 10;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar5 = puVar5 + 10;
    }
    param_3 = param_3 + 10;
  }
  iVar2 = ((int)puVar4 - (int)puVar5) / 0x28;
  if (0 < iVar2) {
    iVar6 = (int)puVar5 - (int)param_3;
    puVar5 = param_3;
    do {
      param_3 = puVar5 + 10;
      iVar2 = iVar2 + -1;
      puVar4 = (undefined4 *)(iVar6 + (int)puVar5);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar5 = param_3;
    } while (iVar2 != 0);
  }
  iVar2 = ((int)param_2 - (int)param_4) * 0x66666667;
  iVar6 = ((int)param_2 - (int)param_4) / 0x28;
  if (0 < iVar6) {
    iVar2 = (int)param_4 - (int)param_3;
    do {
      iVar6 = iVar6 + -1;
      puVar5 = (undefined4 *)(iVar2 + (int)param_3);
      puVar4 = param_3;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      param_3 = param_3 + 10;
    } while (iVar6 != 0);
  }
  return iVar2;
}

