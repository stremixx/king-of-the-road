
void FUN_00512150(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064590b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(code **)(DAT_00695c00 + 0x218) = FUN_0050fec0;
  FUN_005a4e10(0);
  DAT_00701df8 = 0;
  if ((DAT_006cdcd0 == 4) || (DAT_006cdcd0 == 3)) {
    DAT_00701df8 = 1;
  }
  FUN_0050fff0(s_COMMON__00675708,s_common_00671688);
  FUN_00510240(s_COMMON__00675708,&DAT_00675888);
  iVar1 = FUN_0050fff0(s_COMMON__00675708,s_cabines_00675880);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar1 = FUN_0050fff0(s_COMMON__00675708,&DAT_0066bd44);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iVar1 = FUN_005d1e70();
  if (iVar1 != 0) {
    FUN_005d2520(iVar1,0);
  }
  *(int *)(DAT_006cdbcc + 0x54c) = DAT_00695c00;
  if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      puVar6 = &LAB_004d8ac0;
      pcVar5 = FUN_004d7610;
      uVar2 = FUN_005db8f0(s___ENV_00675878);
      FUN_00435810(uVar2,pcVar5,puVar6);
    }
    else if (*(int *)(DAT_006cdbf8 + 0x180) == 0) {
      puVar6 = &LAB_004d8ac0;
      pcVar5 = FUN_004d7610;
      uVar2 = FUN_005db8f0(s___MENV_00675870);
      FUN_00435810(uVar2,pcVar5,puVar6);
    }
    else if (*(int *)(DAT_006cdbf8 + 0x180) == 1) {
      puVar6 = &LAB_004d8ac0;
      pcVar5 = FUN_004d7610;
      uVar2 = FUN_005db8f0(s___MTR_00675868);
      FUN_00435810(uVar2,pcVar5,puVar6);
    }
  }
  else {
    iVar1 = FUN_00631d33(0x1a8);
    local_4 = 0;
    if (iVar1 == 0) {
      DAT_006cdbe4 = (int *)0x0;
    }
    else {
      DAT_006cdbe4 = (int *)FUN_0050f1e0();
    }
    local_4 = 0xffffffff;
    FUN_005e3810(DAT_006cdbe4);
    (**(code **)(*DAT_006cdbe4 + 0x24))();
  }
  *(undefined4 *)(DAT_00695c00 + 0x218) = 0;
  FUN_005b5b90(**(undefined4 **)(*(int *)(DAT_00695c00 + 0x1d4) + 100));
  *(int *)(*(int *)(DAT_00695c00 + 0x1d8) + 0x70) = (int)*(short *)(DAT_006cdbd0 + 0x1a6);
  uVar2 = FUN_005ee8e0(0,s_GeometryKey_0067162c);
  iVar1 = 2 - (int)*(short *)(DAT_006cdbd0 + 0x1a6) / 0x23;
  FUN_004e409c(uVar2,iVar1);
  pcVar3 = s_sky_min_cl_0067585c;
  if (iVar1 != 2) {
    pcVar3 = s_sky_max_cl_00675850;
  }
  piVar4 = (int *)FUN_005eea00(pcVar3);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))();
  }
  if (*(short *)(DAT_006cdbd0 + 0x1a4) < 0x1e) {
    DAT_0071f820 = 0;
LAB_005123cb:
    *(uint *)(DAT_00695c00 + 0xbcc) = *(uint *)(DAT_00695c00 + 0xbcc) | 0x2000000;
    DAT_00701dec = DAT_00701dec | 0x2000000;
  }
  else {
    if (*(short *)(DAT_006cdbd0 + 0x1a4) < 0x3c) goto LAB_005123cb;
    *(uint *)(DAT_00695c00 + 0xbcc) = *(uint *)(DAT_00695c00 + 0xbcc) & 0xfdffffff;
    DAT_00701dec = DAT_00701dec & 0xfdffffff;
  }
  uVar2 = FUN_005ee8e0(0,s_TextureSizeKey_00675840);
  if (DAT_006cdcd0 == 4) {
    DAT_0067a674 = 0x70800;
    uVar7 = 0;
  }
  else if (DAT_006cdcd0 == 3) {
    DAT_0067a674 = 0x28000;
    uVar7 = 0;
  }
  else if (DAT_006cdcd0 == 2) {
    DAT_0067a674 = 0x28000;
    uVar7 = 1;
  }
  else if (DAT_006cdcd0 == 1) {
    DAT_0067a674 = 0x1e000;
    uVar7 = 1;
  }
  else {
    if (DAT_006cdcd0 != 0) goto LAB_00512482;
    DAT_0071f820 = 0;
    DAT_0067a674 = 0x11800;
    uVar7 = 2;
  }
  FUN_005e10c0(uVar2,uVar7);
LAB_00512482:
  FUN_00511f50();
  ExceptionList = pvStack_c;
  return;
}

