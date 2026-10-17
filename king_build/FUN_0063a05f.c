
void __fastcall FUN_0063a05f(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  HGLOBAL hMem;
  
  if (*param_1 != 0xffffffff) {
    TlsFree(*param_1);
  }
  DVar2 = param_1[5];
  while (DVar2 != 0) {
    DVar1 = *(DWORD *)(DVar2 + 4);
    FUN_0063a32b(DVar2,0);
    DVar2 = DVar1;
  }
  if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
    hMem = GlobalHandle((LPCVOID)param_1[4]);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}

