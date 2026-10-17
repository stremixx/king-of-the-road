
void FUN_00467cc0(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  int *local_4;
  
  piVar3 = param_2;
  if (param_4 != 0) {
    while (param_5 != 0) {
      if (param_4 + param_5 == 2) {
        iVar5 = *param_1;
        if (*(int *)(iVar5 + 0x1c) <= *(int *)(*piVar3 + 0x1c)) {
          return;
        }
        *param_1 = *piVar3;
        *piVar3 = iVar5;
        return;
      }
      if (param_5 < param_4) {
        iVar5 = param_4 / 2;
        param_2 = param_1 + iVar5;
        local_14 = (int *)0x0;
        local_10 = iVar5;
        FUN_00467f10(piVar3,param_3,&local_14);
        piVar4 = piVar3;
        piVar2 = local_14;
        while (local_14 = piVar2, 0 < (int)local_14) {
          piVar2 = (int *)((int)local_14 >> 1);
          local_8 = piVar4;
          FUN_0046a450(&local_8,piVar2);
          if (*(int *)(*local_8 + 0x1c) < *(int *)(*param_2 + 0x1c)) {
            piVar4 = local_8 + 1;
            piVar2 = (int *)((int)local_14 + (-1 - (int)piVar2));
          }
        }
        local_c = (int)piVar4 - (int)piVar3 >> 2;
        local_14 = piVar4;
      }
      else {
        local_c = param_5 / 2;
        local_14 = piVar3 + local_c;
        iVar5 = (int)piVar3 - (int)param_1 >> 2;
        piVar4 = param_1;
        while (iVar1 = iVar5, param_2 = piVar4, 0 < iVar1) {
          iVar5 = iVar1 >> 1;
          FUN_0046a450(&param_2,iVar5);
          if (*(int *)(*param_2 + 0x1c) <= *(int *)(*local_14 + 0x1c)) {
            piVar4 = param_2 + 1;
            iVar5 = iVar1 + (-1 - iVar5);
          }
        }
        iVar5 = (int)piVar4 - (int)param_1 >> 2;
        local_10 = iVar5;
      }
      piVar4 = param_2;
      piVar2 = local_14;
      local_4 = local_14;
      if ((param_2 != piVar3) && (piVar2 = param_2, piVar6 = piVar3, local_14 != piVar3)) {
        for (; (piVar2 != piVar6 && (piVar6 = piVar6 + -1, piVar2 != piVar6)); piVar2 = piVar2 + 1)
        {
          FUN_0046ce20(piVar2,piVar6);
        }
        FUN_0046ce40(piVar3,local_14,param_1);
        do {
          if (piVar3 == local_4) {
            piVar2 = local_4;
            if (piVar4 != piVar3) {
              FUN_0046ce40(piVar4,piVar3,param_1);
              piVar2 = piVar4;
              iVar5 = local_10;
              goto LAB_00467ea6;
            }
            break;
          }
          piVar2 = local_4 + -1;
          piVar6 = piVar4 + 1;
          local_4 = piVar2;
          FUN_0046ce20(piVar4,piVar2);
          piVar4 = piVar6;
        } while (piVar6 != piVar3);
        FUN_0046ce40(piVar3,piVar2,param_1);
        iVar5 = local_10;
      }
LAB_00467ea6:
      FUN_00467cc0(param_1,param_2,piVar2,iVar5,local_c,param_6);
      param_5 = param_5 - local_c;
      param_4 = param_4 - iVar5;
      piVar3 = local_14;
      param_1 = piVar2;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}

