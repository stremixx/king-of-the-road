
int __thiscall FUN_005bdb60(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBX;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return param_2;
  }
  piVar1 = *(int **)(param_1 + 0x120);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_005bdc50(param_3 - *(int *)(param_1 + 0x2c),
                                   param_4 - *(int *)(param_1 + 0x30));
      if (piVar1 != (int *)0x0) {
        if (param_2 == 0x201) {
          FUN_005bd250(piVar1);
        }
        if (piVar1 == *(int **)(param_1 + 0x124)) {
          param_2 = (**(code **)(**(int **)(param_1 + 0x124) + 0x20))
                              (param_2,param_3 - *(int *)(param_1 + 0x2c),
                               param_4 - *(int *)(param_1 + 0x30));
        }
      }
      return param_2;
    }
    if (piVar1[9] != 0) break;
    piVar1 = (int *)FUN_005d2730();
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))
                    (param_3 - *(int *)(param_1 + 0x2c),param_4 - *(int *)(param_1 + 0x30));
  if (iVar2 == 0) {
    return 0x8000;
  }
  iVar2 = (**(code **)(*piVar1 + 0x20))
                    (unaff_EBX,param_3 - *(int *)(param_1 + 0x2c),param_4 - *(int *)(param_1 + 0x30)
                    );
  return iVar2;
}

