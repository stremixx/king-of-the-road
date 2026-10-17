
undefined4 * __thiscall
FUN_0057c740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_58 [9];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  code *pcStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647106;
  local_c = ExceptionList;
  pcStack_24 = (code *)param_10;
  puStack_28 = (undefined4 *)param_9;
  puVar5 = param_5;
  puVar6 = auStack_58;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  ExceptionList = &local_c;
  uVar3 = param_7;
  uVar1 = FUN_0057c0f0(param_7,param_8);
  uVar2 = FUN_004e5437(param_3,param_6 + 0x24,param_5 + 9,param_4,uVar1);
  FUN_005c5840(param_2,uVar2,param_4,uVar1,uVar3,param_8);
  pcStack_24 = (code *)&DAT_006f549c;
  local_4 = 0;
  puStack_28 = (undefined4 *)0x57c7cd;
  FUN_0057c210();
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  pcStack_24 = FUN_004042a0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  puStack_28 = (undefined4 *)0x4;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  puStack_2c = (undefined4 *)0xc;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  uStack_34 = 0x57c877;
  puStack_30 = param_1 + 0x7d;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0x7d;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57c898;
  puStack_30 = param_1 + 0x89;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0x89;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57c8b9;
  puStack_30 = param_1 + 0x95;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0x95;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57c8da;
  puStack_30 = param_1 + 0xa1;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0xa1;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57c8fb;
  puStack_30 = param_1 + 0xad;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0xad;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57c91c;
  puStack_30 = param_1 + 0xb9;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0xb9;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x4;
  puStack_2c = (undefined4 *)0xc;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  uStack_34 = 0x57c94f;
  puStack_30 = param_1 + 0xcc;
  FUN_004011e0();
  puVar5 = &DAT_00701550;
  puVar6 = param_1 + 0xcc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  pcStack_24 = (code *)0x57c98a;
  FUN_005eebf0();
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  pcStack_24 = (code *)0x57c9cb;
  FUN_005eebf0();
  pcStack_24 = (code *)0x57c9d6;
  FUN_004bd520();
  pcStack_24 = (code *)0x57c9e1;
  FUN_004bd520();
  pcStack_24 = (code *)0x57c9ec;
  FUN_004bd520();
  pcStack_24 = (code *)0x57c9f7;
  FUN_004bd520();
  pcStack_24 = (code *)0x57ca02;
  FUN_004bd520();
  pcStack_24 = (code *)0x57ca0d;
  FUN_004bd520();
  pcStack_24 = (code *)0x57ca18;
  FUN_004042a0();
  pcStack_24 = (code *)0x57ca23;
  FUN_004042a0();
  pcStack_24 = (code *)0x57ca2e;
  FUN_004042a0();
  pcStack_24 = (code *)0x57ca39;
  FUN_004042a0();
  pcStack_24 = FUN_004042a0;
  puStack_28 = (undefined4 *)0x5;
  puStack_30 = param_1 + 0x1fe;
  puStack_2c = (undefined4 *)0xc;
  uStack_34 = 0x57ca4e;
  FUN_004011e0();
  pcStack_24 = FUN_005eebf0;
  puStack_28 = (undefined4 *)0x5;
  puStack_30 = param_1 + 0x20e;
  puStack_2c = (undefined4 *)0xd0;
  uStack_34 = 0x57ca66;
  FUN_004011e0();
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  param_1[0x315] = 0;
  pcStack_24 = (code *)0x57ca83;
  FUN_004042a0();
  pcStack_24 = (code *)0x57ca8e;
  FUN_004bd520();
  pcStack_24 = (code *)0x57ca99;
  FUN_004bd520();
  pcStack_24 = (code *)0x57caa4;
  FUN_0057c6a0();
  pcStack_24 = (code *)param_3;
  puStack_28 = (undefined4 *)param_6;
  puStack_2c = param_5;
  puStack_30 = (undefined4 *)param_7;
  *param_1 = &PTR_FUN_0064f534;
  param_1[0x40] = &PTR_LAB_0064f4e8;
  param_1[0x5e] = &PTR_LAB_0064f4e4;
  uStack_34 = 0x57cad9;
  FUN_0057cf40();
  puStack_2c = (undefined4 *)param_1[0x5c];
  pcStack_24 = (code *)0x18;
  puStack_28 = param_1 + 0x68;
  param_1[0x5c] = (int)puStack_2c + 1;
  puStack_30 = (undefined4 *)0x57cb03;
  uVar3 = FUN_005c2750();
  pcStack_24 = (code *)0x4;
  param_1[param_1[0x36c] + 0x363] = uVar3;
  puStack_28 = param_1 + 0xe1;
  param_1[0x36c] = param_1[0x36c] + 1;
  puStack_2c = (undefined4 *)param_1[0x5c];
  param_1[0x5c] = (int)puStack_2c + 1;
  puStack_30 = (undefined4 *)0x57cb3d;
  uVar3 = FUN_005c2750();
  param_1[param_1[0x36c] + 0x363] = uVar3;
  param_1[0x36c] = param_1[0x36c] + 1;
  ExceptionList = local_c;
  return param_1;
}

