
void FUN_0060a190(int param_1,LPCSTR param_2)

{
  int iVar1;
  va_list arglist;
  CHAR local_200 [256];
  undefined1 local_100 [256];
  
  local_200[0] = '\0';
  if (param_1 != 0) {
    local_100[0] = 0;
    FUN_0060a230(param_1,local_100,0xff);
    wsprintfA(local_200,s_Error____s_006839dc,local_100);
    arglist = &stack0x0000000c;
    iVar1 = lstrlenA(local_200);
    wvsprintfA(local_200 + iVar1,param_2,arglist);
    FUN_0060a120(2,&DAT_0066c9c4,local_200);
  }
  return;
}

