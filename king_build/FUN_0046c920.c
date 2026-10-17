
void FUN_0046c920(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f828;
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  iVar5 = param_4;
  while (ExceptionList = ppvVar3, param_3 < param_2) {
    iVar6 = (param_2 + -1) / 2;
    piVar1 = (int *)(param_1 + iVar6 * 0xc);
    iVar4 = FUN_0061d520(*(undefined4 *)(param_1 + iVar6 * 0xc),iVar5);
    if (-1 < iVar4) break;
    piVar2 = (int *)(param_1 + param_2 * 0xc);
    ppvVar3 = ExceptionList;
    param_2 = iVar6;
    if (piVar1 != piVar2) {
      iVar5 = piVar1[1];
      iVar4 = *piVar1;
      iVar6 = *piVar2;
      uVar7 = iVar5 - iVar4;
      if ((uint)(piVar2[2] - iVar6) < uVar7) {
        iVar5 = FUN_00458d60(uVar7,iVar4,iVar5);
        iVar4 = piVar2[2] - *piVar2;
        if (iVar4 != 0) {
          FUN_0044b440(*piVar2,iVar4);
        }
        *piVar2 = iVar5;
        piVar2[2] = iVar5 + uVar7;
      }
      else if ((uint)(piVar2[1] - iVar6) < uVar7) {
        FUN_0061c980(iVar6,iVar4,piVar2[1] - iVar6);
        iVar5 = (piVar2[1] - *piVar2) + *piVar1;
        FUN_0061c980(piVar2[1],iVar5,piVar1[1] - iVar5);
      }
      else {
        FUN_0061c980(iVar6,iVar4,iVar5 - iVar4);
      }
      piVar2[1] = *piVar2 + uVar7;
      ppvVar3 = ExceptionList;
      iVar5 = param_4;
    }
  }
  iVar4 = param_5;
  piVar1 = (int *)(param_1 + param_2 * 0xc);
  if (&param_4 != piVar1) {
    iVar6 = *piVar1;
    uVar7 = param_5 - iVar5;
    if ((uint)(piVar1[2] - iVar6) < uVar7) {
      iVar4 = FUN_00458d60(uVar7,iVar5,param_5);
      iVar6 = piVar1[2] - *piVar1;
      if (iVar6 != 0) {
        FUN_0044b440(*piVar1,iVar6);
      }
      *piVar1 = iVar4;
      piVar1[2] = iVar4 + uVar7;
    }
    else if ((uint)(piVar1[1] - iVar6) < uVar7) {
      FUN_00407250(iVar5,(piVar1[1] - iVar6) + iVar5,iVar6);
      FUN_00407250((piVar1[1] - *piVar1) + iVar5,iVar4,piVar1[1]);
    }
    else {
      FUN_0061c980(iVar6,iVar5,uVar7);
    }
    piVar1[1] = *piVar1 + uVar7;
  }
  if (param_6 - iVar5 != 0) {
    FUN_0044b440(iVar5,param_6 - iVar5);
  }
  ExceptionList = local_c;
  return;
}

