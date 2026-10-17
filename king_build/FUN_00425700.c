
void FUN_00425700(void)

{
  int iVar1;
  
  DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
  DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
  (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
  iVar1 = __ftol();
  DAT_0068c0bc = (uint)(&DAT_0068a928)[DAT_0068aa04] % (iVar1 - 2U) + 3;
  DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
  DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
  (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
  DAT_0068c0c0 = (&DAT_0068a928)[DAT_0068aa04] & 3;
  return;
}

