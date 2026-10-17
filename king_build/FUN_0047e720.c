
void FUN_0047e720(double *param_1,double *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  int local_24;
  
  local_24 = (int)param_2 - (int)param_1;
  if (param_3 <= local_24 >> 3) {
    pdVar8 = param_1;
    do {
      pdVar8 = pdVar8 + param_3;
      if (param_1 != pdVar8) {
        for (pdVar5 = pdVar8 + (1 - param_3); pdVar5 != pdVar8; pdVar5 = pdVar5 + 1) {
          uVar1 = *(undefined4 *)pdVar5;
          uVar2 = *(undefined4 *)((int)pdVar5 + 4);
          if (*pdVar5 <= *param_1) {
            uVar1 = *(undefined4 *)((int)pdVar5 + 4);
            uVar2 = *(undefined4 *)pdVar5;
            dVar3 = *pdVar5;
            pdVar7 = pdVar5;
            while (pdVar6 = pdVar7 + -1, *pdVar6 < dVar3) {
              *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
              *(undefined4 *)((int)pdVar7 + 4) = *(undefined4 *)((int)pdVar7 + -4);
              pdVar7 = pdVar6;
            }
            *(undefined4 *)pdVar7 = uVar2;
            *(undefined4 *)((int)pdVar7 + 4) = uVar1;
          }
          else {
            pdVar7 = pdVar5 + 1;
            iVar4 = (int)pdVar5 - (int)param_1 >> 3;
            pdVar6 = pdVar5;
            if (0 < iVar4) {
              do {
                iVar4 = iVar4 + -1;
                *(undefined4 *)(pdVar7 + -1) = *(undefined4 *)(pdVar6 + -1);
                *(undefined4 *)((int)pdVar7 + -4) = *(undefined4 *)((int)pdVar6 + -4);
                pdVar6 = pdVar6 + -1;
                pdVar7 = pdVar7 + -1;
              } while (iVar4 != 0);
            }
            *(undefined4 *)param_1 = uVar1;
            *(undefined4 *)((int)param_1 + 4) = uVar2;
          }
        }
      }
      param_1 = param_1 + param_3;
      local_24 = local_24 + param_3 * -8;
    } while (param_3 <= local_24 >> 3);
  }
  pdVar8 = param_1;
  if (param_1 != param_2) {
    while (pdVar5 = pdVar8 + 1, pdVar5 != param_2) {
      uVar1 = *(undefined4 *)pdVar5;
      uVar2 = *(undefined4 *)((int)pdVar8 + 0xc);
      if (*pdVar5 <= *param_1) {
        uVar1 = *(undefined4 *)pdVar5;
        uVar2 = *(undefined4 *)((int)pdVar8 + 0xc);
        dVar3 = *pdVar5;
        pdVar8 = pdVar5;
        while (pdVar7 = pdVar8 + -1, *pdVar7 < dVar3) {
          *(undefined4 *)pdVar8 = *(undefined4 *)pdVar7;
          *(undefined4 *)((int)pdVar8 + 4) = *(undefined4 *)((int)pdVar8 + -4);
          pdVar8 = pdVar7;
        }
        *(undefined4 *)pdVar8 = uVar1;
        *(undefined4 *)((int)pdVar8 + 4) = uVar2;
        pdVar8 = pdVar5;
      }
      else {
        pdVar8 = pdVar8 + 2;
        iVar4 = (int)pdVar5 - (int)param_1 >> 3;
        pdVar7 = pdVar5;
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            *(undefined4 *)(pdVar8 + -1) = *(undefined4 *)(pdVar7 + -1);
            *(undefined4 *)((int)pdVar8 + -4) = *(undefined4 *)((int)pdVar7 + -4);
            pdVar7 = pdVar7 + -1;
            pdVar8 = pdVar8 + -1;
          } while (iVar4 != 0);
        }
        *(undefined4 *)param_1 = uVar1;
        *(undefined4 *)((int)param_1 + 4) = uVar2;
        pdVar8 = pdVar5;
      }
    }
  }
  return;
}

