
void __fastcall FUN_004fe760(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x3c8c) = *(int *)(param_1 + 0x2780);
  if (*(int *)(param_1 + 0x2780) == 0) {
    iVar1 = FUN_004fe7a0();
    while (iVar1 != 0) {
      iVar1 = FUN_004fe7a0();
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x2780) = 0;
  return;
}

