
void FUN_004610e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f3b4;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    iVar2 = param_2[4];
    iVar1 = param_2[3];
    param_1[3] = 0;
    iVar2 = iVar2 - iVar1;
    param_1[4] = 0;
    param_1[5] = 0;
    if (iVar2 != 0) {
      iVar4 = FUN_0044b6e0(iVar2);
    }
    param_1[3] = iVar4;
    param_1[4] = iVar4;
    param_1[5] = iVar4 + iVar2;
    iVar2 = param_2[4];
    iVar1 = param_2[3];
    FUN_0061c980(iVar4,iVar1,iVar2 - iVar1);
    param_1[4] = (iVar4 - iVar1) + iVar2;
    iVar4 = (int)(param_2[7] - param_2[6]) >> 2;
    iVar2 = 0;
    local_4._0_1_ = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    if (iVar4 != 0) {
      iVar2 = FUN_0044b6e0(iVar4 * 4);
    }
    param_1[6] = iVar2;
    param_1[7] = iVar2;
    param_1[8] = iVar2 + iVar4 * 4;
    local_4 = CONCAT31(local_4._1_3_,2);
    uVar3 = FUN_0046b5a0(param_2[6],param_2[7],iVar2,param_1);
    param_1[7] = uVar3;
  }
  ExceptionList = local_c;
  return;
}

