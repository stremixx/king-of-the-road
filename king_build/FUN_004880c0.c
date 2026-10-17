
void FUN_004880c0(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (DAT_00690824 == 0) {
    FUN_00488080();
  }
  if (param_3 < 1) {
    *param_1 = uVar1;
    return;
  }
  do {
    uVar1 = uVar1 << 8 ^ (&DAT_00690820)[uVar1 >> 0x18 ^ (uint)*param_2];
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar1;
  return;
}

