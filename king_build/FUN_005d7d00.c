
undefined4 * __thiscall
FUN_005d7d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648573;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00651158;
  iVar1 = FUN_00631d33(0x7c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005b6100(param_2,param_3,param_4,param_5);
  }
  param_1[6] = 0;
  param_1[3] = uVar2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[4] = 3;
  ExceptionList = local_c;
  return param_1;
}

