
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005309c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006466fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(param_2,s__Viewer_006778d8);
  puVar5 = param_1 + 0xf;
  local_4 = 0;
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0xd;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_004ea3e8(FUN_004ea2d1,0x3f800000,0,0);
  local_4._0_1_ = 1;
  FUN_004ea3e8(FUN_004ea307,0x3e4ccccd,0,0);
  local_4._0_1_ = 2;
  FUN_004ea3e8(FUN_004ea340,0x3f800000,0,0);
  local_4._0_1_ = 3;
  FUN_004ea3e8(FUN_004ea2d1,0x3e99999a,0,0);
  local_4._0_1_ = 4;
  FUN_004ea3e8(FUN_004ea2d1,0x3e99999a,0,0);
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  puVar5 = param_1 + 0x78;
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = param_1 + 0x84;
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x76;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = param_1 + 0x90;
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x82;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = param_1 + 0x119;
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x8e;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = param_1 + 0x125;
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x117;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x123;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar7 = 4;
  puVar5 = param_1 + 0x131;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x12f;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar7 = 4;
  puVar5 = param_1 + 0x166;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x164;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar7 = 4;
  puVar5 = param_1 + 0x172;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x170;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar7 = 4;
  puVar5 = param_1 + 0x17e;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x17c;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar7 = 4;
  puVar5 = param_1 + 0x18a;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x188;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  *param_1 = &PTR_FUN_0064e2e0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[0x15a] = 0x1e;
  param_1[0x15b] = 0x1e;
  param_1[0x9a] = 0;
  param_1[0x9c] = 0;
  puVar4 = (undefined4 *)FUN_005db380(local_3c);
  puVar5 = param_1 + 0xd;
  puVar10 = puVar5;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  if (*(int *)(param_1[8] + 0x1e8) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(*(int *)(param_1[8] + 0x1e8) + 0x4c);
  }
  param_1[0x19] = uVar8;
  param_1[0x1a] = 0xffffffff;
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x76;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = &DAT_00701550;
  puVar10 = param_1 + 0x82;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = param_1 + 0x82;
  puVar10 = param_1 + 0x8e;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = puVar5;
  puVar10 = &DAT_00695930;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = &DAT_00695930;
  puVar10 = &DAT_00695af8;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar5 = (undefined4 *)FUN_005aba00(local_3c,puVar5);
  _DAT_006956a4 = DAT_007015b4;
  _DAT_006956a0 = DAT_007015b0;
  puVar4 = &DAT_00695900;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_006956a8 = DAT_007015b8;
  DAT_00695c18 = 0;
  FUN_0061c369(&DAT_00695c1c,s_None_Room_00672340);
  param_1[10] = 0;
  param_1[0x15f] = 0xfe;
  uVar6 = *(uint *)(DAT_006cdbd0 + 0x198) & 0xf;
  if (uVar6 == 1) {
    uVar8 = FUN_005eea00(s_msk_lfase_2_msk_006778c8);
    param_1[0x9e] = uVar8;
    uVar8 = FUN_005eea00(s_msk_lfase_4_msk_006778b8);
    param_1[0x9f] = uVar8;
    uVar8 = FUN_005eea00(s_msk_lfase_4_msk_006778b8);
    param_1[0xa0] = uVar8;
    uVar8 = FUN_005eea00(s_msk_fase_2_msk_006778a8);
    param_1[0xa1] = uVar8;
    uVar8 = FUN_005eea00(s_msk_fase_4_msk_00677898);
    param_1[0xa2] = uVar8;
    uVar8 = FUN_005eea00(s_msk_fase_4_msk_00677898);
    param_1[0xa3] = uVar8;
    uVar8 = FUN_005eea00(s_msk_m_panel_msk_00677888);
    param_1[0x9d] = uVar8;
  }
  else if (uVar6 == 2) {
    uVar8 = FUN_005eea00(s_m16_lfase_2_msk_00677878);
    param_1[0x9e] = uVar8;
    uVar8 = FUN_005eea00(s_m16_lfase_4_msk_00677868);
    param_1[0x9f] = uVar8;
    uVar8 = FUN_005eea00(s_m16_lfase_4_msk_00677868);
    param_1[0xa0] = uVar8;
    uVar8 = FUN_005eea00(s_m16_fase_2_msk_00677858);
    param_1[0xa1] = uVar8;
    uVar8 = FUN_005eea00(s_m16_fase_4_msk_00677848);
    param_1[0xa2] = uVar8;
    uVar8 = FUN_005eea00(s_m16_fase_4_msk_00677848);
    param_1[0xa3] = uVar8;
    uVar8 = FUN_005eea00(s_m16_m_panel_msk_00677838);
    param_1[0x9d] = uVar8;
  }
  else {
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0x9d] = 0;
  }
  param_1[0x198] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x117;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar9 = 0;
  puVar5 = &DAT_00701550;
  puVar4 = param_1 + 0x123;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x13d] = 0x42c80000;
  param_1[0x13e] = 0x40860a92;
  param_1[0x13b] = 0x42200000;
  param_1[0x13c] = 0x40860a92;
  param_1[0x1c] = 1;
  do {
    uVar6 = 0xffffffff;
    *(undefined4 *)((int)&DAT_006d1000 + iVar9) = 0;
    pcVar11 = *(char **)((int)&PTR_DAT_006776c8 + iVar9);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    *(uint *)((int)&DAT_006d101c + iVar9) = ~uVar6 - 1;
    fVar3 = DAT_00701588;
    iVar9 = iVar9 + 4;
    if (0x1b < iVar9) {
      fVar2 = -DAT_00701584;
      param_1[0x72] = -DAT_00701580;
      param_1[0x73] = fVar2;
      param_1[0x74] = -fVar3;
      fVar12 = (float10)FUN_004e2035();
      param_1[0x75] = (float)(fVar12 - (float10)_DAT_0064b2e8);
      uVar8 = FUN_005ee8e0(0,s_RD_Key_00677830);
      param_1[0x6e] = uVar8;
      uVar8 = FUN_005ee8e0(0,s_RD_LampKey_00677824);
      param_1[0x6f] = uVar8;
      param_1[0x70] = *(undefined4 *)(DAT_00695c00 + 0xbb0);
      param_1[0x71] = 2;
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}

