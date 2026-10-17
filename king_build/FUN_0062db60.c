
void FUN_0062db60(void)

{
  int iVar1;
  
  FUN_0062dbc0(&DAT_0077bfec,DAT_006894b8);
  FUN_0062dbc0(&DAT_0077d250,DAT_006894d8);
  FUN_0062d6f0(&PTR_DAT_006894e0);
  iVar1 = 0x12;
  do {
    if (*(short *)(&DAT_0077bf4e + (uint)(byte)(&DAT_006894fc)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  DAT_0077b804 = iVar1 * 3 + DAT_0077b804 + 0x11;
  return;
}

