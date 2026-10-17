
undefined4 * __thiscall FUN_00568e70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(0xb,s_pager_0067a7e4);
  local_4 = 0;
  puVar1 = param_1 + 0xab;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  param_1[0x132] = 0;
  param_1[0x131] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0x3f000000;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  *param_1 = &PTR_FUN_0064edc4;
  iVar3 = 4;
  do {
    *(undefined1 *)(puVar1 + -0xa0) = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 0x20;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[300] = 0;
  param_1[10] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[299] = 0;
  FUN_005bcc50(&DAT_006cd340);
  param_1[0x131] = 5;
  uVar2 = FUN_005e8290(s_matrix_fon_0067a7d8);
  param_1[0x142] = uVar2;
  uVar2 = FUN_005e8290(s_icon_fon_0067a7cc);
  param_1[0x143] = uVar2;
  iVar3 = FUN_005686e0();
  if (iVar3 == 2) {
    uVar2 = FUN_005eea00(s_m15_pager_a_msk_0067a7bc);
    param_1[0x13b] = uVar2;
    uVar2 = FUN_005eea00(s_m15_pager_p_msk_0067a7ac);
    param_1[0x13c] = uVar2;
    pcVar4 = s_m15_tablo_txr_0067a79c;
  }
  else {
    uVar2 = FUN_005eea00(s_m16_pager_a_msk_0067a78c);
    param_1[0x13b] = uVar2;
    uVar2 = FUN_005eea00(s_m16_pager_p_msk_0067a77c);
    param_1[0x13c] = uVar2;
    pcVar4 = s_m16_tablo_txr_0067a76c;
  }
  uVar2 = FUN_005eea00(pcVar4);
  param_1[0x13a] = uVar2;
  uVar2 = FUN_005eea00(s_pagerSound_0067a760);
  param_1[0x140] = uVar2;
  uVar2 = FUN_005eea00(s_emptytankSound_0067a750);
  param_1[0x141] = uVar2;
  param_1[0x13d] = 0;
  param_1[0x13f] = 0;
  thunk_FUN_00603580();
  uVar2 = __ftol();
  param_1[0x13e] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

