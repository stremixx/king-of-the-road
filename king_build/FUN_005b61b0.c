
undefined4 __thiscall FUN_005b61b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return uVar1;
}

