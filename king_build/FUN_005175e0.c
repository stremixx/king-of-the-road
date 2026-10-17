
undefined4 * __thiscall FUN_005175e0(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645aef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,4,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d080;
  param_1[0x10] = &PTR_LAB_0064d040;
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  iVar3 = FUN_00631d33(0x120);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005beed0(&DAT_006761c8,1,1);
  }
  local_4._0_1_ = 0;
  FUN_005bcc50(&DAT_006cd368);
  FUN_005bcc50(&DAT_006cd318);
  FUN_005bcc50(&DAT_006cda98);
  FUN_005bcc50(&DAT_006cd8e8);
  FUN_005bd2a0(uVar4,0);
  param_2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    param_2[0x48] = 0;
    param_2[0x49] = 0;
    *param_2 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 4;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  uVar6 = 0;
  local_4._0_1_ = 0;
  uVar4 = FUN_00517530(s_Accelerate_006761b0,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Brake_00676198,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Turn_00676180,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Change_Gear_Up_00676168,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Change_Gear_Down_00676150,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Switch_Camera_On_Off_00676138,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Choose_Camera_00676120,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Rear_Camera_00676108,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_TV_Director_006760f0,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Recover_and_Continue_006760d8,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Horn_006760c0,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Wipers_006760a8,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Cockpit_Toggle_00676090,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Left_View_00676078,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Right_View_00676060,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_Chase_Camera_Control_00676048,0);
  FUN_005bd2a0(uVar4,uVar6);
  FUN_005bd7e0(0xfffffffb);
  FUN_005bd2a0(puVar5,0);
  puVar5 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    puVar5[0x48] = 0;
    puVar5[0x49] = 0;
    *puVar5 = &PTR_FUN_0064cc40;
  }
  uVar6 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar4 = FUN_00517530(s_<Up>___0067602c,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<Down>___00676010,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<Left>_<Right>___00675ff4,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<A>___00675fd8,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<Z>___00675fbc,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<M>___00675fa0,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<C>___00675f84,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<N>___00675f68,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<U>___00675f4c,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<0>___00675f30,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<H>___00675f14,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<W>___00675ef8,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<V>___00675edc,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<___00675ec0,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_>___00675ea4,0);
  FUN_005bd2a0(uVar4,uVar6);
  uVar6 = 0;
  uVar4 = FUN_00517530(s_<Home><End><Del><PgDn>___00675e88,0);
  FUN_005bd2a0(uVar4,uVar6);
  FUN_005bd7e0(0xfffffffb);
  FUN_005bd2a0(puVar5,0);
  FUN_005bd590(4);
  FUN_005bd2a0(param_2,0);
  FUN_005bd7e0(0x1e);
  uVar1 = *(ushort *)(param_1[3] + 2);
  puVar2[0xb] = puVar2[0xb] + 0x96;
  iVar3 = (int)(((uint)uVar1 - puVar2[0xe]) + puVar2[0xc]) / 2;
  puVar2[0xd] = puVar2[0xd] + 0x96;
  puVar2[0xc] = puVar2[0xc] + iVar3;
  puVar2[0xe] = puVar2[0xe] + iVar3;
  FUN_005bd2a0(puVar2,0);
  uVar4 = FUN_005eea00(s_control_msk_00675e7c);
  param_1[0x5c] = uVar4;
  ExceptionList = local_c;
  return param_1;
}

