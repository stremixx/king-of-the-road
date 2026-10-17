
undefined4 * __thiscall FUN_004bd640(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = param_1 + 0xb;
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 9;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar2 = 4;
    do {
      FUN_004042a0();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return param_1;
  }
  *param_1 = param_2[0xd];
  param_1[1] = param_2[0xe];
  param_1[2] = param_2[0xf];
  param_1[3] = param_2[0x10];
  param_1[4] = param_2[0x11];
  param_1[5] = param_2[0x12];
  if (((int *)param_2[0x1b] == (int *)0x0) ||
     (((iVar2 = *(int *)param_2[0x1b], iVar2 != 5 && (iVar2 != 8)) && (iVar2 != 6)))) {
    param_1[6] = 0;
    iVar2 = param_2[0x1a];
    param_1[0x15] = iVar2;
    if (iVar2 != 0) {
      param_1[0x16] = *(undefined4 *)(param_2[0x1a] + 0x24);
    }
  }
  else {
    param_1[6] = iVar2;
    param_1[8] = *(undefined4 *)(param_2[0x1b] + 8);
    param_1[7] = param_2[0x1c];
    puVar3 = param_1 + 9;
    puVar1 = param_2;
    for (iVar2 = 0xc; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = param_2[0x1a];
    param_1[0x15] = iVar2;
    if (iVar2 != 0) {
      param_1[0x16] = *(undefined4 *)(param_2[0x1a] + 0x24);
      return param_1;
    }
  }
  return param_1;
}

