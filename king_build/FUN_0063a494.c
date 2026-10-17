
undefined4 __fastcall FUN_0063a494(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (DAT_0072cda4 != (DWORD *)0x0)) {
    pvVar2 = TlsGetValue(*DAT_0072cda4);
    if ((pvVar2 != (LPVOID)0x0) && (iVar1 < *(int *)((int)pvVar2 + 8))) {
      return *(undefined4 *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
    }
  }
  return 0;
}

