
undefined4 FUN_00639d57(void)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_0072d034 != 0) {
    return 1;
  }
  iVar1 = FUN_0063a4df(&LAB_006394d0);
  if (*(int *)(iVar1 + 4) != 0) goto LAB_00639e52;
  hModule = LoadLibraryA("CTL3D32.DLL");
  *(HMODULE *)(iVar1 + 8) = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,&DAT_0000000c);
    *(FARPROC *)(iVar1 + 0xc) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0xd);
    *(FARPROC *)(iVar1 + 0x10) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x10);
    *(FARPROC *)(iVar1 + 0x14) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x18);
    *(FARPROC *)(iVar1 + 0x18) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x6);
    *(FARPROC *)(iVar1 + 0x1c) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x15);
    *(FARPROC *)(iVar1 + 0x20) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x16);
    *(FARPROC *)(iVar1 + 0x24) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x3);
    *(FARPROC *)(iVar1 + 0x28) = pFVar2;
    pFVar2 = GetProcAddress(*(HMODULE *)(iVar1 + 8),(LPCSTR)0x19);
    *(FARPROC *)(iVar1 + 0x2c) = pFVar2;
  }
  if ((((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(iVar1 + 0x14) == 0)) ||
      (*(int *)(iVar1 + 0x1c) == 0)) ||
     ((*(int *)(iVar1 + 0x20) == 0 || (*(int *)(iVar1 + 0x10) == 0)))) {
LAB_00639e1f:
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(HMODULE *)(iVar1 + 8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  else {
    iVar3 = FUN_00639a37();
    iVar3 = (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar3 + 8));
    if (iVar3 == 0) goto LAB_00639e1f;
  }
  *(undefined4 *)(iVar1 + 4) = 1;
LAB_00639e52:
  if (*(int *)(iVar1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_00639a37();
    uVar4 = (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
  }
  return uVar4;
}

