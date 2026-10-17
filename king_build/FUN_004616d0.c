
int * FUN_004616d0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_c;
  
  local_c = (param_2 - (int)param_1) / 0x68;
  if (0 < local_c) {
    piVar7 = param_1 + 0x17;
    piVar6 = param_3 + 0x17;
    do {
      iVar3 = *param_3;
      if ((iVar3 != 0) && ((piVar6[-0x15] & 0x10000U) == 0)) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        piVar1 = (int *)*param_3;
        if (((piVar1[1] == 0) &&
            (((piVar1 != (int *)*param_1 || (piVar6[-0x15] != piVar7[-0x15])) ||
             (piVar6[-0x16] != piVar7[-0x16])))) && (piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0xc))(1);
        }
      }
      if ((piVar7[-0x15] & 0x10000U) == 0) {
        piVar6[-0x16] = 0;
        if (*param_1 == 0) {
          *param_3 = 0;
          piVar6[-0x15] = 0;
        }
        else {
          *param_3 = *param_1;
          piVar6[-0x15] = piVar7[-0x15];
          *(int *)(*param_3 + 4) = *(int *)(*param_3 + 4) + 1;
        }
      }
      else {
        piVar6[-0x15] = piVar7[-0x15];
        *param_3 = *param_1;
        piVar6[-0x16] = piVar7[-0x16];
      }
      piVar6[-0x13] = piVar7[-0x13];
      piVar6[-0x12] = piVar7[-0x12];
      piVar6[-0x11] = piVar7[-0x11];
      piVar6[-0x10] = piVar7[-0x10];
      piVar6[-0xf] = piVar7[-0xf];
      piVar6[-0xe] = piVar7[-0xe];
      piVar6[-0xd] = piVar7[-0xd];
      piVar6[-0xc] = piVar7[-0xc];
      piVar6[-0xb] = piVar7[-0xb];
      piVar6[-9] = piVar7[-9];
      piVar6[-8] = piVar7[-8];
      piVar6[-7] = piVar7[-7];
      piVar6[-6] = piVar7[-6];
      piVar6[-5] = piVar7[-5];
      piVar6[-3] = piVar7[-3];
      piVar6[-2] = piVar7[-2];
      if (piVar7 + -1 != piVar6 + -1) {
        iVar3 = *piVar7;
        iVar4 = piVar7[-1];
        iVar2 = piVar6[-1];
        uVar5 = iVar3 - iVar4;
        if ((uint)(piVar6[1] - iVar2) < uVar5) {
          iVar3 = FUN_00458d60(uVar5,iVar4,iVar3);
          iVar4 = piVar6[1] - piVar6[-1];
          if (iVar4 != 0) {
            FUN_0044b440(piVar6[-1],iVar4);
          }
          piVar6[-1] = iVar3;
          piVar6[1] = iVar3 + uVar5;
        }
        else if ((uint)(*piVar6 - iVar2) < uVar5) {
          FUN_0061c980(piVar6[-1],iVar4,*piVar6 - iVar2);
          iVar3 = (*piVar6 - piVar6[-1]) + piVar7[-1];
          FUN_0061c980(*piVar6,iVar3,*piVar7 - iVar3);
        }
        else {
          FUN_0061c980(iVar2,iVar4,iVar3 - iVar4);
        }
        *piVar6 = piVar6[-1] + uVar5;
      }
      param_1 = param_1 + 0x1a;
      piVar7 = piVar7 + 0x1a;
      param_3 = param_3 + 0x1a;
      piVar6 = piVar6 + 0x1a;
      local_c = local_c + -1;
    } while (local_c != 0);
    return param_3;
  }
  return param_3;
}

