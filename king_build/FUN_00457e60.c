
int * FUN_00457e60(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  param_2 = (param_2 - param_1) / 0x38;
  if (0 < param_2) {
    iVar3 = (int)param_3 - param_1;
    piVar8 = param_3 + 2;
    piVar7 = (int *)(param_1 + 4);
    do {
      piVar1 = (int *)(iVar3 + (int)piVar7);
      *param_3 = piVar7[-1];
      if (piVar7 != piVar1) {
        iVar4 = piVar7[1];
        iVar5 = *piVar7;
        iVar2 = *piVar1;
        uVar6 = iVar4 - iVar5;
        if ((uint)(piVar8[1] - iVar2) < uVar6) {
          iVar4 = FUN_00458d60(uVar6,iVar5,iVar4);
          iVar5 = piVar8[1] - *piVar1;
          if (iVar5 != 0) {
            FUN_0044b440(*piVar1,iVar5);
          }
          *piVar1 = iVar4;
          piVar8[1] = iVar4 + uVar6;
        }
        else if ((uint)(*piVar8 - iVar2) < uVar6) {
          FUN_0061c980(*piVar1,iVar5,*piVar8 - iVar2);
          iVar4 = (*piVar7 - *piVar1) + *piVar8;
          FUN_0061c980(*piVar8,iVar4,piVar7[1] - iVar4);
        }
        else {
          FUN_0061c980(iVar2,iVar5,iVar4 - iVar5);
        }
        *piVar8 = *piVar1 + uVar6;
      }
      param_3 = param_3 + 0xe;
      piVar8[2] = piVar7[3];
      piVar8[3] = piVar7[4];
      piVar8[4] = piVar7[5];
      piVar8[5] = piVar7[6];
      piVar8[6] = piVar7[7];
      piVar8[8] = piVar7[9];
      piVar8[9] = piVar7[10];
      piVar8[10] = piVar7[0xb];
      piVar8[0xb] = piVar7[0xc];
      piVar8 = piVar8 + 0xe;
      piVar7 = piVar7 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return param_3;
  }
  return param_3;
}

