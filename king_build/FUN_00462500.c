
int * FUN_00462500(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_c;
  
  local_c = ((int)param_2 - param_1) / 0x68;
  if (0 < local_c) {
    piVar6 = param_3 + 0x17;
    piVar8 = param_2 + 0x17;
    do {
      iVar3 = param_3[-0x1a];
      param_3 = param_3 + -0x1a;
      param_2 = param_2 + -0x1a;
      piVar9 = piVar8 + -0x1a;
      piVar7 = piVar6 + -0x1a;
      if ((iVar3 != 0) && ((piVar6[-0x2f] & 0x10000U) == 0)) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        piVar1 = (int *)*param_3;
        if (((piVar1[1] == 0) &&
            (((piVar1 != (int *)*param_2 || (piVar6[-0x2f] != piVar8[-0x2f])) ||
             (piVar6[-0x30] != piVar8[-0x30])))) && (piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
      }
      if ((piVar8[-0x2f] & 0x10000U) == 0) {
        piVar6[-0x30] = 0;
        if (*param_2 == 0) {
          *param_3 = 0;
          piVar6[-0x2f] = 0;
        }
        else {
          *param_3 = *param_2;
          piVar6[-0x2f] = piVar8[-0x2f];
          *(int *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 1;
        }
      }
      else {
        piVar6[-0x2f] = piVar8[-0x2f];
        *param_3 = *param_2;
        piVar6[-0x30] = piVar8[-0x30];
      }
      piVar6[-0x2d] = piVar8[-0x2d];
      piVar6[-0x2c] = piVar8[-0x2c];
      piVar6[-0x2b] = piVar8[-0x2b];
      piVar6[-0x2a] = piVar8[-0x2a];
      piVar6[-0x29] = piVar8[-0x29];
      piVar6[-0x28] = piVar8[-0x28];
      piVar6[-0x27] = piVar8[-0x27];
      piVar6[-0x26] = piVar8[-0x26];
      piVar6[-0x25] = piVar8[-0x25];
      piVar6[-0x23] = piVar8[-0x23];
      piVar6[-0x22] = piVar8[-0x22];
      piVar6[-0x21] = piVar8[-0x21];
      piVar6[-0x20] = piVar8[-0x20];
      piVar6[-0x1f] = piVar8[-0x1f];
      piVar6[-0x1d] = piVar8[-0x1d];
      piVar6[-0x1c] = piVar8[-0x1c];
      if (piVar8 + -0x1b != piVar6 + -0x1b) {
        iVar3 = *piVar9;
        iVar4 = piVar8[-0x1b];
        iVar2 = piVar6[-0x1b];
        uVar5 = iVar3 - iVar4;
        if ((uint)(piVar6[-0x19] - iVar2) < uVar5) {
          iVar3 = FUN_00458d60(uVar5,iVar4,iVar3);
          iVar4 = piVar6[-0x19] - piVar6[-0x1b];
          if (iVar4 != 0) {
            FUN_0044b440(piVar6[-0x1b],iVar4);
          }
          piVar6[-0x1b] = iVar3;
          piVar6[-0x19] = iVar3 + uVar5;
        }
        else if ((uint)(*piVar7 - iVar2) < uVar5) {
          FUN_0061c980(iVar2,iVar4,*piVar7 - iVar2);
          iVar3 = (*piVar7 - piVar6[-0x1b]) + piVar8[-0x1b];
          FUN_0061c980(*piVar7,iVar3,*piVar9 - iVar3);
        }
        else {
          FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
        }
        *piVar7 = piVar6[-0x1b] + uVar5;
      }
      local_c = local_c + -1;
      piVar6 = piVar7;
      piVar8 = piVar9;
    } while (local_c != 0);
    return param_3;
  }
  return param_3;
}

