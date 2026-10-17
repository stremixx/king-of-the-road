
undefined4 __thiscall FUN_005e3ec0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xc);
  do {
    if (*piVar2 == param_2) {
      *(undefined4 *)(param_1 + 0xc + iVar1 * 4) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 1000);
  return 0;
}

