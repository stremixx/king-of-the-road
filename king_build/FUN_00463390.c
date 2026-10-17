
undefined4 * FUN_00463390(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  param_1 = (param_2 - param_1) / 0x18;
  if (0 < param_1) {
    piVar5 = (int *)(param_2 + 8);
    piVar7 = param_3 + 2;
    do {
      puVar2 = param_3 + -6;
      piVar6 = piVar5 + -6;
      piVar8 = piVar7 + -6;
      *puVar2 = *(undefined4 *)(param_2 + -0x18);
      param_3[-5] = *(undefined4 *)(param_2 + -0x14);
      if (piVar6 != piVar8) {
        iVar3 = piVar5[-5];
        iVar4 = *piVar6;
        iVar1 = *piVar8;
        uVar9 = iVar3 - iVar4;
        if ((uint)(piVar7[-4] - iVar1) < uVar9) {
          iVar3 = FUN_00458d60(uVar9,iVar4,iVar3);
          iVar4 = piVar7[-4] - *piVar8;
          if (iVar4 != 0) {
            FUN_0044b440(*piVar8,iVar4);
          }
          *piVar8 = iVar3;
          piVar7[-4] = iVar3 + uVar9;
        }
        else if ((uint)(piVar7[-5] - iVar1) < uVar9) {
          FUN_0061c980(iVar1,iVar4,piVar7[-5] - iVar1);
          iVar3 = (piVar7[-5] - *piVar8) + *piVar6;
          FUN_0061c980(piVar7[-5],iVar3,piVar5[-5] - iVar3);
        }
        else {
          FUN_0061c980(iVar1,iVar4,iVar3 - iVar4);
        }
        piVar7[-5] = *piVar8 + uVar9;
      }
      param_1 = param_1 + -1;
      param_3 = puVar2;
      param_2 = param_2 + -0x18;
      piVar5 = piVar6;
      piVar7 = piVar8;
    } while (param_1 != 0);
    return puVar2;
  }
  return param_3;
}

