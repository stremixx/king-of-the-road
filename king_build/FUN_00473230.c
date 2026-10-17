
void __fastcall FUN_00473230(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fbd2;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = param_1[0x7f];
  ExceptionList = &local_c;
  param_1[0x14] = 0;
  if (iVar1 != 0) {
    local_4._0_1_ = 8;
    local_4._1_3_ = 0;
    FUN_00478b70();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_00448660();
    FUN_00631d5c(iVar1);
  }
  iVar1 = param_1[0x80];
  if (iVar1 != 0) {
    local_4._0_1_ = 9;
    FUN_00478b70();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_00448660();
    FUN_00631d5c(iVar1);
  }
  iVar1 = (param_1[0xa2] - param_1[0xa0]) / 0xc;
  local_4._0_1_ = 6;
  if (iVar1 != 0) {
    FUN_0044b440(param_1[0xa0],iVar1 * 0xc);
  }
  iVar1 = param_1[0x44] - param_1[0x42];
  local_4._0_1_ = 5;
  if (iVar1 != 0) {
    FUN_0044b440(param_1[0x42],iVar1);
  }
  local_4._0_1_ = 4;
  FUN_0044a450();
  iVar1 = param_1[0x27];
  iVar3 = param_1[0x26];
  local_4._0_1_ = 10;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 0x10) {
    FUN_0046c840(0);
  }
  iVar1 = param_1[0x26];
  local_4._0_1_ = 3;
  iVar3 = param_1[0x28] - iVar1 >> 4;
  if (iVar3 != 0) {
    FUN_0044b440(iVar1,iVar3 << 4);
  }
  local_4._0_1_ = 2;
  iVar1 = param_1[0x24] - param_1[0x22] >> 3;
  if (iVar1 != 0) {
    FUN_0044b440(param_1[0x22],iVar1 * 8);
  }
  local_4._0_1_ = 1;
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_1 + 0x10;
  }
  iVar1 = (piVar2[2] - *piVar2) / 0x28;
  if (iVar1 != 0) {
    FUN_0044b440(*piVar2,iVar1 * 0x28);
  }
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_1 + 4;
  }
  iVar1 = piVar2[1];
  iVar3 = *piVar2;
  local_4._0_1_ = 0xb;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    FUN_004030a0(iVar3);
  }
  iVar1 = (piVar2[2] - *piVar2) / 0xc;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    FUN_0044b440(*piVar2,iVar1 * 0xc);
  }
  iVar1 = param_1[2] - *param_1;
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_0044b440(*param_1,iVar1);
  }
  ExceptionList = local_c;
  return;
}

