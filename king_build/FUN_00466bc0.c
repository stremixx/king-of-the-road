
undefined4 * FUN_00466bc0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  param_2 = (param_2 - (int)param_1) / 0x18;
  if (0 < param_2) {
    piVar5 = param_3 + 2;
    piVar4 = param_1 + 2;
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      if (piVar4 != piVar5) {
        iVar2 = piVar4[1];
        iVar3 = *piVar4;
        iVar1 = *piVar5;
        uVar6 = iVar2 - iVar3;
        if ((uint)(piVar5[2] - iVar1) < uVar6) {
          iVar2 = FUN_00458d60(uVar6,iVar3,iVar2);
          iVar3 = piVar5[2] - *piVar5;
          if (iVar3 != 0) {
            FUN_0044b440(*piVar5,iVar3);
          }
          *piVar5 = iVar2;
          piVar5[2] = iVar2 + uVar6;
        }
        else if ((uint)(piVar5[1] - iVar1) < uVar6) {
          FUN_0061c980(iVar1,iVar3,piVar5[1] - iVar1);
          iVar2 = (piVar5[1] - *piVar5) + *piVar4;
          FUN_0061c980(piVar5[1],iVar2,piVar4[1] - iVar2);
        }
        else {
          FUN_0061c980(iVar1,iVar3,iVar2 - iVar3);
        }
        piVar5[1] = *piVar5 + uVar6;
      }
      param_1 = param_1 + 6;
      piVar4 = piVar4 + 6;
      param_3 = param_3 + 6;
      piVar5 = piVar5 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return param_3;
  }
  return param_3;
}

