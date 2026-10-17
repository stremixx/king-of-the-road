
void FUN_004ad400(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  int *piVar1;
  int *local_18 [2];
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00643668;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004b0060(local_18,0);
  if (((piVar1[2] & 0x10000U) == 0) && (*piVar1 != 0)) {
    piVar1 = (int *)(*piVar1 + 4);
    *piVar1 = *piVar1 + 1;
  }
  local_4._0_1_ = 1;
  FUN_004b8250(param_1,param_5);
  FUN_004a3fc0(param_1,param_5);
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
      (local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0)) && (local_18[0] != (int *)0x0)) {
    (**(code **)(*local_18[0] + 0xc))();
  }
  local_4 = 0xffffffff;
  if ((((param_4 & 0x10000) == 0) && (param_2 != (int *)0x0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 && (param_2 != (int *)0x0)))) {
    (**(code **)(*param_2 + 0xc))();
  }
  ExceptionList = pvStack_c;
  return;
}

