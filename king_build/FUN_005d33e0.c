
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d33e0(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  BYTE *pBVar3;
  int iVar4;
  undefined1 local_4b0;
  undefined1 auStack_4af [1199];
  
  if (DAT_0071f84c == 2) {
    if (param_2 < param_3) {
      puVar1 = auStack_4af + param_2 * 4;
      iVar4 = param_3 - param_2;
      puVar2 = (undefined1 *)(param_1 + 2 + param_2 * 6);
      do {
        puVar1[-1] = puVar2[-2];
        *puVar1 = puVar2[-1];
        puVar1[1] = *puVar2;
        puVar1[2] = 4;
        puVar1 = puVar1 + 4;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 3;
      } while (iVar4 != 0);
    }
    if (DAT_0071f808 != 0) {
      (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c,0);
      DAT_0071f808 = 0;
    }
    if (DAT_0071f854 != (int *)0x0) {
      (**(code **)(*DAT_0071f854 + 0x18))(DAT_0071f854,0,param_2,param_3,&local_4b0);
      return;
    }
  }
  else {
    if ((DAT_0071f84c == 1) && (DAT_0071f808 != 0)) {
      (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c,0);
      DAT_0071f808 = 0;
    }
    DAT_0071f878->palNumEntries = 0x100;
    param_3 = param_2 + param_3;
    if (param_2 < param_3) {
      pBVar3 = (BYTE *)(param_2 * 3 + 2 + param_1);
      do {
        DAT_0071f878->palPalEntry[param_2].peRed = pBVar3[-2];
        DAT_0071f878->palPalEntry[param_2].peGreen = pBVar3[-1];
        DAT_0071f878->palPalEntry[param_2].peBlue = *pBVar3;
        DAT_0071f878->palPalEntry[param_2].peFlags = '\x04';
        param_2 = param_2 + 1;
        pBVar3 = pBVar3 + 3;
      } while (param_2 < param_3);
    }
    _DAT_0071f884 = CreatePalette(DAT_0071f878);
    _DAT_0071f678 = SelectPalette(DAT_0071f87c,_DAT_0071f884,0);
    DeleteObject(_DAT_0071f678);
    RealizePalette(DAT_0071f87c);
  }
  return;
}

