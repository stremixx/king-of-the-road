
ushort * FUN_0048c0f0(ushort *param_1,uint param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  bool bVar13;
  
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar6 = (uint)*param_1;
  if ((uVar6 == 0) || (param_2 == 0)) {
    puVar5 = (ushort *)FUN_0048ad80(param_3,param_1);
    return puVar5;
  }
  bVar13 = param_1 == param_3;
  uVar2 = param_1[2];
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  bVar3 = (byte)uVar4;
  uVar4 = uVar4 >> 4;
  if ((int)param_2 < 1) {
    iVar10 = uVar6 - uVar4;
    if (iVar10 < 0) {
      puVar5 = (ushort *)FUN_0048af80(param_3);
    }
    else {
      if (bVar13) {
        puVar5 = (ushort *)FUN_0048ac30();
      }
      else {
        puVar5 = (ushort *)FUN_0048ab90(param_3,iVar10);
      }
      puVar9 = puVar5 + 3;
      puVar8 = puVar9;
      if (!bVar13) {
        puVar8 = param_1 + 3;
      }
      puVar1 = puVar8 + uVar4;
      uVar7 = *puVar1 >> (bVar3 & 0xf);
      uVar4 = (uint)uVar7;
      puVar12 = puVar9;
      while (puVar1 = puVar1 + 1, puVar1 < puVar8 + uVar6) {
        uVar11 = (uint)*puVar1 << (0x10 - (bVar3 & 0xf) & 0x1f);
        *puVar12 = (ushort)uVar4 | (ushort)uVar11;
        uVar4 = uVar11 >> 0x10;
        uVar7 = (ushort)(uVar11 >> 0x10);
        puVar12 = puVar12 + 1;
      }
      *puVar12 = uVar7;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + iVar10;
      if (bVar13) {
        puVar9 = puVar8 + uVar6;
      }
      if (puVar12 < puVar9) {
        uVar6 = (int)puVar9 + (1 - (int)puVar12);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar12[0] = 0;
          puVar12[1] = 0;
          puVar12 = puVar12 + 2;
        }
        for (uVar6 = (uint)((uVar6 >> 1 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
    }
  }
  else {
    iVar10 = uVar6 + 1 + uVar4;
    if (bVar13) {
      puVar5 = (ushort *)FUN_0048ac30();
    }
    else {
      puVar5 = (ushort *)FUN_0048ab90(param_3,iVar10);
    }
    puVar9 = puVar5 + 3;
    if (!bVar13) {
      puVar9 = param_1 + 3;
    }
    uVar4 = 0;
    puVar1 = puVar5 + iVar10 + 2;
    for (puVar8 = puVar9 + (uVar6 - 1); puVar9 <= puVar8; puVar8 = puVar8 + -1) {
      uVar4 = uVar4 << 0x10 | (uint)*puVar8 << (bVar3 & 0xf);
      *puVar1 = (ushort)(uVar4 >> 0x10);
      puVar1 = puVar1 + -1;
    }
    *puVar1 = (ushort)uVar4;
    while (puVar1 = puVar1 + -1, puVar5 + 3 <= puVar1) {
      *puVar1 = 0;
    }
  }
  uVar6 = (uint)*puVar5;
  puVar5[2] = uVar2;
  puVar9 = puVar5 + uVar6 + 3;
  if (uVar6 != 0) {
    do {
      puVar9 = puVar9 + -1;
      if (*puVar9 != 0) break;
      uVar6 = uVar6 - 1;
    } while (0 < (int)uVar6);
  }
  *puVar5 = (ushort)uVar6;
  if ((ushort)uVar6 == 0) {
    puVar5[2] = 1;
  }
  return puVar5;
}

