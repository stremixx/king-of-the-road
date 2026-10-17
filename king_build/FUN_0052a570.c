
int * __thiscall FUN_0052a570(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = -1;
  *param_1 = 0;
  iVar1 = 0;
  while (((&DAT_006cdcf8)[param_2 * 0xb] == 0 || ((&DAT_006cdd0c)[param_2 * 0xb] == 0))) {
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
LAB_0052a5b7:
      iVar1 = param_2 * 0xb + *param_1;
      if (((&DAT_006cdd0c)[iVar1] == 0) && ((int *)(&DAT_006cdcf8)[iVar1] != (int *)0x0)) {
        (**(code **)(*(int *)(&DAT_006cdcf8)[iVar1] + 0x28))();
      }
      iVar1 = param_1[1] * 0xb + *param_1;
      (&DAT_006cdd0c)[iVar1] = (&DAT_006cdd0c)[iVar1] + 1;
      return param_1;
    }
  }
  *param_1 = iVar1;
  goto LAB_0052a5b7;
}

