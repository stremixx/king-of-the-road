
undefined4 *
FUN_00470400(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = param_4;
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if ((uint)param_3[2] < (uint)param_1[2]) {
      *param_5 = *param_3;
      param_5[1] = param_3[1];
      param_5[2] = param_3[2];
      puVar3 = param_1;
      param_3 = param_3 + 3;
    }
    else {
      puVar3 = param_1 + 3;
      *param_5 = *param_1;
      param_5[1] = param_1[1];
      param_5[2] = param_1[2];
    }
    param_5 = param_5 + 3;
    param_1 = puVar3;
  }
  param_4 = (undefined4 *)(((int)param_2 - (int)param_1) / 0xc);
  if (0 < (int)param_4) {
    iVar5 = (int)param_1 - (int)param_5;
    puVar3 = param_5;
    do {
      puVar1 = (undefined4 *)(iVar5 + (int)puVar3);
      param_5 = puVar3 + 3;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      param_4 = (undefined4 *)((int)param_4 + -1);
      puVar3 = param_5;
    } while (param_4 != (undefined4 *)0x0);
  }
  iVar5 = ((int)puVar4 - (int)param_3) / 0xc;
  if (0 < iVar5) {
    iVar2 = (int)param_3 - (int)param_5;
    puVar4 = param_5;
    do {
      puVar3 = (undefined4 *)(iVar2 + (int)puVar4);
      param_5 = puVar4 + 3;
      iVar5 = iVar5 + -1;
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4 = param_5;
    } while (iVar5 != 0);
  }
  return param_5;
}

