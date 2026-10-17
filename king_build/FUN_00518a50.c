
undefined4 * __thiscall FUN_00518a50(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645bd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d7fb0(param_2,DAT_0071f898,DAT_0071f89c,DAT_0071f8a0,DAT_0071f8a4,0,DAT_006cdc84,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d24c;
  param_1[0x10] = &PTR_LAB_0064d20c;
  param_1[0x5e] = param_3;
  puVar4 = (undefined4 *)FUN_00631d33(0xc);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar5 = FUN_005eea00(s_cursor_msk_00675bfc);
    *puVar4 = uVar5;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  local_4._0_1_ = 0;
  param_1[0xd] = puVar4;
  param_1[0xc] = puVar4;
  param_2 = (int *)FUN_00631d33(0x128);
  local_4._0_1_ = 2;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    param_2[0x48] = 0;
    param_2[0x49] = 0;
    *param_2 = (int)&PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  puVar4 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    *puVar4 = &PTR_FUN_0064cc40;
  }
  local_4._0_1_ = 0;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar5 = FUN_0050e7b0(s_p_2ok_00676330,1,0xc5,0x60,0);
    FUN_005bd2a0(uVar5,uVar8);
    pcVar9 = s_p_MenuPopupA2_msk_0067631c;
  }
  else if (param_3 == 1) {
    uVar8 = 0;
    uVar5 = FUN_0050e7b0(s_p_3wait_00676314,0x9c,0x7c,0x60,0);
    FUN_005bd2a0(uVar5,uVar8);
    uVar8 = 0;
    uVar5 = FUN_0050e7b0(s_p_3canc_0067630c,0x9b,0xf0,0x60,0);
    FUN_005bd2a0(uVar5,uVar8);
    pcVar9 = s_p_MenuPopupA3_msk_006762f8;
  }
  else if (param_3 == 2) {
    uVar8 = 0;
    uVar5 = FUN_0050e7b0(s_p_0canc_006762f0,0x9b,0xb6,0x60,0);
    FUN_005bd2a0(uVar5,uVar8);
    pcVar9 = s_p_MenuPopupA0_msk_006762dc;
  }
  else {
    if (param_3 == 3) {
      uVar8 = 0;
      uVar5 = FUN_0050e7b0(s_p_1ok_006762d4,0x9d,0x8a,0x60,0);
      FUN_005bd2a0(uVar5,uVar8);
      uVar5 = 0x9b;
    }
    else {
      uVar5 = 0;
      if (param_3 == 4) {
        uVar8 = FUN_0050e7b0(s_p_4ok_006762cc,1,0xc5,0x6c);
        FUN_005bd2a0(uVar8,uVar5);
        *(undefined1 *)(param_1 + 99) = 0;
        puVar6 = (undefined4 *)FUN_00631d33(300);
        local_4._0_1_ = 4;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_005bcc90(&DAT_0068c120,0);
          *puVar6 = &PTR_FUN_0064d150;
          puVar6[0x48] = param_1 + 99;
          puVar6[0x49] = 0x3e;
          puVar6[0x4a] = 0;
        }
        local_4._0_1_ = 0;
        puVar6[7] = 1;
        FUN_005bcc50(&DAT_006cd368);
        FUN_005bcc50(&DAT_006cd318);
        FUN_005bcc50(&DAT_006cda98);
        FUN_005bcc50(&DAT_006cd8e8);
        puVar6[0xb] = 0x76;
        puVar6[0xc] = 0x56;
        puVar6[0xd] = 0x191;
        puVar6[0xe] = 100;
        FUN_005bd2a0(puVar6,0);
        DAT_006cd310 = FUN_005eea00(s_p_MenuPopupB_msk_006762b8);
        goto LAB_00518dd6;
      }
      local_4._0_1_ = uVar3;
      uVar8 = FUN_0050e7b0(s_p_1ok_006762d4,0x9e,0x8a,0x60,0);
      FUN_005bd2a0(uVar8,uVar5);
      uVar5 = 0x9f;
    }
    uVar8 = 0;
    uVar5 = FUN_0050e7b0(s_p_1canc_006762b0,uVar5,0xe2,0x60,0);
    FUN_005bd2a0(uVar5,uVar8);
    pcVar9 = s_p_MenuPopupA1_msk_0067629c;
  }
  DAT_006cd310 = FUN_005eea00(pcVar9);
LAB_00518dd6:
  if (DAT_006cd310 == 0) {
    uVar7 = 100;
  }
  else {
    uVar7 = (uint)*(ushort *)(DAT_006cd310 + 4);
  }
  param_1[0x5d] = uVar7;
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bcc50(&DAT_006cd2f0);
  FUN_005bd2a0(puVar4,0);
  (**(code **)(*param_2 + 0x14))();
  iVar1 = puVar4[0xb];
  puVar4[0xb] = 0x99;
  iVar2 = puVar4[0xc];
  puVar4[0xd] = puVar4[0xd] + (0x99 - iVar1);
  puVar4[0xc] = 0xf9;
  puVar4[0xe] = puVar4[0xe] + (0xf9 - iVar2);
  FUN_005bd2a0(param_2,0);
  ExceptionList = local_c;
  return param_1;
}

