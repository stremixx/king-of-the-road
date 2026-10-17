
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dfa70(int *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_005e4340();
  if (param_1[0x79] != 0) {
    *(undefined4 *)(param_1[0x79] + 8) = 0;
  }
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  fVar2 = (float10)thunk_FUN_00603580();
  fVar1 = (float10)_DAT_0064a648;
  param_1[0x2e4] = -0x66666666;
  param_1[0x2e8] = -0x66666666;
  param_1[0x2e5] = 0x3fb99999;
  param_1[0x2e9] = 0x3fb99999;
  param_1[0x96] = 0;
  *(double *)(param_1 + 0x94) = (double)(fVar2 * fVar1);
  param_1[0x2d2] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2e2] = 0;
  param_1[0x97] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2ea] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x88] = -1;
  *(undefined4 *)(param_1[0x75] + 0x8c) = 0;
  if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    FUN_005fc7d0();
  }
  param_1[0x2eb] = 0;
  FUN_005d2b10();
  (**(code **)(*param_1 + 0x7c))();
  (**(code **)(*param_1 + 0x78))();
  param_1[0x2f4] = 0;
  return;
}

