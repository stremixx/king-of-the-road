
void FUN_00636c4e(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0061bb81();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xb0))();
    if ((iVar2 != 0) && ((int *)piVar1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0x1a] + 100))(param_1);
    }
  }
  return;
}

