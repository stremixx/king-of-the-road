
/* WARNING: Type propagation algorithm not settling */

void FUN_0048bb40(int param_1,ushort *param_2,int param_3,int param_4,ushort *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  int local_18;
  ushort local_4;
  undefined1 local_2 [2];
  
  uVar2 = param_2[param_3 + -1];
  puVar1 = param_2 + param_3;
  iVar6 = (int)param_5 + -1;
  iVar8 = param_3 + iVar6;
  if (iVar6 < 0) {
    return;
  }
  param_3 = iVar6 * 2;
  puVar14 = (ushort *)(param_1 + iVar8 * 2);
  local_18 = (int)param_5;
  param_5 = (ushort *)(param_3 + param_1);
LAB_0048bbba:
  if (uVar2 == *puVar14) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = CONCAT22(*puVar14,puVar14[-1]) / (uint)uVar2;
  }
  do {
    sVar5 = (short)uVar7;
    puVar9 = (ushort *)local_2;
    iVar6 = 2;
    do {
      puVar9 = puVar9 + -1;
      uVar13 = (uint)*(ushort *)((int)puVar14 + (2 - (int)local_2) + (int)puVar9);
      uVar15 = (uint)*puVar9;
      if (uVar15 != uVar13) break;
      bVar4 = 0 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar4);
    if (uVar15 == uVar13 || (int)(uVar15 - uVar13) < 0) break;
    uVar7 = uVar7 + 0xffff;
  } while( true );
  uVar15 = 0;
  uVar13 = 1;
  puVar9 = param_5;
  if (param_2 < puVar1) {
    puVar10 = (ushort *)((int)param_5 + (-param_1 - param_3) + (int)param_2);
    puVar11 = param_5;
    do {
      puVar9 = puVar11 + 1;
      uVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar15 = (uVar15 >> 0x10) + (uint)uVar3 * (uVar7 & 0xffff);
      uVar13 = uVar13 + 0xffff + ((uint)*puVar11 - (uVar15 & 0xffff));
      *puVar11 = (ushort)uVar13;
      uVar13 = uVar13 >> 0x10;
      puVar11 = puVar9;
    } while (puVar10 < puVar1);
  }
  uVar7 = uVar13 + 0xffff + ((uint)*puVar9 - (uVar15 >> 0x10));
  *puVar9 = (ushort)uVar7;
  if ((uVar7 & 0xffff0000) == 0) {
    sVar5 = sVar5 + -1;
    uVar7 = 0;
    puVar9 = param_5;
    if (param_2 < puVar1) {
      puVar11 = (ushort *)((int)param_5 + (-param_1 - param_3) + (int)param_2);
      puVar10 = param_5;
      do {
        puVar12 = puVar11 + 1;
        puVar9 = puVar10 + 1;
        uVar7 = (uVar7 >> 0x10) + (uint)*puVar10 + (uint)*puVar11;
        *puVar10 = (ushort)uVar7;
        puVar11 = puVar12;
        puVar10 = puVar9;
      } while (puVar12 < puVar1);
    }
    *puVar9 = 0;
  }
  if (param_4 != 0) {
    *(short *)((param_4 - param_1) + (int)param_5) = sVar5;
  }
  param_3 = param_3 + -2;
  param_5 = param_5 + -1;
  puVar14 = puVar14 + -1;
  local_18 = local_18 + -1;
  if (local_18 == 0) {
    return;
  }
  goto LAB_0048bbba;
}

