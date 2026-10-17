
undefined4 FUN_00625a02(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_0077d7e0 <= param_1) {
LAB_00625a83:
    puVar4 = (undefined4 *)FUN_006204a3();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_00625a83;
  FUN_0062848f(param_1);
  if ((*(byte *)((&DAT_0077d6e0)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_0062844d(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_00625a78;
    pDVar3 = (DWORD *)FUN_006204ac();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_006204a3();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_00625a78:
  FUN_006284ee(param_1);
  return uVar6;
}

