
void FUN_00633e00(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_006361e3(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_00634d89(param_2[5],0);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_006333b8();
  return;
}

