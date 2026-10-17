
undefined4 FUN_0061fe91(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    unaff_ESI = 1;
  }
  pvVar1 = HeapReAlloc(DAT_0077d808,0x10,*(LPVOID *)(unaff_EBP + 8),unaff_ESI + 0xfU & 0xfffffff0);
  *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

