
void __thiscall
FUN_00425670(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *param_1 = 0xffffffff;
  if (param_2 != -8) {
    param_1[6] = param_2 + 0x54;
    param_1[7] = param_2;
    return;
  }
  param_1[6] = 0;
  param_1[7] = 0xfffffff8;
  return;
}

