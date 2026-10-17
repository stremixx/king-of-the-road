
undefined4 * __fastcall FUN_00550fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_005f1020(&DAT_0068c120,6,1);
  iVar2 = 4;
  puVar1 = param_1 + 0x12;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &DAT_00701550;
  puVar3 = param_1 + 0x10;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = &PTR_FUN_0064c7c0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}

