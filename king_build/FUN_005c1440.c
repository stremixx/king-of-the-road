
void __thiscall FUN_005c1440(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint unaff_retaddr;
  uint uVar15;
  int iStack_98;
  uint uStack_88;
  int iStack_80;
  undefined4 local_7c [4];
  int iStack_6c;
  int *piStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  puVar12 = local_7c;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_7c[0] = 0x7c;
  local_7c[1] = 0x7ff9ee;
  iVar4 = (**(code **)(*param_2 + 100))(param_2,0,local_7c,0x21,0);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 0x458);
    uVar6 = *(uint *)(param_1 + 0x45c);
    if ((((iStack_c < (int)param_1) && (iStack_8 < (int)uStack_88)) &&
        (uVar10 = iStack_c + uStack_4, uVar10 != 0)) &&
       (uVar7 = iStack_8 + unaff_retaddr, uVar7 != 0)) {
      if (iStack_c < 0) {
        iStack_c = 0;
        uStack_4 = uVar10;
      }
      if (iStack_8 < 0) {
        iStack_8 = 0;
        unaff_retaddr = uVar7;
      }
      if (param_1 < iStack_c + uStack_4) {
        uStack_4 = param_1 - iStack_c;
      }
      uVar10 = uStack_4;
      if (uStack_88 < iStack_8 + unaff_retaddr) {
        unaff_retaddr = uStack_88 - iStack_8;
      }
      uVar7 = (uint)(*(ushort *)(iStack_98 + 0x462) >> 3);
      if (((*(byte *)(iStack_98 + 0x8c0) & 1) == 0) ||
         ((uVar1 == uStack_4 && (uVar6 == unaff_retaddr)))) {
        iVar4 = FUN_005d3160();
        if (iVar4 == 2) {
          puVar8 = (ushort *)(iStack_80 * iStack_8 + iStack_6c + iStack_c * 2);
          if (unaff_retaddr != 0) {
            iVar4 = (uVar6 - 1) * uVar7 * uVar1;
            uVar6 = uVar10;
            puVar9 = puVar8;
            iVar5 = iVar4;
            do {
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                uVar3 = *(uint *)(iVar4 + *(int *)(iStack_98 + 0x89c));
                iVar4 = iVar4 + uVar7;
                *puVar8 = (ushort)((uVar3 >> 10 & 0x3f | (uVar3 >> 0x13) << 6) << 5) |
                          (ushort)(uVar3 >> 3) & 0x1f;
                puVar8 = puVar8 + 1;
              }
              iVar4 = iVar5 - uVar7 * uVar1;
              puVar8 = (ushort *)((int)puVar9 + iStack_80);
              unaff_retaddr = unaff_retaddr - 1;
              uVar6 = uVar10;
              puVar9 = puVar8;
              iVar5 = iVar4;
            } while (unaff_retaddr != 0);
            (**(code **)(*piStack_10 + 0x80))(piStack_10,0);
            return;
          }
        }
        else {
          iVar4 = FUN_005d3160();
          if (iVar4 == 3) {
            puVar8 = (ushort *)(iStack_80 * iStack_8 + iStack_6c + iStack_c * 2);
            if (unaff_retaddr != 0) {
              iVar4 = (uVar6 - 1) * uVar7 * uVar1;
              uVar6 = uVar10;
              puVar9 = puVar8;
              iVar5 = iVar4;
              do {
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  uVar3 = *(uint *)(iVar4 + *(int *)(iStack_98 + 0x89c));
                  iVar4 = iVar4 + uVar7;
                  *puVar8 = (ushort)(((uVar3 >> 0x13 & 0x1f) << 5 | uVar3 >> 0xb & 0x1f) << 5) |
                            (ushort)(uVar3 >> 3) & 0x1f;
                  puVar8 = puVar8 + 1;
                }
                iVar4 = iVar5 - uVar7 * uVar1;
                puVar8 = (ushort *)((int)puVar9 + iStack_80);
                unaff_retaddr = unaff_retaddr - 1;
                uVar6 = uVar10;
                puVar9 = puVar8;
                iVar5 = iVar4;
              } while (unaff_retaddr != 0);
              (**(code **)(*piStack_10 + 0x80))(piStack_10,0);
              return;
            }
          }
          else if ((uVar7 == 1) &&
                  (puVar12 = (undefined4 *)(iStack_80 * iStack_8 + iStack_6c + iStack_c * 2),
                  unaff_retaddr != 0)) {
            iVar4 = (uVar6 - 1) * uVar1;
            do {
              puVar11 = (undefined4 *)(iVar4 + *(int *)(iStack_98 + 0x89c));
              puVar14 = puVar12;
              for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar14 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar14 = puVar14 + 1;
              }
              iVar4 = iVar4 - uVar1;
              for (uVar6 = uVar10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
              puVar12 = (undefined4 *)((int)puVar12 + iStack_80);
              unaff_retaddr = unaff_retaddr - 1;
            } while (unaff_retaddr != 0);
          }
        }
      }
      else {
        iVar4 = FUN_005d3160();
        if (iVar4 == 2) {
          puVar8 = (ushort *)(iStack_80 * iStack_8 + iStack_6c + iStack_c * 2);
          if (unaff_retaddr != 0) {
            uVar15 = 0;
            uVar3 = unaff_retaddr;
            do {
              if (uVar10 != 0) {
                uVar13 = 0;
                puVar9 = puVar8;
                uVar2 = uVar10;
                do {
                  uVar10 = *(uint *)((uVar13 / uVar10 +
                                     ((uVar6 - uVar15 / unaff_retaddr) + -1) * uVar1) * uVar7 +
                                    *(int *)(iStack_98 + 0x89c));
                  uVar13 = uVar13 + uVar1;
                  *puVar9 = (ushort)((uVar10 >> 10 & 0x3f | (uVar10 >> 0x13) << 6) << 5) |
                            (ushort)(uVar10 >> 3) & 0x1f;
                  uVar2 = uVar2 - 1;
                  puVar9 = puVar9 + 1;
                  uVar10 = uStack_4;
                } while (uVar2 != 0);
              }
              uVar15 = uVar15 + uVar6;
              puVar8 = (ushort *)((int)puVar8 + iStack_80);
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            (**(code **)(*piStack_10 + 0x80))(piStack_10,0);
            return;
          }
        }
        else {
          iVar4 = FUN_005d3160();
          if ((iVar4 == 3) &&
             (puVar8 = (ushort *)(iStack_80 * iStack_8 + iStack_6c + iStack_c * 2),
             unaff_retaddr != 0)) {
            uVar15 = 0;
            uVar3 = unaff_retaddr;
            do {
              if (uVar10 != 0) {
                uVar13 = 0;
                puVar9 = puVar8;
                uVar2 = uVar10;
                do {
                  uVar10 = *(uint *)((uVar13 / uVar10 +
                                     ((uVar6 - uVar15 / unaff_retaddr) + -1) * uVar1) * uVar7 +
                                    *(int *)(iStack_98 + 0x89c));
                  uVar13 = uVar13 + uVar1;
                  *puVar9 = (ushort)(((uVar10 >> 0x13 & 0x1f) << 5 | uVar10 >> 0xb & 0x1f) << 5) |
                            (ushort)(uVar10 >> 3) & 0x1f;
                  uVar2 = uVar2 - 1;
                  puVar9 = puVar9 + 1;
                  uVar10 = uStack_4;
                } while (uVar2 != 0);
              }
              uVar15 = uVar15 + uVar6;
              puVar8 = (ushort *)((int)puVar8 + iStack_80);
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            (**(code **)(*piStack_10 + 0x80))(piStack_10,0);
            return;
          }
        }
      }
      (**(code **)(*piStack_10 + 0x80))(piStack_10,0);
      return;
    }
  }
  else {
    FUN_005d2250(s_Mmedia_can_t_lock_BackBuffer_0067e36c,0);
  }
  return;
}

