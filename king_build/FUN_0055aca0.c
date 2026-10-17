
void __thiscall FUN_0055aca0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_38;
  int local_34;
  undefined4 local_30 [9];
  undefined1 local_c [12];
  
  iVar3 = *(int *)(param_1 + 0x5460);
  iVar1 = *(int *)(param_1 + 0x5578);
  puVar4 = (undefined4 *)(iVar3 + 0x10);
  puVar5 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = FUN_004e5437(*(undefined4 *)(iVar3 + 0xf4),local_c,param_2 + 9);
  iVar3 = *(int *)(iVar1 + 0x5460);
  puVar4 = (undefined4 *)(iVar3 + 0x10);
  puVar5 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_34 = FUN_004e5437(*(undefined4 *)(iVar3 + 0xf4),local_c,param_3 + 9);
  if (local_34 == 0) {
    local_34 = *(int *)(*(int *)(iVar1 + 0x5460) + 0xf4);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(1);
  }
  if (local_38 == 0) {
    local_38 = *(int *)(*(int *)(param_1 + 0x5460) + 0xf4);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x1c))(1);
  }
  if (*(int *)(*(int *)(param_1 + 0x5460) + 0x3344) == 0) {
    FUN_0054c170(1);
    FUN_004f79b0(local_38,param_2);
  }
  else {
    FUN_0054c170(4);
    puVar4 = (undefined4 *)(param_1 + 0x50a0);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*(int *)(*(int *)(iVar1 + 0x5460) + 0x3344) == 0) {
    FUN_0054c170(1);
    FUN_004f79b0(local_34,param_3);
    return;
  }
  FUN_0054c170(4);
  puVar4 = (undefined4 *)(iVar1 + 0x50a0);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

