
undefined4 * __thiscall
FUN_004cd6a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 4;
  puVar1 = param_1 + 0x40;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0x3e;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4a] = DAT_0068a8f0;
  *param_1 = param_2;
  param_1[1] = param_3;
  _strncpy((char *)(param_1 + 4),param_4,0x20);
  puVar1 = param_1 + 0x3e;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_5;
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[0x4a] = param_6;
  param_1[2] = param_9;
  param_1[3] = param_10;
  param_1[0x3d] = param_8;
  if (param_7 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0xc;
    for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_7;
      param_7 = param_7 + 1;
      puVar1 = puVar1 + 1;
    }
    return param_1;
  }
  FUN_005460f0(param_1 + 0xc);
  return param_1;
}

