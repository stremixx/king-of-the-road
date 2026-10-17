
undefined4 * __fastcall FUN_005410b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = param_1 + 0x32;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x3e;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x23;
  puVar3 = param_1 + 5;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *param_1 = 1;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  iVar2 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar2 + 0x61) = 0;
    puVar1[-8] = 0;
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  param_1[0x31] = 0xbf000000;
  iVar2 = 8;
  puVar1 = param_1 + 0x3e;
  do {
    puVar1[-0xc] = DAT_007015b0;
    puVar1[-0xb] = DAT_007015b4;
    puVar1[-10] = DAT_007015b8;
    iVar2 = iVar2 + -1;
    *puVar1 = DAT_007015b0;
    puVar1[1] = DAT_007015b4;
    puVar1[2] = DAT_007015b8;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  param_1[0x2e] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x53] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  param_1[0x4a] = 0x3f800000;
  param_1[0x4e] = 1;
  return param_1;
}

