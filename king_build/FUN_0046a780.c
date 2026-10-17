
void FUN_0046a780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  int local_18;
  
  iVar10 = param_4;
  local_18 = (int)param_2 - (int)param_1;
  puVar3 = param_3;
  puVar6 = param_1;
  if (param_4 * 2 <= local_18 >> 2) {
    iVar2 = param_4 * -8;
    puVar7 = param_1 + param_4;
    do {
      param_3 = puVar7 + iVar10;
      puVar6 = puVar7;
      puVar8 = param_1;
      while ((puVar8 != puVar7 && (puVar6 != param_3))) {
        fVar11 = (float10)FUN_00418960(puVar6,param_5);
        fVar12 = (float10)FUN_00418960(puVar8,param_5);
        if (fVar12 <= (float10)(double)fVar11) {
          uVar1 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = uVar1;
        }
        else {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = uVar1;
        }
        puVar3 = puVar3 + 1;
      }
      iVar4 = (int)puVar7 - (int)puVar8 >> 2;
      if (0 < iVar4) {
        iVar9 = (int)puVar8 - (int)puVar3;
        do {
          *puVar3 = *(undefined4 *)(iVar9 + (int)puVar3);
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (int)param_3 - (int)puVar6 >> 2;
      if (0 < iVar4) {
        iVar9 = (int)puVar6 - (int)puVar3;
        do {
          *puVar3 = *(undefined4 *)(iVar9 + (int)puVar3);
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_1 = param_1 + iVar10 * 2;
      puVar7 = puVar7 + iVar10 * 2;
      local_18 = local_18 + iVar2;
      puVar6 = param_1;
    } while (param_4 * 2 <= local_18 >> 2);
  }
  param_1 = (undefined4 *)((int)param_2 - (int)puVar6 >> 2);
  piVar5 = &param_4;
  if ((int)param_1 <= param_4) {
    piVar5 = (int *)&param_1;
  }
  puVar7 = puVar6 + *piVar5;
  puVar8 = puVar7;
  while ((puVar6 != puVar7 && (puVar8 != param_2))) {
    fVar11 = (float10)FUN_00418960(puVar8,param_5);
    fVar12 = (float10)FUN_00418960(puVar6,param_5);
    if (fVar12 <= (float10)(double)fVar11) {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = uVar1;
    }
    else {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = uVar1;
    }
    puVar3 = puVar3 + 1;
  }
  iVar10 = (int)puVar7 - (int)puVar6 >> 2;
  if (0 < iVar10) {
    iVar2 = (int)puVar6 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = (int)param_2 - (int)puVar8 >> 2;
  if (0 < iVar10) {
    iVar2 = (int)puVar8 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)((int)puVar3 + iVar2);
      puVar3 = puVar3 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

