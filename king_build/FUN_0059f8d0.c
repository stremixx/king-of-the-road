
int __thiscall FUN_0059f8d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x1920) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      if (((piVar1[-1] == param_2) && (*piVar1 == param_3)) && (piVar1[0x1a] != 0)) {
        return param_1 + 0x20 + uVar2 * 0x7c;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x1f;
    } while (uVar2 < *(uint *)(param_1 + 0x1920));
  }
  return 0;
}

