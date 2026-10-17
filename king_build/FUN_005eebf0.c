
void __fastcall FUN_005eebf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  puVar3 = &DAT_00701550;
  puVar1 = param_1;
  for (iVar2 = 0xc; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  return;
}

