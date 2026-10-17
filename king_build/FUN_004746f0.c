
void FUN_004746f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [7];
  
  local_34 = param_2;
  local_2c = 4;
  do {
    puVar2 = local_20;
    local_30 = 3;
    do {
      puVar3 = local_34;
      puVar4 = local_20;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_28 = *puVar2;
      local_24 = puVar2[1];
      FUN_0046e460(*(undefined4 *)(param_1 + 4),&local_28,local_20);
      puVar2 = puVar2 + 2;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    local_34 = local_34 + 6;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  return;
}

