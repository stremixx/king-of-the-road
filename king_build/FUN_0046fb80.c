
undefined4 * FUN_0046fb80(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) / 0xc;
  if (0 < iVar2) {
    param_2 = param_2 - (int)param_3;
    do {
      puVar1 = param_3 + -3;
      iVar2 = iVar2 + -1;
      *puVar1 = *(undefined4 *)(param_2 + (int)puVar1);
      param_3[-2] = *(undefined4 *)((int)puVar1 + param_2 + 4);
      param_3[-1] = *(undefined4 *)((int)puVar1 + param_2 + 8);
      param_3 = puVar1;
    } while (iVar2 != 0);
    return puVar1;
  }
  return param_3;
}

