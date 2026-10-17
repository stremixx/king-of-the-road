
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061df95(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_0061e03a();
  if (DAT_0072d0c4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0072d0c0 = 1;
  DAT_0072d0bc = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_0077da58 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_0077da54 - 4), DAT_0077da58 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_0077da58 <= puVar1);
    }
    FUN_0061e04c(&DAT_0066b4a4,&DAT_0066b4ac);
  }
  FUN_0061e04c(&DAT_0066b4b0,&DAT_0066b4b8);
  if (param_3 == 0) {
    DAT_0072d0c4 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_0061e043();
  return;
}

