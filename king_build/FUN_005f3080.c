
undefined4 __thiscall FUN_005f3080(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x23] == 1) {
    return 0;
  }
  piVar1 = *(int **)param_1[0xc];
  while( true ) {
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x14))(0,param_2);
      return 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))(param_2);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[2];
  }
  return 1;
}

