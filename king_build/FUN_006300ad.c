
undefined4 * FUN_006300ad(void)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  undefined4 *extraout_ECX;
  char *pcVar3;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00630a73();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x13] = 0;
  _Str = *(char **)(unaff_EBP + 8);
  *extraout_ECX = &PTR_FUN_00654548;
  extraout_ECX[0x16] = 1;
  if (iVar1 == 0) {
    sVar2 = _strlen(_Str);
    pcVar3 = _Str + sVar2;
  }
  else if (iVar1 < 0) {
    pcVar3 = (char *)0xffffffff;
  }
  else {
    pcVar3 = _Str + iVar1;
  }
  FUN_00630c81(_Str,pcVar3,0);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[9] = _Str;
  extraout_ECX[10] = _Str;
  if (iVar1 == 0) {
    extraout_ECX[3] = 0xffffffff;
    extraout_ECX[0xb] = pcVar3;
    extraout_ECX[6] = 0;
    extraout_ECX[7] = 0;
    extraout_ECX[8] = 0;
  }
  else {
    extraout_ECX[3] = 0xffffffff;
    extraout_ECX[0xb] = iVar1;
    extraout_ECX[6] = iVar1;
    extraout_ECX[7] = iVar1;
    extraout_ECX[8] = pcVar3;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

