
undefined4 * __thiscall FUN_004bee30(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064499e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x62,s_CRain_0067175c);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064b454;
  param_1[0xb] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x40002;
  iVar1 = FUN_00631d33(0x8c);
  local_4._0_1_ = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bf470(param_2);
  }
  local_4._0_1_ = 0;
  param_1[9] = uVar2;
  FUN_004bf6b0(0);
  *(undefined4 *)(param_1[9] + 0xc) = DAT_0064b1e0;
  iVar1 = FUN_00631d33(0x54);
  local_4._0_1_ = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004c0930();
  }
  param_1[8] = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  iVar1 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_rain_key_00671750);
  if (iVar1 == 0) {
    FUN_005d2250(s_rain_key_not_found_0067173c,0);
    uVar3 = 0;
    uVar2 = 2000;
    iVar1 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_afterThis_0067166c,param_3,2000,0);
  }
  else {
    uVar3 = 1;
    uVar2 = 2000;
  }
  FUN_004c0a90(iVar1,param_3,uVar2,uVar3);
  param_1[0xc] = 1;
  ExceptionList = local_c;
  return param_1;
}

