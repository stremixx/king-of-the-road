
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_0056eac0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  _DAT_006f21a8 = param_2;
  _DAT_006f21ac = param_3;
  _DAT_006f21b0 = param_4;
  _DAT_006f21b4 = param_5;
  DAT_006f2420 = 0;
  (**(code **)(*param_1 + 0x20))(&LAB_0056eb20,0);
  *param_4 = DAT_006f2420;
  return &DAT_006f1db8;
}

