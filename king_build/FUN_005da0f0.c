
undefined4 __thiscall
FUN_005da0f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_50;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648781;
  local_c = ExceptionList;
  local_50 = 0;
  ExceptionList = &local_c;
  if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    ExceptionList = &local_c;
    FUN_005fc460();
  }
  if (param_2 < 1) {
    iVar1 = FUN_00631d33(0x330);
    local_4 = 0;
    if (iVar1 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005b8b90();
    }
    local_4 = 0xffffffff;
    FUN_005b9950();
    FUN_005b98f0();
    FUN_005b8f00(4,8);
    FUN_005b94e0(0x20);
    FUN_005b9210(0x20,4);
    param_2 = 1;
  }
  iVar1 = FUN_00631d33(0xb4);
  local_4 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005e9cc0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  iVar1 = FUN_005d1e70();
  if (iVar1 != 0) {
    FUN_005d2520(iVar1,0);
  }
  puVar3 = (undefined4 *)FUN_00631d33(0x70);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(s_r_obs_00681b9c,6,1);
    iVar1 = 4;
    puVar4 = puVar3 + 0x12;
    do {
      puVar4[-2] = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar3 + 0x10;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar3 = &PTR_FUN_0064c7c0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
  }
  uVar6 = 1;
  local_4 = 0xffffffff;
  uVar2 = FUN_005ab330(local_3c,0,0xc1200000,0,1);
  FUN_005f1800(uVar2,uVar6);
  FUN_005ecc90(puVar3);
  puVar4 = (undefined4 *)FUN_00631d33(0x68);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_0064c7ac;
    puVar4[0x13] = 0;
    puVar4[0x14] = puVar3;
    puVar4[0x16] = 0x3f800000;
    puVar4[0x15] = 0x3f800000;
    puVar4[0x18] = 0;
    puVar4[0x17] = 0;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[0x19] = 0;
  }
  *(undefined4 **)(*(int *)(param_1 + 0x1d4) + 0x78) = puVar4;
  FUN_005d1bf0(s_r_obs_00681b9c,puVar3);
  if (local_50 != 0) {
    FUN_005ea2f0(local_50);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x1d4);
}

