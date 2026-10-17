
void FUN_0047dcd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_50 [8];
  int local_30;
  int local_28 [8];
  int local_8;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 10, piVar6 != param_2)) {
    piVar4 = param_1 + 8;
    do {
      iVar3 = param_1[8];
      piVar5 = piVar6;
      piVar1 = local_50;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar1 = piVar1 + 1;
      }
      if (local_30 < iVar3) {
        piVar5 = piVar4 + 0xc;
        iVar3 = ((int)piVar6 - (int)param_1) / 0x28;
        if (0 < iVar3) {
          piVar1 = piVar4 + 2;
          do {
            piVar5 = piVar5 + -10;
            piVar1 = piVar1 + -10;
            iVar3 = iVar3 + -1;
            piVar7 = piVar1;
            piVar8 = piVar5;
            for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
          } while (iVar3 != 0);
        }
        piVar5 = local_50;
        piVar1 = param_1;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar1 = piVar1 + 1;
        }
      }
      else {
        piVar5 = piVar6;
        piVar1 = local_28;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar1 = piVar1 + 1;
        }
        iVar3 = *piVar4;
        piVar1 = piVar4 + -8;
        piVar5 = piVar6;
        while (piVar7 = piVar1, local_8 < iVar3) {
          piVar1 = piVar7;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = *piVar1;
            piVar1 = piVar1 + 1;
            piVar5 = piVar5 + 1;
          }
          piVar1 = piVar7 + -10;
          piVar5 = piVar7;
          iVar3 = piVar7[-2];
        }
        piVar1 = local_28;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar1;
          piVar1 = piVar1 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      piVar6 = piVar6 + 10;
      piVar4 = piVar4 + 10;
    } while (piVar6 != param_2);
  }
  return;
}

