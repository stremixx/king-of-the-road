
undefined4 * FUN_00421780(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_25;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ccb0;
  local_c = ExceptionList;
  param_2 = CONCAT31(param_2._1_3_,param_1._0_1_);
  iVar2 = *(int *)(DAT_0068be60 + iVar1 * 4);
  ExceptionList = &local_c;
  FUN_0048a730(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 2,&param_2);
  local_4 = 0;
  local_20 = (int *)FUN_0046b5a0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                                 local_24,param_1);
  local_25 = param_1._0_1_;
  iVar2 = *(int *)(DAT_0068be60 + iVar1 * 4);
  local_4 = 1;
  FUN_0048a730(*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) >> 2,&local_25);
  local_4._0_1_ = 2;
  local_14 = (int *)FUN_0046b5a0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                                 local_18,param_1);
  if (local_24 == local_20) {
    if (local_18 == local_14) {
      iVar2 = local_10 - (int)local_18 >> 2;
      *param_1 = 0xffffffff;
      if (iVar2 != 0) {
        uVar3 = iVar2 * 4;
        if (uVar3 < 0x81) {
          FUN_00401aa0();
          *local_18 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = local_18;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(local_18);
        }
      }
      local_4 = 0xffffffff;
      iVar2 = local_1c - (int)local_24 >> 2;
      if (iVar2 != 0) {
        FUN_0044b440(local_24,iVar2 * 4);
      }
      ExceptionList = local_c;
      return param_1;
    }
    *param_1 = *(undefined4 *)(*local_18 + 0xc);
  }
  else {
    *param_1 = *(undefined4 *)(*local_24 + 0xc);
  }
  iVar2 = local_10 - (int)local_18 >> 2;
  if (iVar2 != 0) {
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0044b440(local_18,iVar2 * 4);
  }
  local_4 = 0xffffffff;
  iVar2 = local_1c - (int)local_24 >> 2;
  if (iVar2 != 0) {
    FUN_0044b440(local_24,iVar2 * 4);
  }
  ExceptionList = local_c;
  return param_1;
}

