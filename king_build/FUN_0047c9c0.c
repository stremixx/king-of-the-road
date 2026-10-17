
void FUN_0047c9c0(double *param_1,double *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar3 = (int)param_2 - (int)param_1;
  if ((int)(uVar3 & 0xfffffff8) < 0x78) {
    if ((param_1 != param_2) && (pdVar8 = param_1 + 1, pdVar8 != param_2)) {
      do {
        uVar7 = *(undefined4 *)((int)pdVar8 + 4);
        uVar1 = *(undefined4 *)pdVar8;
        if (*pdVar8 <= *param_1) {
          uVar7 = *(undefined4 *)((int)pdVar8 + 4);
          uVar1 = *(undefined4 *)pdVar8;
          dVar2 = *pdVar8;
          pdVar6 = pdVar8;
          while (pdVar5 = pdVar6 + -1, *pdVar5 < dVar2) {
            *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
            *(undefined4 *)((int)pdVar6 + 4) = *(undefined4 *)((int)pdVar6 + -4);
            pdVar6 = pdVar5;
          }
          *(undefined4 *)pdVar6 = uVar1;
          *(undefined4 *)((int)pdVar6 + 4) = uVar7;
        }
        else {
          pdVar6 = pdVar8 + 1;
          iVar4 = (int)pdVar8 - (int)param_1 >> 3;
          pdVar5 = pdVar8;
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              *(undefined4 *)(pdVar6 + -1) = *(undefined4 *)(pdVar5 + -1);
              *(undefined4 *)((int)pdVar6 + -4) = *(undefined4 *)((int)pdVar5 + -4);
              pdVar5 = pdVar5 + -1;
              pdVar6 = pdVar6 + -1;
            } while (iVar4 != 0);
          }
          *(undefined4 *)param_1 = uVar1;
          *(undefined4 *)((int)param_1 + 4) = uVar7;
        }
        pdVar8 = pdVar8 + 1;
      } while (pdVar8 != param_2);
      return;
    }
  }
  else {
    pdVar8 = param_1 + (((int)uVar3 >> 3) - ((int)uVar3 >> 0x1f) >> 1);
    FUN_0047c9c0(param_1,pdVar8,param_3);
    FUN_0047c9c0(pdVar8,param_2,param_3);
    iVar4 = (int)param_2 - (int)pdVar8 >> 3;
    iVar9 = (int)pdVar8 - (int)param_1 >> 3;
    if ((iVar9 != 0) && (iVar4 != 0)) {
      if (iVar9 + iVar4 == 2) {
        if (*param_1 < *pdVar8) {
          uVar7 = *(undefined4 *)param_1;
          uVar1 = *(undefined4 *)((int)param_1 + 4);
          *(undefined4 *)param_1 = *(undefined4 *)pdVar8;
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)pdVar8 + 4);
          *(undefined4 *)pdVar8 = uVar7;
          *(undefined4 *)((int)pdVar8 + 4) = uVar1;
          return;
        }
      }
      else {
        if (iVar4 < iVar9) {
          iVar10 = iVar9 - ((int)pdVar8 - (int)param_1 >> 0x1f) >> 1;
          pdVar6 = param_1 + iVar10;
          pdVar5 = (double *)FUN_0047f890(pdVar8,param_2,pdVar6,param_3,0);
          iVar11 = (int)pdVar5 - (int)pdVar8 >> 3;
        }
        else {
          iVar11 = iVar4 - ((int)param_2 - (int)pdVar8 >> 0x1f) >> 1;
          pdVar5 = pdVar8 + iVar11;
          pdVar6 = (double *)FUN_0047f8e0(param_1,pdVar8,pdVar5,param_3,0);
          iVar10 = (int)pdVar6 - (int)param_1 >> 3;
        }
        uVar7 = FUN_0047e5f0(pdVar6,pdVar8,pdVar5);
        FUN_0047d780(param_1,pdVar6,uVar7,iVar10,iVar11,param_3);
        FUN_0047d780(uVar7,pdVar5,param_2,iVar9 - iVar10,iVar4 - iVar11,param_3);
      }
    }
  }
  return;
}

