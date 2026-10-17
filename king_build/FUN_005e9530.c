
undefined4 FUN_005e9530(void)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  HBITMAP h;
  HGDIOBJ pvVar3;
  BOOL BVar4;
  HGLOBAL hMem;
  HDC unaff_ESI;
  HDC hdcSrc;
  int x1;
  int y1;
  DWORD rop;
  undefined4 local_4;
  
  (**(code **)(*DAT_0071f85c + 0x44))(DAT_0071f85c,&local_4);
  hdc = CreateCompatibleDC(unaff_ESI);
  iVar1 = FUN_005d31e0();
  iVar2 = FUN_005d31d0();
  h = CreateCompatibleBitmap(unaff_ESI,iVar2,iVar1);
  pvVar3 = SelectObject(hdc,h);
  if (pvVar3 == (HGDIOBJ)0x0) {
    FUN_005d2250(s_scr_sht_not_select_0068248c,0);
  }
  rop = 0xcc0020;
  y1 = 0;
  x1 = 0;
  hdcSrc = unaff_ESI;
  iVar1 = FUN_005d31e0();
  iVar2 = FUN_005d31d0();
  BVar4 = BitBlt(hdc,0,0,iVar2,iVar1,hdcSrc,x1,y1,rop);
  if (BVar4 == 0) {
    FUN_005d2250(s_scr_sht_not_select_0068248c,0);
  }
  SelectObject(hdc,(HGDIOBJ)0x0);
  hMem = (HGLOBAL)FUN_005e92e0(h);
  if (hMem == (HGLOBAL)0x0) {
    return 0;
  }
  FUN_005e9370(local_4,hMem,h,hdc);
  (**(code **)(*DAT_0071f85c + 0x68))(DAT_0071f85c,unaff_ESI);
  GlobalFree(hMem);
  DeleteObject(h);
  DeleteObject(hdc);
  return 1;
}

