
void FUN_00436350(uint *param_1,int param_2)

{
  if ((uint)(DAT_0068be64 - DAT_0068be60 >> 2) <= param_2 + 1U) {
    *param_1 = 0xffffffff;
    return;
  }
  *param_1 = param_2 + 1U;
  return;
}

