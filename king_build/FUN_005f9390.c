
undefined4 __thiscall
FUN_005f9390(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_90 [8];
  undefined4 auStack_70 [4];
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  puVar2 = local_90 + 2;
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = local_60 + 2;
  puVar4 = &DAT_00701550;
  puVar5 = local_90;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = FUN_005eee50(param_2,param_3,param_4,param_5);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  puVar2 = param_3;
  puVar4 = local_60;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_005f1c30(local_90);
    FUN_005adc90(local_90,uVar1);
    puVar2 = (undefined4 *)FUN_005ab130(local_30,local_90,param_4);
    puVar4 = param_3;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x38))(param_2,param_3,param_4,param_5);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_005adfb0();
  }
  puVar2 = auStack_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return uVar1;
}

