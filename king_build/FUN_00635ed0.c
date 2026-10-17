
void FUN_00635ed0(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}

