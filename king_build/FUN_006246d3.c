
void FUN_006246d3(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_00687c08;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x687c98);
  if (param_1 == (&DAT_00687c08)[iVar5 * 2]) {
    if ((DAT_0072d0fc == 1) || ((DAT_0072d0fc == 0 && (DAT_006855f8 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x687c0c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x62481c;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x624823;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_0061e950();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x62479d;
        _strncpy(acStackY_1e3 + sVar4,&DAT_00675c08,3);
      }
      FUN_0061e950();
      puStackY_1c4 = (undefined *)0x6247be;
      FUN_0061e960();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_00653d54;
      uStackY_1cc = 0x6247cf;
      FUN_0061e960();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x687c0c);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x6247e1;
      FUN_0061e960();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = -9;
      acStackY_1e3[4] = 'G';
      acStackY_1e3[5] = 'b';
      acStackY_1e3[6] = '\0';
      FUN_00628bfe();
    }
  }
  return;
}

