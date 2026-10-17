
undefined4 * __fastcall FUN_004edd50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_005eebf0();
  *param_1 = DAT_007015b0;
  param_1[1] = DAT_007015b4;
  param_1[2] = DAT_007015b8;
  param_1[3] = DAT_00701590;
  param_1[4] = DAT_00701594;
  uVar1 = DAT_00701598;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[0x21] = 0;
  param_1[0x3c] = 0;
  param_1[5] = uVar1;
  return param_1;
}

