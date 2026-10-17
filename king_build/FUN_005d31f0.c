
void FUN_005d31f0(void *param_1)

{
  ushort uVar1;
  RGBQUAD *pRVar2;
  
  if ((DAT_0071f080 & 1) == 0) {
    DAT_0071f080 = DAT_0071f080 | 1;
    DAT_0071f67c = (BITMAPINFO *)FUN_00631d33(0x7fc);
  }
  (DAT_0071f67c->bmiHeader).biSize = 0x28;
  (DAT_0071f67c->bmiHeader).biWidth = DAT_0071f7fc;
  (DAT_0071f67c->bmiHeader).biHeight = -DAT_0071f800;
  (DAT_0071f67c->bmiHeader).biPlanes = 1;
  (DAT_0071f67c->bmiHeader).biBitCount = (short)DAT_0071f7f0 * 8;
  (DAT_0071f67c->bmiHeader).biCompression = 0;
  (DAT_0071f67c->bmiHeader).biSizeImage = 0;
  (DAT_0071f67c->bmiHeader).biXPelsPerMeter = 0;
  (DAT_0071f67c->bmiHeader).biYPelsPerMeter = 0;
  (DAT_0071f67c->bmiHeader).biClrUsed = 0x100;
  (DAT_0071f67c->bmiHeader).biClrImportant = 0x100;
  pRVar2 = DAT_0071f67c->bmiColors;
  uVar1 = 0;
  do {
    pRVar2->rgbBlue = (char)uVar1;
    pRVar2->rgbGreen = (char)(uVar1 >> 8);
    uVar1 = uVar1 + 1;
    pRVar2 = (RGBQUAD *)&pRVar2->rgbRed;
  } while (uVar1 < 0x100);
  if ((DAT_0067ec30 == 1) && (DAT_0067ec34 == 1)) {
    SetDIBitsToDevice(DAT_0071f87c,0,0,DAT_0071f7fc,DAT_0071f800,0,0,0,DAT_0071f800,param_1,
                      DAT_0071f67c,(uint)(DAT_0071f7f0 == 1));
    return;
  }
  StretchDIBits(DAT_0071f87c,0,0,DAT_0067ec30 * DAT_0071f7fc,DAT_0067ec34 * DAT_0071f800,0,0,
                DAT_0071f7fc,DAT_0071f800,param_1,DAT_0071f67c,(uint)(DAT_0071f7f0 == 1),0xcc0020);
  return;
}

