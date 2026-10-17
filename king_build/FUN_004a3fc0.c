
void FUN_004a3fc0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5
                 )

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_3c [12];
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar2 = param_3;
  puStack_8 = &LAB_00642cb0;
  local_c = ExceptionList;
  uVar3 = param_5 & 0x10000;
  if (uVar3 == 0) {
    local_2c = 0;
    if (param_3 == (int *)0x0) {
      local_30 = (int *)0x0;
      local_28 = 0;
      ExceptionList = &local_c;
    }
    else {
      local_30 = param_3;
      local_28 = param_5;
      ExceptionList = &local_c;
      param_3[1] = param_3[1] + 1;
    }
  }
  else {
    local_28 = param_5;
    local_30 = param_3;
    local_2c = param_4;
    ExceptionList = &local_c;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004a5260(auStack_3c,0,&param_2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a3330(param_1);
  local_4 = 0xffffffff;
  if (((uVar3 == 0) && (piVar2 != (int *)0x0)) &&
     (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    local_28 = 1;
    local_2c = 0x4a4076;
    (**(code **)(*piVar2 + 0xc))();
  }
  ExceptionList = local_c;
  return;
}

