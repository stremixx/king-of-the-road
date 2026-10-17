
void __thiscall FUN_0054bf30(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [12];
  
  FUN_00580910(param_2,param_3);
  if (*(int *)(param_1 + 0x5464) != 0) {
    FUN_00561420(param_2,param_3);
  }
  if (*(int *)(param_1 + 0x5460) != 0) {
    puVar2 = local_30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_004f0ac0(2,param_2,local_30);
  }
  return;
}

