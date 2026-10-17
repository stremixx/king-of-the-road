
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004eb580(undefined4 *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  short sVar11;
  int iVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int iVar16;
  float10 fVar17;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  int in_stack_00000038;
  float local_e0c;
  float local_e08;
  float local_e04;
  float local_e00;
  float local_dfc;
  float local_df8;
  float *local_df4;
  float *local_df0;
  float local_dec;
  float *local_de8;
  float local_de4;
  float local_de0;
  float local_ddc;
  float local_dd8;
  float local_dd4;
  float local_dd0;
  undefined4 *local_dcc;
  undefined4 *local_dc8;
  float local_dc4;
  float local_dc0;
  float local_db8;
  float local_db4;
  float local_da8;
  float local_da4;
  float local_da0;
  float local_d9c;
  float local_d98;
  float local_d94;
  float local_d90;
  float local_d8c;
  float local_d88;
  float local_d84;
  float local_d80;
  float local_d7c;
  float local_d78;
  float local_d74;
  undefined4 *local_d70;
  undefined1 local_d6c [12];
  undefined4 local_d60;
  undefined4 local_d5c [12];
  float local_d2c;
  float local_d28;
  float local_d24;
  float local_d20;
  float local_d1c;
  float local_d18;
  float local_d14;
  float local_d10;
  float local_d0c;
  float local_d08;
  float local_d04;
  float local_d00;
  int local_cf8;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined1 local_c34 [48];
  undefined1 local_c04 [48];
  undefined4 local_bd4 [24];
  undefined4 local_b74;
  float local_b70;
  undefined4 local_b6c;
  float local_b68;
  float local_b64;
  undefined4 local_b44;
  undefined4 local_b28;
  undefined4 local_b24;
  undefined4 local_b20;
  float local_b14;
  undefined4 local_b10;
  undefined4 local_b08;
  float afStack_b04 [15];
  undefined4 local_ac8;
  undefined4 local_aa8 [8];
  undefined4 local_a88 [8];
  undefined4 local_a68 [12];
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  float local_a28 [80];
  float local_8e8 [16];
  float local_8a8 [401];
  CHAR local_264 [600];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645582;
  local_c = ExceptionList;
  iVar12 = 4;
  puVar7 = param_1 + 6;
  ExceptionList = &local_c;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x19;
  puVar9 = &DAT_00701550;
  puVar15 = param_1 + 4;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_df4 = (float *)0x8;
  pfVar10 = (float *)(param_1 + 0x41);
  puVar7 = param_1;
  local_d70 = param_1;
  do {
    FUN_004042a0();
    FUN_004042a0();
    FUN_005eebf0();
    puVar7[0x3e] = DAT_007015b0;
    puVar7[0x3f] = DAT_007015b4;
    puVar7[0x40] = DAT_007015b8;
    *pfVar10 = DAT_00701590;
    pfVar10[1] = DAT_00701594;
    fVar2 = DAT_00701598;
    *(undefined2 *)(pfVar10 + 3) = 0;
    *(undefined2 *)((int)pfVar10 + 0xe) = 0;
    pfVar10[2] = fVar2;
    pfVar10[0x1e] = 0.0;
    pfVar10[0x39] = 0.0;
    local_df4 = (float *)((int)local_df4 + -1);
    pfVar10 = pfVar10 + 0x3e;
    puVar7 = puVar7 + 0x3e;
  } while (local_df4 != (float *)0x0);
  puVar7 = param_1 + 0x236;
  iVar12 = 4;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x242;
  puVar9 = &DAT_00701550;
  puVar15 = param_1 + 0x234;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  iVar12 = 4;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x24e;
  puVar9 = &DAT_00701550;
  puVar15 = param_1 + 0x240;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  iVar12 = 4;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x24c;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar12 = 4;
  puVar7 = param_1 + 0x25a;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 600;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar12 = 4;
  puVar7 = param_1 + 0x266;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x264;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar12 = 4;
  puVar7 = param_1 + 0x272;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x270;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  puVar7 = param_1 + 0x291;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x2a9;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x2c1;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x2d9;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x2f1;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  param_1[0x310] = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x317] = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  param_1[0x358] = 0;
  param_1[0x359] = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x35e] = 0;
  param_1[0x360] = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  param_1[0x36d] = 0;
  param_1[0x36e] = 0;
  puVar7 = param_1 + 0x3c2;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x402] = 0;
  param_1[0x403] = 0;
  param_1[0x404] = 0;
  local_df4 = (float *)0x8;
  puVar7 = param_1 + 0x406;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_004042a0();
    FUN_005eebf0();
    *puVar7 = DAT_007015b0;
    puVar7[1] = DAT_007015b4;
    puVar7[2] = DAT_007015b8;
    puVar7[3] = DAT_00701590;
    puVar7[4] = DAT_00701594;
    local_df4 = (float *)((int)local_df4 + -1);
    puVar7[5] = DAT_00701598;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined2 *)((int)puVar7 + 0x1a) = 0;
    puVar7[0x21] = 0;
    puVar7[0x3c] = 0;
    puVar7 = puVar7 + 0x3e;
  } while (local_df4 != (float *)0x0);
  puVar7 = param_1 + 0x5f9;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x611;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x629;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x641;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x67f] = 0;
  param_1[0x680] = 0;
  param_1[0x681] = 0;
  param_1[0x6b0] = 0;
  param_1[0x6b1] = 0;
  param_1[0x6b2] = 0;
  param_1[0x6b3] = 0;
  param_1[0x6b4] = 0;
  param_1[0x6b5] = 0;
  param_1[0x6b6] = 0;
  param_1[0x6b7] = 0;
  param_1[0x6b8] = 0;
  puVar7 = param_1 + 0x6bc;
  iVar12 = 4;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x6ba;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004ea3e8(FUN_004ea307,0x3f000000,0,0);
  local_4 = 0;
  FUN_004ea3e8(FUN_004ea392,0x3f333333,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar7 = param_1 + 0x72f;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x7aa;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x7d2] = 0;
  param_1[0x7d3] = 0;
  param_1[0x7d4] = 0;
  param_1[0x7d5] = 0;
  param_1[0x7d6] = 0;
  param_1[0x7d7] = 0;
  FUN_004eac30();
  puVar7 = param_1 + 0x803;
  iVar12 = 4;
  do {
    puVar7[-2] = 0;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x80d;
  puVar9 = &DAT_00701550;
  puVar15 = param_1 + 0x801;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x825;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x83d;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x855;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0x86d;
  iVar12 = 8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x885] = 0;
  param_1[0x886] = 0;
  param_1[0x887] = 0;
  FUN_004f6570();
  param_1[0x9ad] = 0;
  param_1[0x9ae] = 0;
  param_1[0x9af] = 0;
  FUN_004eaff0();
  FUN_004011e0(param_1 + 0xa7c,0xc,4,FUN_004042a0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0xa7c;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004011e0(param_1 + 0xa88,0xc,4,FUN_004042a0);
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0xa88;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0xa94] = 0;
  param_1[0xa95] = 0;
  param_1[0xa96] = 0;
  param_1[0xa97] = 0;
  param_1[0xa98] = 0;
  param_1[0xa99] = 0;
  FUN_004042a0();
  FUN_004042a0();
  FUN_004011e0(param_1 + 0xaa0,0xc,8,FUN_004042a0);
  FUN_004011e0(param_1 + 0xab8,0xc,8,FUN_004042a0);
  FUN_004042a0();
  FUN_004011e0(param_1 + 0xad4,0xf8,8,FUN_004edd50);
  FUN_004042a0();
  FUN_004042a0();
  FUN_004042a0();
  FUN_004011e0(param_1 + 0xcf1,0xc,8,FUN_004042a0);
  FUN_004042a0();
  FUN_004011e0(param_1 + 0xd44,0xd0,8,FUN_005eebf0);
  FUN_004042a0();
  FUN_004042a0();
  FUN_004042a0();
  FUN_004042a0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  *param_1 = &PTR_FUN_0064c984;
  if (param_2 == (int *)0x0) {
    FUN_0061c369(&local_d60,s__s___Car_V___Car_V_______room__N_00673488,
                 &DAT_006970c6 + in_stack_00000038 * 0x970,(double)in_stack_0000002c,
                 (double)in_stack_00000030,(double)in_stack_00000034,(double)_DAT_00695954,
                 (double)_DAT_00695958,(double)_DAT_0069595c);
    FUN_004e1e9c(&local_d60);
  }
  fVar17 = (float10)FUN_004e2035();
  param_1[2] = (float)fVar17;
  param_1[3] = 0;
  puVar7 = &DAT_006967c8 + in_stack_00000038 * 0x25c;
  puVar9 = local_bd4;
  for (iVar12 = 0x25c; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x233] = in_stack_00000038;
  param_1[0x990] = local_b74;
  param_1[0x7d2] = local_a38;
  param_1[0x7d3] = local_a34;
  param_1[0x7d4] = local_a30;
  puVar7 = (undefined4 *)FUN_004e29c2();
  param_1[0x7d5] = *puVar7;
  param_1[0x7d6] = puVar7[1];
  param_1[0x7d7] = puVar7[2];
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 4;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x240;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_005aba00();
  iVar12 = (&DAT_00697028)[param_1[0x233] * 0x25c];
  param_1[0x375] = iVar12;
  if ((DAT_006cd29c <= (int)param_1[0x233]) && ((int)param_1[0x233] < DAT_006cd2a0)) {
    iVar12 = iVar12 + 1;
    param_1[0x375] = iVar12;
    if (7 < iVar12) {
      wsprintfA(local_264,s__Car_V_STR_with__d_wheels_when_M_00673460,iVar12,8);
      FUN_004e1e9c();
    }
  }
  local_df4 = local_8e8;
  param_1[0xcd0] = param_1[0x375];
  pfVar10 = (float *)(param_1 + 0x72f);
  pfVar13 = (float *)(param_1 + 0x7e7);
  pfVar8 = local_a28;
  local_df0 = (float *)0x8;
  do {
    fVar4 = *local_df4;
    fVar5 = local_df4[8];
    pfVar13[-8] = *local_df4 * _DAT_0064b3f8 * (float)_DAT_0064a7c8;
    fVar2 = pfVar8[1];
    fVar3 = *pfVar8;
    *pfVar13 = fVar4;
    pfVar13[8] = fVar5;
    local_e00 = local_da0 * pfVar8[-1] + local_d94 * fVar3 + local_d88 * fVar2 + local_d7c;
    fVar2 = pfVar8[1];
    fVar3 = *pfVar8;
    *pfVar10 = local_e00;
    local_dfc = local_d9c * pfVar8[-1] + local_d90 * fVar3 + local_d84 * fVar2 + local_d78;
    fVar2 = pfVar8[1];
    fVar3 = *pfVar8;
    pfVar10[1] = local_dfc;
    local_df8 = local_d98 * pfVar8[-1] + local_d8c * fVar3 + local_d80 * fVar2 + local_d74;
    pfVar10[2] = local_df8;
    fVar2 = _DAT_0067338c * *pfVar13 + local_b70;
    local_e0c = fVar2 * DAT_00701590;
    local_e08 = fVar2 * DAT_00701594;
    local_de4 = *pfVar10 - local_e0c;
    local_de0 = pfVar10[1] - local_e08;
    local_ddc = pfVar10[2] - fVar2 * DAT_00701598;
    pfVar10[-0x11e] = local_de4;
    pfVar10[-0x11d] = local_de0;
    pfVar10[-0x11c] = local_ddc;
    pfVar8 = pfVar8 + 3;
    pfVar10 = pfVar10 + 3;
    pfVar1 = local_df4 + 0x10;
    local_df4 = local_df4 + 1;
    pfVar13[-0x98] = *pfVar1;
    pfVar13 = pfVar13 + 1;
    local_df0 = (float *)((int)local_df0 + -1);
  } while (local_df0 != (float *)0x0);
  if ((param_1[0x375] == 6) &&
     ((((((((float)param_1[0x730] < _DAT_0064b254 || ((float)param_1[0x733] < _DAT_0064b254)) ||
          (_DAT_0064b254 < (float)param_1[0x736])) ||
         ((_DAT_0064b254 < (float)param_1[0x739] || (_DAT_0064b254 < (float)param_1[0x73c])))) ||
        ((_DAT_0064b254 < (float)param_1[0x73f] ||
         ((_DAT_0064b254 < (float)param_1[0x72f] || ((float)param_1[0x732] < _DAT_0064b254)))))) ||
       (_DAT_0064b254 < (float)param_1[0x735])) ||
      (((((float)param_1[0x738] < _DAT_0064b254 || (_DAT_0064b254 < (float)param_1[0x73b])) ||
        ((float)param_1[0x73e] < _DAT_0064b254)) ||
       (((ABS((float)param_1[0x730]) * (float)_DAT_0064a830 <
          ABS((float)param_1[0x733] - (float)param_1[0x730]) ||
         (ABS((float)param_1[0x736]) * (float)_DAT_0064a830 <
          ABS((float)param_1[0x739] - (float)param_1[0x736]))) ||
        (ABS((float)param_1[0x73c]) * (float)_DAT_0064a830 <
         ABS((float)param_1[0x73f] - (float)param_1[0x73c]))))))))) {
    FUN_004e1e9c();
  }
  local_e08 = -DAT_00701594;
  local_e04 = -DAT_00701598;
  fVar2 = local_e08 * _DAT_0064c980;
  param_1[0x350] = -DAT_00701590 * _DAT_0064c980;
  fVar3 = local_e04 * _DAT_0064c980;
  param_1[0x351] = fVar2;
  param_1[0x352] = fVar3;
  local_df8 = (float)param_1[0x990];
  local_e00 = local_df8 * (float)param_1[0x350];
  local_dfc = local_df8 * (float)param_1[0x351];
  local_df8 = local_df8 * (float)param_1[0x352];
  param_1[0x315] = local_e00;
  param_1[0x316] = local_dfc;
  param_1[0x317] = local_df8;
  param_1[0x98f] = ABS((float)param_1[0x352]);
  param_1[0x35f] = ABS((float)param_1[0x352]);
  fVar2 = (float)_DAT_0064a828;
  param_1[0xfbb] = 3;
  FUN_004eae00(0,local_b14 * fVar2,local_b14,0x3f800000);
  FUN_004eae00(1,local_b14 * (float)_DAT_0064a728,local_b14 * (float)_DAT_0064c978,0x3f800000);
  local_dec = local_b68;
  param_1[0xfc8] = 2;
  FUN_004eae00(0,0,local_b68,local_b64);
  FUN_004eae00(1,0,local_dec + local_dec,local_b64 + local_b64);
  fVar17 = (float10)FUN_004eae60();
  param_1[0xf1e] = (float)fVar17;
  param_1[0xf1f] = 0;
  param_1[0x800] = param_1;
  FUN_004eac40(0x43960000,0);
  FUN_004eac40(0x43960000,1);
  FUN_004eac40(0x43960000,2);
  FUN_004eac40(0x43960000,3);
  FUN_004eddc0();
  param_1[0x991] = local_b28;
  param_1[0x992] = local_b24;
  param_1[0x993] = local_b20;
  fVar2 = _DAT_0064c970;
  param_1[0x9ad] = DAT_00701590;
  local_df0 = (float *)0x42c80000;
  local_de8 = (float *)0xc2c80000;
  param_1[0x9ae] = DAT_00701594;
  local_df4 = (float *)0x42c80000;
  iVar12 = 8;
  param_1[0x9af] = DAT_00701598;
  pfVar10 = (float *)(param_1 + 0x730);
  do {
    if (pfVar10[-1] < (float)local_df0) {
      local_df0 = (float *)pfVar10[-1];
    }
    if ((float)local_de8 < pfVar10[-1]) {
      local_de8 = (float *)pfVar10[-1];
    }
    if (*pfVar10 < (float)local_df4) {
      local_df4 = (float *)*pfVar10;
    }
    if (fVar2 < *pfVar10) {
      fVar2 = *pfVar10;
    }
    pfVar10 = pfVar10 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_df0 = (float *)((float)local_de8 - (float)local_df0);
  puVar7 = param_1 + 0x6e5;
  local_de8 = (float *)((float)local_df0 * (float)local_df0 * (float)_DAT_0064a6d0 *
                       (float)_DAT_0064a7a8);
  param_1[0x992] = (float)local_de8 * (float)param_1[0x992];
  fVar2 = fVar2 - (float)local_df4;
  local_df4 = (float *)0x8;
  param_1[0x993] = ((fVar2 * (float)local_de8) / (float)local_df0) * (float)param_1[0x993];
  local_df8 = (float)local_df0 * _DAT_0064b8f4 + fVar2 * _DAT_0064b960;
  local_e00 = local_df8 * DAT_00701590;
  local_dfc = local_df8 * DAT_00701594;
  local_df8 = local_df8 * DAT_00701598;
  param_1[0x9ad] = local_e00;
  param_1[0x9ae] = local_dfc;
  param_1[0x9af] = local_df8;
  param_1[0x683] = 0x3fcccccd;
  param_1[0x6dc] = local_b70;
  do {
    puVar7[-8] = param_1[0x6dc];
    *puVar7 = local_b6c;
    fVar17 = (float10)FUN_005aabc0();
    puVar7[0x62] = (float)fVar17;
    if ((float10)(float)param_1[0x683] < fVar17) {
      param_1[0x683] = (float)fVar17;
    }
    puVar7 = puVar7 + 1;
    local_df4 = (float *)((int)local_df4 + -1);
  } while (local_df4 != (float *)0x0);
  if ((int)param_1[0x375] < 4) {
    local_e0c = (float)param_1[0x72f] - (float)param_1[0x732];
    local_e08 = (float)param_1[0x730] - (float)param_1[0x733];
    local_e04 = (float)param_1[0x731] - (float)param_1[0x734];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0();
    param_1[0x7d8] = (float)fVar17;
    param_1[0x7d9] = (float)fVar17;
    param_1[0x7da] = (float)fVar17;
    param_1[0x7db] = (float)fVar17;
    param_1[0x7dc] = (float)fVar17;
  }
  else {
    local_e0c = (float)param_1[0x735] - (float)param_1[0x72f];
    local_e08 = (float)param_1[0x736] - (float)param_1[0x730];
    local_e04 = (float)param_1[0x737] - (float)param_1[0x731];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0();
    param_1[0x7d9] = (float)fVar17;
    local_e0c = (float)param_1[0x72f] - (float)param_1[0x732];
    local_e08 = (float)param_1[0x730] - (float)param_1[0x733];
    local_e04 = (float)param_1[0x731] - (float)param_1[0x734];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0(&local_e0c);
    param_1[0x7da] = (float)fVar17;
    local_e0c = (float)param_1[0x732] - (float)param_1[0x738];
    local_e08 = (float)param_1[0x733] - (float)param_1[0x739];
    local_e04 = (float)param_1[0x734] - (float)param_1[0x73a];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0();
    param_1[0x7db] = (float)fVar17;
    local_e0c = (float)param_1[0x738] - (float)param_1[0x735];
    local_e08 = (float)param_1[0x739] - (float)param_1[0x736];
    local_e04 = (float)param_1[0x73a] - (float)param_1[0x737];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0(&local_e0c);
    param_1[0x7dc] = (float)fVar17;
    local_dd8 = (float)param_1[0x72f] - (float)param_1[0x735];
    local_dd4 = (float)param_1[0x730] - (float)param_1[0x736];
    local_dd0 = (float)param_1[0x731] - (float)param_1[0x737];
    local_e0c = (float)param_1[0x732] - (float)param_1[0x738];
    local_e08 = (float)param_1[0x733] - (float)param_1[0x739];
    local_e04 = (float)param_1[0x734] - (float)param_1[0x73a];
    local_e00 = local_e0c;
    local_dfc = local_e08;
    local_df8 = local_e04;
    fVar17 = (float10)FUN_005aabc0();
    local_dec = (float)fVar17;
    fVar17 = (float10)FUN_005aabc0(&local_dd8);
    param_1[0x7d8] = (float)((fVar17 + (float10)local_dec) * (float10)_DAT_0064b248);
    param_1[0x7dd] = ABS((float)param_1[0x730]);
    param_1[0x7de] = ABS((float)param_1[0x736]);
    if (param_1[0x375] == 6) {
      local_dd8 = (float)param_1[0x72f] - (float)param_1[0x73b];
      local_dd4 = (float)param_1[0x730] - (float)param_1[0x73c];
      local_dd0 = (float)param_1[0x731] - (float)param_1[0x73d];
      local_e0c = (float)param_1[0x732] - (float)param_1[0x73e];
      local_e08 = (float)param_1[0x733] - (float)param_1[0x73f];
      local_e04 = (float)param_1[0x734] - (float)param_1[0x740];
      local_e00 = local_e0c;
      local_dfc = local_e08;
      local_df8 = local_e04;
      fVar17 = (float10)FUN_005aabc0();
      local_dec = (float)fVar17;
      fVar17 = (float10)FUN_005aabc0(&local_dd8);
      param_1[0x7d8] = (float)((fVar17 + (float10)local_dec) * (float10)_DAT_0064b248);
      param_1[0x7de] = ABS((float)param_1[0x73c]);
    }
  }
  puVar7 = param_1 + 0x6fd;
  iVar12 = 8;
  puVar9 = local_a68;
  do {
    puVar7[-0x10] = puVar9[-0x10];
    *puVar7 = *puVar9;
    puVar7[-8] = puVar9[-8];
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
    puVar9 = puVar9 + 1;
  } while (iVar12 != 0);
  param_1[0x707] = 1;
  param_1[0x708] = 0xffffffff;
  param_1[0x705] = 1;
  param_1[0x706] = local_b44;
  param_1[0xef7] = local_b44;
  param_1[0x720] = local_b08;
  sVar11 = 0;
  if (-1 < (int)param_1[0x706]) {
    iVar12 = 0;
    do {
      sVar11 = sVar11 + 1;
      param_1[iVar12 + 0x711] = afStack_b04[iVar12] * (float)param_1[0x720];
      iVar12 = (int)sVar11;
    } while (iVar12 <= (int)param_1[0x706]);
  }
  param_1[0x721] = 0;
  param_1[0x722] = local_ac8;
  param_1[0x723] = local_b10;
  FUN_004eae00(0,0,0,0);
  FUN_004eae00(1,(float)param_1[0x723] * (float)_DAT_0064a728,
               (float)param_1[0x723] + (float)param_1[0x723],0);
  FUN_004eae00(0,0x3f800000,0x3f800000,0x3f800000);
  FUN_004eae00(1,0x3f4ccccd,0x3f4ccccd,0x3f800000);
  param_1[0x725] = 0;
  param_1[0x72e] = 0x3f800000;
  param_1[0x70e] = 0x3dcccccd;
  param_1[0x70c] = 0x3f000000;
  param_1[0x70d] = 0x3ba3d70a;
  fVar17 = (float10)FUN_004e2035();
  param_1[0x70f] = (float)fVar17;
  param_1[0x710] = 0x3f000000;
  param_1[0x70b] = 0;
  param_1[0x709] = 0;
  FUN_004eae00(0,0x3dcccccd,0x3f800000,0x42700000);
  FUN_004eae00(1,0x3f000000,0x3f800000,0x42f00000);
  FUN_004eae00(0,0,0x3f800000,0x41200000);
  FUN_004eae00(1,0,0x3f800000,0x41a00000);
  FUN_004eae00(0,0x3f19999a,0x3f800000,0x46ea6000);
  FUN_004eae00(1,0x3f4ccccd,0x3f800000,0x476a6000);
  FUN_004eae00(2,0x3f4ccccd,0x3f800000,0x476a6000);
  param_1[0xf15] = 0;
  param_1[0x6b9] = param_2;
  param_1[0x3d] = param_2;
  param_1[0x684] = param_2;
  puVar7 = (undefined4 *)&stack0x00000008;
  puVar9 = param_1 + 4;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_005eebf0();
  puVar7 = &DAT_00701550;
  puVar9 = local_d5c;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_d14 = DAT_00701590 + DAT_00701590 + (float)param_1[0xd];
  local_d10 = DAT_00701594 + DAT_00701594 + (float)param_1[0xe];
  local_d0c = DAT_00701598 + DAT_00701598 + (float)param_1[0xf];
  local_e08 = DAT_00701594 * _DAT_0064c2e8;
  local_e04 = DAT_00701598 * _DAT_0064c2e8;
  local_e00 = (float)param_1[0xd] - DAT_00701590 * _DAT_0064c2e8;
  local_dfc = (float)param_1[0xe] - local_e08;
  local_df8 = (float)param_1[0xf] - local_e04;
  local_cec = 0;
  local_ce8 = 0;
  local_d60 = 0;
  local_cf8 = 0;
  local_d08 = local_e00;
  local_d04 = local_dfc;
  local_d00 = local_df8;
  if (*(short *)(param_1 + 0x9c2) == 0) {
    local_df4 = (float *)(**(code **)(*param_2 + 0x34))(4,&local_d60);
    if ((((uint)local_df4 & 2) != 0) && (local_cf8 == 0)) {
      param_1[0xf15] = 1;
      FUN_004e1e9c();
    }
  }
  else {
    local_df4 = (float *)FUN_004e58e9();
  }
  if (((uint)local_df4 & 1) != 0) {
    fVar2 = _DAT_0067338c * (float)param_1[0x7e7] + ((float)param_1[0x6dc] - (float)param_1[0x731]);
    local_e0c = local_d20 * fVar2;
    local_e08 = local_d1c * fVar2;
    local_e00 = local_d2c + local_e0c;
    local_dfc = local_e08 + local_d28;
    param_1[0xd] = local_e00;
    local_df8 = fVar2 * local_d18 + local_d24;
    param_1[0xe] = local_dfc;
    param_1[0xf] = local_df8;
  }
  puVar7 = param_1 + 4;
  puVar9 = puVar7;
  puVar15 = param_1 + 0x6ba;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar9 = puVar7;
  puVar15 = param_1 + 0x234;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar7 = (undefined4 *)FUN_005aba00(local_c04,puVar7);
  puVar9 = puVar7;
  puVar15 = param_1 + 0x240;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar9 = param_1 + 0x24c;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_dd8 = 0.0;
  param_1[0x31] = DAT_007015b0;
  local_dd4 = 0.0;
  local_dd0 = 1.0;
  param_1[0x32] = DAT_007015b4;
  local_dcc = param_1 + 0xd5d;
  local_dec = 1.12104e-44;
  param_1[0x33] = DAT_007015b8;
  local_dc8 = param_1 + 0x669;
  local_df0 = (float *)(param_1 + 0x41);
  local_de8 = (float *)(param_1 + 0x731);
  local_df4 = (float *)(param_1 + 0x376);
  do {
    pfVar10 = local_df0;
    *local_df0 = local_dd8;
    local_df0[1] = local_dd4;
    local_df0[2] = local_dd0;
    FUN_005aae00(local_d6c,local_df0);
    fVar2 = _DAT_0067338c * local_df4[0x471];
    *local_df4 = fVar2;
    local_df4[8] = fVar2;
    local_df4[0x10] = *local_df4;
    fVar2 = *local_df4 + (float)param_1[0x6dc];
    local_db8 = fVar2 * DAT_00701590;
    local_db4 = fVar2 * DAT_00701594;
    local_da8 = (float)param_1[0xb] * *local_de8 +
                (float)param_1[5] * local_de8[-2] + (float)param_1[8] * local_de8[-1] +
                (float)param_1[0xe];
    local_da4 = (float)param_1[0xc] * *local_de8 +
                (float)param_1[6] * local_de8[-2] + (float)param_1[9] * local_de8[-1] +
                (float)param_1[0xf];
    local_e0c = (local_de8[-2] * (float)param_1[4] +
                 (float)param_1[10] * *local_de8 + (float)param_1[7] * local_de8[-1] +
                (float)param_1[0xd]) - local_db8;
    local_e08 = local_da8 - local_db4;
    local_e04 = local_da4 - fVar2 * DAT_00701598;
    pfVar10[-3] = local_e0c;
    pfVar10[-2] = local_e08;
    pfVar10[-1] = local_e04;
    *(undefined2 *)(pfVar10 + 3) = 1;
    *(undefined2 *)((int)pfVar10 + 0xe) = 0;
    pfVar13 = pfVar10 + -3;
    pfVar10 = pfVar10 + 0x3c5;
    for (iVar12 = 0x3e; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar10 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar10 = pfVar10 + 1;
    }
    fVar2 = local_df4[0x367] + *local_df4;
    local_dc4 = fVar2 * DAT_00701590;
    local_dc0 = fVar2 * DAT_00701594;
    local_de4 = local_de8[-2] - local_dc4;
    local_de0 = local_de8[-1] - local_dc0;
    fVar2 = *local_de8 - fVar2 * DAT_00701598;
    local_e00 = local_de4 * (float)param_1[4] +
                local_de0 * (float)param_1[7] + fVar2 * (float)param_1[10] + (float)param_1[0xd];
    local_dfc = local_de0 * (float)param_1[8] +
                fVar2 * (float)param_1[0xb] + local_de4 * (float)param_1[5] + (float)param_1[0xe];
    local_df8 = local_de0 * (float)param_1[9] +
                fVar2 * (float)param_1[0xc] + local_de4 * (float)param_1[6] + (float)param_1[0xf];
    local_de8[-0x718] = local_e00;
    local_de8[-0x717] = local_dfc;
    local_de8[-0x716] = local_df8;
    local_de8[-0x138] = local_e00;
    local_de8[-0x137] = local_dfc;
    local_de8[-0x136] = local_df8;
    pfVar10 = local_df4 + 1;
    *(undefined2 *)local_dc8 = 0;
    local_df4[0x29] = 0.0;
    local_df4[0x21] = 0.0;
    local_df4[0x19] = 0.0;
    local_df4[0xb6e] = 0.0;
    local_df4[0x7c] = 0.0;
    local_df4[0x6c] = 0.0;
    *local_dcc = 0;
    local_dc8 = (undefined4 *)((int)local_dc8 + 2);
    local_df0 = local_df0 + 0x3e;
    local_de8 = local_de8 + 3;
    local_dcc = local_dcc + 0x34;
    local_dec = (float)((int)local_dec + -1);
    local_df4 = pfVar10;
  } while (local_dec != 0.0);
  pfVar10 = (float *)(param_1 + 0x389);
  if ((float)param_1[0x389] <= (float)param_1[0x388]) {
    pfVar10 = (float *)(param_1 + 0x388);
  }
  pfVar13 = (float *)(param_1 + 0x386);
  if ((float)param_1[0x386] < (float)param_1[0x387]) {
    pfVar13 = (float *)(param_1 + 0x387);
  }
  if (*pfVar10 <= *pfVar13) {
    pfVar10 = pfVar13;
  }
  param_1[0x38e] = *pfVar10;
  FUN_005aab70();
  param_1[0x34] = param_1[0x31];
  param_1[0x35] = param_1[0x32];
  param_1[0x36] = param_1[0x33];
  puVar7 = param_1 + 0x6dc;
  puVar9 = param_1 + 0x757;
  for (iVar12 = 0x7b; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004eed00();
  sVar11 = 0;
  if (0 < (int)param_1[0x375]) {
    iVar12 = 0;
    do {
      sVar11 = sVar11 + 1;
      fVar2 = -((float)param_1[0x352] * (float)param_1[iVar12 + 0x994] * (float)param_1[0x990]);
      param_1[iVar12 + 0x348] = fVar2;
      fVar2 = fVar2 * (float)_DAT_0064a658;
      param_1[iVar12 + 0x726] = fVar2;
      param_1[iVar12 + 0x7a1] = fVar2;
      iVar12 = (int)sVar11;
    } while (iVar12 < (int)param_1[0x375]);
  }
  sVar11 = 0;
  if (0 < (int)param_1[0x375]) {
    iVar12 = 0;
    do {
      fVar2 = (float)param_1[iVar12 + 0x7e7] -
              ABS((float)param_1[iVar12 + 0x348] / (float)param_1[iVar12 + 0x7ef]);
      bVar6 = _DAT_0064b254 <= fVar2;
      param_1[iVar12 + 0x376] = fVar2;
      if (bVar6) {
        if ((float)param_1[iVar12 + 0x7e7] < fVar2) {
          param_1[iVar12 + 0x376] = param_1[iVar12 + 0x7e7];
        }
      }
      else {
        param_1[iVar12 + 0x376] = 0;
      }
      sVar11 = sVar11 + 1;
      iVar12 = (int)sVar11;
    } while (iVar12 < (int)param_1[0x375]);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x30c] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x36f] = 0x501502f9;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[0x374] = 0;
  param_1[0x373] = 0;
  param_1[0x370] = 0;
  param_1[0x371] = 0;
  local_e0c = DAT_00701580 * (float)param_1[4] +
              DAT_00701584 * (float)param_1[7] + DAT_00701588 * (float)param_1[10];
  local_e08 = DAT_00701580 * (float)param_1[5] +
              DAT_00701584 * (float)param_1[8] + DAT_00701588 * (float)param_1[0xb];
  fVar2 = DAT_00701588 * (float)param_1[0xc];
  fVar3 = DAT_00701584 * (float)param_1[9];
  local_e04 = DAT_00701580 * (float)param_1[6];
  param_1[0x28b] = local_e0c;
  param_1[0x28c] = local_e08;
  local_e04 = local_e04 + fVar3 + fVar2;
  param_1[0x28d] = local_e04;
  FUN_004f1650();
  FUN_004f1770();
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  FUN_004eb290();
  param_1[0x6c7] = 0;
  param_1[0x6c6] = 0;
  param_1[0x6c8] = 0;
  fVar17 = (float10)FUN_004e2035();
  param_1[0x5f6] = (float)fVar17;
  fVar17 = (float10)FUN_004e2035();
  param_1[0x5f7] = (float)fVar17;
  fVar17 = (float10)FUN_004e2035();
  param_1[0x5f8] = (float)fVar17;
  param_1[0xa78] = 0;
  param_1[0xa77] = 0;
  param_1[0xa76] = 0x3d4ccccd;
  param_1[0xa7a] = 0;
  iVar12 = 0;
  param_1[0xd2d] = param_1[0x6dc];
  param_1[0xcd1] = 0;
  param_1[0xd33] = 0;
  param_1[0xf06] = 0;
  param_1[0xcce] = 0;
  param_1[0xccf] = 0;
  puVar7 = param_1 + 0xd3c;
  iVar16 = 8;
  do {
    puVar7[-8] = 0;
    if (iVar12 / 2 == 0) {
      uVar14 = *(undefined4 *)(&DAT_00696880 + param_1[0x233] * 0x970);
    }
    else {
      uVar14 = *(undefined4 *)(&DAT_00696884 + param_1[0x233] * 0x970);
    }
    *puVar7 = uVar14;
    iVar12 = iVar12 + 1;
    puVar7 = puVar7 + 1;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  param_1[0xef9] = 1;
  param_1[0xf04] = 0;
  param_1[0xf05] = 0;
  param_1[0xf0d] = 0;
  param_1[0xf0e] = 0;
  param_1[0xf0f] = 0;
  param_1[0xf10] = 0;
  param_1[0xef6] = 1;
  param_1[0xef5] = 0;
  param_1[0xef4] = 0;
  param_1[0xf14] = 0;
  param_1[0xf20] = 0;
  param_1[0x6c9] = 0;
  param_1[0xf24] = 0;
  param_1[0xf25] = 0;
  param_1[0xf26] = 0;
  param_1[0x6ca] = 0x3f000000;
  param_1[0x6cb] = 0;
  puVar7 = param_1 + 0xeec;
  iVar12 = 8;
  do {
    puVar7[-0x550] = 0x3f000000;
    *puVar7 = 0x3f000000;
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0x9ac] = 0x3f000000;
  param_1[0x685] = 0;
  param_1[0x686] = 0;
  param_1[0x688] = 0;
  param_1[0x689] = 0;
  param_1[0x68a] = 0;
  param_1[0x696] = 0;
  param_1[0x695] = 0;
  param_1[0x694] = 0;
  iVar12 = 8;
  pfVar10 = (float *)(param_1 + 0x3a7);
  do {
    local_dec = (float)_rand();
    iVar12 = iVar12 + -1;
    *pfVar10 = (float)(int)local_dec * (float)_DAT_0064c968;
    pfVar10[8] = 0.0;
    pfVar10[0x934] = *pfVar10;
    pfVar10[0x2e5] = 0.0;
    pfVar10[0x93c] = 0.0;
    pfVar10[0x2f8] = 1.0;
    pfVar10[0x2f0] = 0.0;
    pfVar10 = pfVar10 + 1;
  } while (iVar12 != 0);
  local_dec = 1.12104e-44;
  pfVar10 = (float *)(param_1 + 0x292);
  puVar7 = param_1 + 0x661;
  do {
    pfVar10[0x397] = (float)param_1[0x27c];
    pfVar10[0x398] = (float)param_1[0x27d];
    pfVar10[0x399] = (float)param_1[0x27e];
    uVar14 = param_1[0x372];
    puVar7[-8] = uVar14;
    *puVar7 = uVar14;
    pfVar10[0x3af] = (float)param_1[0x28e];
    pfVar10[0x3b0] = (float)param_1[0x28f];
    pfVar10[0x3b1] = (float)param_1[0x290];
    pfVar10[-1] = (float)param_1[0x28e];
    *pfVar10 = (float)param_1[0x28f];
    pfVar10[1] = (float)param_1[0x290];
    pfVar10[0x17] = (float)param_1[0x28e];
    pfVar10[0x18] = (float)param_1[0x28f];
    pfVar10[0x19] = (float)param_1[0x290];
    local_e00 = (float)param_1[0x35] * pfVar10[1] - (float)param_1[0x36] * *pfVar10;
    local_dfc = pfVar10[-1] * (float)param_1[0x36] - pfVar10[1] * (float)param_1[0x34];
    fVar2 = (float)param_1[0x34];
    fVar3 = (float)param_1[0x35];
    pfVar10[0x2f] = local_e00;
    local_df8 = fVar2 * *pfVar10 - fVar3 * pfVar10[-1];
    pfVar10[0x30] = local_dfc;
    pfVar10[0x31] = local_df8;
    pfVar10[0x47] = local_e00;
    pfVar10[0x48] = local_dfc;
    local_dec = (float)((int)local_dec + -1);
    pfVar10[0x49] = local_df8;
    puVar7[0x36] = 0;
    puVar7[0x3e] = 0x3f800000;
    puVar7[0x2b] = 0;
    puVar7[-0x321] = (float)puVar7[0x33b] * (float)puVar7[-0x319];
    pfVar10 = pfVar10 + 3;
    puVar7 = puVar7 + 1;
  } while (local_dec != 0.0);
  FUN_004e27c5(param_1 + 4,local_c34);
  puVar7 = (undefined4 *)FUN_004e28b1(local_c04,local_c34);
  puVar9 = param_1 + 4;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = &DAT_00701550;
  puVar9 = param_1 + 0x801;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar7 = param_1 + 0xf2b;
  iVar12 = 0x1b;
  do {
    puVar7[-3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0x3c888889;
    puVar7[-1] = 0;
    puVar7[-2] = 1;
    puVar7 = puVar7 + 5;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar7 = param_1 + 0xf61;
  iVar12 = 8;
  do {
    puVar7[-1] = 2;
    *puVar7 = 0xfffffffe;
    puVar7[-0x29] = 3;
    puVar7[-0x26] = 0x3d4ccccd;
    puVar7 = puVar7 + 5;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0xf31] = 0x3c360b61;
  param_1[0xf2e] = 2;
  param_1[0xf2c] = 0x3c888889;
  param_1[0xf29] = 3;
  param_1[0xf33] = 3;
  param_1[0xf34] = 0xfffffffd;
  puVar7 = param_1 + 0xf88;
  iVar12 = 8;
  do {
    *puVar7 = 1;
    puVar7 = puVar7 + 5;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  FUN_004ef490();
  FUN_004f1650();
  FUN_004f1770();
  FUN_004f0ac0();
  if (*(short *)(param_1 + 0x44) != 0) {
    param_1[0x888] =
         (float)param_1[0x41] * ((float)param_1[0xd] - (float)param_1[0x3e]) +
         ((float)param_1[0xe] - (float)param_1[0x3f]) * (float)param_1[0x42] +
         ((float)param_1[0xf] - (float)param_1[0x40]) * (float)param_1[0x43];
  }
  sVar11 = 0;
  param_1[0x885] = DAT_007015b0;
  param_1[0x886] = DAT_007015b4;
  param_1[0x887] = DAT_007015b8;
  if (0 < (int)param_1[0x375]) {
    iVar12 = 0;
    do {
      FUN_005aae00(local_d6c,param_1 + (iVar12 + 1) * 0x3e);
      sVar11 = sVar11 + 1;
      iVar12 = (int)sVar11;
    } while (iVar12 < (int)param_1[0x375]);
  }
  FUN_005aad10(local_d6c,0x3e800000);
  param_1[0x33c] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0x447a0000;
  param_1[0x33f] = 0x42c80000;
  param_1[0x324] = DAT_007015b0;
  param_1[0x325] = DAT_007015b4;
  param_1[0x326] = DAT_007015b8;
  param_1[0x336] = DAT_007015b0;
  param_1[0x337] = DAT_007015b4;
  param_1[0x338] = DAT_007015b8;
  param_1[0x327] = DAT_007015b0;
  param_1[0x328] = DAT_007015b4;
  param_1[0x329] = DAT_007015b8;
  param_1[0x339] = DAT_007015b0;
  param_1[0x33a] = DAT_007015b4;
  param_1[0x33b] = DAT_007015b8;
  param_1[0x98e] = 1;
  param_1[0x98d] = 0xffffffff;
  param_1[0x98c] = 0;
  FUN_004f6c00();
  FUN_004f63f0();
  param_1[0xf16] = 0;
  param_1[0xf17] = DAT_007015b0;
  param_1[0xf18] = DAT_007015b4;
  param_1[0xf19] = DAT_007015b8;
  param_1[0xf21] = 0;
  param_1[0xf22] = 0;
  puVar7 = param_1 + 0x9b8;
  iVar12 = 8;
  do {
    puVar7[-8] = 0;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_1[0xf23] = 0;
  ExceptionList = local_c;
  return param_1;
}

