
void FUN_0047efc0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_68;
  int local_50 [8];
  int local_30;
  int local_28 [8];
  int local_8;
  
  local_68 = (int)param_2 - (int)param_1;
  if (param_3 <= local_68 / 0x28) {
    piVar7 = param_1;
    do {
      piVar7 = piVar7 + param_3 * 10;
      if ((param_1 != piVar7) && (piVar6 = piVar7 + param_3 * -10 + 10, piVar6 != piVar7)) {
        piVar4 = piVar7 + param_3 * -10 + 8;
        do {
          iVar5 = piVar7[param_3 * -10 + 8];
          piVar2 = piVar6;
          piVar1 = local_50;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar1 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar1 = piVar1 + 1;
          }
          if (local_30 < iVar5) {
            piVar2 = piVar4 + 0xc;
            iVar5 = ((int)piVar6 - (int)param_1) / 0x28;
            if (0 < iVar5) {
              piVar1 = piVar4 + 2;
              do {
                piVar2 = piVar2 + -10;
                piVar1 = piVar1 + -10;
                iVar5 = iVar5 + -1;
                piVar8 = piVar1;
                piVar9 = piVar2;
                for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar9 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                }
              } while (iVar5 != 0);
            }
            piVar2 = local_50;
            piVar1 = param_1;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar1 = *piVar2;
              piVar2 = piVar2 + 1;
              piVar1 = piVar1 + 1;
            }
          }
          else {
            piVar2 = piVar6;
            piVar1 = local_28;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar1 = *piVar2;
              piVar2 = piVar2 + 1;
              piVar1 = piVar1 + 1;
            }
            iVar5 = *piVar4;
            piVar1 = piVar4 + -8;
            piVar2 = piVar6;
            while (piVar8 = piVar1, local_8 < iVar5) {
              piVar1 = piVar8;
              for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar2 = *piVar1;
                piVar1 = piVar1 + 1;
                piVar2 = piVar2 + 1;
              }
              piVar1 = piVar8 + -10;
              piVar2 = piVar8;
              iVar5 = piVar8[-2];
            }
            piVar1 = local_28;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar2 = *piVar1;
              piVar1 = piVar1 + 1;
              piVar2 = piVar2 + 1;
            }
          }
          piVar6 = piVar6 + 10;
          piVar4 = piVar4 + 10;
        } while (piVar6 != piVar7);
      }
      local_68 = local_68 + param_3 * -0x28;
      param_1 = param_1 + param_3 * 10;
    } while (param_3 <= local_68 / 0x28);
  }
  if ((param_1 != param_2) && (piVar7 = param_1 + 10, piVar7 != param_2)) {
    piVar6 = param_1 + 8;
    do {
      iVar5 = param_1[8];
      piVar4 = piVar7;
      piVar2 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar2 = piVar2 + 1;
      }
      if (local_8 < iVar5) {
        piVar4 = piVar6 + 0xc;
        iVar5 = ((int)piVar7 - (int)param_1) / 0x28;
        if (0 < iVar5) {
          piVar2 = piVar6 + 2;
          do {
            piVar4 = piVar4 + -10;
            piVar2 = piVar2 + -10;
            iVar5 = iVar5 + -1;
            piVar1 = piVar2;
            piVar8 = piVar4;
            for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar8 = *piVar1;
              piVar1 = piVar1 + 1;
              piVar8 = piVar8 + 1;
            }
          } while (iVar5 != 0);
        }
        piVar4 = local_28;
        piVar2 = param_1;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar2 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar2 = piVar2 + 1;
        }
      }
      else {
        piVar4 = piVar7;
        piVar2 = local_50;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar2 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar2 = piVar2 + 1;
        }
        iVar5 = *piVar6;
        piVar2 = piVar6 + -8;
        piVar4 = piVar7;
        while (piVar1 = piVar2, local_30 < iVar5) {
          piVar2 = piVar1;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar4 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar4 = piVar4 + 1;
          }
          piVar2 = piVar1 + -10;
          piVar4 = piVar1;
          iVar5 = piVar1[-2];
        }
        piVar2 = local_50;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      piVar7 = piVar7 + 10;
      piVar6 = piVar6 + 10;
    } while (piVar7 != param_2);
  }
  return;
}

