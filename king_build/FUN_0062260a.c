
undefined4 FUN_0062260a(int param_1)

{
  int iVar1;
  
  DAT_0077d808 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0077d808 != (HANDLE)0x0) {
    DAT_0077d80c = FUN_006224c2();
    if (DAT_0077d80c == 3) {
      iVar1 = FUN_00622667(0x3f8);
    }
    else {
      if (DAT_0077d80c != 2) {
        return 1;
      }
      iVar1 = FUN_006231ae();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_0077d808);
  }
  return 0;
}

