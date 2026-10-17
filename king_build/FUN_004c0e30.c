
undefined4 * __thiscall FUN_004c0e30(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644a7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0x62,s_CDrops_00671770);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064b5f4;
  param_1[0x10] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  param_1[0xe] = param_3;
  *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  *(uint *)(param_1[0xe] + 0x20) = *(uint *)(param_1[0xe] + 0x20) | 0x40000;
  *(uint *)(param_1[0xe] + 0x20) = *(uint *)(param_1[0xe] + 0x20) | 2;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_4 + 0x58) = 0x3f800000;
  *(uint *)(param_1[0xf] + 0x20) = *(uint *)(param_1[0xf] + 0x20) | 0x40000;
  *(uint *)(param_1[0xf] + 0x20) = *(uint *)(param_1[0xf] + 0x20) | 2;
  puVar1 = (undefined4 *)FUN_00631d33(0x2440);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004c2a60(param_2);
    local_4._0_1_ = 2;
    FUN_004c16b0();
    puVar1[0x10] = &PTR_LAB_0064b5e0;
    local_4._0_1_ = 3;
    FUN_004c1d60();
    *puVar1 = &PTR_LAB_0064b5c4;
    puVar1[0xf] = 0xff505050;
  }
  param_1[10] = puVar1;
  local_4._0_1_ = 0;
  iVar2 = FUN_00631d33(puVar1[2] * 0x18);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  iVar5 = 0;
  puVar1[0xe] = iVar2;
  if (puVar1[2] != 1 && -1 < puVar1[2] + -1) {
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(int *)(iVar2 + puVar1[0xe]) = iVar2 + 0x18 + puVar1[0xe];
      iVar2 = iVar2 + 0x18;
    } while (iVar5 < puVar1[2] + -1);
  }
  *(undefined4 *)(puVar1[0xe] + -0x18 + puVar1[2] * 0x18) = 0;
  puVar1[0xc] = puVar1[0xe];
  puVar1[0xd] = 0;
  puVar1 = (undefined4 *)FUN_00631d33(0x2a0);
  local_4._0_1_ = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004c2a60(param_2);
    local_4._0_1_ = 5;
    FUN_004c3ce0();
    *puVar1 = &PTR_LAB_0064b5a8;
    puVar1[0xf] = 0xff505050;
  }
  param_1[0xc] = puVar1;
  local_4._0_1_ = 0;
  iVar2 = FUN_00631d33(puVar1[2] * 0x18);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  iVar5 = 0;
  puVar1[0xe] = iVar2;
  if (puVar1[2] != 1 && -1 < puVar1[2] + -1) {
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(int *)(iVar2 + puVar1[0xe]) = iVar2 + 0x18 + puVar1[0xe];
      iVar2 = iVar2 + 0x18;
    } while (iVar5 < puVar1[2] + -1);
  }
  *(undefined4 *)(puVar1[0xe] + -0x18 + puVar1[2] * 0x18) = 0;
  puVar1[0xc] = puVar1[0xe];
  puVar1[0xd] = 0;
  puVar1 = (undefined4 *)FUN_00631d33(0x48);
  uVar3 = DAT_006f2310;
  local_4._0_1_ = 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004c2a60(param_2);
    local_4._0_1_ = 7;
    *puVar1 = &PTR_LAB_0064b58c;
    puVar1[0x11] = uVar3;
    iVar2 = FUN_00631d33(0x264);
    local_4._0_1_ = 8;
    if (iVar2 == 0) {
      puVar1[0xf] = 0xff505050;
      puVar1[0x10] = 0;
    }
    else {
      uVar3 = FUN_004c2290(puVar1[0x11]);
      puVar1[0x10] = uVar3;
      puVar1[0xf] = 0xff505050;
    }
  }
  param_1[0xb] = puVar1;
  iVar2 = puVar1[2];
  local_4._0_1_ = 0;
  iVar5 = FUN_00631d33(iVar2 * 0x18);
  local_4._0_1_ = 9;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_004011e0(iVar5,0x18,iVar2,FUN_00405e90);
  }
  iVar2 = 0;
  local_4._0_1_ = 0;
  puVar1[0xe] = iVar5;
  if (puVar1[2] != 1 && -1 < puVar1[2] + -1) {
    iVar5 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(int *)(iVar5 + puVar1[0xe]) = iVar5 + 0x18 + puVar1[0xe];
      iVar5 = iVar5 + 0x18;
    } while (iVar2 < puVar1[2] + -1);
  }
  *(undefined4 *)(puVar1[0xe] + -0x18 + puVar1[2] * 0x18) = 0;
  puVar1[0xc] = puVar1[0xe];
  puVar1[0xd] = 0;
  puVar1 = (undefined4 *)FUN_00631d33(0x1240);
  local_4._0_1_ = 10;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004c2a60(param_2);
    local_4._0_1_ = 0xb;
    FUN_004c1860();
    *puVar1 = &PTR_LAB_0064b56c;
    puVar1[0xf] = 0xffffffff;
    puVar1[9] = 0xbf800000;
    puVar1[7] = 0x3e428f5c;
    puVar1[8] = 0;
    puVar1[3] = 0x3c23d70a;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar1;
  FUN_004c2ae0();
  iVar2 = FUN_00631d33(0x50);
  local_4._0_1_ = 0xc;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c28a0();
  }
  param_1[8] = uVar3;
  uVar3 = param_1[0xe];
  uVar6 = 2000;
  local_4._0_1_ = 0;
  uVar4 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_afterThis_0067166c,uVar3,2000);
  FUN_004c28c0(uVar4,uVar3,uVar6);
  iVar2 = FUN_00631d33(0x50);
  local_4._0_1_ = 0xd;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c2710();
  }
  uVar4 = param_1[0xf];
  param_1[9] = uVar3;
  uVar6 = 2000;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_afterThis_0067166c,uVar4,2000);
  FUN_004c28c0(uVar3,uVar4,uVar6);
  uVar3 = FUN_005ee8e0(*(undefined4 *)(param_2 + 0x20c),s_rain_key_00671750);
  param_1[0x11] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

