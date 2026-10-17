
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a5af0(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  int *piStack_e8;
  int iStack_e4;
  ushort *puStack_dc;
  int iStack_d4;
  undefined1 local_ac [48];
  undefined4 local_7c [4];
  int iStack_6c;
  int iStack_58;
  
  if ((((*(uint *)(param_1 + 0xa4) & 0x10) == 0) || (*(int *)(param_1 + 0xc0) == 0)) ||
     ((*(uint *)(param_1 + 0xa4) & 2) == 0)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc0) + 0x28);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_1 + 0xc0) + 0x28);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(ushort **)(param_1 + 0x98) != (ushort *)0x0) {
    *(double *)(param_1 + 0x48) = (double)**(ushort **)(param_1 + 0x98);
  }
  FUN_005a4fd0();
  uVar5 = FUN_005ab6d0(local_ac,(float)((float10)*(double *)(param_1 + 0x70) -
                                       (float10)_DAT_0064c9f0));
  FUN_005e1060(*(undefined4 *)(param_1 + 0x80),0,uVar5);
  uVar5 = FUN_005ab6d0(local_ac,(float)((float10)*(double *)(param_1 + 0x70) -
                                       (float10)_DAT_0064c9f0));
  FUN_005e1060(*(undefined4 *)(param_1 + 0x88),0,uVar5);
  uVar5 = FUN_005ab6d0(local_ac,(float)((float10)*(double *)(param_1 + 0x70) -
                                       (float10)_DAT_0064c9f0));
  FUN_005e1060(*(undefined4 *)(param_1 + 0x90),0,uVar5);
  if ((*(byte *)(param_1 + 0xa4) & 8) == 0) {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0xc4),0);
  }
  else {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0xc4),1);
    if (*(int *)(param_1 + 0x94) != 0) {
      if ((DAT_00701510 != 0) && (*(int *)(param_1 + 200) != 0)) {
        puVar14 = local_7c;
        for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        local_7c[0] = 0x7c;
        local_7c[1] = 0x7ff9ee;
        iVar9 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,local_7c,0x11,0);
        if (iVar9 == 0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
          (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
          iVar9 = *(int *)(param_1 + 200);
          uVar11 = (uint)*(ushort *)(iVar9 + 0x14);
          if (iStack_58 != 0) {
            puStack_dc = *(ushort **)(*(int *)(param_1 + 0x94) + 8);
            if (iVar9 != 0) {
              puStack_dc = *(ushort **)(iVar9 + 8);
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x20) + 0xbb0);
            iStack_d4 = 0;
            if (uVar11 != 0) {
              piStack_e8 = &DAT_0067d388;
              do {
                piVar4 = piStack_e8;
                iVar6 = __ftol();
                iVar6 = iVar6 * iStack_6c + iStack_58;
                uVar10 = iStack_d4 + iVar9 & 0x80000001;
                bVar15 = uVar10 == 0;
                if ((int)uVar10 < 0) {
                  bVar15 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                }
                if (bVar15) {
                  iVar7 = FUN_005d3160();
                  if (iVar7 == 2) {
                    iStack_e4 = 0;
                    piStack_e8 = &DAT_0067d388;
                    puVar13 = puStack_dc;
                    do {
                      uVar10 = (iVar9 + iStack_e4) / 2 & 0x80000001;
                      bVar15 = uVar10 == 0;
                      if ((int)uVar10 < 0) {
                        bVar15 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (bVar15) {
                        iVar7 = *piVar4;
                        iVar3 = *piStack_e8;
                        iVar8 = __ftol();
                        uVar2 = *(ushort *)(iVar6 + (iVar8 + (iVar3 + iVar7) * 2) * 2);
                        *puVar13 = (ushort)((uVar2 >> 1 & 0x7800 | uVar2 & 0x780) >> 2 |
                                           uVar2 & 0x1e) >> 1 | *puVar13 & 0xf000;
                      }
                      iStack_e4 = iStack_e4 + 1;
                      puVar13 = puVar13 + 1;
                      piStack_e8 = piStack_e8 + 1;
                    } while (iStack_e4 < (int)uVar11);
                  }
                  else {
                    iStack_e4 = 0;
                    piVar12 = &DAT_0067d388;
                    puVar13 = puStack_dc;
                    do {
                      uVar10 = (iStack_e4 + iVar9) / 2 & 0x80000001;
                      bVar15 = uVar10 == 0;
                      if ((int)uVar10 < 0) {
                        bVar15 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (bVar15) {
                        iVar7 = *piVar12;
                        iVar3 = *piStack_e8;
                        iVar8 = __ftol();
                        uVar2 = *(ushort *)(iVar6 + (iVar8 + (iVar7 + iVar3) * 2) * 2);
                        *puVar13 = (ushort)((uVar2 >> 1 & 0x3c00 | uVar2 & 0x3c0) >> 1 |
                                           uVar2 & 0x1e) >> 1 | *puVar13 & 0xf000;
                      }
                      iStack_e4 = iStack_e4 + 1;
                      puVar13 = puVar13 + 1;
                      piVar12 = piVar12 + 1;
                    } while (iStack_e4 < (int)uVar11);
                  }
                }
                iStack_d4 = iStack_d4 + 1;
                piStack_e8 = piVar4 + 1;
                puStack_dc = puStack_dc + uVar11;
              } while (iStack_d4 < (int)uVar11);
            }
          }
          (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c,0);
        }
      }
      FUN_005bad10(0,0,0,0x3ff00000);
      if (*(int *)(param_1 + 200) != 0) {
        FUN_005bad10(0,0,0,0x3ff00000);
        FUN_005d29a0(1);
        return;
      }
    }
  }
  FUN_005d29a0(1);
  return;
}

