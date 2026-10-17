
void FUN_00470170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_14;
  
  local_14 = (int)param_2 - (int)param_1;
  puVar3 = param_1;
  if (param_4 * 2 <= local_14 / 0xc) {
    puVar9 = param_1 + param_4 * 3;
    puVar2 = param_3;
    do {
      param_3 = puVar9 + param_4 * 3;
      puVar3 = param_3;
      puVar4 = puVar9;
      puVar8 = param_1;
      while ((puVar6 = param_3, puVar8 != puVar9 && (puVar6 = puVar3, puVar4 != puVar3))) {
        if ((uint)puVar4[2] < (uint)puVar8[2]) {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar4 = puVar4 + 3;
          puVar6 = puVar8;
        }
        else {
          puVar6 = puVar8 + 3;
          *puVar2 = *puVar8;
          puVar2[1] = puVar8[1];
          puVar2[2] = puVar8[2];
        }
        puVar2 = puVar2 + 3;
        puVar3 = param_3;
        puVar8 = puVar6;
      }
      param_3 = (undefined4 *)(((int)puVar9 - (int)puVar8) / 0xc);
      if (0 < (int)param_3) {
        iVar7 = (int)puVar8 - (int)puVar2;
        puVar3 = puVar2;
        do {
          puVar8 = (undefined4 *)(iVar7 + (int)puVar3);
          puVar2 = puVar3 + 3;
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          param_3 = (undefined4 *)((int)param_3 + -1);
          puVar3 = puVar2;
        } while (param_3 != (undefined4 *)0x0);
      }
      iVar7 = ((int)puVar6 - (int)puVar4) / 0xc;
      if (0 < iVar7) {
        iVar5 = (int)puVar4 - (int)puVar2;
        puVar3 = puVar2;
        do {
          puVar4 = (undefined4 *)(iVar5 + (int)puVar3);
          puVar2 = puVar3 + 3;
          iVar7 = iVar7 + -1;
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3 = puVar2;
        } while (iVar7 != 0);
      }
      param_1 = param_1 + param_4 * 6;
      puVar9 = puVar9 + param_4 * 6;
      local_14 = local_14 + param_4 * -0x18;
      param_3 = puVar2;
      puVar3 = param_1;
    } while (param_4 * 2 <= local_14 / 0xc);
  }
  param_1 = (undefined4 *)(((int)param_2 - (int)puVar3) / 0xc);
  piVar1 = &param_4;
  if ((int)param_1 <= param_4) {
    piVar1 = (int *)&param_1;
  }
  puVar9 = puVar3 + *piVar1 * 3;
  puVar2 = puVar9;
  while ((puVar3 != puVar9 && (puVar2 != param_2))) {
    if ((uint)puVar2[2] < (uint)puVar3[2]) {
      *param_3 = *puVar2;
      param_3[1] = puVar2[1];
      param_3[2] = puVar2[2];
      puVar4 = puVar3;
      puVar2 = puVar2 + 3;
    }
    else {
      puVar4 = puVar3 + 3;
      *param_3 = *puVar3;
      param_3[1] = puVar3[1];
      param_3[2] = puVar3[2];
    }
    param_3 = param_3 + 3;
    puVar3 = puVar4;
  }
  param_1 = (undefined4 *)(((int)puVar9 - (int)puVar3) / 0xc);
  if (0 < (int)param_1) {
    iVar7 = (int)puVar3 - (int)param_3;
    puVar3 = param_3;
    do {
      puVar9 = (undefined4 *)(iVar7 + (int)puVar3);
      param_3 = puVar3 + 3;
      *puVar3 = *puVar9;
      puVar3[1] = puVar9[1];
      puVar3[2] = puVar9[2];
      param_1 = (undefined4 *)((int)param_1 + -1);
      puVar3 = param_3;
    } while (param_1 != (undefined4 *)0x0);
  }
  iVar7 = ((int)param_2 - (int)puVar2) / 0xc;
  if (0 < iVar7) {
    puVar3 = param_3;
    do {
      puVar9 = (undefined4 *)(((int)puVar2 - (int)param_3) + (int)puVar3);
      iVar7 = iVar7 + -1;
      *puVar3 = *puVar9;
      puVar3[1] = puVar9[1];
      puVar3[2] = puVar9[2];
      puVar3 = puVar3 + 3;
    } while (iVar7 != 0);
  }
  return;
}

