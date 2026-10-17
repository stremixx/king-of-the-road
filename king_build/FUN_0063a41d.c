
/* WARNING: Removing unreachable block (ram,0x0063a444) */

int __thiscall FUN_0063a41d(int *param_1,code *param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*param_1 == 0) {
    if (DAT_0072cda4 == (DWORD *)0x0) {
      DAT_0072cda4 = (DWORD *)FUN_0063a01d();
    }
    iVar1 = FUN_0063a0b6();
    *param_1 = iVar1;
  }
  iVar1 = *param_1;
  pvVar2 = TlsGetValue(*DAT_0072cda4);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*param_2)();
    FUN_0063a225(*param_1,iVar1);
  }
  return iVar1;
}

