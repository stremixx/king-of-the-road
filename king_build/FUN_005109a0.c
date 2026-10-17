
void __fastcall FUN_005109a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_40 [52];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006458bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x178);
  uVar4 = DAT_006957ac;
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = DAT_006cdc84;
    puVar2 = (undefined4 *)FUN_00510960(local_40,DAT_006957ac,0,DAT_006cdc84,0);
    FUN_005d7fb0(uVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar9,uVar7,uVar10);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_0064cdb0;
    puVar1[0x10] = &PTR_LAB_0064cd70;
    FUN_00510e40();
    iVar3 = FUN_005e8290(s_menu_fon_006751b8);
    if (iVar3 == 0) {
      FUN_005d25a0(s_menu_fon_is_absent__006757b8);
    }
    *(int *)(param_1 + 0xb30) = iVar3;
    FUN_005bcc50(&DAT_006cd318);
    FUN_005bcc50(&DAT_006cd368);
    FUN_005bcc50(&DAT_006cd8e8);
    FUN_005bcc50(&DAT_006cda98);
    uVar4 = FUN_0050c190();
    puVar1[0xd] = uVar4;
    puVar1[0xc] = uVar4;
    puVar1[0x5c] = param_1;
    iVar3 = FUN_005686e0();
    pcVar5 = s_m_15_BackEscMain_txr_006757a0;
    if (iVar3 != 2) {
      pcVar5 = s_m_16_BackEscMain_txr_00675788;
    }
    DAT_006cd35c = FUN_005eea00(pcVar5);
    iVar3 = FUN_00631d33(0x128);
    local_4._0_1_ = 2;
    if (iVar3 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00510ec0(&DAT_006755d4,4);
    }
    local_4._0_1_ = 1;
    FUN_00510e70(&DAT_006cd340,&DAT_006cd340,&DAT_006cd340,&DAT_006cd340);
    iVar3 = FUN_00631d33(0x128);
    local_4._0_1_ = 3;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00510ec0(&DAT_006755d4,0);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00510e70(&DAT_006cd340,&DAT_006cd340,&DAT_006cd340,&DAT_006cd340);
    uVar9 = 0;
    uVar7 = FUN_0050d740(s_exitsys_00675780,0xa9,0);
    FUN_005bd2a0(uVar7,uVar9);
    iVar3 = FUN_0050d740(&DAT_00675778,0xa3);
    FUN_005bd2a0(iVar3,0);
    uVar9 = 0;
    uVar7 = FUN_0050d740(s_sound_00675770,0xa4,0);
    FUN_005bd2a0(uVar7,uVar9);
    uVar9 = 0;
    uVar7 = FUN_0050d740(s_control_00675768,0xa5,0);
    FUN_005bd2a0(uVar7,uVar9);
    uVar9 = 0;
    uVar7 = FUN_0050d740(&DAT_00675764,0xa6,0);
    FUN_005bd2a0(uVar7,uVar9);
    iVar8 = FUN_0050d740(s_restart_0067575c,0xa8);
    FUN_005bd2a0(iVar8,0);
    if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
      *(undefined4 *)(iVar8 + 0x28) = 1;
    }
    iVar8 = FUN_0050d740(s_loadg_00675754,0x6e);
    FUN_005bd2a0(iVar8,0);
    if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
      *(undefined4 *)(iVar8 + 0x28) = 1;
    }
    iVar8 = FUN_0050d740(&DAT_0067574c,0xa7);
    FUN_005bd2a0(iVar8,0);
    if (*(int *)(DAT_006cdbcc + 0x524) != 0) {
      *(undefined4 *)(iVar8 + 0x28) = 1;
    }
    FUN_005bd7e0((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x38)) + 0x2d);
    FUN_005bd2a0(uVar4,0);
    (**(code **)(*piVar6 + 0x14))();
    FUN_00510de0(0x12,0x1c6);
    FUN_00510e10(DAT_006cdc6c,DAT_006cdc70);
    FUN_005bd2a0(piVar6,0);
    *(undefined4 **)(param_1 + 0xa9c) = puVar1 + 0x10;
    puVar2 = puVar1;
  }
  local_4 = 0xffffffff;
  DAT_006cdccc = puVar2;
  *(undefined4 **)(param_1 + 0xb28) = puVar2;
  FUN_005e3830(puVar2);
  (**(code **)(**(int **)(param_1 + 0xb28) + 0x20))();
  ExceptionList = pvStack_c;
  return;
}

