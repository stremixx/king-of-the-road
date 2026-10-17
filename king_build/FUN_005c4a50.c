
void __fastcall FUN_005c4a50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005c4a80();
  puVar2 = (undefined4 *)(param_1 + 0x20b4);
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_005c4010();
  return;
}

