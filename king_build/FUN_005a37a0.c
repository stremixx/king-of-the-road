
void __thiscall FUN_005a37a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [8];
  undefined4 local_28 [7];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = local_28;
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005f1c30(local_30);
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = local_4;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}

