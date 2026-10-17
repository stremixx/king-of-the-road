
ushort * FUN_0062d960(ushort *param_1)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  short *psVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined *puVar16;
  int local_18;
  uint local_14;
  
  puVar2 = *(ushort **)((int)param_1 + 0x18);
  iVar3 = *(int *)param_1;
  iVar4 = *(int *)((int)param_1 + 8);
  iVar7 = *(int *)((int)param_1 + 0xc);
  puVar11 = *(ushort **)((int)param_1 + 0x14);
  iVar5 = *(int *)((int)param_1 + 4);
  iVar13 = 0;
  puVar14 = (undefined4 *)&DAT_0077a464;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  param_1 = (ushort *)0x0;
  *(undefined2 *)(iVar3 + 2 + *(int *)(&DAT_0077c958 + DAT_0077a460 * 4) * 4) = 0;
  puVar8 = (ushort *)(DAT_0077a460 + 1);
  if ((int)puVar8 < 0x23d) {
    puVar8 = (ushort *)(&DAT_0077c958 + (int)puVar8 * 4);
    local_18 = 0x23d;
    do {
      iVar9 = *(int *)puVar8;
      puVar6 = (ushort *)(*(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar9 * 4) * 4) + 1)
      ;
      if ((int)puVar11 < (int)puVar6) {
        iVar13 = iVar13 + 1;
        puVar6 = puVar11;
        param_1 = (ushort *)iVar13;
      }
      *(short *)(iVar3 + 2 + iVar9 * 4) = (short)puVar6;
      if (iVar9 <= (int)puVar2) {
        (&DAT_0077a464)[(int)puVar6] = (&DAT_0077a464)[(int)puVar6] + 1;
        iVar15 = 0;
        if (iVar7 <= iVar9) {
          iVar15 = *(int *)(iVar4 + (iVar9 - iVar7) * 4);
        }
        uVar12 = (uint)*(ushort *)(iVar3 + iVar9 * 4);
        DAT_0077b804 = (ushort *)((int)DAT_0077b804 + ((int)puVar6 + iVar15) * uVar12);
        iVar13 = (int)param_1;
        if (iVar5 != 0) {
          DAT_0077b800 = DAT_0077b800 + ((uint)*(ushort *)(iVar5 + 2 + iVar9 * 4) + iVar15) * uVar12
          ;
        }
      }
      puVar8 = puVar8 + 2;
    } while ((int)puVar8 < 0x77d24c);
    if (iVar13 != 0) {
      iVar4 = (int)puVar11 + -1;
      do {
        psVar10 = &DAT_0077a464 + iVar4;
        sVar1 = (&DAT_0077a464)[iVar4];
        iVar7 = iVar4;
        while (sVar1 == 0) {
          psVar10 = psVar10 + -1;
          iVar7 = iVar7 + -1;
          sVar1 = *psVar10;
        }
        (&DAT_0077a464)[iVar7] = (&DAT_0077a464)[iVar7] + -1;
        (&DAT_0077a466)[iVar7] = (&DAT_0077a466)[iVar7] + 2;
        (&DAT_0077a464)[(int)puVar11] = (&DAT_0077a464)[(int)puVar11] + -1;
        puVar8 = &DAT_0077a466 + iVar7;
        iVar13 = iVar13 + -2;
      } while (0 < iVar13);
      if (puVar11 != (ushort *)0x0) {
        param_1 = &DAT_0077a464 + (int)puVar11;
        do {
          uVar12 = (uint)*param_1;
          puVar8 = param_1;
          if (uVar12 != 0) {
            puVar16 = &DAT_0077c958 + local_18 * 4;
            local_14 = uVar12;
            do {
              iVar4 = *(int *)(puVar16 + -4);
              puVar16 = puVar16 + -4;
              local_18 = local_18 + -1;
              puVar8 = puVar2;
              if (iVar4 <= (int)puVar2) {
                puVar6 = (ushort *)(iVar3 + 2 + iVar4 * 4);
                puVar8 = (ushort *)(uint)*puVar6;
                if (puVar8 != puVar11) {
                  puVar8 = (ushort *)
                           ((int)DAT_0077b804 +
                           ((int)puVar11 - (int)puVar8) * (uint)*(ushort *)(iVar3 + iVar4 * 4));
                  DAT_0077b804 = puVar8;
                  *puVar6 = (ushort)puVar11;
                  uVar12 = local_14;
                }
                uVar12 = uVar12 - 1;
                local_14 = uVar12;
              }
            } while (uVar12 != 0);
          }
          puVar11 = (ushort *)((int)puVar11 + -1);
          param_1 = param_1 + -1;
        } while (puVar11 != (ushort *)0x0);
      }
    }
  }
  return puVar8;
}

