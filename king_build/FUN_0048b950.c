
ushort * FUN_0048b950(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  uint uVar9;
  undefined2 extraout_var;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort uStack_4;
  
  puVar11 = param_2;
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  if (param_2 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar9 = (uint)*param_2;
  uVar12 = (uint)*param_1;
  if (uVar9 == 0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_attempted_division_by_zero_0066f454);
  }
  iVar5 = FUN_0048b000(param_1,param_2);
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if (iVar5 < 0) {
    puVar6 = (ushort *)FUN_0048af80(param_3);
  }
  else if (iVar5 == 0) {
    puVar6 = (ushort *)FUN_0048afb0(param_3,uVar1 == uVar2);
  }
  else if (uVar9 == 1) {
    puVar6 = (ushort *)FUN_0048ad80(param_3,param_1);
    FUN_0048bd70(puVar6 + 3,*puVar6,CONCAT22(extraout_var,param_2[3]),puVar6 + 3);
  }
  else {
    uVar3 = 0x10000 / (ulonglong)(param_2[uVar9 + 2] + 1);
    if (((short)uVar3 == 1) && (param_2 != param_3)) {
      iVar5 = FUN_0048ab90(0,uVar12 + 1);
      puVar7 = (undefined2 *)(iVar5 + 6);
      puVar8 = param_2;
      if (-1 < (int)(uVar12 - 1)) {
        iVar4 = 6 - (int)puVar7;
        uVar10 = uVar12;
        do {
          *puVar7 = *(undefined2 *)((int)param_1 + iVar4 + (int)puVar7);
          puVar7 = puVar7 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      uVar10 = (uint)uVar3 & 0xffff;
      puVar8 = (ushort *)FUN_0048b760(param_2,uVar10,0);
      iVar5 = FUN_0048b760(param_1,uVar10,0);
    }
    param_2 = (ushort *)iVar5;
    iVar5 = (uVar12 - uVar9) + 1;
    puVar6 = (ushort *)FUN_0048ab90(param_3,iVar5);
    FUN_0048bb40((int)param_2 + 6,puVar8 + 3,uVar9,puVar6 + 3,iVar5);
    if ((puVar8 != puVar11) && (puVar8[1] != 0)) {
      FUN_00631d5c(puVar8);
    }
    if (*(short *)((int)param_2 + 2) != 0) {
      FUN_00631d5c(param_2);
    }
  }
  uStack_4 = (ushort)(uVar1 == uVar2);
  puVar6[2] = uStack_4;
  uVar9 = (uint)*puVar6;
  puVar11 = puVar6 + uVar9 + 3;
  if (uVar9 != 0) {
    do {
      puVar11 = puVar11 + -1;
      if (*puVar11 != 0) break;
      uVar9 = uVar9 - 1;
    } while (0 < (int)uVar9);
  }
  *puVar6 = (ushort)uVar9;
  if ((ushort)uVar9 == 0) {
    puVar6[2] = 1;
  }
  return puVar6;
}

