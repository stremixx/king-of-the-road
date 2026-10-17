
void FUN_0047d6c0(double *param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  
  pdVar7 = param_1;
  if (param_1 != param_2) {
    while (pdVar4 = pdVar7 + 1, pdVar4 != param_2) {
      uVar1 = *(undefined4 *)pdVar4;
      uVar2 = *(undefined4 *)((int)pdVar7 + 0xc);
      if (*pdVar4 <= *param_1) {
        uVar1 = *(undefined4 *)pdVar4;
        uVar2 = *(undefined4 *)((int)pdVar7 + 0xc);
        dVar3 = *pdVar4;
        pdVar7 = pdVar4;
        while (pdVar6 = pdVar7 + -1, *pdVar6 < dVar3) {
          *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
          *(undefined4 *)((int)pdVar7 + 4) = *(undefined4 *)((int)pdVar7 + -4);
          pdVar7 = pdVar6;
        }
        *(undefined4 *)pdVar7 = uVar1;
        *(undefined4 *)((int)pdVar7 + 4) = uVar2;
        pdVar7 = pdVar4;
      }
      else {
        pdVar7 = pdVar7 + 2;
        iVar5 = (int)pdVar4 - (int)param_1 >> 3;
        pdVar6 = pdVar4;
        if (0 < iVar5) {
          do {
            iVar5 = iVar5 + -1;
            *(undefined4 *)(pdVar7 + -1) = *(undefined4 *)(pdVar6 + -1);
            *(undefined4 *)((int)pdVar7 + -4) = *(undefined4 *)((int)pdVar6 + -4);
            pdVar6 = pdVar6 + -1;
            pdVar7 = pdVar7 + -1;
          } while (iVar5 != 0);
        }
        *(undefined4 *)param_1 = uVar1;
        *(undefined4 *)((int)param_1 + 4) = uVar2;
        pdVar7 = pdVar4;
      }
    }
  }
  return;
}

