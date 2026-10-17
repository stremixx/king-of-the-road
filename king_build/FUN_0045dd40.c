
void FUN_0045dd40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  while ((param_2 != param_3 && (*(int *)(param_2[2] + 0x18) != param_4))) {
    param_2 = (undefined4 *)*param_2;
  }
  *param_1 = param_2;
  return;
}

