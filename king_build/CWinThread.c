
/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0063286f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_00652560;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_00639464();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

