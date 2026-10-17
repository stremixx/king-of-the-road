
int __fastcall FUN_0063643d(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar2 = SaveDC(*(HDC *)(param_1 + 8));
  }
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SaveDC(*(HDC *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

