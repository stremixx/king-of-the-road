
void __thiscall FUN_004487c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_00451700(puVar1,param_2);
  return;
}

