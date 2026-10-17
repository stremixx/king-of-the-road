
undefined4 __thiscall FUN_005f8f30(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  double local_a4;
  undefined4 local_9c [12];
  undefined4 local_6c [12];
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  puVar2 = local_6c + 2;
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_00701550;
  puVar4 = local_6c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = FUN_005eee30(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_005f1c30(local_6c);
    FUN_005adc90(local_6c,uVar1);
  }
  iVar3 = FUN_005b4670(param_1 + 0x14);
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x50) != 0) ||
       ((*(int *)(param_1 + 0x4c) != 0 && ((param_2 & 0x10) == 0)))) {
      local_b4 = *(undefined4 *)(param_1 + 0x30);
      local_b0 = *(undefined4 *)(param_1 + 0x34);
      local_ac = *(undefined4 *)(param_1 + 0x38);
      local_a8 = *(float *)(param_1 + 0x3c);
      uVar1 = FUN_005aba00(local_30,param_3 + param_3[0x80b] * 0xc + 0x518,
                           param_3 + param_3[0x808] * 0xc + 0x230);
      FUN_005ab130(local_9c,uVar1);
      puVar2 = (undefined4 *)FUN_005aba00(local_30,local_9c);
      puVar4 = local_9c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = (undefined4 *)FUN_005abd60(local_30,local_9c);
      puVar4 = local_9c;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_005aafe0(local_9c);
      fVar5 = (float10)FUN_005aabc0(&local_b4);
      local_a4 = (double)fVar5;
      FUN_005aad50(local_3c,(float)fVar5);
      local_a8 = local_a8 / (float)local_a4;
      FUN_005ac860(&local_b4);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x24);
    if (iVar3 != *(int *)(param_1 + 0x24)) {
      (**(code **)(*param_3 + 8))(iVar3);
    }
    iVar3 = param_3[0x815];
    if (-1 < *(int *)(param_1 + 0x54)) {
      param_3[0x815] = *(int *)(param_1 + 0x54);
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 0x30))
              (-(uint)(*(int *)(param_1 + 0x50) != 0) & 0x10 | param_2,param_3);
    param_3[0x815] = iVar3;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x24) != *(int *)(param_1 + 0x24)) {
      (**(code **)(*param_3 + 8))(*(int *)(param_1 + 0x24));
    }
    if ((*(int *)(param_1 + 0x50) != 0) ||
       ((*(int *)(param_1 + 0x4c) != 0 && ((param_2 & 0x10) == 0)))) {
      FUN_005ad310();
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_005adfb0();
  }
  return 1;
}

