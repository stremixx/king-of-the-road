
undefined4 __thiscall
FUN_005bd880(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x18) == '\0')) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x120);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_005bcff0(param_2,param_3,param_4,param_5);
      piVar1 = *(int **)(param_1 + 0x120);
      while (piVar1 != (int *)0x0) {
        if ((param_5 == 0) || (piVar1 != *(int **)(param_1 + 0x124))) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        (**(code **)(*piVar1 + 0x1c))
                  (param_2,param_3 + *(int *)(param_1 + 0x2c),param_4 + *(int *)(param_1 + 0x30),
                   uVar2);
        piVar1 = (int *)FUN_005d2730();
      }
      return 0;
    }
    if (piVar1[9] != 0) break;
    piVar1 = (int *)FUN_005d2730();
  }
  (**(code **)(*piVar1 + 0x1c))
            (param_2,*(int *)(param_1 + 0x2c) + param_3,*(int *)(param_1 + 0x30) + param_4,param_5);
  return 1;
}

