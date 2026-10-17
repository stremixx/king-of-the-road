
void FUN_00592930(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30 [12];
  
  puVar2 = (undefined4 *)(*(int *)(param_2 + 0x2020) * 0x30 + 0x8c0 + param_2);
  puVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_005ab040(local_30);
  return;
}

