
uint FUN_005736b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x328) == 1) {
    uVar1 = FUN_005b8d10(param_2,param_3,param_4);
    uVar1 = uVar1 & 0xff;
  }
  else if (*(int *)(param_1 + 0x328) == 2) {
    uVar1 = FUN_005b58c0(param_2,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

