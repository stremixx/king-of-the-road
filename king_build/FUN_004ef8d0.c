
undefined4 __fastcall FUN_004ef8d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3344) != 0) {
    iVar1 = FUN_004ef880();
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x3344) = 0;
  *(undefined2 *)(param_1 + 0x2748) = 1;
  return 1;
}

