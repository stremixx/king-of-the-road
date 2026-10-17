
undefined4 * __thiscall FUN_005224d0(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646013;
  pvStack_c = ExceptionList;
  uVar10 = 0;
  uVar9 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = DAT_006cdc84;
  puVar2 = (undefined4 *)FUN_00510960(local_1c,param_2,0,DAT_006cdc84,0);
  FUN_005d7fb0(param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar9,uVar3,uVar10);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064d8c0;
  param_1[0x10] = &PTR_LAB_0064d880;
  uVar3 = FUN_0050c190();
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar3;
  puVar2 = (undefined4 *)FUN_00631d33(0x128);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005bcc90(&DAT_006755d4,8);
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    *puVar2 = &PTR_FUN_0064cc40;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar4 = FUN_005686e0();
  pcVar5 = s_m15_MenuPopupA5_msk_00676a38;
  if (iVar4 != 2) {
    pcVar5 = s_m16_MenuPopupA5_msk_00676a24;
  }
  DAT_006cd360 = FUN_005eea00(pcVar5);
  *(double *)(param_1 + 0x5e) = (double)*(ushort *)(DAT_006cd360 + 4);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  FUN_005bcc50(&DAT_006cd340);
  iVar4 = FUN_0050d740(&DAT_00676a1c,0xa0);
  FUN_005bd2a0(iVar4,0);
  *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + (0x80 - *(int *)(iVar4 + 0x2c));
  *(undefined4 *)(iVar4 + 0x2c) = 0x80;
  *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + (0x60 - *(int *)(iVar4 + 0x30));
  *(undefined4 *)(iVar4 + 0x30) = 0x60;
  iVar6 = FUN_0050d740(&PTR_DAT_00676a18,0xa1);
  FUN_005bd2a0(iVar6,0);
  iVar4 = *(int *)(iVar6 + 0x2c);
  *(undefined4 *)(iVar6 + 0x2c) = 0x10a;
  iVar7 = *(int *)(iVar6 + 0x30);
  *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + (0x10a - iVar4);
  *(undefined4 *)(iVar6 + 0x30) = 0x60;
  *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + (0x60 - iVar7);
  FUN_005bd330();
  uVar1 = *(ushort *)(DAT_006cd360 + 4);
  iVar4 = (**(code **)(*param_2 + 0x14))();
  iVar8 = iVar4 / 2 - uVar1 / 2;
  uVar1 = *(ushort *)(DAT_006cd360 + 6);
  iVar7 = (**(code **)(*param_2 + 0x18))();
  iVar4 = puVar2[0xb];
  iVar6 = iVar7 / 2 - uVar1 / 2;
  iVar7 = puVar2[0xc];
  puVar2[0xb] = iVar8;
  puVar2[0xd] = puVar2[0xd] + (iVar8 - iVar4);
  puVar2[0xc] = iVar6;
  puVar2[0xe] = puVar2[0xe] + (iVar6 - iVar7);
  FUN_005bd2a0(puVar2,0);
  ExceptionList = pvStack_c;
  return param_1;
}

