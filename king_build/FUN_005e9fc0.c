
void __fastcall FUN_005e9fc0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x40); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x10) == 0xf) {
      FUN_005fbdb0();
    }
  }
  return;
}

