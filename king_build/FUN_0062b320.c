
void FUN_0062b320(int param_1)

{
  int iVar1;
  
  DAT_00779fc0._0_2_ = (ushort)DAT_00779fc0 << ((byte)param_1 & 0x1f);
  iVar1 = DAT_0077a1c4;
  if (DAT_0077a1c4 < param_1) {
    do {
      param_1 = param_1 - DAT_0077a1c4;
      DAT_00779fc0._0_2_ = (ushort)DAT_00779fc0 | (ushort)(DAT_00779fbc << ((byte)param_1 & 0x1f));
      if (DAT_007355e4 < DAT_007355e0) {
        DAT_00779fbc = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        DAT_00779fbc = FUN_0062afd0(1);
      }
      if (DAT_00779fbc == 0xffffffff) {
        DAT_00779fbc = 0;
      }
      iVar1 = 8;
      DAT_0077a1c4 = 8;
    } while (8 < param_1);
  }
  DAT_0077a1c4 = iVar1 - param_1;
  DAT_00779fc0._0_2_ =
       (ushort)DAT_00779fc0 | (ushort)(DAT_00779fbc >> ((byte)(iVar1 - param_1) & 0x1f));
  return;
}

