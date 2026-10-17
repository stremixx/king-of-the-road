
void FUN_0048be30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  short sVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  undefined2 extraout_var;
  uint uVar14;
  ushort *puStack_10;
  ushort uStack_4;
  
  puVar13 = (ushort *)*param_1;
  if (puVar13 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  puVar3 = (ushort *)*param_2;
  if (puVar3 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  puVar7 = (ushort *)*param_3;
  puVar8 = (ushort *)*param_4;
  uVar14 = (uint)*puVar13;
  uVar11 = (uint)*puVar3;
  if (uVar11 == 0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_attempted_division_by_zero_0066f454);
  }
  iVar6 = FUN_0048b000(puVar13,puVar3);
  uVar1 = puVar3[2];
  uVar2 = puVar13[2];
  if (iVar6 < 0) {
    puVar7 = (ushort *)FUN_0048af80(puVar7);
    puVar8 = (ushort *)FUN_0048ad80(puVar8,puVar13);
  }
  else if (iVar6 == 0) {
    puVar7 = (ushort *)FUN_0048afb0(puVar7,uVar2 == uVar1);
    puVar8 = (ushort *)FUN_0048af80(puVar8);
  }
  else if (uVar11 == 1) {
    puVar7 = (ushort *)FUN_0048ad80(puVar7,puVar13);
    iVar6 = FUN_0048bd70(puVar7 + 3,*puVar7,CONCAT22(extraout_var,puVar3[3]),puVar7 + 3);
    puVar8 = (ushort *)FUN_0048ae90(puVar8,iVar6);
    if (iVar6 != 0) {
      puVar8[2] = uVar2;
    }
  }
  else {
    uVar4 = 0x10000 / (ulonglong)(puVar3[uVar11 + 2] + 1);
    uVar9 = (uint)uVar4;
    sVar5 = (short)uVar4;
    if (((sVar5 == 1) && (puVar3 != puVar7)) && (puVar3 != puVar8)) {
      puVar8 = (ushort *)FUN_0048ab90(puVar8,uVar14 + 1);
      puVar10 = puVar8 + 3;
      puStack_10 = puVar3;
      if (-1 < (int)(uVar14 - 1)) {
        iVar6 = 6 - (int)puVar10;
        uVar12 = uVar14;
        do {
          *puVar10 = *(ushort *)((int)puVar13 + iVar6 + (int)puVar10);
          puVar10 = puVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar12 = uVar9 & 0xffff;
      puStack_10 = (ushort *)FUN_0048b760(puVar3,uVar12,0);
      puVar8 = (ushort *)FUN_0048b760(puVar13,uVar12,puVar8);
    }
    iVar6 = (uVar14 - uVar11) + 1;
    puVar7 = (ushort *)FUN_0048ab90(puVar7,iVar6);
    FUN_0048bb40(puVar8 + 3,puStack_10 + 3,uVar11,puVar7 + 3,iVar6);
    if ((puStack_10 != puVar3) && (puStack_10[1] != 0)) {
      FUN_00631d5c(puStack_10);
    }
    if (sVar5 != 1) {
      uVar11 = (uint)*puVar8;
      puVar13 = puVar8 + uVar11 + 3;
      if (uVar11 != 0) {
        do {
          puVar13 = puVar13 + -1;
          if (*puVar13 != 0) break;
          uVar11 = uVar11 - 1;
        } while (0 < (int)uVar11);
      }
      *puVar8 = (ushort)uVar11;
      if ((ushort)uVar11 == 0) {
        puVar8[2] = 1;
      }
      FUN_0048bd70(puVar8 + 3,*puVar8,uVar9,puVar8 + 3);
    }
  }
  uStack_4 = (ushort)(uVar2 == uVar1);
  uVar11 = (uint)*puVar7;
  puVar7[2] = uStack_4;
  puVar13 = puVar7 + uVar11 + 3;
  if (uVar11 != 0) {
    do {
      puVar13 = puVar13 + -1;
      if (*puVar13 != 0) break;
      uVar11 = uVar11 - 1;
    } while (0 < (int)uVar11);
  }
  *puVar7 = (ushort)uVar11;
  if ((ushort)uVar11 == 0) {
    puVar7[2] = 1;
  }
  *param_3 = puVar7;
  uVar11 = (uint)*puVar8;
  puVar13 = puVar8 + uVar11 + 3;
  if (uVar11 != 0) {
    do {
      puVar13 = puVar13 + -1;
      if (*puVar13 != 0) break;
      uVar11 = uVar11 - 1;
    } while (0 < (int)uVar11);
  }
  *puVar8 = (ushort)uVar11;
  if ((ushort)uVar11 != 0) {
    *param_4 = puVar8;
    return;
  }
  puVar8[2] = 1;
  *param_4 = puVar8;
  return;
}

