
void FUN_00469710(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  puStack_8 = &LAB_0063f7e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_0061d520(param_2,param_1[-3]);
  iVar2 = param_3;
  while (param_3 = iVar2, iVar1 < 0) {
    piVar5 = param_1 + -3;
    if (piVar5 != param_1) {
      iVar2 = param_1[-2];
      iVar3 = *piVar5;
      iVar1 = *param_1;
      uVar4 = iVar2 - iVar3;
      if ((uint)(param_1[2] - iVar1) < uVar4) {
        iVar2 = FUN_00458d60(uVar4,iVar3,iVar2);
        iVar3 = param_1[2] - *param_1;
        if (iVar3 != 0) {
          FUN_0044b440(*param_1,iVar3);
        }
        *param_1 = iVar2;
        param_1[2] = iVar2 + uVar4;
      }
      else if ((uint)(param_1[1] - iVar1) < uVar4) {
        FUN_0061c980(iVar1,iVar3,param_1[1] - iVar1);
        iVar2 = (*piVar5 - *param_1) + param_1[1];
        FUN_0061c980(param_1[1],iVar2,param_1[-2] - iVar2);
      }
      else {
        FUN_0061c980(iVar1,iVar3,iVar2 - iVar3);
      }
      param_1[1] = *param_1 + uVar4;
      iVar3 = param_2;
    }
    iVar1 = FUN_0061d520(iVar3,param_1[-6]);
    iVar2 = param_3;
    param_1 = piVar5;
  }
  if (&param_2 != param_1) {
    iVar1 = *param_1;
    uVar4 = iVar2 - iVar3;
    if ((uint)(param_1[2] - iVar1) < uVar4) {
      iVar2 = FUN_00458d60(uVar4,iVar3,iVar2);
      iVar1 = param_1[2] - *param_1;
      if (iVar1 != 0) {
        FUN_0044b440(*param_1,iVar1);
      }
      *param_1 = iVar2;
      param_1[2] = iVar2 + uVar4;
    }
    else if ((uint)(param_1[1] - iVar1) < uVar4) {
      FUN_00407250(iVar3,(param_1[1] - iVar1) + iVar3,iVar1);
      FUN_00407250((param_1[1] - *param_1) + iVar3,iVar2,param_1[1]);
    }
    else {
      FUN_0061c980(iVar1,iVar3,uVar4);
    }
    param_1[1] = *param_1 + uVar4;
  }
  if (param_4 - iVar3 != 0) {
    FUN_0044b440(iVar3,param_4 - iVar3);
  }
  ExceptionList = local_c;
  return;
}

