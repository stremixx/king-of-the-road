
void FUN_0047a120(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  param_2 = param_2 - param_1 >> 4;
  if (0 < param_2) {
    param_1 = param_1 - (int)param_3;
    piVar6 = param_3 + 1;
    do {
      piVar1 = (int *)((int)piVar6 + param_1);
      *param_3 = *(undefined4 *)((int)piVar6 + param_1 + -4);
      if (piVar1 != piVar6) {
        iVar3 = piVar1[1];
        iVar4 = *piVar1;
        iVar2 = *piVar6;
        uVar5 = iVar3 - iVar4;
        if ((uint)(piVar6[2] - iVar2) < uVar5) {
          iVar3 = FUN_00458d60(uVar5,iVar4,iVar3);
          iVar4 = piVar6[2] - *piVar6;
          if (iVar4 != 0) {
            FUN_0044b440(*piVar6,iVar4);
          }
          *piVar6 = iVar3;
          piVar6[2] = iVar3 + uVar5;
        }
        else if ((uint)(piVar6[1] - iVar2) < uVar5) {
          FUN_0061c980(iVar2,iVar4,piVar6[1] - iVar2);
          iVar3 = (*piVar1 - *piVar6) + piVar6[1];
          FUN_0061c980(piVar6[1],iVar3,piVar1[1] - iVar3);
        }
        else {
          FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
        }
        piVar6[1] = *piVar6 + uVar5;
      }
      param_3 = param_3 + 4;
      piVar6 = piVar6 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

