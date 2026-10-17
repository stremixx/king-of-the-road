
void FUN_005e1150(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x10) == 0xc) {
    puVar1 = (undefined4 *)(param_1 + 0x54);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x38);
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return;
}

