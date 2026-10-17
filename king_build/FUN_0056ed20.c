
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0056ed20(int param_1,undefined4 *param_2,undefined4 *param_3,double *param_4,int *param_5,
            int *param_6,undefined4 *param_7)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_006f1db8 + param_1 * 4);
  if (*(int *)(iVar1 + 0x10) != 9) {
    return 0xffffffff;
  }
  if (*(int *)(iVar1 + 0x40) != 7) {
    return 0xffffffff;
  }
  *param_7 = *(undefined4 *)(&DAT_006f21cc + param_1 * 4);
  *param_2 = *(undefined4 *)(iVar1 + 0x48);
  *param_3 = *(undefined4 *)(iVar1 + 0x30);
  *param_4 = (double)*(int *)(iVar1 + 0x34) * _DAT_0064a590;
  *param_5 = *(int *)(iVar1 + 0x3c) + 4;
  *param_6 = *(int *)(iVar1 + 0x38) + -1;
  return *(undefined4 *)(iVar1 + 0x44);
}

