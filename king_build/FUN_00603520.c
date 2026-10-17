
void __fastcall FUN_00603520(LPVOID param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_006034b0,param_1,0,
                        (LPDWORD)((int)param_1 + 0x10));
  *(HANDLE *)((int)param_1 + 0xc) = pvVar1;
  return;
}

