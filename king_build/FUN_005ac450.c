
undefined4 * __thiscall FUN_005ac450(undefined4 *param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647da6;
  local_c = ExceptionList;
  puVar2 = param_1 + 0x132;
  iVar3 = 0x16;
  ExceptionList = &local_c;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x23c;
  local_14 = 0x28;
  do {
    FUN_004011e0(puVar2,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar2;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 0xc;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_14 = 4;
  do {
    FUN_004042a0();
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = param_1 + 0x41c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_14 = 4;
  do {
    FUN_004042a0();
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = param_1 + 0x428;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = param_1 + 0x434;
  local_14 = 0x14;
  do {
    FUN_004011e0(puVar2,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar2;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 0xc;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  puVar2 = param_1 + 0x524;
  local_14 = 0x14;
  do {
    FUN_004011e0(puVar2,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar2;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = puVar2 + 0xc;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  FUN_0061d173(param_1 + 0x614,0x50,0x14,FUN_005acbd0,FUN_004843e0);
  local_4 = 0;
  FUN_005acbd0();
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = param_1 + 0x7b8;
  iVar3 = 0x14;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 4;
  do {
    FUN_004042a0();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = param_1 + 0x85d;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_1 = &PTR_LAB_00650708;
  param_1[0x1e7] = param_2;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = (uint)*param_2 * 0x80000 + -0x80000;
  param_1[0x1eb] = (uint)param_2[1] * 0x80000 + -0x80000;
  param_1[0x808] = 0;
  param_1[0x80c] = 0;
  param_1[0x809] = 0;
  param_1[0x80a] = 0;
  param_1[0x80b] = 0;
  param_1[0x80d] = 0;
  *(undefined1 *)(param_1 + 0x83e) = 0xff;
  uVar1 = DAT_0067dec8;
  param_1[0x844] = 0;
  param_1[0x83f] = uVar1;
  param_1[0x852] = 0;
  param_1[0x845] = 0x3ff00000;
  param_1[0x853] = 0x3ff00000;
  param_1[0x841] = 0;
  param_1[0x846] = 0;
  param_1[0x854] = 0;
  param_1[0x848] = 0x9999999a;
  param_1[0x84a] = 0;
  param_1[0x850] = 0x33333333;
  param_1[0x80f] = 0;
  param_1[0x810] = 0;
  param_1[0x811] = 0;
  param_1[0x812] = 0;
  param_1[0x86c] = 0;
  param_1[0x847] = 0x40f86a00;
  param_1[0x842] = 0;
  param_1[0x855] = 0;
  param_1[0x849] = 0x3fb99999;
  param_1[0x84b] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e4] = 0;
  param_1[0x843] = 0;
  param_1[0x851] = 0x3fd33333;
  param_1[0x815] = 0;
  param_1[0x857] = 0x447a0000;
  param_1[0x856] = 0x447a0000;
  if (((*(uint *)(param_2 + 6) & 0x1000) == 0) &&
     ((*(int *)(param_2 + 0x30) == 0 || ((*(uint *)(*(int *)(param_2 + 0x30) + 0xc) & 0x1000) == 0))
     )) {
    param_1[0x86b] = 0;
  }
  else {
    param_1[0x86b] = 1;
  }
  puVar2 = param_1 + 0x816;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x83c] = 0;
  param_1[0x870] = 0;
  param_1[0x872] = 0;
  param_1[0x83b] = 0;
  param_1[0x83d] = 0;
  param_1[0x86e] = 0;
  param_1[0x871] = 0xbff00000;
  param_1[0x873] = 0xbff00000;
  param_1[0x875] = 0xffffffff;
  param_1[0x874] = 0;
  param_1[0x876] = 0;
  param_1[0x877] = 0;
  puVar2 = &DAT_00701550;
  puVar4 = param_1 + 0x85d;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x86d] = 0;
  ExceptionList = local_c;
  return param_1;
}

