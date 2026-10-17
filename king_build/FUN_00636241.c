
undefined4 FUN_00636241(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  CWinThread *pCVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  pCVar2 = AfxGetThread();
  iVar3 = FUN_00639a37();
  piVar1 = *(int **)(iVar3 + 4);
  iVar3 = FUN_0063a9c0(param_1,param_2,param_3,param_4);
  if ((iVar3 != 0) &&
     ((piVar1 == (int *)0x0 || (iVar3 = (**(code **)(*piVar1 + 0x84))(), iVar3 != 0)))) {
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x50))();
    if (iVar3 == 0) {
      if (*(int **)(pCVar2 + 0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(pCVar2 + 0x1c) + 0x58))();
      }
      uVar4 = (**(code **)(*(int *)pCVar2 + 0x68))();
    }
    else {
      uVar4 = (**(code **)(*(int *)pCVar2 + 0x54))();
    }
  }
  FUN_0063ac3f();
  return uVar4;
}

