
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f920(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *extraout_ECX;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *local_10;
  int *local_c [2];
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
      piVar5 = param_1 + 2;
      do {
        local_c[0] = (int *)*piVar3;
        iVar2 = *param_1;
        if (*(double *)(local_c[0] + 0x7e) - *(double *)(iVar2 + 0x1f8) == _DAT_0064a668) {
          uVar6 = param_3;
          local_10 = piVar5;
          FUN_0041d3f0(local_c);
          FUN_0046ac50(piVar3,iVar2,uVar6);
        }
        else {
          iVar2 = (int)piVar3 - (int)param_1 >> 2;
          if (0 < iVar2) {
            piVar4 = piVar5;
            do {
              piVar1 = (int *)((int)piVar3 + (-4 - (int)piVar5) + (int)piVar4);
              piVar4 = piVar4 + -1;
              iVar2 = iVar2 + -1;
              *piVar4 = *piVar1;
            } while (iVar2 != 0);
          }
          *param_1 = (int)local_c[0];
        }
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (piVar3 != param_2);
    }
  }
  else {
    local_c[0] = param_1 + 0x10;
    if ((param_1 != local_c[0]) && (piVar3 = param_1 + 1, piVar3 != local_c[0])) {
      piVar5 = param_1 + 2;
      do {
        local_10 = (int *)*piVar3;
        if (*(double *)(local_10 + 0x7e) - *(double *)(*param_1 + 0x1f8) == _DAT_0064a668) {
          uVar6 = param_3;
          uVar7 = param_3;
          FUN_0041d3f0(&local_10);
          FUN_0046ac50(piVar3,uVar6,uVar7);
        }
        else {
          FUN_00468c90(param_1,piVar3,piVar5,local_c[0],0);
          *param_1 = (int)local_10;
        }
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (piVar3 != local_c[0]);
    }
    piVar3 = param_2;
    piVar5 = local_c[0];
    if (local_c[0] != param_2) {
      do {
        uVar6 = param_3;
        FUN_0041d3f0(piVar5);
        FUN_0046ac50(piVar5,piVar3,uVar6);
        piVar5 = piVar5 + 1;
        piVar3 = extraout_ECX;
      } while (piVar5 != param_2);
      return;
    }
  }
  return;
}

