
int * __thiscall FUN_004aa500(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006433b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (**(code **)*param_2)();
    if (iVar1 == 9) {
      *param_1 = (int)param_2;
      uVar3 = (**(code **)*param_2)();
      param_1[2] = uVar3 & 0xff;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    }
    else {
      uVar2 = (**(code **)(*param_2 + 4))(s_Identifier_0066be4c);
      FUN_004a5670(2,1,uVar2);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

