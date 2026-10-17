
void __fastcall FUN_00603c50(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[5];
  if ((uVar1 != 0) && ((uVar1 < (uint)param_1[2] || ((uint)(param_1[4] + param_1[2]) < uVar1)))) {
    FUN_00631d5c(uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

