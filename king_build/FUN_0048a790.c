
void FUN_0048a790(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = (param_2 - param_1) / 0x18;
  if (0 < iVar1) {
    do {
      param_3[-3] = *(undefined8 *)(param_2 + -0x18);
      param_3[-2] = *(undefined8 *)(param_2 + -0x10);
      param_3[-1] = *(undefined8 *)(param_2 + -8);
      iVar1 = iVar1 + -1;
      param_3 = param_3 + -3;
      param_2 = param_2 + -0x18;
    } while (iVar1 != 0);
  }
  return;
}

