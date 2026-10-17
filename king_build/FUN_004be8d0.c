
undefined4 * __thiscall FUN_004be8d0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064494e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x62,s_CSnow_00671734);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064b418;
  param_1[10] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  if (param_3 == 0) {
    FUN_005d2520(s_Snow_material_not_found__00671718,0);
  }
  *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x40002;
  iVar1 = FUN_00631d33(0x8c);
  local_4._0_1_ = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_004bf470(param_2);
  }
  local_4._0_1_ = 0;
  param_1[9] = iVar1;
  FUN_004bf6b0(0xffffffff);
  *(undefined4 *)(param_1[9] + 0xc) = DAT_0064b1dc;
  *(undefined4 *)(param_1[9] + 0x18) = 0xc0e00000;
  *(undefined4 *)(param_1[9] + 0x1c) = 0;
  *(undefined4 *)(param_1[9] + 8) = 0x3d4ccccd;
  *(undefined4 *)(param_1[9] + 0x3c) = 0x41f00000;
  *(undefined4 *)(param_1[9] + 0x34) = 0x40e00000;
  iVar1 = FUN_00631d33(0x50);
  local_4._0_1_ = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004c08f0();
  }
  uVar4 = 0;
  param_1[8] = uVar2;
  uVar3 = 2000;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar2 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_afterThis_0067166c,param_3,2000,0);
  FUN_004c0a30(uVar2,param_3,uVar3,uVar4);
  param_1[0xb] = 1;
  ExceptionList = local_c;
  return param_1;
}

