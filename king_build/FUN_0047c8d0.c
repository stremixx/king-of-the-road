
undefined4 * FUN_0047c8d0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  param_1 = param_2 - param_1 >> 4;
  if (0 < param_1) {
    piVar5 = (int *)(param_2 + 4);
    piVar7 = param_3 + 1;
    do {
      puVar1 = (undefined4 *)(param_2 + -0x10);
      param_2 = param_2 + -0x10;
      piVar6 = piVar5 + -4;
      param_3 = param_3 + -4;
      piVar8 = piVar7 + -4;
      *param_3 = *puVar1;
      if (piVar6 != piVar8) {
        iVar3 = piVar5[-3];
        iVar4 = *piVar6;
        iVar2 = *piVar8;
        uVar9 = iVar3 - iVar4;
        if ((uint)(piVar7[-2] - iVar2) < uVar9) {
          iVar3 = FUN_00458d60(uVar9,iVar4,iVar3);
          iVar4 = piVar7[-2] - *piVar8;
          if (iVar4 != 0) {
            FUN_0044b440(*piVar8,iVar4);
          }
          *piVar8 = iVar3;
          piVar7[-2] = iVar3 + uVar9;
        }
        else if ((uint)(piVar7[-3] - iVar2) < uVar9) {
          FUN_0061c980(iVar2,iVar4,piVar7[-3] - iVar2);
          iVar3 = (piVar7[-3] - *piVar8) + *piVar6;
          FUN_0061c980(piVar7[-3],iVar3,piVar5[-3] - iVar3);
        }
        else {
          FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
        }
        piVar7[-3] = *piVar8 + uVar9;
      }
      param_1 = param_1 + -1;
      piVar5 = piVar6;
      piVar7 = piVar8;
    } while (param_1 != 0);
    return param_3;
  }
  return param_3;
}

