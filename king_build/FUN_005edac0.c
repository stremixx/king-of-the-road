
void __fastcall FUN_005edac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar2[10] != 0) {
      FUN_005d2520(s_Root_OVL_used_as_child_00682770,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar1 = (undefined4 *)param_1[2];
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

