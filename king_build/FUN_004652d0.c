
void FUN_004652d0(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  uVar1 = (int)param_2 - (int)param_1;
  if ((int)(uVar1 & 0xfffffffc) < 0x3c) {
    if ((param_1 != param_2) && (piVar8 = param_1 + 1, piVar8 != param_2)) {
      do {
        iVar2 = *piVar8;
        if (*(int *)(iVar2 + 0x20) < *(int *)(*param_1 + 0x20)) {
          iVar6 = (int)piVar8 - (int)param_1 >> 2;
          if (0 < iVar6) {
            piVar4 = piVar8 + 1;
            do {
              piVar3 = (int *)((int)piVar8 + (-4 - (int)(piVar8 + 1)) + (int)piVar4);
              piVar4 = piVar4 + -1;
              iVar6 = iVar6 + -1;
              *piVar4 = *piVar3;
            } while (iVar6 != 0);
          }
          *param_1 = iVar2;
        }
        else {
          iVar6 = piVar8[-1];
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (*(int *)(iVar2 + 0x20) < *(int *)(iVar6 + 0x20)) {
            do {
              piVar3 = piVar4 + -1;
              *piVar4 = iVar6;
              iVar6 = piVar4[-2];
              piVar4 = piVar3;
            } while (*(int *)(iVar2 + 0x20) < *(int *)(iVar6 + 0x20));
          }
          *piVar3 = iVar2;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != param_2);
      return;
    }
  }
  else {
    piVar8 = param_1 + (((int)uVar1 >> 2) - ((int)uVar1 >> 0x1f) >> 1);
    FUN_004652d0(param_1,piVar8,param_3);
    FUN_004652d0(piVar8,param_2,param_3);
    iVar6 = (int)param_2 - (int)piVar8 >> 2;
    iVar2 = (int)piVar8 - (int)param_1 >> 2;
    if ((iVar2 != 0) && (iVar6 != 0)) {
      if (iVar2 + iVar6 == 2) {
        iVar2 = *param_1;
        if (*(int *)(*piVar8 + 0x20) < *(int *)(iVar2 + 0x20)) {
          *param_1 = *piVar8;
          *piVar8 = iVar2;
          return;
        }
      }
      else {
        if (iVar6 < iVar2) {
          iVar9 = iVar2 - ((int)piVar8 - (int)param_1 >> 0x1f) >> 1;
          piVar4 = param_1 + iVar9;
          piVar3 = (int *)FUN_0046bc60(piVar8,param_2,piVar4,param_3,0);
          iVar7 = (int)piVar3 - (int)piVar8 >> 2;
        }
        else {
          iVar7 = iVar6 - ((int)param_2 - (int)piVar8 >> 0x1f) >> 1;
          piVar3 = piVar8 + iVar7;
          piVar4 = (int *)FUN_0046bca0(param_1,piVar8,piVar3,param_3,0);
          iVar9 = (int)piVar4 - (int)param_1 >> 2;
        }
        uVar5 = FUN_0046a470(piVar4,piVar8,piVar3);
        FUN_004681e0(param_1,piVar4,uVar5,iVar9,iVar7,param_3);
        FUN_004681e0(uVar5,piVar3,param_2,iVar2 - iVar9,iVar6 - iVar7,param_3);
      }
    }
  }
  return;
}

