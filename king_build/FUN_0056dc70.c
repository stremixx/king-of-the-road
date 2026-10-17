
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056dc70(int param_1)

{
  LPCSTR lpFileName;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  CHAR local_14c [152];
  int local_b4;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  lpFileName = DAT_006957c8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646d03;
  pvStack_c = ExceptionList;
  DAT_006f2318 = DAT_006f227c;
  DAT_006f231c = DAT_006f2280;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(DAT_006cdbcc + 0x51c) = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x50c) = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
  _DAT_006f2364 = 0;
  DAT_006f2410 = 0;
  if (DAT_006952a0 == 0) {
    FUN_00541090();
    FUN_004d8a40();
    FUN_004d8a80();
  }
  FUN_005313f0();
  iVar2 = DAT_0068a8f0;
  piVar1 = (int *)FUN_00568670();
  if (*piVar1 != iVar2) {
    FUN_00568670(&stack0xfffffe94);
    FUN_0043fd20();
    if (-1 < local_b4) {
      FUN_0055ebf0();
    }
  }
  FUN_0056eda0();
  if (*(short *)(DAT_006cdbd4 + 0x18c) == 0) {
    uVar4 = *(uint *)(DAT_006d0fd8 + 0x57c) & 0xfffffeff;
  }
  else {
    uVar4 = *(uint *)(DAT_006d0fd8 + 0x57c) | 0x100;
  }
  *(uint *)(DAT_006d0fd8 + 0x57c) = uVar4;
  if (DAT_00695288 != 0) {
    FUN_004eb320();
  }
  iVar2 = FUN_005686e0();
  if (iVar2 == 2) {
    _DAT_006f228c = FUN_005eea00();
    _DAT_006f2244 = FUN_005eea00();
    puVar5 = &DAT_006f1e6c;
    do {
      iVar2 = 0;
      do {
        FUN_0061c369(local_14c,s_m_15_I_tr_my_02d__d_msk_0067b078);
        uVar3 = FUN_005eea00(local_14c);
        *puVar5 = uVar3;
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar2 < 6);
    } while ((int)puVar5 < 0x6f20ac);
    DAT_006f2290 = FUN_005eea00();
    DAT_006f1d54 = FUN_005eea00();
    DAT_006f1d44 = FUN_005eea00(s_m_15_I_city0_msk_0067b03c);
    _DAT_006f1d48 = FUN_005eea00(s_m_15_I_city1_msk_0067b028);
    _DAT_006f1d4c = FUN_005eea00(s_m_15_I_city2_msk_0067b014);
    _DAT_006f1d50 = FUN_005eea00(s_m_15_I_city3_msk_0067b000);
    DAT_006f21b8 = FUN_005eea00(s_m_15_I_fuel0_msk_0067afec);
    _DAT_006f21bc = FUN_005eea00(s_m_15_I_fuel1_msk_0067afd8);
    _DAT_006f21c0 = FUN_005eea00(s_m_15_I_fuel2_msk_0067afc4);
    _DAT_006f21c4 = FUN_005eea00(s_m_15_I_fuel3_msk_0067afb0);
    DAT_006f22e0 = FUN_005eea00(s_m_15_I_gazhold_msk_0067af9c);
    DAT_006f1bb0 = FUN_005eea00(s_m_15_I_debris_msk_0067af88);
    DAT_006f22dc = FUN_005eea00(s_m_15_I_repair_msk_0067af74);
    DAT_006f1c68 = FUN_005eea00(s_m_15_I_tank_msk_0067af64);
    DAT_006f1c74 = FUN_005eea00(s_m_15_I_race_msk_0067af54);
    DAT_006f22d8 = FUN_005eea00(s_m_15_I_box_msk_0067af44);
    DAT_006f21c8 = FUN_005eea00();
    DAT_006f2308 = FUN_005eea00();
    _DAT_006f1d98 = FUN_005eea00(s_m_15_icon1_msk_0067af10);
    _DAT_006f1d9c = FUN_005eea00(s_m_15_icon2_msk_0067af00);
    _DAT_006f1da0 = FUN_005eea00(s_m_15_icon3_msk_0067aef0);
    _DAT_006f1da4 = FUN_005eea00(s_m_15_icon4_msk_0067aee0);
    _DAT_006f1da8 = FUN_005eea00(s_m_15_icon5_msk_0067aed0);
    _DAT_006f1dac = FUN_005eea00(s_m_15_icon6_msk_0067aec0);
    _DAT_006f1db0 = FUN_005eea00(s_m_15_icon7_msk_0067aeb0);
    pcVar6 = s_m_15_icon8_msk_0067aea0;
  }
  else {
    _DAT_006f228c = FUN_005eea00();
    _DAT_006f2244 = FUN_005eea00();
    puVar5 = &DAT_006f1e6c;
    do {
      iVar2 = 0;
      do {
        FUN_0061c369(local_14c,s_m_16_I_tr_my_02d__d_msk_0067ae60);
        uVar3 = FUN_005eea00(local_14c);
        *puVar5 = uVar3;
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar2 < 6);
    } while ((int)puVar5 < 0x6f20ac);
    DAT_006f2290 = FUN_005eea00();
    DAT_006f1d54 = FUN_005eea00();
    DAT_006f1d44 = FUN_005eea00(s_m_16_I_city0_msk_0067ae24);
    _DAT_006f1d48 = FUN_005eea00(s_m_16_I_city1_msk_0067ae10);
    _DAT_006f1d4c = FUN_005eea00(s_m_16_I_city2_msk_0067adfc);
    _DAT_006f1d50 = FUN_005eea00(s_m_16_I_city3_msk_0067ade8);
    DAT_006f21b8 = FUN_005eea00(s_m_16_I_fuel0_msk_0067add4);
    _DAT_006f21bc = FUN_005eea00(s_m_16_I_fuel1_msk_0067adc0);
    _DAT_006f21c0 = FUN_005eea00(s_m_16_I_fuel2_msk_0067adac);
    _DAT_006f21c4 = FUN_005eea00(s_m_16_I_fuel3_msk_0067ad98);
    DAT_006f22e0 = FUN_005eea00(s_m_16_I_gazhold_msk_0067ad84);
    DAT_006f1bb0 = FUN_005eea00(s_m_16_I_debris_msk_0067ad70);
    DAT_006f22dc = FUN_005eea00(s_m_16_I_repair_msk_0067ad5c);
    DAT_006f1c68 = FUN_005eea00(s_m_16_I_tank_msk_0067ad4c);
    DAT_006f1c74 = FUN_005eea00(s_m_16_I_race_msk_0067ad3c);
    DAT_006f22d8 = FUN_005eea00(s_m_16_I_box_msk_0067ad2c);
    DAT_006f21c8 = FUN_005eea00();
    DAT_006f2308 = FUN_005eea00();
    _DAT_006f1d98 = FUN_005eea00(s_m_16_icon1_msk_0067acf8);
    _DAT_006f1d9c = FUN_005eea00(s_m_16_icon2_msk_0067ace8);
    _DAT_006f1da0 = FUN_005eea00(s_m_16_icon3_msk_0067acd8);
    _DAT_006f1da4 = FUN_005eea00(s_m_16_icon4_msk_0067acc8);
    _DAT_006f1da8 = FUN_005eea00(s_m_16_icon5_msk_0067acb8);
    _DAT_006f1dac = FUN_005eea00(s_m_16_icon6_msk_0067aca8);
    _DAT_006f1db0 = FUN_005eea00(s_m_16_icon7_msk_0067ac98);
    pcVar6 = s_m_16_icon8_msk_0067ac88;
  }
  _DAT_006f1db4 = FUN_005eea00(pcVar6);
  iVar2 = FUN_00598490();
  iVar2 = *(int *)(iVar2 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x28) = 0x9999999a;
  *(undefined4 *)(iVar2 + 0x2c) = 0x3fc99999;
  iVar2 = *(int *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar2 + 0x28) = 0x9999999a;
  *(undefined4 *)(iVar2 + 0x2c) = 0x3fc99999;
  GetPrivateProfileStringA(s_EFFECTS_00671998,&DAT_00674d50,&DAT_006719a8,local_14c,0x3c,lpFileName)
  ;
  FUN_00596c60();
  if (*(int *)(param_1 + 0x1e8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0x4c);
  }
  FUN_005db380();
  FUN_00596cd0(uVar3);
  FUN_00597110();
  FUN_005982c0();
  if ((1 < *(int *)(DAT_006cdbcc + 0x514)) && (*(int *)(DAT_006d0fd8 + 0x578) != 0)) {
    *DAT_006d0e70 = 1;
  }
  iVar2 = FUN_00631d33();
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_006f2390 = 0;
  }
  else {
    DAT_006f2390 = FUN_0056a600();
  }
  local_4 = 0xffffffff;
  if (*(int *)(DAT_006cdbcc + 0x524) == 2) {
    FUN_0056a6f0();
  }
  puVar5 = (undefined4 *)FUN_00631d33();
  local_4 = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_005d2890();
    local_4 = CONCAT31(local_4._1_3_,2);
    *puVar5 = &PTR_FUN_0064ee70;
    puVar5[8] = 0xffffffff;
    puVar5[9] = 0xffffffff;
    FUN_005d2c20();
    FUN_005d2a80();
  }
  local_4 = 0xffffffff;
  DAT_006f2394 = puVar5;
  iVar2 = FUN_00631d33();
  local_4 = 3;
  if (iVar2 == 0) {
    DAT_006f2398 = 0;
  }
  else {
    DAT_006f2398 = FUN_00568e70();
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00631d33();
  local_4 = 4;
  if (iVar2 == 0) {
    DAT_00695298 = (int *)0x0;
  }
  else {
    DAT_00695298 = (int *)FUN_004ce100(param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*DAT_00695298 + 0x18))();
  FUN_0056cf20();
  FUN_0056cee0(0x372);
  if ((*(int *)(DAT_006cdbcc + 0x514) < 2) &&
     ((*(int *)(DAT_006cdbcc + 0x524) == 0 || (*(int *)(DAT_006cdbf8 + 0x180) != 2)))) {
    FUN_00483a60();
  }
  FUN_005686e0();
  DAT_006f2324 = FUN_005eea00();
  FUN_005686e0();
  DAT_006f2328 = FUN_005eea00();
  FUN_005686e0();
  DAT_006f232c = FUN_005eea00();
  FUN_005686e0();
  DAT_006f2330 = FUN_005eea00();
  FUN_005686e0();
  DAT_006f2334 = FUN_005eea00();
  FUN_005686e0();
  DAT_006f2338 = FUN_005eea00();
  FUN_005686e0();
  DAT_006f233c = FUN_005eea00();
  FUN_005686e0();
  DAT_006f2340 = FUN_005eea00();
  DAT_006f234c = FUN_005eea00(s_splashSound_0067ab1c);
  puVar5 = &DAT_006f2298;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(DAT_006cdbcc + 0x524) == 1) {
    (**(code **)(*DAT_006cdc14 + 0x24))();
  }
  ExceptionList = pvStack_10;
  return;
}

