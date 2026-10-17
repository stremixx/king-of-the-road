
void FUN_00602c50(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_2 + 4);
  if (puVar1 != *(undefined1 **)(param_2 + 8)) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = param_3;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    return;
  }
  FUN_00602c80(puVar1,&param_3);
  return;
}

