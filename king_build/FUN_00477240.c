
void FUN_00477240(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0xac);
  if (puVar1 == *(undefined4 **)(param_2 + 0xa4)) {
    *param_1 = DAT_0068a8f0;
    return;
  }
  *(undefined4 **)(param_2 + 0xac) = puVar1 + 4;
  *param_1 = *puVar1;
  return;
}

