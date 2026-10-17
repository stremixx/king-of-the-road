
void FUN_005e9370(undefined4 param_1,LPBITMAPINFO param_2,HBITMAP param_3,HDC param_4)

{
  byte bVar1;
  DWORD DVar2;
  LPBITMAPINFO ptVar3;
  undefined2 *lpvBits;
  int iVar4;
  undefined2 *hMem;
  undefined2 *puVar5;
  DWORD *pDVar6;
  undefined2 *puVar7;
  undefined2 local_38;
  int local_36;
  undefined2 local_32;
  undefined2 local_30;
  int local_2e;
  DWORD local_28 [2];
  uint local_20;
  WORD local_1a;
  uint local_14;
  DWORD local_8;
  
  ptVar3 = param_2;
  lpvBits = GlobalAlloc(0,(param_2->bmiHeader).biSizeImage);
  GetLastError();
  SetLastError(0);
  iVar4 = GetDIBits(param_4,param_3,0,(uint)(ushort)(param_2->bmiHeader).biHeight,lpvBits,param_2,0)
  ;
  if (iVar4 == 0) {
    GetLastError();
    FUN_005d2250(s_GetDIBits_00682480,0);
  }
  hMem = lpvBits;
  if ((param_2->bmiHeader).biBitCount < 0x18) {
    pDVar6 = local_28;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pDVar6 = (param_2->bmiHeader).biSize;
      param_2 = (LPBITMAPINFO)&(param_2->bmiHeader).biWidth;
      pDVar6 = pDVar6 + 1;
    }
    local_1a = 0x18;
    local_8 = 0;
    iVar4 = local_28[1] * 0x18 + 0x1f;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * local_20 * 0x20;
    local_14 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    hMem = GlobalAlloc(0,local_14);
    param_3 = (HBITMAP)0x0;
    puVar7 = lpvBits;
    param_2 = (LPBITMAPINFO)hMem;
    if (0 < (int)local_20) {
      do {
        iVar4 = 0;
        puVar5 = (undefined2 *)param_2;
        if (0 < (int)local_28[1]) {
          do {
            bVar1 = *(byte *)(iVar4 + (int)puVar7);
            iVar4 = iVar4 + 1;
            *puVar5 = *(undefined2 *)(ptVar3->bmiColors + bVar1);
            *(BYTE *)(puVar5 + 1) = ptVar3->bmiColors[bVar1].rgbRed;
            puVar5 = (undefined2 *)((int)puVar5 + 3);
          } while (iVar4 < (int)local_28[1]);
        }
        param_3 = (HBITMAP)((int)param_3 + 1);
        puVar7 = (undefined2 *)
                 ((int)puVar7 + (ptVar3->bmiHeader).biSizeImage / (uint)(ptVar3->bmiHeader).biHeight
                 );
        param_2 = (LPBITMAPINFO)((int)param_2 + local_14 / local_20);
      } while ((int)param_3 < (int)local_20);
    }
    GlobalFree(lpvBits);
    param_2 = (LPBITMAPINFO)local_28;
  }
  DVar2 = (param_2->bmiHeader).biSize;
  local_38 = 0x4d42;
  iVar4 = (param_2->bmiHeader).biClrUsed * 4;
  local_2e = DVar2 + 0xe + iVar4;
  local_36 = DVar2 + iVar4 + 0xe + (param_2->bmiHeader).biSizeImage;
  local_32 = 0;
  local_30 = 0;
  FUN_0061d9d6(&local_38,0xe,1,param_1);
  FUN_0061d9d6(param_2,(param_2->bmiHeader).biClrUsed * 4 + 0x28,1,param_1);
  FUN_0061d9d6(hMem,(param_2->bmiHeader).biSizeImage,1,param_1);
  GlobalFree(hMem);
  return;
}

