
int * __thiscall FUN_0044ca50(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)*param_2)();
    if (iVar1 == 2) {
      iVar1 = *param_2;
      *param_1 = iVar1;
      param_1[2] = param_2[2];
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    else {
      uVar2 = (**(code **)(*(int *)*param_2 + 4))(&DAT_0066bb08);
      FUN_004a5670(2,1,uVar2);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

