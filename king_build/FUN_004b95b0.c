
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b95b0(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_43c [255];
  int iStack_40;
  int iStack_3c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006444b0;
  pvStack_c = ExceptionList;
  _DAT_006706f4 = 0;
  DAT_0069395c = 0;
  ExceptionList = &pvStack_c;
  FUN_005cb060(1);
  puVar2 = local_43c;
  for (iVar5 = 0x10c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar5 = (**(code **)(*DAT_0071f86c + 0x6c))(DAT_0071f86c,local_43c,0);
  if (((-1 < iVar5) && (iStack_40 == 0x121a)) && ((iStack_3c == 1 || (iStack_3c == 2)))) {
    DAT_0069395c = 1;
  }
  FUN_004b87e0();
  FUN_004b91e0();
  puVar1 = puStack_8;
  FUN_004843e0(puStack_8);
  DAT_00695184 = puVar1;
  DAT_00695160 = FUN_005d8940(s_common_00671688);
  DAT_00695164 = FUN_005d8940(&DAT_0066bd44);
  iVar5 = FUN_00631d33(0x58);
  uStack_10 = 0;
  if (iVar5 == 0) {
    DAT_006f5330 = 0;
  }
  else {
    DAT_006f5330 = FUN_0057b960(DAT_00695184,DAT_0071f868);
  }
  uStack_10 = 0xffffffff;
  iVar5 = FUN_00631d33(0x60);
  uStack_10 = 1;
  if (iVar5 == 0) {
    DAT_006951b4 = 0;
  }
  else {
    DAT_006951b4 = FUN_004c8690(DAT_00695184,DAT_0071f868);
  }
  uStack_10 = 0xffffffff;
  iVar5 = FUN_00631d33(0x3c);
  uStack_10 = 2;
  if (iVar5 == 0) {
    DAT_0069518c = 0;
  }
  else {
    DAT_0069518c = FUN_00592740(s___ThatSortNode_00671678);
  }
  uStack_10 = 0xffffffff;
  DAT_006f59c8 = DAT_0069518c;
  puVar2 = (undefined4 *)FUN_00631d33(0x40);
  uStack_10 = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(s_afterThis_0067166c,5,1);
    *puVar2 = &PTR_FUN_0064b25c;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
  }
  uStack_10 = 0xffffffff;
  DAT_00695190 = puVar2;
  uVar3 = FUN_004c4750(s_shadtree0_006715d0,DAT_00695160);
  uVar3 = FUN_004c4750(s_shadtree1_00671660,DAT_00695160,uVar3);
  FUN_005c5ad0(uVar3);
  FUN_005cb070(FUN_004cb4a0,&LAB_004cb360);
  iVar5 = FUN_00631d33(0x58);
  uStack_10 = 4;
  if (iVar5 == 0) {
    DAT_00695158 = 0;
  }
  else {
    pcVar6 = s_trace_00671658;
    if (DAT_006cdbc8 == 0) {
      pcVar6 = s_shadow_00671650;
    }
    DAT_00695158 = FUN_004bc6e0(pcVar6,DAT_00695184,0x14);
  }
  uStack_10 = 0xffffffff;
  FUN_004bc9a0(DAT_00695190);
  if (*(int **)(puVar1 + 0x20c) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x20c) + 0x14))(0,DAT_00695190);
    (**(code **)(**(int **)(puVar1 + 0x20c) + 0x14))(0,DAT_006f59c8);
  }
  if ((*(double *)(DAT_00695184 + 0xb68) <= (double)_DAT_0064b12c) ||
     ((double)_DAT_0064b130 <= *(double *)(DAT_00695184 + 0xb68))) {
    DAT_006706fc = 0;
  }
  else {
    DAT_006706fc = 1;
  }
  if ((*(double *)(DAT_00695184 + 0xb68) <= (double)_DAT_0064b134) ||
     ((double)_DAT_0064b138 <= *(double *)(DAT_00695184 + 0xb68))) {
    DAT_006706f8 = 0;
  }
  else {
    DAT_006706f8 = 1;
  }
  if (_DAT_0064b248 < _DAT_00694fc0) {
    iVar5 = FUN_00631d33(0x34);
    uStack_10 = 5;
    if (iVar5 != 0) {
      uVar3 = FUN_004c4750(&DAT_00671648,DAT_00695160);
      FUN_004bee30(DAT_00695184,uVar3);
    }
    uStack_10 = 0xffffffff;
  }
  if (_DAT_0064b248 < _DAT_00694fe0) {
    iVar5 = FUN_00631d33(0x30);
    uStack_10 = 6;
    if (iVar5 != 0) {
      uVar3 = FUN_004c4750(&DAT_00671640,DAT_00695160);
      FUN_004be8d0(DAT_00695184,uVar3);
    }
    uStack_10 = 0xffffffff;
  }
  if (_DAT_0064b248 < _DAT_00694fa4) {
    iVar5 = FUN_00631d33(0x48);
    uStack_10 = 7;
    if (iVar5 == 0) {
      DAT_00695194 = 0;
    }
    else {
      uVar3 = FUN_004c4750(&DAT_00671640,DAT_00695160);
      uVar4 = FUN_004c4750(&DAT_00671638,DAT_00695160,uVar3);
      DAT_00695194 = FUN_004c0e30(DAT_00695184,uVar4,uVar3);
    }
    uStack_10 = 0xffffffff;
  }
  DAT_00695168 = 0;
  puVar2 = &DAT_006938f8;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00693960;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00694868;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00694bb8;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00694b50;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0069516c = 0;
  DAT_00695174 = 0;
  DAT_00695170 = 0;
  FUN_004b8c80();
  FUN_004b8ff0();
  FUN_004b8bc0();
  FUN_004b8f40();
  FUN_004b8b10();
  FUN_004b8a50();
  FUN_004b8d40();
  FUN_004b90c0();
  iVar5 = FUN_005ee8e0(0,s_GeometryKey_0067162c);
  if (iVar5 == 0) {
    _DAT_00695188 = 0;
  }
  else {
    _DAT_00695188 = *(int *)(iVar5 + 0x38);
  }
  if (_DAT_00695188 == 0) {
    DAT_00670700 = 200;
    DAT_00693790 = DAT_0064b1b0;
  }
  else if (_DAT_00695188 == 1) {
    DAT_00670700 = 100;
    DAT_00693790 = DAT_0064b1b0;
  }
  else if (_DAT_00695188 == 2) {
    DAT_00670700 = 100;
    DAT_00693790 = DAT_0064b1b4;
  }
  else {
    DAT_00670700 = 100;
    DAT_00693790 = DAT_0064b1b0;
  }
  FUN_004bb3e0();
  FUN_004c47d0(DAT_00695184);
  FUN_004cc8a0(DAT_00695190);
  FUN_005d1bf0(s___StaticGlow_0067161c,&LAB_004c48b0);
  FUN_005d1bf0(s___DynamicGlow_0067160c,&LAB_004c5b80);
  FUN_005d1bf0(s___WeldingSparkles_006715f8,&LAB_004cbf10);
  FUN_005d1bf0(s___People_006715ec,&LAB_004cc020);
  FUN_005d1e70();
  ExceptionList = pvStack_18;
  return;
}

