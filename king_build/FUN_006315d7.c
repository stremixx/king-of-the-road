
LPSTR FUN_006315d7(LPSTR param_1,LPCSTR param_2,DWORD param_3)

{
  LPCSTR lpFileName;
  LPSTR pCVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  lpFileName = param_2;
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    pCVar1 = param_1;
    if (param_1 == (LPSTR)0x0) {
      pCVar1 = _malloc(0x104);
      if (pCVar1 == (LPSTR)0x0) {
        puVar2 = (undefined4 *)FUN_006204a3();
        *puVar2 = 0xc;
        return (LPSTR)0x0;
      }
      param_3 = 0x104;
    }
    DVar3 = GetFullPathNameA(lpFileName,param_3,pCVar1,&param_2);
    if (DVar3 < param_3) {
      if (DVar3 != 0) {
        return pCVar1;
      }
      if (param_1 == (LPSTR)0x0) {
        FUN_0061c888(pCVar1);
      }
      DVar3 = GetLastError();
      FUN_00620430(DVar3);
    }
    else {
      if (param_1 == (LPSTR)0x0) {
        FUN_0061c888(pCVar1);
      }
      puVar2 = (undefined4 *)FUN_006204a3();
      *puVar2 = 0x22;
    }
    return (LPSTR)0x0;
  }
  pCVar1 = (LPSTR)FUN_0063173a(param_1,param_3);
  return pCVar1;
}

