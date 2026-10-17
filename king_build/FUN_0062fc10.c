
void __fastcall FUN_0062fc10(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_00654530;
  DAT_0077d398 = DAT_0077d398 + -1;
  if (DAT_0077d398 == 0) {
    FUN_0062fb75(&DAT_0077d360);
  }
  FUN_0062fb75(param_1 + 0xe);
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}

