
void FUN_0048b050(ushort *param_1,int param_2,ushort *param_3,int param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  if (param_3 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar8 = (uint)*param_1;
  uVar11 = (uint)*param_3;
  if ((param_2 == 0) || (uVar8 == 0)) {
    uVar1 = param_1[2];
  }
  else {
    uVar1 = (ushort)(param_1[2] == 0);
  }
  if ((param_4 == 0) || (uVar11 == 0)) {
    uVar2 = param_3[2];
  }
  else {
    uVar2 = (ushort)(param_3[2] == 0);
  }
  bVar13 = param_1 == param_5;
  bVar14 = param_3 == param_5;
  if (uVar11 == 0) {
    puVar3 = (ushort *)FUN_0048aab0(param_5,param_1 + 3,uVar8,(int)(short)uVar1,uVar8);
  }
  else if (uVar8 == 0) {
    puVar3 = (ushort *)FUN_0048aab0(param_5,param_3 + 3,uVar11,(int)(short)uVar2,uVar11);
  }
  else if ((int)(short)uVar1 == (int)(short)uVar2) {
    if ((bVar13) || (bVar14)) {
      uVar5 = uVar8;
      if (uVar8 < uVar11) {
        uVar5 = uVar11;
      }
      puVar3 = (ushort *)FUN_0048ac30(param_5,uVar5 + 1);
    }
    else {
      uVar5 = uVar8;
      if (uVar8 < uVar11) {
        uVar5 = uVar11;
      }
      puVar3 = (ushort *)FUN_0048ab90(param_5,uVar5 + 1);
    }
    puVar9 = puVar3 + 3;
    puVar3[2] = uVar1;
    puVar6 = puVar9;
    puVar7 = puVar9;
    if (uVar8 < uVar11) {
      if (!bVar13) {
        puVar7 = param_1 + 3;
      }
      puVar10 = puVar7 + uVar8;
      if (!bVar14) {
        puVar6 = param_3 + 3;
      }
      param_1 = puVar6 + uVar11;
    }
    else {
      if (!bVar13) {
        puVar6 = param_1 + 3;
      }
      param_1 = puVar6 + uVar8;
      if (bVar14) {
        puVar10 = puVar9 + uVar11;
      }
      else {
        puVar7 = param_3 + 3;
        puVar10 = puVar7 + uVar11;
      }
    }
    uVar8 = 0;
    puVar12 = puVar9;
    if (puVar7 < puVar10) {
      do {
        uVar1 = *puVar7;
        uVar2 = *puVar6;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar12 + 1;
        uVar8 = (uint)uVar2 + uVar1 + uVar8;
        *puVar12 = (ushort)uVar8;
        uVar8 = uVar8 >> 0x10;
        puVar12 = puVar9;
      } while (puVar7 < puVar10);
      for (; uVar8 != 0; uVar8 = uVar8 + uVar1 >> 0x10) {
        if (param_1 <= puVar6) {
          if (uVar8 != 0) {
            *puVar9 = (ushort)uVar8;
            goto LAB_0048b3c6;
          }
          break;
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar9 = (ushort)(uVar8 + uVar1);
        puVar9 = puVar9 + 1;
      }
    }
    if (puVar9 != puVar6) {
      for (; puVar6 < param_1; puVar6 = puVar6 + 1) {
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
      }
    }
  }
  else {
    iVar4 = FUN_0048b000(param_1,param_3);
    if (iVar4 == 0) {
      puVar3 = (ushort *)FUN_0048af80(param_5);
    }
    else {
      if ((bVar13) || (bVar14)) {
        uVar5 = uVar8;
        if (uVar8 < uVar11) {
          uVar5 = uVar11;
        }
        puVar3 = (ushort *)FUN_0048ac30(param_5,uVar5);
      }
      else {
        uVar5 = uVar8;
        if (uVar8 < uVar11) {
          uVar5 = uVar11;
        }
        puVar3 = (ushort *)FUN_0048ab90(param_5,uVar5);
      }
      puVar9 = puVar3 + 3;
      puVar7 = puVar9;
      puVar6 = puVar9;
      if (iVar4 < 1) {
        if (!bVar13) {
          puVar6 = param_1 + 3;
        }
        puVar10 = puVar6 + uVar8;
        if (!bVar14) {
          puVar7 = param_3 + 3;
        }
        param_1 = puVar7 + uVar11;
      }
      else {
        if (!bVar13) {
          puVar7 = param_1 + 3;
        }
        param_1 = puVar7 + uVar8;
        uVar2 = uVar1;
        if (bVar14) {
          puVar10 = puVar9 + uVar11;
        }
        else {
          puVar6 = param_3 + 3;
          puVar10 = puVar6 + uVar11;
        }
      }
      puVar3[2] = uVar2;
      uVar8 = 1;
      puVar12 = puVar9;
      if (puVar6 < puVar10) {
        do {
          uVar1 = *puVar6;
          uVar2 = *puVar7;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
          puVar9 = puVar12 + 1;
          uVar8 = uVar8 + 0xffff + ((uint)uVar2 - (uint)uVar1);
          *puVar12 = (ushort)uVar8;
          uVar8 = uVar8 >> 0x10;
          puVar12 = puVar9;
        } while (puVar6 < puVar10);
        for (; (uVar8 == 0 && (puVar7 < param_1)); puVar7 = puVar7 + 1) {
          uVar1 = *puVar7;
          *puVar9 = (ushort)(uVar1 + 0xffff);
          uVar8 = uVar1 + 0xffff & 0xffff0000;
          puVar9 = puVar9 + 1;
        }
      }
      if (puVar9 != puVar7) {
        for (; puVar7 < param_1; puVar7 = puVar7 + 1) {
          *puVar9 = *puVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
  }
LAB_0048b3c6:
  uVar8 = (uint)*puVar3;
  puVar9 = puVar3 + uVar8 + 3;
  if (uVar8 != 0) {
    do {
      puVar9 = puVar9 + -1;
      if (*puVar9 != 0) break;
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
  }
  *puVar3 = (ushort)uVar8;
  if ((ushort)uVar8 == 0) {
    puVar3[2] = 1;
  }
  return;
}

