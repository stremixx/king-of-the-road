
undefined4 __thiscall FUN_0059fa10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x1920) != 0) {
    piVar2 = (int *)(param_1 + 0x24);
    do {
      if ((piVar2[-1] == param_2) && (*piVar2 == param_3)) {
        return *(undefined4 *)(param_1 + 0x88 + uVar1 * 0x7c);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x1f;
    } while (uVar1 < *(uint *)(param_1 + 0x1920));
  }
  return 0;
}

