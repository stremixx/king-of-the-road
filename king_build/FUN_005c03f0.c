
void __fastcall FUN_005c03f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x128);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
    while (puVar2 != (undefined4 *)0x0) {
      FUN_005d1860();
      (**(code **)*puVar2)(1);
      puVar2 = (undefined4 *)puVar1[2];
    }
    (**(code **)*puVar1)(1);
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x154) + 0x128) = 0;
    *(undefined2 *)(param_1 + 0x14c) = 0;
  }
  return;
}

