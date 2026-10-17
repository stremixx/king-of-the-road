
int * FUN_0047ced0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_50 [8];
  int local_30;
  int local_28 [8];
  int local_8;
  
  piVar5 = param_1;
  iVar6 = ((int)param_2 - (int)param_1) / 0x28;
  piVar1 = (int *)-((int)param_2 - (int)param_1 >> 0x1f);
  if (iVar6 < 0xf) {
    if ((param_1 != param_2) && (piVar5 = param_1 + 10, piVar5 != param_2)) {
      piVar1 = param_1 + 8;
      do {
        iVar6 = param_1[8];
        piVar7 = piVar5;
        piVar2 = local_28;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar2 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar2 = piVar2 + 1;
        }
        if (local_8 < iVar6) {
          piVar7 = piVar1 + 0xc;
          iVar6 = ((int)piVar5 - (int)param_1) / 0x28;
          if (0 < iVar6) {
            piVar2 = piVar1 + 2;
            do {
              piVar7 = piVar7 + -10;
              piVar2 = piVar2 + -10;
              iVar6 = iVar6 + -1;
              piVar8 = piVar2;
              piVar10 = piVar7;
              for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar10 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar10 = piVar10 + 1;
              }
            } while (iVar6 != 0);
          }
          piVar7 = local_28;
          piVar2 = param_1;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar2 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar2 = piVar2 + 1;
          }
        }
        else {
          piVar7 = piVar5;
          piVar2 = local_50;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar2 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar2 = piVar2 + 1;
          }
          iVar6 = *piVar1;
          piVar2 = piVar1 + -8;
          piVar7 = piVar5;
          while (piVar8 = piVar2, local_30 < iVar6) {
            piVar2 = piVar8;
            for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar7 = *piVar2;
              piVar2 = piVar2 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar2 = piVar8 + -10;
            piVar7 = piVar8;
            iVar6 = piVar8[-2];
          }
          piVar2 = local_50;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar7 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar7 = piVar7 + 1;
          }
        }
        piVar5 = piVar5 + 10;
        piVar1 = piVar1 + 10;
      } while (piVar5 != param_2);
      return param_2;
    }
  }
  else {
    piVar7 = param_1 + (iVar6 / 2) * 10;
    FUN_0047ced0(param_1,piVar7,param_3);
    FUN_0047ced0(piVar7,param_2,param_3);
    iVar6 = ((int)param_2 - (int)piVar7) / 0x28;
    piVar1 = (int *)(((int)piVar7 - (int)param_1) * 0x66666667);
    iVar4 = ((int)piVar7 - (int)param_1) / 0x28;
    if ((iVar4 != 0) && (iVar6 != 0)) {
      if (iVar4 + iVar6 == 2) {
        piVar1 = (int *)param_1[8];
        if (piVar7[8] < (int)piVar1) {
          piVar2 = local_28;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar2 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar2 = piVar2 + 1;
          }
          piVar5 = piVar7;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_1 = *piVar5;
            piVar5 = piVar5 + 1;
            param_1 = param_1 + 1;
          }
          piVar5 = local_28;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar7 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          }
          return piVar1;
        }
      }
      else {
        if (iVar6 < iVar4) {
          iVar9 = iVar4 / 2;
          piVar1 = (int *)FUN_0047f930(piVar7,param_2,param_1 + iVar9 * 10,param_3,0);
          iVar11 = ((int)piVar1 - (int)piVar7) / 0x28;
          param_1 = param_1 + iVar9 * 10;
        }
        else {
          iVar11 = iVar6 / 2;
          piVar1 = piVar7 + iVar11 * 10;
          piVar2 = (int *)FUN_0047f990(param_1,piVar7,piVar1,param_3,0);
          iVar9 = ((int)piVar2 - (int)param_1) / 0x28;
          param_1 = piVar2;
        }
        uVar3 = FUN_0047ee20(param_1,piVar7,piVar1);
        FUN_0047ddc0(piVar5,param_1,uVar3,iVar9,iVar11,param_3);
        piVar1 = (int *)FUN_0047ddc0(uVar3,piVar1,param_2,iVar4 - iVar9,iVar6 - iVar11,param_3);
      }
    }
  }
  return piVar1;
}

