
void FUN_0060a120(int param_1,LPCSTR param_2)

{
  int iVar1;
  va_list arglist;
  CHAR local_100 [256];
  
  arglist = &stack0x0000000c;
  local_100[0] = '\0';
  iVar1 = lstrlenA(local_100);
  wvsprintfA(local_100 + iVar1,param_2,arglist);
  if (param_1 == 2) {
    FUN_005d2520(local_100);
    return;
  }
  FUN_005d2250(local_100,0);
  return;
}

