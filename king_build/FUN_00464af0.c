
void FUN_00464af0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = (int)param_2 - (int)param_1 & 0xfffffffc;
  iVar5 = (int)param_2 - (int)param_1 >> 2;
  piVar1 = param_2;
  if (7 < (int)uVar2) {
    iVar7 = (iVar5 + -2) / 2;
    piVar6 = param_1 + iVar7;
    for (; FUN_0046b890(param_1,iVar7,iVar5,*piVar6,param_4), iVar7 != 0; iVar7 = iVar7 + -1) {
      piVar6 = piVar6 + -1;
    }
  }
  do {
    if (param_3 <= piVar1) {
      while (4 < (int)uVar2) {
        iVar8 = param_2[-1];
        piVar1 = param_2 + -1;
        *piVar1 = *param_1;
        iVar4 = (int)param_2 + (-4 - (int)param_1) >> 2;
        iVar7 = 2;
        iVar5 = 0;
        iVar3 = iVar5;
        if (2 < iVar4) {
          do {
            iVar5 = iVar7;
            if (*(int *)(param_1[iVar7] + 0x18) < *(int *)(param_1[iVar7 + -1] + 0x18)) {
              iVar5 = iVar7 + -1;
            }
            param_1[iVar3] = param_1[iVar5];
            iVar7 = iVar5 * 2 + 2;
            iVar3 = iVar5;
          } while (iVar7 < iVar4);
        }
        if (iVar7 == iVar4) {
          param_1[iVar5] = param_1[iVar7 + -1];
          iVar5 = iVar7 + -1;
        }
        FUN_0046cdc0(param_1,iVar5,0,iVar8,param_4);
        param_2 = piVar1;
        uVar2 = (int)piVar1 - (int)param_1 & 0xfffffffc;
      }
      return;
    }
    iVar7 = *piVar1;
    if (*(int *)(iVar7 + 0x18) < *(int *)(*param_1 + 0x18)) {
      *piVar1 = *param_1;
      iVar3 = 2;
      iVar8 = 0;
      iVar4 = iVar8;
      if (2 < iVar5) {
        do {
          iVar8 = iVar3;
          if (*(int *)(param_1[iVar3] + 0x18) < *(int *)(param_1[iVar3 + -1] + 0x18)) {
            iVar8 = iVar3 + -1;
          }
          param_1[iVar4] = param_1[iVar8];
          iVar3 = iVar8 * 2 + 2;
          iVar4 = iVar8;
        } while (iVar3 < iVar5);
      }
      if (iVar3 == iVar5) {
        param_1[iVar8] = param_1[iVar3 + -1];
        iVar8 = iVar3 + -1;
      }
      while (0 < iVar8) {
        iVar3 = (iVar8 + -1) / 2;
        if (*(int *)(iVar7 + 0x18) <= *(int *)(param_1[iVar3] + 0x18)) break;
        param_1[iVar8] = param_1[iVar3];
        iVar8 = iVar3;
      }
      param_1[iVar8] = iVar7;
    }
    piVar1 = piVar1 + 1;
  } while( true );
}

