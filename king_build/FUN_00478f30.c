
undefined4 * __thiscall FUN_00478f30(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int local_c;
  
  local_c = *(int *)(param_1 + 4) - param_3 >> 4;
  puVar6 = param_2;
  if (0 < local_c) {
    piVar7 = param_2 + 1;
    do {
      piVar1 = (int *)((int)piVar7 + (param_3 - (int)param_2));
      *puVar6 = *(undefined4 *)((int)piVar7 + (param_3 - (int)param_2) + -4);
      if (piVar1 != piVar7) {
        iVar4 = piVar1[1];
        iVar5 = *piVar1;
        iVar2 = *piVar7;
        uVar8 = iVar4 - iVar5;
        if ((uint)(piVar7[2] - iVar2) < uVar8) {
          iVar4 = FUN_00458d60(uVar8,iVar5,iVar4);
          iVar5 = piVar7[2] - *piVar7;
          if (iVar5 != 0) {
            FUN_0044b440(*piVar7,iVar5);
          }
          *piVar7 = iVar4;
          piVar7[2] = iVar4 + uVar8;
        }
        else if ((uint)(piVar7[1] - iVar2) < uVar8) {
          FUN_00407250(iVar5,iVar5 + (piVar7[1] - iVar2),iVar2);
          FUN_00407250((*piVar1 - *piVar7) + piVar7[1],piVar1[1],piVar7[1]);
        }
        else {
          FUN_00407250(iVar5,iVar4,iVar2);
        }
        piVar7[1] = *piVar7 + uVar8;
      }
      puVar6 = puVar6 + 4;
      piVar7 = piVar7 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  for (; puVar6 != puVar3; puVar6 = puVar6 + 4) {
    FUN_00602380();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (param_3 - (int)param_2 >> 4) * -0x10;
  return param_2;
}

