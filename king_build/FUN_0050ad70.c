
undefined4 * __fastcall FUN_0050ad70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 4;
  do {
    FUN_0050ace0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = param_1;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

