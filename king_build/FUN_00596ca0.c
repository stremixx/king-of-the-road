
void __fastcall FUN_00596ca0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

