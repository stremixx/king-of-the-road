
int * FUN_004a1f30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642983;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00631d33(0x18);
  local_4 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004b6250(param_3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 1;
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)*piVar2)();
    if (iVar1 != 3) {
      uVar3 = (**(code **)(*piVar2 + 4))(s_String_0066ba58);
      FUN_004a5670(2,1,uVar3);
      ExceptionList = local_c;
      return param_1;
    }
    *param_1 = (int)piVar2;
    uVar4 = (**(code **)*piVar2)();
    param_1[2] = uVar4 & 0xff;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}

