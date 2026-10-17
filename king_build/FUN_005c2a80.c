
void __fastcall FUN_005c2a80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  while (puVar1 != (undefined4 *)0x0) {
    FUN_005d1860();
    (**(code **)*puVar1)(1);
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  return;
}

