
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3350(HDC param_1)

{
  BYTE BVar1;
  int iVar2;
  
  DAT_0071f87c = param_1;
  DAT_0071f878 = LocalAlloc(0,0x408);
  DAT_0071f878->palVersion = 0x300;
  DAT_0071f878->palNumEntries = 0x100;
  iVar2 = 0;
  do {
    BVar1 = (BYTE)iVar2;
    DAT_0071f878->palPalEntry[iVar2].peRed = BVar1;
    DAT_0071f878->palPalEntry[iVar2].peGreen = BVar1;
    DAT_0071f878->palPalEntry[iVar2].peBlue = BVar1;
    DAT_0071f878->palPalEntry[iVar2].peFlags = '\x04';
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  _DAT_0071f884 = CreatePalette(DAT_0071f878);
  _DAT_0071f678 = SelectPalette(param_1,_DAT_0071f884,0);
  RealizePalette(param_1);
  return;
}

