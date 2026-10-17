
int __fastcall FUN_00578f60(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (0x31 < uVar1) {
    FUN_005d2250(s_Shadow_stack_overflow_0067bf74,0);
    return 0;
  }
  param_1[1] = uVar1 + 1;
  return uVar1 * 0x1b10 + *param_1;
}

