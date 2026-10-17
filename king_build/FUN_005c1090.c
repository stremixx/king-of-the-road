
LPWSTR FUN_005c1090(LPCSTR param_1,int param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  
  iVar1 = MultiByteToWideChar(0,0,param_1,param_2,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)Ordinal_4(0,iVar1 + -1);
  if (lpWideCharStr != (LPWSTR)0x0) {
    MultiByteToWideChar(0,0,param_1,-1,lpWideCharStr,iVar1 + -1);
  }
  return lpWideCharStr;
}

