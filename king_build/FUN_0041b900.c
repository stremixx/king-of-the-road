
void FUN_0041b900(int param_1,double *param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != -1) {
    iVar1 = *(int *)(DAT_0068bf38 + param_1 * 4);
    iVar2 = *(int *)(iVar1 + 0x40);
    if (*(int *)(iVar1 + 0x20) != 4) {
      *param_2 = (double)(*(float *)(&DAT_006968d8 + iVar2 * 0x970) + (float)*param_2);
    }
    if (*(int *)(*(int *)(DAT_0068bf38 + param_1 * 4) + 0x20) != 3) {
      iVar2 = iVar2 * 0x970;
      *param_3 = (double)(*(float *)(&DAT_006968e4 + iVar2) * *(float *)(&DAT_006968e0 + iVar2) +
                         (float)*param_3);
    }
  }
  return;
}

