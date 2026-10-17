
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573c00(void)

{
  double dVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *extraout_ECX;
  int iVar10;
  double *pdVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 *puStack_e8;
  undefined1 **local_e4;
  undefined1 *local_d0;
  undefined1 local_cc [4];
  undefined1 local_c8 [8];
  int local_c0;
  byte *local_98;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar8 = DAT_006cd950;
  DAT_006f2438 = 0;
  if (*(int *)(DAT_006cdbf8 + 0x180) < 2) {
    local_e4 = &local_d0;
    iVar13 = 0;
    puStack_e8 = (undefined1 *)0x573c3a;
    FUN_004364a0();
    if (local_d0 != DAT_0068a8f0) {
      puVar14 = &DAT_006f1d58;
      puVar16 = &DAT_006f22e8;
      puStack_e8 = extraout_ECX;
      do {
        if (0x6f23d7 < (int)puVar16) break;
        local_e4 = (undefined1 **)local_c8;
        FUN_0041d3f0(&local_d0);
        FUN_0043fd20();
        if (((local_c0 == 1) || (local_c0 == 2)) &&
           (_DAT_0064a770 < (double)CONCAT44(uStack_44,local_48))) {
          local_e4 = (undefined1 **)local_d0;
          puStack_e8 = (undefined1 *)0x573cae;
          uVar6 = FUN_0043f700();
          if ((uVar6 & 0x4000) == 0) {
            *puVar16 = local_98;
            *(undefined4 *)puVar14 = local_48;
            *(undefined4 *)((int)puVar14 + 4) = uStack_44;
            iVar13 = iVar13 + 1;
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        local_e4 = (undefined1 **)local_d0;
        puStack_e8 = local_cc;
        piVar7 = (int *)FUN_004364d0();
        local_d0 = (undefined1 *)*piVar7;
        puStack_e8 = DAT_0068a8f0;
      } while (local_d0 != DAT_0068a8f0);
    }
  }
  else {
    bVar17 = false;
    iVar10 = 0;
    iVar13 = DAT_006f2438;
    if (0 < DAT_006cd950) {
      puVar16 = &DAT_006f22e8;
      puVar12 = &DAT_006cd954;
      do {
        dVar1 = *(double *)(&DAT_006f2298 + iVar10 * 2);
        uVar3 = (&DAT_006f2298)[iVar10 * 2];
        *puVar16 = puVar12;
        dVar5 = _DAT_0064a660;
        *(undefined4 *)(&DAT_006f1d58 + iVar10) = uVar3;
        *(undefined4 *)((int)&DAT_006f1d58 + iVar10 * 8 + 4) = (&DAT_006f229c)[iVar10 * 2];
        if (dVar5 < dVar1) {
          bVar17 = true;
        }
        iVar10 = iVar10 + 1;
        puVar12 = puVar12 + 0x10;
        puVar16 = puVar16 + 1;
      } while (iVar10 < iVar8);
      iVar13 = DAT_006f2438;
      if (bVar17) {
        iVar13 = iVar10;
      }
    }
  }
  DAT_006f2438 = iVar13;
  iVar8 = DAT_006f2438 + -1;
  do {
    bVar17 = false;
    if (iVar8 < 1) break;
    puVar16 = &DAT_006f22ec;
    pdVar11 = (double *)&DAT_006f1d60;
    iVar13 = iVar8;
    do {
      if (((*(int *)(DAT_006cdbf8 + 0x180) < 2) && (*pdVar11 < pdVar11[-1])) ||
         ((*(int *)(DAT_006cdbf8 + 0x180) == 2 && (pdVar11[-1] < *pdVar11)))) {
        uVar3 = *puVar16;
        dVar1 = pdVar11[-1];
        *(undefined4 *)(pdVar11 + -1) = *(undefined4 *)pdVar11;
        *(undefined4 *)((int)pdVar11 + -4) = *(undefined4 *)((int)pdVar11 + 4);
        uVar4 = puVar16[-1];
        *pdVar11 = dVar1;
        puVar16[-1] = uVar3;
        *puVar16 = uVar4;
        bVar17 = true;
      }
      pdVar11 = pdVar11 + 1;
      puVar16 = puVar16 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  } while (bVar17);
  if (DAT_006f2438 == 0) {
    DAT_0067a698 = 2;
    return;
  }
  if (*(int *)(DAT_006cdbf8 + 0x180) < 2) {
    local_e4 = (undefined1 **)local_c8;
    puStack_e8 = DAT_006cdbf8;
    FUN_00568670(&puStack_e8);
    FUN_0043fd20();
    pbVar15 = DAT_006f22e8;
    if (DAT_006f22e8 != (byte *)0x0) {
      do {
        bVar2 = *pbVar15;
        bVar17 = bVar2 < *local_98;
        if (bVar2 != *local_98) {
LAB_00573e5a:
          iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00573e5f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar15[1];
        bVar17 = bVar2 < local_98[1];
        if (bVar2 != local_98[1]) goto LAB_00573e5a;
        local_98 = local_98 + 2;
        pbVar15 = pbVar15 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_00573e5f:
      if (iVar8 == 0) {
        DAT_0067a698 = 1;
        return;
      }
    }
  }
  else if (DAT_006f22e8 != (byte *)0x0) {
    pbVar15 = (byte *)(DAT_006cdc38 + 0x278);
    pbVar9 = DAT_006f22e8;
    do {
      bVar2 = *pbVar9;
      bVar17 = bVar2 < *pbVar15;
      if (bVar2 != *pbVar15) {
LAB_00573eb2:
        iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00573eb7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar17 = bVar2 < pbVar15[1];
      if (bVar2 != pbVar15[1]) goto LAB_00573eb2;
      pbVar9 = pbVar9 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00573eb7:
    if (iVar8 == 0) {
      DAT_0067a698 = 1;
      return;
    }
  }
  DAT_0067a698 = 0;
  return;
}

