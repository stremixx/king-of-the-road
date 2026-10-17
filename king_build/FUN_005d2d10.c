
void __thiscall FUN_005d2d10(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (undefined4 *)0x0) && (param_2[3] != 0)) {
    param_2[4] = param_2[4] + *param_1;
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      do {
        if (((*(int *)(iVar1 + 0xc) == param_2[3]) && (*(int *)(iVar1 + 0x10) == param_2[4])) &&
           (*(int *)(iVar1 + 0x14) == param_2[5])) {
          (**(code **)*param_2)(1);
          return;
        }
        iVar1 = FUN_005d2730();
      } while (iVar1 != 0);
      iVar1 = param_1[3];
      if ((*(int *)(iVar1 + 0x10) <= (int)param_2[4]) &&
         ((*(int *)(iVar1 + 0x10) != param_2[4] ||
          (*(int *)(param_2[3] + 0x14) <= *(int *)(*(int *)(iVar1 + 0xc) + 0x14))))) {
        iVar2 = FUN_005d2730();
        while ((iVar2 != 0 && (iVar2 = FUN_005d2730(), *(int *)(iVar2 + 0x10) < (int)param_2[4]))) {
          iVar1 = FUN_005d2730();
          iVar2 = FUN_005d2730();
        }
        iVar2 = FUN_005d2730();
        while (((iVar2 != 0 && (iVar2 = FUN_005d2730(), *(int *)(iVar2 + 0x10) == param_2[4])) &&
               (iVar2 = FUN_005d2730(),
               *(int *)(param_2[3] + 0x14) < *(int *)(*(int *)(iVar2 + 0xc) + 0x14)))) {
          iVar1 = FUN_005d2730();
          iVar2 = FUN_005d2730();
        }
        FUN_005d1840(iVar1);
        return;
      }
      param_2[2] = iVar1;
      *(undefined4 **)(iVar1 + 4) = param_2;
    }
    param_1[3] = (int)param_2;
  }
  return;
}

