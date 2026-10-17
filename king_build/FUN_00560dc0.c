
undefined4 * __thiscall
FUN_00560dc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 4;
  do {
    FUN_004042a0();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar1 = 4;
  puVar2 = &DAT_00701550;
  puVar4 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  do {
    FUN_004042a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = param_1 + 0xc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_00560620();
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x332] = 0xffffffff;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  FUN_00560a20();
  param_1[0x36c] = 0;
  param_1[0x36d] = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  param_1[0x371] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x374] = 0;
  FUN_00560f10(param_2,param_3);
  param_1[0x331] = param_4;
  return param_1;
}

