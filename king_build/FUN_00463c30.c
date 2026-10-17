
void FUN_00463c30(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_c;
  
  local_c = (param_2 - param_1) / 0x38;
  if (0 < local_c) {
    piVar6 = param_3 + 1;
    piVar8 = (int *)(param_2 + 4);
    do {
      puVar1 = (undefined4 *)(param_2 + -0x38);
      param_2 = param_2 + -0x38;
      piVar9 = piVar8 + -0xe;
      param_3 = param_3 + -0xe;
      piVar7 = piVar6 + -0xe;
      *param_3 = *puVar1;
      if (piVar9 != piVar7) {
        iVar3 = piVar8[-0xd];
        iVar4 = *piVar9;
        iVar2 = *piVar7;
        uVar5 = iVar3 - iVar4;
        if ((uint)(piVar6[-0xc] - iVar2) < uVar5) {
          iVar3 = FUN_00458d60(uVar5,iVar4,iVar3);
          iVar4 = piVar6[-0xc] - *piVar7;
          if (iVar4 != 0) {
            FUN_0044b440(*piVar7,iVar4);
          }
          *piVar7 = iVar3;
          piVar6[-0xc] = iVar3 + uVar5;
        }
        else if ((uint)(piVar6[-0xd] - iVar2) < uVar5) {
          FUN_0061c980(iVar2,iVar4,piVar6[-0xd] - iVar2);
          iVar3 = (*piVar9 - *piVar7) + piVar6[-0xd];
          FUN_0061c980(piVar6[-0xd],iVar3,piVar8[-0xd] - iVar3);
        }
        else {
          FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
        }
        piVar6[-0xd] = *piVar7 + uVar5;
      }
      piVar6[-0xb] = piVar8[-0xb];
      piVar6[-10] = piVar8[-10];
      piVar6[-9] = piVar8[-9];
      piVar6[-8] = piVar8[-8];
      piVar6[-7] = piVar8[-7];
      piVar6[-5] = piVar8[-5];
      piVar6[-4] = piVar8[-4];
      piVar6[-3] = piVar8[-3];
      piVar6[-2] = piVar8[-2];
      local_c = local_c + -1;
      piVar6 = piVar7;
      piVar8 = piVar9;
    } while (local_c != 0);
  }
  return;
}

