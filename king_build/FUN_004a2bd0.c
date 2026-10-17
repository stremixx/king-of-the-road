
void __thiscall FUN_004a2bd0(int *param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_4;
  
  iVar2 = param_1[9];
  piVar5 = (int *)param_1[5];
  iVar6 = iVar2 - (int)piVar5 >> 2;
  iVar7 = iVar6 + 1;
  iVar3 = iVar7 + param_2;
  uVar1 = param_1[1];
  if ((uint)(iVar3 * 2) < uVar1) {
    piVar8 = (int *)(*param_1 + ((uVar1 - iVar3 >> 1) + (-(uint)(param_3 != '\0') & param_2)) * 4);
    if (piVar8 < piVar5) {
      iVar2 = (iVar2 - (int)piVar5) + 4 >> 2;
      piVar4 = piVar8;
      if (0 < iVar2) {
        do {
          iVar3 = *piVar5;
          piVar5 = piVar5 + 1;
          *piVar4 = iVar3;
          piVar4 = piVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar2 = iVar2 + 4;
      piVar4 = piVar8 + iVar7;
      iVar3 = iVar2 - (int)piVar5 >> 2;
      if (0 < iVar3) {
        do {
          piVar5 = (int *)(iVar2 + -4);
          iVar2 = iVar2 + -4;
          piVar4 = piVar4 + -1;
          iVar3 = iVar3 + -1;
          *piVar4 = *piVar5;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    piVar5 = param_1;
    if ((uint)param_1[1] < param_2) {
      piVar5 = (int *)register0x00000010;
    }
    iVar2 = uVar1 + 2 + piVar5[1];
    if (iVar2 == 0) {
      local_4 = 0;
    }
    else {
      local_4 = FUN_0044b6e0(iVar2 * 4);
    }
    piVar8 = (int *)(local_4 +
                    (((uint)(iVar2 - iVar3) >> 1) + (-(uint)(param_3 != '\0') & param_2)) * 4);
    piVar5 = (int *)param_1[5];
    _param_3 = (param_1[9] - (int)piVar5) + 4 >> 2;
    piVar4 = piVar8;
    if (0 < _param_3) {
      do {
        iVar3 = *piVar5;
        piVar5 = piVar5 + 1;
        *piVar4 = iVar3;
        _param_3 = _param_3 + -1;
        piVar4 = piVar4 + 1;
      } while (_param_3 != 0);
    }
    if (param_1[1] != 0) {
      FUN_0044b440(*param_1,param_1[1] * 4);
    }
    param_1[1] = iVar2;
    *param_1 = local_4;
  }
  param_1[5] = (int)piVar8;
  iVar2 = *piVar8;
  param_1[3] = iVar2;
  param_1[4] = iVar2 + 0x200;
  param_1[9] = (int)(piVar8 + iVar6);
  iVar2 = piVar8[iVar6];
  param_1[7] = iVar2;
  param_1[8] = iVar2 + 0x200;
  return;
}

