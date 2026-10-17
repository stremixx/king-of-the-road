
void FUN_004a5740(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *local_18 [2];
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642e18;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00455dc0();
  FUN_004b14e0();
  FUN_00455dc0();
  FUN_004b14e0();
  uVar4 = 0;
  iVar2 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0xc + iVar1 != iVar1) {
    do {
      FUN_00455dc0();
      local_4._0_1_ = 1;
      uVar3 = FUN_004a17c0();
      FUN_00455dc0(uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004b8100(local_18,param_1);
      if (((((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
          (local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0)) &&
         (local_18[0] != (int *)0x0)) {
        (**(code **)(*local_18[0] + 0xc))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10)) / 0xc));
  }
  FUN_00455dc0();
  FUN_004b14e0();
  FUN_00455dc0();
  local_4._0_1_ = 2;
  FUN_00455dc0(param_2 + 4);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004b8100(local_18,param_1);
  if ((((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
     ((local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0 && (local_18[0] != (int *)0x0)))) {
    (**(code **)(*local_18[0] + 0xc))();
  }
  if (((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) {
    param_3[1] = param_3[1] + 1;
  }
  FUN_004b14e0();
  local_4 = 0xffffffff;
  if (((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
      (param_3[1] = param_3[1] + -1, param_3[1] == 0)) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_3 + 0xc))();
  }
  ExceptionList = pvStack_c;
  return;
}

