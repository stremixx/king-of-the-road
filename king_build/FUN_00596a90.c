
void __fastcall FUN_00596a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = param_1 + 8;
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 6;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[4] = 0;
  param_1[0x1d] = 0;
  param_1[0x12] = 0;
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 6;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  return;
}

