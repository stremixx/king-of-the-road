
void FUN_0047d780(double *param_1,double *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double *local_24;
  double *local_20;
  int local_1c;
  double *local_18;
  double *local_14;
  int local_10;
  double *local_c;
  
  if (param_4 != 0) {
    while (param_5 != 0) {
      if (param_4 + param_5 == 2) {
        if (*param_2 <= *param_1) {
          return;
        }
        uVar1 = *(undefined4 *)param_1;
        uVar2 = *(undefined4 *)((int)param_1 + 4);
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
        *(undefined4 *)param_2 = uVar1;
        *(undefined4 *)((int)param_2 + 4) = uVar2;
        return;
      }
      if (param_5 < param_4) {
        local_10 = param_4 / 2;
        local_20 = (double *)0x0;
        local_24 = param_1 + local_10;
        FUN_0047da00(param_2,param_3,&local_20);
        pdVar6 = param_2;
        pdVar4 = local_20;
        while (local_20 = pdVar4, 0 < (int)local_20) {
          pdVar4 = (double *)((int)local_20 >> 1);
          local_18 = pdVar6;
          FUN_0047e5d0(&local_18,pdVar4);
          if (*local_24 < *local_18) {
            pdVar6 = local_18 + 1;
            pdVar4 = (double *)((int)local_20 + (-1 - (int)pdVar4));
          }
        }
        local_1c = (int)pdVar6 - (int)param_2 >> 3;
        local_20 = pdVar6;
      }
      else {
        local_1c = param_5 / 2;
        local_20 = param_2 + local_1c;
        iVar7 = (int)param_2 - (int)param_1 >> 3;
        local_24 = param_1;
        while (iVar3 = iVar7, 0 < iVar3) {
          iVar7 = iVar3 >> 1;
          local_14 = local_24;
          FUN_0047e5d0(&local_14,iVar7);
          if (*local_20 <= *local_14) {
            local_24 = local_14 + 1;
            iVar7 = iVar3 + (-1 - iVar7);
          }
        }
        local_10 = (int)local_24 - (int)param_1 >> 3;
      }
      pdVar6 = local_20;
      local_14 = local_20;
      if ((local_24 != param_2) &&
         (pdVar4 = param_2, pdVar6 = local_24, pdVar5 = local_24, local_20 != param_2)) {
        for (; (pdVar5 != pdVar4 && (local_c = pdVar4 + -1, pdVar5 != local_c)); pdVar5 = pdVar5 + 1
            ) {
          FUN_0047fa30(pdVar5,local_c);
          pdVar4 = local_c;
        }
        FUN_0047f9f0(param_2,local_20,local_c);
        do {
          pdVar4 = local_14;
          if (param_2 == local_14) {
            if (pdVar6 == param_2) {
              FUN_0047f9f0(param_2,local_14,local_c);
              pdVar6 = pdVar4;
            }
            else {
              FUN_0047f9f0(pdVar6,param_2,local_c);
            }
            goto LAB_0047d987;
          }
          pdVar4 = local_14 + -1;
          pdVar5 = pdVar6 + 1;
          local_14 = pdVar4;
          FUN_0047fa30(pdVar6,pdVar4);
          pdVar6 = pdVar5;
        } while (pdVar5 != param_2);
        FUN_0047f9f0(param_2,pdVar4,local_c);
        pdVar6 = pdVar4;
      }
LAB_0047d987:
      iVar7 = local_10;
      FUN_0047d780(param_1,local_24,pdVar6,local_10,local_1c,param_6);
      param_5 = param_5 - local_1c;
      param_4 = param_4 - iVar7;
      param_2 = local_20;
      param_1 = pdVar6;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}

