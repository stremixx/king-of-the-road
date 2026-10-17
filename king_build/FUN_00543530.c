
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00543530(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_bc;
  int local_b8;
  undefined4 local_9c [12];
  undefined4 local_6c [12];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006467da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00541070(&DAT_006ee158);
  local_4 = 0;
  iVar6 = *(int *)(param_3 + 0x8cc);
  uVar4 = *(undefined4 *)(*(int *)(&DAT_006d1050 + iVar6 * 0x5d0) + 0xc);
  uVar10 = *(undefined4 *)(*(int *)(&DAT_006d1050 + iVar6 * 0x5d0) + 0x20);
  puVar8 = (undefined4 *)(param_3 + 0x10);
  puVar3 = puVar8;
  puVar7 = local_6c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar3 = puVar8;
  puVar7 = local_9c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar1 = *(undefined4 *)(param_3 + 0xf4);
  uVar13 = (&DAT_00696b2c)[iVar6 * 0x25c];
  uVar12 = (&DAT_00696b28)[iVar6 * 0x25c];
  puVar3 = local_6c;
  uVar11 = 100;
  uVar2 = FUN_005ab130(local_3c,&DAT_006d1340 + iVar6 * 0x5d0,local_9c,puVar3,uVar10,100,uVar12,
                       uVar13,uVar4,param_5);
  FUN_0058acb0(param_2,uVar1,*(undefined4 *)(&DAT_006d1050 + iVar6 * 0x5d0),uVar2,puVar3,uVar10,
               uVar11,uVar12,uVar13,uVar4,param_5);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00555d80(*(undefined4 *)(param_3 + 0x8cc));
  local_b8 = 8;
  puVar3 = param_1 + 0x96d;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    local_b8 = local_b8 + -1;
    puVar7 = &DAT_00701550;
    puVar9 = puVar3;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = puVar3 + 0xc;
  } while (local_b8 != 0);
  iVar6 = 4;
  do {
    FUN_004042a0();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = &DAT_00701550;
  puVar7 = param_1 + 0x9cd;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_005410b0();
  FUN_00541b70();
  puVar3 = param_1 + 0xa5e;
  iVar6 = 8;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = param_1 + 0xa76;
  iVar6 = 8;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = param_1 + 0xb45;
  param_1[0xa8f] = 0;
  param_1[0xa90] = 0;
  param_1[0xa91] = 0;
  iVar6 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = param_1 + 0xbdb;
  iVar6 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = param_1 + 0xc71;
  local_bc = 0x32;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    puVar7 = &DAT_00701550;
    puVar9 = puVar3;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = puVar3 + 0xc;
    local_bc = local_bc + -1;
  } while (local_bc != 0);
  puVar3 = param_1 + 0xec9;
  local_bc = 0x32;
  do {
    FUN_004011e0(puVar3,0xc,4,FUN_004042a0);
    puVar7 = &DAT_00701550;
    puVar9 = puVar3;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar3 = puVar3 + 0xc;
    local_bc = local_bc + -1;
  } while (local_bc != 0);
  puVar3 = param_1 + 0x1121;
  iVar6 = 0x32;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_bc = 4;
  do {
    FUN_004042a0();
    local_bc = local_bc + -1;
  } while (local_bc != 0);
  puVar3 = &DAT_00701550;
  puVar7 = param_1 + 0x13bd;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
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
  iVar6 = 0xb;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_1[0x155d] = 0;
  param_1[0x155c] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_0064e644;
  param_1[4] = &PTR_LAB_0064e558;
  param_1[0x44] = &PTR_LAB_0064e50c;
  param_1[0x62] = &PTR_LAB_0064e508;
  if (param_3 == 0) {
    FUN_004e1e9c(s__Vehicle___Vehicle___cv__NULL_00678e50);
  }
  param_1[0x1427] = param_4;
  uVar4 = *(undefined4 *)(param_3 + 0x8cc);
  param_1[0xa2d] = uVar4;
  param_1[0x1518] = param_3;
  param_1[0x1519] = 0;
  uVar4 = FUN_00541e70(uVar4);
  param_1[0x953] = uVar4;
  FUN_00543440(param_2);
  *(uint *)(param_1[0x1518] + 0x29d4) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 4);
  if (_DAT_0064e4fc <= (float)(&DAT_00696828)[param_1[0xa2d] * 0x25c]) {
    *(undefined4 *)(param_1[0x1518] + 0x276c) = 0;
  }
  else {
    *(undefined4 *)(param_1[0x1518] + 0x276c) = 1;
  }
  iVar6 = FUN_0061f130(s_bmwM5_00678e48,
                       *(undefined4 *)(*(int *)(&DAT_006d1050 + param_1[0xa2d] * 0x5d0) + 0xc),4);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1[0x1518] + 0x276c) = 2;
  }
  param_1[0xaab] = 1;
  param_1[0x1452] = *(undefined4 *)(param_3 + 0xf4);
  puVar3 = param_1 + 0x1428;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00555750(1);
  ExceptionList = local_c;
  return param_1;
}

