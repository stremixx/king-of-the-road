
void FUN_005c2560(undefined4 param_1,int param_2)

{
  int iVar1;
  
  CoInitialize((LPVOID)0x0);
  DAT_00701ec0 = param_1;
  DAT_00701eb8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  DAT_00701ebc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (param_2 == 0) {
    DAT_00701efc = 1;
    iVar1 = FUN_005c1ba0(DAT_00701ec0);
    if (iVar1 < 0) {
      FUN_005d2250(s_msavi__Init_DirectSound___failed_0067e794,0);
      return;
    }
  }
  else {
    DAT_00701ef8 = param_2;
    DAT_00701efc = 0;
  }
  FUN_00632097(&LAB_005c2470,0,1,0x1000,0,0);
  DAT_00701ef4 = 0;
  return;
}

