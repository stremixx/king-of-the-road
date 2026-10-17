
void FUN_0048b400(ushort *param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  bool bVar16;
  ushort *puStack_10;
  ushort uStack_4;
  
  puVar11 = param_1;
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  if (param_2 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar2 = param_1[2];
  uVar3 = param_2[2];
  uVar8 = (uint)*param_1;
  uVar14 = (uint)*param_2;
  bVar16 = param_1 == param_3;
  iVar1 = uVar14 + uVar8;
  if ((uVar8 == 0) || (uVar14 == 0)) {
    puVar6 = (ushort *)FUN_0048af80(param_3);
    goto LAB_0048b720;
  }
  if ((uVar8 == 1) && (param_1[3] == *param_1)) {
    puVar6 = (ushort *)FUN_0048ad80(param_3,param_2);
    goto LAB_0048b720;
  }
  if ((uVar14 == 1) && (param_2[3] == *param_2)) {
    puVar6 = (ushort *)FUN_0048ad80(param_3,param_1);
    goto LAB_0048b720;
  }
  if (param_1 == param_2) {
    if (bVar16) {
      puVar6 = (ushort *)FUN_0048ac30(param_3,iVar1);
      puVar11 = puVar6 + 3;
      param_1 = puVar6 + uVar8 + 2;
      puVar15 = puVar6 + iVar1 + 1;
      if (puVar11 <= puVar15) {
        param_2 = puVar15 + 1;
        puStack_10 = param_1;
        do {
          iVar12 = (uint)*puStack_10 * (uint)*param_1;
          *puVar15 = 0;
          puVar7 = puStack_10;
          puVar9 = param_1;
          while( true ) {
            uVar8 = (uint)*puVar15 + iVar12;
            *puVar15 = (ushort)uVar8;
            for (puVar13 = param_2; (uVar8 >> 0x10 != 0 && (puVar13 < puVar11 + iVar1));
                puVar13 = puVar13 + 1) {
              uVar8 = (uVar8 >> 0x10) + (uint)*puVar13;
              *puVar13 = (ushort)uVar8;
            }
            if (puVar7 <= puVar9) break;
            uVar8 = (uint)*puVar15 + iVar12;
            *puVar15 = (ushort)uVar8;
            for (puVar13 = param_2; (uVar8 >> 0x10 != 0 && (puVar13 < puVar11 + iVar1));
                puVar13 = puVar13 + 1) {
              uVar8 = (uVar8 >> 0x10) + (uint)*puVar13;
              *puVar13 = (ushort)uVar8;
            }
            puVar7 = puVar7 + -1;
            puVar9 = puVar9 + 1;
            if (puVar7 < puVar9) break;
            iVar12 = (uint)*puVar9 * (uint)*puVar7;
          }
          if (puVar11 < param_1) {
            param_1 = param_1 + -1;
          }
          else {
            puStack_10 = puStack_10 + -1;
          }
          puVar15 = puVar15 + -1;
          param_2 = param_2 + -1;
        } while (puVar11 <= puVar15);
      }
      goto LAB_0048b720;
    }
LAB_0048b5e3:
    if (param_2 == param_3) goto LAB_0048b5f4;
    puVar6 = (ushort *)FUN_0048ab90(param_3,iVar1);
  }
  else {
    if (!bVar16) goto LAB_0048b5e3;
LAB_0048b5f4:
    puVar6 = (ushort *)FUN_0048ac30(param_3,iVar1);
  }
  puStack_10 = puVar6 + 3;
  puVar15 = puStack_10 + iVar1;
  if (bVar16) {
    puVar11 = param_2 + 3;
    param_1 = puVar6 + uVar8 + 2;
    param_2 = puVar11 + uVar14;
    puVar7 = param_1;
  }
  else {
    if (param_2 == param_3) {
      puVar7 = puVar6 + uVar14 + 2;
      param_1 = puVar7;
    }
    else {
      if (uVar8 <= uVar14) {
        puStack_10 = param_1 + 3;
        puVar11 = param_2 + 3;
        param_1 = param_1 + uVar8 + 2;
        param_2 = puVar11 + uVar14;
        puVar7 = puVar6 + uVar8 + 2;
        goto joined_r0x0048b68a;
      }
      puStack_10 = param_2 + 3;
      puVar7 = puVar6 + uVar14 + 2;
      param_1 = param_2 + uVar14 + 2;
    }
    puVar11 = puVar11 + 3;
    param_2 = puVar11 + uVar8;
  }
joined_r0x0048b68a:
  while (puVar9 = puVar7, puStack_10 <= param_1) {
    uVar4 = *param_1;
    param_1 = param_1 + -1;
    puVar7 = puVar9 + -1;
    *puVar9 = 0;
    if ((uVar4 != 0) && (uVar8 = 0, puVar13 = puVar11, puVar11 < param_2)) {
      do {
        uVar5 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = puVar9 + 1;
        uVar8 = (uint)uVar5 * (uint)uVar4 + *puVar9 + uVar8;
        *puVar9 = (ushort)uVar8;
        uVar8 = uVar8 >> 0x10;
        puVar9 = puVar10;
      } while (puVar13 < param_2);
      for (; (uVar8 != 0 && (puVar10 < puVar15)); puVar10 = puVar10 + 1) {
        uVar4 = *puVar10;
        *puVar10 = (ushort)(uVar8 + uVar4);
        uVar8 = uVar8 + uVar4 >> 0x10;
      }
    }
  }
LAB_0048b720:
  uStack_4 = (ushort)(uVar2 == uVar3);
  puVar6[2] = uStack_4;
  uVar8 = (uint)*puVar6;
  puVar11 = puVar6 + uVar8 + 3;
  if (uVar8 != 0) {
    do {
      puVar11 = puVar11 + -1;
      if (*puVar11 != 0) break;
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
  }
  *puVar6 = (ushort)uVar8;
  if ((ushort)uVar8 == 0) {
    puVar6[2] = 1;
  }
  return;
}

