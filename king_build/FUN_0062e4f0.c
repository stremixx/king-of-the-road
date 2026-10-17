
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0062e4f0(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7)

{
  uint *puVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint local_584;
  uint local_580;
  int local_57c;
  uint *local_578;
  undefined4 local_574;
  undefined4 local_570;
  uint local_56c;
  uint *local_564;
  uint local_560;
  int local_554;
  int local_550;
  uint local_548 [33];
  int aiStack_4c4 [17];
  uint local_480 [288];
  
  puVar19 = local_548;
  for (iVar12 = 0x11; piVar13 = param_1, uVar18 = param_2, iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  do {
    uVar18 = uVar18 - 1;
    local_548[*piVar13] = local_548[*piVar13] + 1;
    piVar13 = piVar13 + 1;
  } while (uVar18 != 0);
  if (local_548[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
    return 0;
  }
  local_584 = 1;
  puVar19 = local_548;
  do {
    puVar19 = puVar19 + 1;
    uVar18 = 0;
    if (*puVar19 != 0) break;
    local_584 = local_584 + 1;
  } while (local_584 < 0x11);
  local_580 = *param_7;
  if (*param_7 < local_584) {
    local_580 = local_584;
  }
  uVar5 = 0x10;
  puVar19 = local_548 + 0x10;
  do {
    if (*puVar19 != 0) break;
    uVar5 = uVar5 - 1;
    puVar19 = puVar19 + -1;
  } while (uVar5 != 0);
  if (uVar5 < local_580) {
    local_580 = uVar5;
  }
  *param_7 = local_580;
  iVar12 = 1 << ((byte)local_584 & 0x1f);
  if (local_584 < uVar5) {
    puVar19 = local_548 + local_584;
    uVar14 = local_584;
    do {
      uVar20 = *puVar19;
      if ((int)(iVar12 - uVar20) < 0) {
        return 2;
      }
      uVar14 = uVar14 + 1;
      puVar19 = puVar19 + 1;
      iVar12 = (iVar12 - uVar20) * 2;
    } while (uVar14 < uVar5);
  }
  iVar12 = iVar12 - local_548[uVar5];
  if (iVar12 < 0) {
    return 2;
  }
  local_548[0x12] = 0;
  local_548[uVar5] = local_548[uVar5] + iVar12;
  iVar15 = 0;
  iVar6 = uVar5 - 1;
  if (iVar6 != 0) {
    iVar16 = 0;
    do {
      iVar15 = iVar15 + *(int *)((int)local_548 + iVar16 + 4);
      iVar6 = iVar6 + -1;
      *(int *)((int)local_548 + iVar16 + 0x4c) = iVar15;
      iVar16 = iVar16 + 4;
    } while (iVar6 != 0);
  }
  uVar14 = 0;
  do {
    iVar6 = *param_1;
    param_1 = param_1 + 1;
    if (iVar6 != 0) {
      uVar20 = local_548[iVar6 + 0x11];
      local_480[uVar20] = uVar14;
      local_548[iVar6 + 0x11] = uVar20 + 1;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < param_2);
  uVar14 = 0;
  puVar19 = local_480;
  local_56c = 0;
  iVar6 = -local_580;
  local_548[0x11] = 0;
  local_57c = -1;
  aiStack_4c4[1] = 0;
  local_550 = 0;
  if ((int)local_584 <= (int)uVar5) {
    local_554 = local_584 - 1;
    local_564 = local_548 + local_584;
    local_578 = puVar19;
    do {
      uVar20 = *local_564;
      while (uVar20 != 0) {
        local_560 = uVar20 - 1;
        uVar3 = (short)((uint)local_574 >> 0x10);
        iVar15 = iVar6;
        while (iVar15 = iVar15 + local_580, iVar15 < (int)local_584) {
          iVar6 = iVar6 + local_580;
          iVar16 = local_57c + 1;
          uVar18 = uVar5 - iVar6;
          if (local_580 < uVar5 - iVar6) {
            uVar18 = local_580;
          }
          uVar14 = local_584 - iVar6;
          uVar7 = 1 << ((byte)uVar14 & 0x1f);
          if (uVar20 < uVar7) {
            iVar8 = uVar7 + (-1 - local_560);
            puVar19 = local_564;
            while (uVar14 = uVar14 + 1, uVar14 < uVar18) {
              uVar7 = puVar19[1];
              puVar19 = puVar19 + 1;
              uVar9 = iVar8 * 2;
              if (uVar9 < uVar7 || uVar9 - uVar7 == 0) break;
              iVar8 = uVar9 - uVar7;
            }
          }
          uVar18 = 1 << ((byte)uVar14 & 0x1f);
          pvVar10 = _malloc(uVar18 * 8 + 8);
          if (pvVar10 == (void *)0x0) {
            if (iVar16 != 0) {
              FUN_0062e990(aiStack_4c4[1]);
            }
            return 3;
          }
          DAT_0077d35c = DAT_0077d35c + 1 + uVar18;
          local_550 = (int)pvVar10 + 8;
          *param_6 = local_550;
          *(int *)((int)pvVar10 + 4) = 0;
          aiStack_4c4[local_57c + 2] = local_550;
          if (iVar16 != 0) {
            local_548[local_57c + 0x12] = local_56c;
            local_574._2_2_ = (undefined2)((uint)local_574 >> 0x10);
            iVar8 = aiStack_4c4[iVar16];
            local_574 = CONCAT31(CONCAT21(local_574._2_2_,(char)local_580),(byte)uVar14 + 0x10);
            uVar14 = local_56c >> ((char)iVar6 - (char)local_580 & 0x1fU);
            *(undefined4 *)(iVar8 + uVar14 * 8) = local_574;
            *(int *)(iVar8 + 4 + uVar14 * 8) = local_550;
            local_570 = local_550;
          }
          puVar19 = local_578;
          uVar14 = local_56c;
          param_6 = (int *)((int)pvVar10 + 4);
          local_57c = iVar16;
          uVar3 = local_574._2_2_;
        }
        bVar4 = (byte)iVar6;
        uVar2 = CONCAT21(uVar3,(char)local_584 - bVar4);
        if (puVar19 < local_480 + param_2) {
          uVar20 = *puVar19;
          local_570._2_2_ = (undefined2)((uint)local_570 >> 0x10);
          if (uVar20 < param_3) {
            local_578 = puVar19 + 1;
            local_574 = CONCAT31(uVar2,(uVar20 < 0x100) + '\x0f');
            local_570 = CONCAT22(local_570._2_2_,(short)*puVar19);
          }
          else {
            iVar15 = (uVar20 - param_3) * 2;
            local_574 = CONCAT31(uVar2,*(undefined1 *)(iVar15 + param_5));
            local_570 = CONCAT22(local_570._2_2_,*(undefined2 *)(iVar15 + param_4));
            local_578 = local_578 + 1;
          }
        }
        else {
          local_574 = CONCAT31(uVar2,99);
        }
        iVar15 = 1 << ((char)local_584 - bVar4 & 0x1f);
        uVar20 = uVar14 >> (bVar4 & 0x1f);
        if (uVar20 < uVar18) {
          puVar17 = (undefined4 *)(local_550 + uVar20 * 8);
          do {
            uVar20 = uVar20 + iVar15;
            *puVar17 = local_574;
            puVar17[1] = local_570;
            puVar17 = puVar17 + iVar15 * 2;
            uVar14 = local_56c;
          } while (uVar20 < uVar18);
        }
        uVar7 = 1 << ((byte)local_554 & 0x1f);
        uVar20 = uVar14 & uVar7;
        while (uVar20 != 0) {
          uVar14 = uVar14 ^ uVar7;
          uVar7 = uVar7 >> 1;
          uVar20 = uVar14 & uVar7;
        }
        uVar14 = uVar14 ^ uVar7;
        puVar21 = local_548 + local_57c + 0x11;
        uVar20 = local_560;
        puVar19 = local_578;
        local_56c = uVar14;
        if (((1 << (bVar4 & 0x1f)) - 1U & uVar14) != local_548[local_57c + 0x11]) {
          do {
            iVar6 = iVar6 - local_580;
            local_57c = local_57c + -1;
            puVar1 = puVar21 + -1;
            puVar21 = puVar21 + -1;
          } while (((1 << ((byte)iVar6 & 0x1f)) - 1U & uVar14) != *puVar1);
        }
      }
      local_584 = local_584 + 1;
      local_564 = local_564 + 1;
      local_554 = local_554 + 1;
    } while ((int)local_584 <= (int)uVar5);
  }
  if ((iVar12 == 0) || (uVar11 = 1, uVar5 == 1)) {
    uVar11 = 0;
  }
  return uVar11;
}

