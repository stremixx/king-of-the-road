
int * FUN_004a2720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  int *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642a73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33();
  local_4 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    if (((param_5[2] & 0x10000U) == 0) && (*param_5 != 0)) {
      piVar2 = (int *)(*param_5 + 4);
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = (int *)FUN_004b6780(param_3,*param_4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 1;
  if (piVar2 == (int *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  iVar1 = (**(code **)*piVar2)();
  if (iVar1 == 10) {
    *param_1 = (int)piVar2;
    uVar3 = (**(code **)*piVar2)();
    param_1[2] = uVar3 & 0xff;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    ExceptionList = local_c;
    return param_1;
  }
  (**(code **)(*piVar2 + 4))();
  FUN_004a5670(2);
  ExceptionList = local_c;
  return param_1;
}

