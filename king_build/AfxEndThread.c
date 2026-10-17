
/* Library Function - Single Match
    void __stdcall AfxEndThread(unsigned int,int)
   
   Library: Visual Studio 2003 Release */

void AfxEndThread(uint param_1,int param_2)

{
  int *piVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar2 = AfxGetModuleThreadState();
  piVar1 = *(int **)(pAVar2 + 4);
  if (piVar1 != (int *)0x0) {
    if ((code *)piVar1[0x15] != (code *)0x0) {
      (*(code *)piVar1[0x15])(1,0);
    }
    if (param_2 != 0) {
      (**(code **)(*piVar1 + 0x78))();
    }
    *(undefined4 *)(pAVar2 + 4) = 0;
  }
  FUN_006321bc(0);
  FUN_0061f81d(param_1);
  return;
}

