
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005f0180(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int local_18;
  int local_14;
  int local_10;
  
  iVar9 = param_2;
  iVar2 = *(int *)(param_2 + 0x10);
  uVar10 = *(undefined4 *)(param_2 + 0x14);
  if (*(short *)(param_1 + 0x34) == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x60) == 3) {
    if ((*(int *)(param_2 + 4) == 3) && (local_14 = 0, 0 < *(int *)(param_2 + 8))) {
      iVar5 = __ftol();
      param_2 = 0;
      do {
        iVar13 = *(int *)(iVar9 + 0xc);
        uVar6 = __ftol();
        uVar7 = __ftol();
        uVar8 = __ftol();
        *(uint *)(iVar13 + param_2) = ((uVar6 | iVar5 << 8) << 8 | uVar7) << 8 | uVar8;
        local_14 = local_14 + 1;
        param_2 = param_2 + 0xc;
      } while (local_14 < *(int *)(iVar9 + 8));
    }
  }
  else {
    iVar9 = 0;
    if (*(short *)(param_1 + 0x34) != 0) {
      do {
        FUN_005e54e0(*(undefined4 *)(param_1 + 0x30),iVar2,uVar10,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x34));
    }
  }
  bVar3 = false;
  iVar9 = iVar2 + (uint)*(ushort *)(param_1 + 0x62) * 0x7c;
  do {
    if ((*(uint *)(iVar9 + 0x20) & 0x80c) != 0) {
      bVar3 = true;
    }
  } while ((-1 < *(int *)(iVar9 + 0x2c)) &&
          (iVar9 = iVar2 + *(int *)(iVar9 + 0x2c) * 0x7c, iVar9 != 0));
  if (*(short *)(param_1 + 0x60) == 1) {
    uVar4 = *(short *)(param_1 + 0x34) * 3;
    *(ushort *)(param_1 + 0x3c) = uVar4;
    iVar9 = FUN_00631d33((uint)uVar4 << 5);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0x54) = iVar9;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x38) + 0x40);
    *(byte *)(param_1 + 0x48) = bVar1;
    if (bVar1 != 0) {
      uVar10 = FUN_00631d33((uint)bVar1 * (uint)*(ushort *)(param_1 + 0x34) * 0x18);
      *(undefined4 *)(param_1 + 0x4c) = uVar10;
    }
    if (bVar3) {
      uVar10 = FUN_00631d33((*(byte *)(param_1 + 0x48) + 1) * (uint)*(ushort *)(param_1 + 0x34) *
                            0x18);
      *(undefined4 *)(param_1 + 0x50) = uVar10;
    }
    local_10 = 0;
    if (*(short *)(param_1 + 0x34) != 0) {
      iVar5 = 0;
      param_2 = -1;
      local_18 = -2;
      iVar13 = -3;
      iVar9 = 0;
      do {
        puVar14 = *(undefined4 **)(iVar5 + 0x4c + *(int *)(param_1 + 0x38));
        puVar15 = (undefined4 *)(iVar9 + *(int *)(param_1 + 0x54));
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar11 = iVar9 + 0x40;
        puVar14 = (undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x20);
        puVar15 = (undefined4 *)(iVar9 + 0x20 + *(int *)(param_1 + 0x54));
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar9 = iVar9 + 0x60;
        iVar13 = iVar13 + 3;
        puVar14 = (undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x40);
        puVar15 = (undefined4 *)(iVar11 + *(int *)(param_1 + 0x54));
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        local_18 = local_18 + 3;
        param_2 = param_2 + 3;
        if (bVar3) {
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * iVar13 * 8) =
               *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x18);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * iVar13 * 8) =
               *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x1c);
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * local_18 * 8)
               = *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x38);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * local_18 * 8) =
               *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x3c);
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * param_2 * 8)
               = *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x58);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * param_2 * 8) =
               *(undefined4 *)(*(int *)(iVar5 + 0x4c + *(int *)(param_1 + 0x38)) + 0x5c);
        }
        iVar11 = 0;
        uVar6 = (uint)*(byte *)(param_1 + 0x48);
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x4c) + (uVar6 * iVar13 + iVar11) * 8) =
                 *(undefined4 *)(*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) + iVar11 * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 + ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8
             ) = *(undefined4 *)(*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) + 4 + iVar11 * 8)
            ;
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8)
                 = *(undefined4 *)
                    (*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) +
                    ((uint)*(byte *)(param_1 + 0x48) + iVar11) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 +
             ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) + 4 +
                  ((uint)*(byte *)(param_1 + 0x48) + iVar11) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) +
                  (iVar11 + (uint)*(byte *)(param_1 + 0x48) * 2) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 +
             ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(iVar5 + 0x44 + *(int *)(param_1 + 0x38)) + 4 +
                  (iVar11 + (uint)*(byte *)(param_1 + 0x48) * 2) * 8);
            if (bVar3) {
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * iVar13 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * iVar13 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * local_18 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * local_18 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * param_2 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * param_2 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8);
            }
            uVar6 = (uint)*(byte *)(param_1 + 0x48);
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar6);
        }
        local_10 = local_10 + 1;
        iVar5 = iVar5 + 0x58;
      } while (local_10 < (int)(uint)*(ushort *)(param_1 + 0x34));
    }
    iVar9 = *(int *)(param_1 + 0x38);
  }
  else {
    if (*(short *)(param_1 + 0x60) != 2) goto LAB_005f0b5d;
    uVar4 = *(short *)(param_1 + 0x34) * 3;
    *(ushort *)(param_1 + 0x3c) = uVar4;
    iVar9 = FUN_00631d33((uint)uVar4 << 5);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0x58) = iVar9;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x38) + 0x40);
    *(byte *)(param_1 + 0x48) = bVar1;
    if (bVar1 != 0) {
      uVar10 = FUN_00631d33((uint)bVar1 * (uint)*(ushort *)(param_1 + 0x34) * 0x18);
      *(undefined4 *)(param_1 + 0x4c) = uVar10;
    }
    if (bVar3) {
      uVar10 = FUN_00631d33((*(byte *)(param_1 + 0x48) + 1) * (uint)*(ushort *)(param_1 + 0x34) *
                            0x18);
      *(undefined4 *)(param_1 + 0x50) = uVar10;
    }
    local_10 = 0;
    if (*(short *)(param_1 + 0x34) != 0) {
      iVar5 = 0;
      param_2 = -1;
      local_18 = -2;
      iVar13 = -3;
      iVar9 = 0;
      do {
        puVar14 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 0x50 + iVar5);
        puVar15 = (undefined4 *)(iVar9 + *(int *)(param_1 + 0x58));
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar11 = iVar9 + 0x40;
        puVar14 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x20);
        puVar15 = (undefined4 *)(iVar9 + 0x20 + *(int *)(param_1 + 0x58));
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar9 = iVar9 + 0x60;
        iVar13 = iVar13 + 3;
        puVar14 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x40);
        puVar15 = (undefined4 *)(iVar11 + *(int *)(param_1 + 0x58));
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        local_18 = local_18 + 3;
        param_2 = param_2 + 3;
        if (bVar3) {
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * iVar13 * 8) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x18);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * iVar13 * 8) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x1c);
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * local_18 * 8)
               = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x38);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * local_18 * 8) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x3c);
          *(undefined4 *)(*(int *)(param_1 + 0x50) + (*(byte *)(param_1 + 0x48) + 1) * param_2 * 8)
               = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x58);
          *(undefined4 *)
           (*(int *)(param_1 + 0x50) + 4 + (*(byte *)(param_1 + 0x48) + 1) * param_2 * 8) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x50 + iVar5) + 0x5c);
        }
        iVar11 = 0;
        uVar6 = (uint)*(byte *)(param_1 + 0x48);
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x4c) + (uVar6 * iVar13 + iVar11) * 8) =
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) + iVar11 * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 + ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8
             ) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) + 4 + iVar11 * 8)
            ;
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8)
                 = *(undefined4 *)
                    (*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) +
                    ((uint)*(byte *)(param_1 + 0x48) + iVar11) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 +
             ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) + 4 +
                  ((uint)*(byte *)(param_1 + 0x48) + iVar11) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) +
                  (iVar11 + (uint)*(byte *)(param_1 + 0x48) * 2) * 8);
            *(undefined4 *)
             (*(int *)(param_1 + 0x4c) + 4 +
             ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0x38) + 0x44 + iVar5) + 4 +
                  (iVar11 + (uint)*(byte *)(param_1 + 0x48) * 2) * 8);
            if (bVar3) {
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * iVar13 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * iVar13 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * iVar13 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * local_18 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * local_18 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * local_18 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 8 +
               ((*(byte *)(param_1 + 0x48) + 1) * param_2 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) +
                    ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8);
              *(undefined4 *)
               (*(int *)(param_1 + 0x50) + 0xc +
               ((*(byte *)(param_1 + 0x48) + 1) * param_2 + iVar11) * 8) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x4c) + 4 +
                    ((uint)*(byte *)(param_1 + 0x48) * param_2 + iVar11) * 8);
            }
            uVar6 = (uint)*(byte *)(param_1 + 0x48);
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar6);
        }
        local_10 = local_10 + 1;
        iVar5 = iVar5 + 0x58;
      } while (local_10 < (int)(uint)*(ushort *)(param_1 + 0x34));
    }
    iVar9 = *(int *)(param_1 + 0x38);
  }
  if (iVar9 != 0) {
    FUN_0061ccb5(iVar9,0x58,*(undefined4 *)(iVar9 + -4),FUN_005e4dd0);
    FUN_00631d5c(iVar9 + -4);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
LAB_005f0b5d:
  if (*(short *)(param_1 + 0x60) != 0) {
    FUN_005e5300(iVar2,*(undefined2 *)(param_1 + 0x62));
  }
  return;
}

