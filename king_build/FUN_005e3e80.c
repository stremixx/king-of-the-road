
undefined4 __thiscall FUN_005e3e80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xc);
  do {
    if (*piVar2 == 0) {
      *(int *)(param_1 + 0xc + iVar1 * 4) = param_2;
      *(int *)(param_2 + 0xc) = param_1;
      return *(undefined4 *)(param_1 + 0xfac);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 1000);
  FUN_005d2520(s_Objects_attached_to_regclass_too_00682228,0);
  return 0xffffffff;
}

