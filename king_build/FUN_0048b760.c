
void FUN_0048b760(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  bool bVar15;
  ushort *puStack_14;
  ushort uStack_4;
  
  puVar11 = param_1;
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar8 = (uint)*puVar11;
  if ((uVar8 == 0) || (param_2 == (ushort *)0x0)) {
    param_3 = (ushort *)FUN_0048af80(param_3);
  }
  else if (param_2 == (ushort *)0x1) {
    param_3 = (ushort *)FUN_0048ad80(param_3,puVar11);
  }
  else {
    uVar2 = puVar11[2];
    bVar15 = -1 < (int)param_2;
    uVar5 = (uint)param_2;
    if (bVar15 == 0) {
      uVar5 = -(int)param_2;
    }
    iVar13 = 0;
    if (uVar5 != 0) {
      puVar7 = &param_1;
      do {
        *(short *)puVar7 = (short)uVar5;
        iVar13 = iVar13 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
        uVar5 = uVar5 >> 0x10;
      } while (uVar5 != 0);
    }
    param_2 = (ushort *)(uint)(puVar11 == param_3);
    if (param_2 == (ushort *)0x0) {
      param_3 = (ushort *)FUN_0048ab90(param_3,iVar13 + uVar8);
    }
    else {
      param_3 = (ushort *)FUN_0048ac30();
    }
    puStack_14 = param_3 + 3;
    puVar1 = puStack_14 + iVar13 + uVar8;
    if (param_2 == (ushort *)0x0) {
      if (iVar13 < (int)uVar8) {
        puStack_14 = (ushort *)&param_1;
        param_2 = puVar11 + 3;
        puVar12 = (ushort *)(&stack0x00000002 + iVar13 * 2);
        puVar11 = puVar11 + 3 + uVar8;
        puVar6 = param_3 + iVar13 + 2;
      }
      else {
        puStack_14 = puVar11 + 3;
        puVar12 = puVar11 + uVar8 + 2;
        param_2 = (ushort *)&param_1;
        puVar11 = (ushort *)((int)&param_1 + iVar13 * 2);
        puVar6 = param_3 + uVar8 + 2;
      }
    }
    else {
      puVar12 = param_3 + uVar8 + 2;
      param_2 = (ushort *)&param_1;
      puVar11 = (ushort *)((int)&param_1 + iVar13 * 2);
      puVar6 = puVar12;
    }
    while (puVar9 = puVar6, puStack_14 <= puVar12) {
      uVar3 = *puVar12;
      puVar12 = puVar12 + -1;
      puVar6 = puVar9 + -1;
      *puVar9 = 0;
      if ((uVar3 != 0) && (uVar8 = 0, puVar14 = param_2, param_2 < puVar11)) {
        do {
          uVar4 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar10 = puVar9 + 1;
          uVar8 = (uint)uVar4 * (uint)uVar3 + *puVar9 + uVar8;
          *puVar9 = (ushort)uVar8;
          uVar8 = uVar8 >> 0x10;
          puVar9 = puVar10;
        } while (puVar14 < puVar11);
        for (; (uVar8 != 0 && (puVar10 < puVar1)); puVar10 = puVar10 + 1) {
          uVar3 = *puVar10;
          *puVar10 = (ushort)(uVar8 + uVar3);
          uVar8 = uVar8 + uVar3 >> 0x10;
        }
      }
    }
    uStack_4 = (ushort)(uVar2 == bVar15);
    param_3[2] = uStack_4;
  }
  uVar8 = (uint)*param_3;
  puVar11 = param_3 + uVar8 + 3;
  if (uVar8 != 0) {
    do {
      puVar11 = puVar11 + -1;
      if (*puVar11 != 0) break;
      uVar8 = uVar8 - 1;
    } while (0 < (int)uVar8);
  }
  *param_3 = (ushort)uVar8;
  if ((ushort)uVar8 == 0) {
    param_3[2] = 1;
  }
  return;
}

