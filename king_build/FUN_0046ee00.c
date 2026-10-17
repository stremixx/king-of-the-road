
uint FUN_0046ee00(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  
  puVar14 = param_1;
  iVar3 = ((int)param_2 - (int)param_1) / 0xc;
  uVar6 = -((int)param_2 - (int)param_1 >> 0x1f);
  if (iVar3 < 0xf) {
    if ((param_1 != param_2) && (puVar14 = param_1 + 3, puVar14 != param_2)) {
      puVar12 = param_1 + 2;
      do {
        uVar6 = *puVar14;
        uVar7 = puVar14[1];
        uVar1 = puVar14[2];
        if (uVar1 < param_1[2]) {
          param_3 = ((int)puVar14 - (int)param_1) / 0xc;
          if (0 < param_3) {
            puVar8 = puVar12 + 1;
            puVar9 = puVar12 + 4;
            do {
              puVar9[-3] = puVar8[-3];
              puVar9[-2] = puVar8[-2];
              puVar9[-1] = puVar8[-1];
              param_3 = param_3 + -1;
              puVar8 = puVar8 + -3;
              puVar9 = puVar9 + -3;
            } while (param_3 != 0);
          }
          *param_1 = uVar6;
          param_1[1] = uVar7;
          param_1[2] = uVar1;
        }
        else {
          uVar1 = *puVar14;
          uVar7 = puVar14[1];
          uVar2 = puVar14[2];
          uVar6 = *puVar12;
          puVar9 = puVar12 + -2;
          puVar8 = puVar14;
          while (puVar5 = puVar9, uVar2 < uVar6) {
            *puVar8 = *puVar5;
            puVar8[1] = puVar5[1];
            puVar8[2] = puVar5[2];
            puVar9 = puVar5 + -3;
            puVar8 = puVar5;
            uVar6 = puVar5[-1];
          }
          *puVar8 = uVar1;
          puVar8[1] = uVar7;
          puVar8[2] = uVar2;
        }
        puVar14 = puVar14 + 3;
        puVar12 = puVar12 + 3;
      } while (puVar14 != param_2);
      return uVar7;
    }
  }
  else {
    puVar12 = param_1 + (iVar3 / 2) * 3;
    FUN_0046ee00(param_1,puVar12,param_3);
    FUN_0046ee00(puVar12,param_2,param_3);
    iVar3 = ((int)param_2 - (int)puVar12) / 0xc;
    uVar6 = ((int)puVar12 - (int)param_1) * 0x2aaaaaab;
    iVar4 = ((int)puVar12 - (int)param_1) / 0xc;
    if ((iVar4 != 0) && (iVar3 != 0)) {
      if (iVar4 + iVar3 == 2) {
        uVar6 = param_1[2];
        if (puVar12[2] < uVar6) {
          uVar6 = *param_1;
          uVar7 = param_1[1];
          uVar1 = param_1[2];
          *param_1 = *puVar12;
          param_1[1] = puVar12[1];
          param_1[2] = puVar12[2];
          *puVar12 = uVar6;
          puVar12[1] = uVar7;
          puVar12[2] = uVar1;
          return uVar6;
        }
      }
      else {
        if (iVar3 < iVar4) {
          iVar11 = iVar4 / 2;
          puVar8 = (uint *)FUN_00470800(puVar12,param_2,param_1 + iVar11 * 3,param_3,0);
          iVar13 = ((int)puVar8 - (int)puVar12) / 0xc;
          param_1 = param_1 + iVar11 * 3;
        }
        else {
          iVar13 = iVar3 / 2;
          puVar8 = puVar12 + iVar13 * 3;
          puVar9 = (uint *)FUN_00470860(param_1,puVar12,puVar8,param_3,0);
          iVar11 = ((int)puVar9 - (int)param_1) / 0xc;
          param_1 = puVar9;
        }
        uVar10 = FUN_0046fcd0(param_1,puVar12,puVar8);
        FUN_0046f5e0(puVar14,param_1,uVar10,iVar11,iVar13,param_3);
        uVar6 = FUN_0046f5e0(uVar10,puVar8,param_2,iVar4 - iVar11,iVar3 - iVar13,param_3);
      }
    }
  }
  return uVar6;
}

