
void FUN_0048c310(ushort *param_1,ushort *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 *puVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  int iStack_14;
  uint uStack_c;
  
  if (param_1 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  if (param_2 == (ushort *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  uVar9 = (uint)*param_2;
  uVar7 = (uint)*param_1;
  if (uVar9 == 0) {
    FUN_0048aab0(0,param_1 + 3,uVar7,1,uVar7);
    return;
  }
  if (uVar7 == 0) {
    FUN_0048aab0(0,param_2 + 3,uVar9,1,uVar9);
    return;
  }
  param_1 = (ushort *)FUN_0048aab0(0,param_1 + 3,uVar7,1,uVar7);
  iVar13 = 0;
  param_2 = (ushort *)FUN_0048aab0(0,param_2 + 3,uVar9,1,uVar9);
  iStack_14 = 0;
  uStack_c = uVar7;
  if (uVar9 < uVar7) {
    uStack_c = uVar9;
  }
  bVar3 = true;
  if (uStack_c != 0) {
    puVar6 = param_2 + 3;
    do {
      if (!bVar3) break;
      if (iVar13 < (int)uVar7) {
        uVar5 = (uint)*(ushort *)(((int)param_1 - (int)param_2) + (int)puVar6);
      }
      else {
        uVar5 = 0;
      }
      if (iVar13 < (int)uVar9) {
        uVar8 = (uint)*puVar6;
      }
      else {
        uVar8 = 0;
      }
      uVar12 = 0;
      do {
        if (((uVar8 | uVar5) & 1) != 0) {
          bVar3 = false;
          break;
        }
        iStack_14 = iStack_14 + 1;
        uVar5 = uVar5 >> 1;
        uVar8 = uVar8 >> 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 0x10);
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar13 < (int)uStack_c);
    if (iStack_14 != 0) {
      param_1 = (ushort *)FUN_0048c0f0(param_1,-iStack_14,param_1);
      param_2 = (ushort *)FUN_0048c0f0(param_2,-iStack_14,param_2);
    }
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    uVar1 = *param_1;
    uVar7 = (uint)(short)param_1[2];
    puVar4 = param_1;
  }
  else {
    uVar1 = *param_2;
    uVar7 = (uint)(param_2[2] == 0);
    puVar4 = param_2;
  }
  puVar6 = (ushort *)FUN_0048aab0(0,puVar4 + 3,uVar1,uVar7,uVar1);
  uVar2 = *puVar6;
  do {
    if (uVar2 == 0) {
      if (puVar6[1] != 0) {
        FUN_00631d5c(puVar6);
      }
      if (param_2[1] != 0) {
        FUN_00631d5c(param_2);
      }
      if (iStack_14 != 0) {
        FUN_0048c0f0(param_1,iStack_14,param_1);
      }
      return;
    }
    iVar13 = 0;
    bVar3 = true;
    iVar10 = 0;
    if (uVar2 != 0) {
      puVar11 = puVar6 + 3;
      do {
        if (!bVar3) break;
        uVar9 = 0;
        uVar7 = (uint)*puVar11;
        do {
          if ((uVar7 & 1) != 0) {
            bVar3 = false;
            break;
          }
          iVar13 = iVar13 + 1;
          uVar7 = uVar7 >> 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x10);
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar10 < (int)(uint)uVar2);
      if (iVar13 != 0) {
        puVar6 = (ushort *)FUN_0048c0f0(puVar6,-iVar13,puVar6);
      }
    }
    if (puVar6[2] == 1) {
      param_1 = (ushort *)FUN_0048ad80(param_1,puVar6);
      puVar6 = (ushort *)FUN_0048b050(puVar6,0,param_2,1,puVar6);
    }
    else {
      param_2 = (ushort *)FUN_0048aab0(param_2,puVar6 + 3,*puVar6,puVar6[2] == 0,*puVar6);
      puVar6 = (ushort *)FUN_0048b050(puVar6,0,param_1,0,puVar6);
    }
    uVar2 = *puVar6;
  } while( true );
}

