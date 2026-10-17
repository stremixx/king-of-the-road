
undefined4 * __thiscall
FUN_00543b10(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_b8;
  undefined4 local_9c [12];
  undefined4 local_6c [12];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064681a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00541070(&DAT_006ee158);
  uVar11 = *(undefined4 *)(param_4 + 0xc);
  local_4 = 0;
  uVar7 = *(undefined4 *)(param_4 + 0x20);
  puVar3 = param_3;
  puVar5 = local_9c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = param_3;
  puVar5 = local_6c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = param_3[0x18];
  uVar10 = (&DAT_00696b2c)[param_5 * 0x25c];
  uVar9 = (&DAT_00696b28)[param_5 * 0x25c];
  uVar8 = 100;
  puVar3 = local_9c;
  uVar2 = FUN_005ab130(local_3c,&DAT_00701550,local_6c,puVar3,uVar7,100,uVar9,uVar10,uVar11,param_6)
  ;
  FUN_0058acb0(param_2,uVar1,param_4,uVar2,puVar3,uVar7,uVar8,uVar9,uVar10,uVar11,param_6);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00555d80(param_5);
  puVar3 = param_1 + 0x96d;
  local_b8 = 8;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    puVar5 = &DAT_00701550;
    puVar6 = puVar3;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 0xc;
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  local_b8 = 4;
  do {
    FUN_004042a0();
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  puVar3 = &DAT_00701550;
  puVar5 = param_1 + 0x9cd;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005410b0();
  FUN_00541b70();
  puVar3 = param_1 + 0xa5e;
  iVar4 = 8;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = param_1 + 0xa76;
  iVar4 = 8;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0xa8f] = 0;
  param_1[0xa90] = 0;
  param_1[0xa91] = 0;
  puVar3 = param_1 + 0xb45;
  iVar4 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = param_1 + 0xbdb;
  iVar4 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = param_1 + 0xc71;
  local_b8 = 0x32;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    puVar5 = &DAT_00701550;
    puVar6 = puVar3;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 0xc;
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  puVar3 = param_1 + 0xec9;
  local_b8 = 0x32;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    puVar5 = &DAT_00701550;
    puVar6 = puVar3;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 0xc;
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  puVar3 = param_1 + 0x1121;
  iVar4 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_b8 = 4;
  do {
    FUN_004042a0();
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  puVar3 = &DAT_00701550;
  puVar5 = param_1 + 0x13bd;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x13db] = 0;
  param_1[0x13dc] = 0;
  param_1[0x13dd] = 0;
  param_1[0x13de] = 0;
  param_1[0x13df] = 0;
  param_1[0x13e0] = 0;
  param_1[0x13e1] = 0;
  param_1[0x13e2] = 0;
  param_1[0x13e3] = 0;
  param_1[0x13e4] = 0;
  param_1[0x13e5] = 0;
  param_1[0x13e6] = 0;
  param_1[0x1411] = 0;
  param_1[0x1412] = 0;
  param_1[0x1413] = 0;
  FUN_004042a0();
  FUN_004042a0();
  FUN_004042a0();
  FUN_0053f190();
  FUN_00548580();
  param_1[0x148c] = 0;
  param_1[0x148d] = 0;
  param_1[0x148e] = 0;
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_004eace0();
  FUN_00548fa0();
  puVar3 = param_1 + 0x1525;
  iVar4 = 0xb;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[0x155d] = 0;
  param_1[0x155c] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_0064e644;
  param_1[4] = &PTR_LAB_0064e558;
  param_1[0x44] = &PTR_LAB_0064e50c;
  param_1[0x62] = &PTR_LAB_0064e508;
  param_1[0x1519] = param_3;
  if (param_3 == (undefined4 *)0x0) {
    FUN_004e1e9c(s__Vehicle___Vehicle___hc__NULL_00678e70);
  }
  FUN_00561260(*(undefined4 *)(param_1[0xc] + 0x40));
  FUN_00560d00();
  *(uint *)(param_1[0x1519] + 0xd98) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 4);
  param_1[0x1452] = param_3[0x18];
  puVar3 = param_1 + 0x1428;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1518] = 0;
  param_1[0xa2d] = param_5;
  FUN_00541e70(param_5);
  param_1[0x953] = 5;
  FUN_00543440(param_2);
  param_1[0x12f] = param_1[0x12f] | 0x100;
  param_1[0x1469] = param_1[0x1469] & 0xfffffe7f;
  param_1[0xaab] = 5;
  puVar3 = param_1 + 0x13fa;
  puVar5 = param_1 + 0x13ec;
  iVar4 = 4;
  do {
    *puVar5 = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ExceptionList = local_c;
  return param_1;
}

