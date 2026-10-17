
void __thiscall FUN_005e40b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xfac) == 1) {
    if (*(int *)(param_2 + 0x7d8) != 0) {
      piVar1 = (int *)(param_1 + 0xc);
      iVar2 = 1000;
      do {
        if (*piVar1 != 0) {
          FUN_005e3fe0(param_2);
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0xfac) = 2;
  }
  return;
}

