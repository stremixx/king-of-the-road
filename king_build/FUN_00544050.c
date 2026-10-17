
undefined4 * __thiscall
FUN_00544050(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,int param_7,int param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646851;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00541070(&DAT_006ee158);
  local_4 = 0;
  if (param_9 == 0) {
    local_24 = *(int *)(&DAT_006d1050 + param_3 * 0x5d0);
  }
  else {
    local_24 = param_9;
  }
  FUN_0058ae20(param_2,param_4,local_24,param_5,param_6,*(undefined4 *)(local_24 + 0x20),100,
               (&DAT_00696b28)[param_3 * 0x25c],(&DAT_00696b2c)[param_3 * 0x25c],param_7,param_8);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00555d80(param_3);
  puVar1 = param_1 + 0x96d;
  param_7 = 8;
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xc;
    param_7 = param_7 + -1;
  } while (param_7 != 0);
  param_8 = 4;
  do {
    FUN_004042a0();
    param_8 = param_8 + -1;
  } while (param_8 != 0);
  puVar1 = &DAT_00701550;
  puVar4 = param_1 + 0x9cd;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_005410b0();
  FUN_00541b70();
  puVar1 = param_1 + 0xa5e;
  iVar3 = 8;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = param_1 + 0xa76;
  iVar3 = 8;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0xa8f] = 0;
  param_1[0xa90] = 0;
  param_1[0xa91] = 0;
  puVar1 = param_1 + 0xb45;
  iVar3 = 0x32;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = param_1 + 0xbdb;
  iVar3 = 0x32;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = param_1 + 0xc71;
  param_7 = 0x32;
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xc;
    param_7 = param_7 + -1;
  } while (param_7 != 0);
  puVar1 = param_1 + 0xec9;
  param_7 = 0x32;
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xc;
    param_7 = param_7 + -1;
  } while (param_7 != 0);
  puVar1 = param_1 + 0x1121;
  iVar3 = 0x32;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_8 = 4;
  do {
    FUN_004042a0();
    param_8 = param_8 + -1;
  } while (param_8 != 0);
  puVar1 = &DAT_00701550;
  puVar4 = param_1 + 0x13bd;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
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
  FUN_004011e0(param_1 + 0x1525,0xc,0xb,FUN_004042a0);
  param_1[0x155d] = 0;
  param_1[0x155c] = 0;
  param_1[0x1452] = param_4;
  *param_1 = &PTR_FUN_0064e644;
  param_1[4] = &PTR_LAB_0064e558;
  param_1[0x44] = &PTR_LAB_0064e50c;
  param_1[0x62] = &PTR_LAB_0064e508;
  param_1[0xa2d] = param_3;
  puVar1 = param_1 + 0x1428;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *param_6;
    param_6 = param_6 + 1;
    puVar1 = puVar1 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x1518] = 0;
  param_1[0x1519] = 0;
  uVar2 = FUN_00541e70(param_3);
  param_1[0x953] = uVar2;
  if (param_9 != 0) {
    param_1[0x953] = 5;
  }
  FUN_00541ed0();
  param_1[0x9dc] = param_1[0x60];
  param_1[0x60] = param_1[0x60] + 1;
  uVar2 = FUN_005c2750(param_1[0x9dc],param_1 + 0x9de,param_1[0x9db]);
  param_1[param_1[0x370] + 0x367] = uVar2;
  param_1[0x370] = param_1[0x370] + 1;
  param_1[0xaab] = 0;
  ExceptionList = local_c;
  return param_1;
}

