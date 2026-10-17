
void __fastcall FUN_005937d0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = *puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 **)(param_1 + 0x6c) = puVar1;
  return;
}

