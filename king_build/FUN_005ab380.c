
void FUN_005ab380(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [12];
  undefined4 local_180 [12];
  undefined4 local_150 [12];
  undefined4 local_120 [12];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  puVar1 = local_150 + 2;
  puVar4 = &DAT_00701550;
  puVar5 = local_180;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = local_120 + 2;
  puVar4 = &DAT_00701550;
  puVar5 = local_150;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_00701550;
  puVar4 = local_120;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)FUN_005aaad0(local_18c,&param_5);
  param_5 = *puVar1;
  param_6 = puVar1[1];
  param_7 = puVar1[2];
  iVar3 = FUN_005aad90(&param_5,&DAT_007015b0);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)FUN_005aaad0(local_18c,&param_5,&local_194,&local_190);
    FUN_005aabf0(*puVar1,puVar1[1],puVar1[2]);
    puVar1 = (undefined4 *)FUN_005ab7d0(local_c0,param_8);
    puVar4 = local_120;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_005ab330(local_c0,param_2,param_3,param_4);
    uVar2 = FUN_005ab7d0(local_30,local_194,uVar2);
    uVar2 = FUN_005ab6d0(local_90,local_190,uVar2);
    uVar2 = FUN_005ab130(local_60,uVar2);
    puVar1 = (undefined4 *)FUN_005ab130(local_f0,uVar2);
    puVar4 = local_150;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = (undefined4 *)FUN_005aba00(local_f0,local_150);
    puVar4 = local_180;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_005ab2f0(local_120);
    FUN_005ab2f0(local_150);
  }
  puVar1 = local_180;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

