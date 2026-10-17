
undefined4 FUN_005d6c50(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_80;
  undefined4 local_6c;
  undefined4 local_58;
  undefined1 local_54 [80];
  int local_4;
  
  local_b4 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_58 = 0;
  local_6c = 0;
  local_4 = -0x7ff8ffa9;
  local_b0 = 0;
  local_80 = 0;
  local_ac = 0;
  if ((param_1 & 0x600) == 0) {
    DAT_0071f84c = 0;
    return 0;
  }
  local_d0 = DAT_0071f7fc;
  local_c4 = param_1 | 0x8000;
  local_c8 = DAT_0071f7f0;
  local_cc = DAT_0071f800;
  DAT_0071f88c = DAT_0071f844;
  DirectDrawEnumerateA(FUN_005d6950,&local_d0);
  if (local_4 != 0) {
    uVar1 = FUN_005d42c0(local_4,local_54,0);
    FUN_005d2520(uVar1);
  }
  DAT_0071f870 = local_a8;
  DAT_0071f858 = local_98;
  DAT_0071f86c = local_a4;
  DAT_0071f868 = local_9c;
  DAT_0071f864 = local_a0;
  DAT_0071f85c = local_94;
  DAT_0071f860 = local_90;
  DAT_0071f854 = local_58;
  DAT_0071f84c = ((param_1 & 0x400) != 0) + 1;
  DAT_0071f840 = local_b0;
  if ((param_1 & 0x1000) == 0) {
    DAT_0071f850 = 0;
  }
  else {
    DAT_0071f850 = 1;
    FUN_005d7b10(DAT_0071f7f4,0xffffffff);
  }
  DAT_0071f888 = 0;
  DAT_0071f814 = param_1 >> 0xd & 1;
  return 0;
}

