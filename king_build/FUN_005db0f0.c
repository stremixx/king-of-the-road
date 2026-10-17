
void __thiscall FUN_005db0f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(undefined4 **)(param_1 + 0xf0)) {
    uVar1 = FUN_005d2730();
    *(undefined4 *)(param_1 + 0xf0) = uVar1;
  }
  if (param_2 == *(undefined4 **)(param_1 + 0xf4)) {
    uVar1 = FUN_0062a160();
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
  }
  FUN_005d1860();
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  return;
}

