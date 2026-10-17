
undefined4
FUN_00616620(uint param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  int iVar1;
  
  if ((int)param_1 < 1) {
    param_1 = -param_1;
  }
  if ((int)param_2 < 1) {
    param_2 = -param_2;
  }
  if ((int)param_3 < 1) {
    param_3 = -param_3;
  }
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  iVar1 = (&DAT_00729fc8)[(&DAT_00729fc8)[param_1] + param_2] + param_3;
  *param_4 = (&DAT_007287b0)[iVar1 * 3];
  param_4[1] = (&DAT_007287b4)[iVar1 * 3];
  param_4[2] = (&DAT_007287b8)[iVar1 * 3];
  *param_6 = (&DAT_00727fa4)[(&DAT_00729fc8)[(&DAT_00729fc8)[param_1] + param_2] + param_3];
  *param_5 = (&DAT_0072779c)[(&DAT_00729fc8)[(&DAT_00729fc8)[param_1] + param_2] + param_3];
  return (&DAT_0072a7d0)[(&DAT_00729fc8)[(&DAT_00729fc8)[param_1] + param_2] + param_3];
}

