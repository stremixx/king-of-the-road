
undefined4 FUN_00415640(int *param_1)

{
  char cVar1;
  
  if (param_1[8] == 3) {
    FUN_004489a0(param_1 + 9);
    cVar1 = FUN_00415690();
    if ((cVar1 != '\0') && (*(char *)(*param_1 + DAT_006897c0) != '\0')) {
      return 1;
    }
  }
  return 0;
}

