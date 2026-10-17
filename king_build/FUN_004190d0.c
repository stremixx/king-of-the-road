
undefined4 FUN_004190d0(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 100) != 0x100) && (*(int *)(param_1 + 100) != 0x101)) {
    cVar1 = FUN_00419040(param_1 + 8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

