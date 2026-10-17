
undefined4 __thiscall FUN_005e3870(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  return uVar1;
}

