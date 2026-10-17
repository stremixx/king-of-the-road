
void __thiscall FUN_0047ac10(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 != *(undefined1 **)(param_1 + 8)) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  FUN_0044be90(puVar1,param_2);
  return;
}

