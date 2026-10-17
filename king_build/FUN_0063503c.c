
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063503c(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_00639a37();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_0063a4df(&LAB_006394d0);
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  _DAT_0072b0cc = 0;
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}

