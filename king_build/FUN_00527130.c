
void __thiscall FUN_00527130(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  DAT_00674a28 = 1;
  piVar1 = (int *)param_1[0x5d];
  if (piVar1 != (int *)0x0) {
    if (param_2 != piVar1) {
      (**(code **)(*piVar1 + 0x20))();
    }
    iVar2 = param_1[0x5d];
    if (((iVar2 == DAT_006cdc38) || (iVar2 == DAT_006cdbcc)) || (iVar2 == DAT_006cdbd0)) {
      (**(code **)(*(int *)(iVar2 + 0x40) + 0x3c))(1);
    }
    if (DAT_00674a28 == 0) {
      return;
    }
  }
  if (param_2 == (int *)0x0) {
    (**(code **)(*param_1 + 0x24))();
    param_1[0x5d] = 0;
    return;
  }
  (**(code **)(*param_2 + 0x24))();
  param_1[0x5d] = (int)param_2;
  return;
}

