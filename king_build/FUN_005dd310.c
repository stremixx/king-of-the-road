
void __fastcall FUN_005dd310(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648928;
  pvStack_c = ExceptionList;
  uVar5 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0x3f000000;
  local_40 = 0;
  local_44 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0x3f000000;
  local_88 = 0;
  local_8c = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0x3f000000;
  local_64 = 0;
  local_68 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0x3f000000;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  if (param_1[0x2cc] == 0) {
    ExceptionList = &pvStack_c;
    iVar1 = FUN_005e8290(s_menu_sft_00681e30);
    if (iVar1 == 0) {
      iVar1 = FUN_005e8290(s_menu_fon_006751b8);
      if (iVar1 == 0) {
        FUN_005d25a0(s_menu_sft_fon__is_absent__00681e14);
      }
    }
    param_1[0x2cc] = iVar1;
  }
  local_98 = 0;
  local_9c = 2;
  local_90 = 0;
  local_94 = 4;
  FUN_005bcc50(&local_9c);
  local_50 = 5;
  FUN_005bcc50(&local_54);
  local_6c = 4;
  local_70 = 0;
  FUN_005bcc50(&local_78);
  local_2c = 0;
  puVar2 = (undefined4 *)FUN_00631d33(0x130);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bf440(&DAT_0068c120,0,param_1[0x2cc],4,0);
    *puVar2 = &PTR_FUN_006514c8;
    puVar2[0x4b] = param_1;
  }
  uStack_4 = 0xffffffff;
  piVar3 = (int *)FUN_00631d33(0x128);
  uStack_4 = 1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,0);
    piVar3[0x48] = 0;
    piVar3[0x49] = 0;
    *piVar3 = (int)&PTR_FUN_0064cc40;
  }
  uStack_4 = 0xffffffff;
  iVar1 = FUN_00631d33(0x120);
  uStack_4 = 2;
  if (iVar1 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = FUN_005beed0(&DAT_00681e0c,1,4);
  }
  uStack_4 = 0xffffffff;
  FUN_005bcc50(&local_9c);
  FUN_005bcc50(&local_54);
  FUN_005bcc50(&local_30);
  FUN_005bcc50(&local_78);
  FUN_005bd2a0(uStack_a0,0);
  iVar1 = FUN_00631d33(0x120);
  uStack_4 = 3;
  if (iVar1 != 0) {
    uVar5 = FUN_005beed0(s_RESTART_00681e04,1,3);
  }
  uStack_4 = 0xffffffff;
  FUN_005bcc50(&local_9c);
  FUN_005bcc50(&local_54);
  FUN_005bcc50(&local_30);
  FUN_005bcc50(&local_78);
  FUN_005bd2a0(uVar5,0);
  (**(code **)(*piVar3 + 0x14))();
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar1 = (iVar1 + (piVar3[0xc] - piVar3[0xe])) / 3;
  iVar4 = (**(code **)(*param_1 + 0x14))();
  iVar4 = (iVar4 + (piVar3[0xb] - piVar3[0xd])) / 2;
  piVar3[0xb] = piVar3[0xb] + iVar4;
  piVar3[0xc] = piVar3[0xc] + iVar1;
  piVar3[0xd] = piVar3[0xd] + iVar4;
  piVar3[0xe] = piVar3[0xe] + iVar1;
  FUN_005bd2a0(piVar3,0);
  param_1[0x2a7] = (int)puVar2;
  puVar2[0xb] = DAT_0071f898;
  puVar2[0xd] = DAT_0071f8a0;
  puVar2[0xc] = DAT_0071f89c;
  puVar2[0xe] = DAT_0071f8a4;
  piVar3 = (int *)FUN_005e3790(param_1[0x2a7]);
  param_1[0x2ca] = (int)piVar3;
  (**(code **)(*piVar3 + 0x20))();
  ExceptionList = pvStack_c;
  return;
}

