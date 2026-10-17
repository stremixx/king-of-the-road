
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7870(ushort *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int local_4;
  
  puVar3 = param_1;
  piVar4 = (int *)FUN_005b5b70();
  if ((*(byte *)(param_2 + 0x34) & 1) != 0) {
    local_4 = *param_3;
    iVar13 = param_3[1];
    iVar12 = param_3[3];
    if (param_4 < 0) {
      local_4 = local_4 - param_4;
      param_4 = 0;
    }
    if (param_5 < 0) {
      iVar13 = iVar13 - param_5;
      param_5 = 0;
    }
    uVar9 = (uint)*param_1;
    if ((param_4 < (int)uVar9) && (uVar7 = (uint)param_1[1], param_5 < (int)uVar7)) {
      param_1 = (ushort *)param_3[2];
      if ((int)uVar9 <= (param_3[2] - local_4) + param_4) {
        param_1 = (ushort *)((uVar9 - param_4) + -1 + local_4);
      }
      if ((int)uVar7 <= (iVar12 - iVar13) + param_5) {
        iVar12 = (uVar7 - param_5) + -1 + iVar13;
      }
      uVar9 = (uint)*(ushort *)(param_2 + 0x14);
      if (local_4 < (int)uVar9) {
        if (local_4 < 0) {
          param_4 = param_4 - local_4;
          local_4 = 0;
        }
        if ((local_4 <= (int)param_1) && (-1 < (int)param_1)) {
          if ((int)uVar9 <= (int)param_1) {
            param_1 = (ushort *)(uVar9 - 1);
          }
          uVar7 = (uint)*(ushort *)(param_2 + 0x16);
          if (iVar13 < (int)uVar7) {
            if (iVar13 < 0) {
              param_5 = param_5 - iVar13;
              iVar13 = 0;
            }
            if ((-1 < iVar12) && (iVar13 <= iVar12)) {
              if ((int)uVar7 <= iVar12) {
                iVar12 = uVar7 - 1;
              }
              iVar11 = ((int)param_1 - local_4) + 1;
              if ((*(byte *)(param_2 + 0x34) & 2) != 0) {
                if ((*(byte *)((int)puVar3 + 0xd) & 8) != 0) {
                  FUN_005d7050(local_4,iVar13,param_4,param_5,iVar11,(iVar12 - iVar13) + 1,uVar7,
                               *(undefined4 *)(param_2 + 0x48));
                  return;
                }
                if ((*(int *)(puVar3 + 0x30) != 0) &&
                   ((*(byte *)(*(int *)(puVar3 + 0x30) + 0xd) & 8) != 0)) {
                  FUN_005d7050(local_4,iVar13,*(int *)(puVar3 + 0x32) + param_4,
                               *(int *)(puVar3 + 0x34) + param_5,iVar11,(iVar12 - iVar13) + 1,uVar7,
                               *(undefined4 *)(param_2 + 0x48));
                  return;
                }
              }
              if (*(int *)(puVar3 + *(int *)(puVar3 + 8) * 2 + 0xc) != 0) {
                param_1 = (ushort *)
                          ((uint)puVar3[2] * param_4 +
                           *(int *)(puVar3 + *(int *)(puVar3 + 8) * 2 + 0xc) +
                          (uint)puVar3[3] * param_5);
                pbVar5 = (byte *)((uVar9 * iVar13 + local_4) * (uint)*(ushort *)(param_2 + 0x18) +
                                 *(int *)(param_2 + 8));
                iVar6 = *(int *)(puVar3 + 0x28);
                if (iVar6 != 0) {
                  if (iVar6 != 2) {
                    if (iVar6 != 4) {
                      if (iVar6 != 3) {
                        return;
                      }
                      iVar6 = piVar4[199];
                      if (piVar4 == (int *)0x0) {
                        return;
                      }
                      if (*(float *)(puVar3 + 0x2c) == (float)_DAT_0064a668) {
                        return;
                      }
                      if (iVar12 < iVar13) {
                        return;
                      }
                      param_4 = (iVar12 - iVar13) + 1;
                      do {
                        if (0 < iVar11) {
                          pbVar8 = pbVar5;
                          param_5 = iVar11;
                          do {
                            bVar10 = *pbVar8;
                            if (bVar10 != 0) {
                              if (bVar10 == 0xff) {
                                bVar10 = (byte)puVar3[0x2e];
                              }
                              else {
                                bVar10 = *(byte *)(*(int *)(*piVar4 +
                                                           (int)((longlong)(ulonglong)bVar10 /
                                                                (longlong)
                                                                (int)(0x100 / (longlong)iVar6)) * 4)
                                                   + (uint)(byte)puVar3[0x2e] * 0x100 +
                                                  (uint)pbVar8[(int)param_1 - (int)pbVar5]);
                              }
                              pbVar8[(int)param_1 - (int)pbVar5] = bVar10;
                            }
                            pbVar8 = pbVar8 + 1;
                            param_5 = param_5 + -1;
                          } while (param_5 != 0);
                        }
                        pbVar5 = pbVar5 + *(ushort *)(param_2 + 0x14);
                        param_1 = (ushort *)((int)param_1 + (uint)puVar3[3]);
                        param_4 = param_4 + -1;
                      } while (param_4 != 0);
                      return;
                    }
                    if (piVar4 == (int *)0x0) {
                      return;
                    }
                    iVar6 = __ftol();
                    uVar9 = *(uint *)(*piVar4 + iVar6 * 4);
                    if (iVar12 < iVar13) {
                      return;
                    }
                    iVar12 = (iVar12 - iVar13) + 1;
                    uVar7 = uVar9;
                    do {
                      uVar1 = puVar3[2];
                      if (*(float *)(puVar3 + 0x2c) == (float)_DAT_0064a668) {
                        if (uVar1 == 1) {
                          FUN_005fde84(param_1,pbVar5,iVar11);
                        }
                        else {
joined_r0x005b7bef:
                          if (uVar1 == 2) {
                            FUN_005fdea7(param_1,pbVar5,iVar11);
                          }
                        }
                      }
                      else {
                        if (uVar1 != 1) goto joined_r0x005b7bef;
                        FUN_005fdf44(uVar9,param_1,pbVar5,iVar11,
                                     CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),uVar1) >> 8),
                                              (char)puVar3[0x2e]));
                      }
                      pbVar5 = pbVar5 + (uint)*(ushort *)(param_2 + 0x18) *
                                        (uint)*(ushort *)(param_2 + 0x14);
                      uVar7 = (uint)puVar3[3];
                      param_1 = (ushort *)((int)param_1 + uVar7);
                      iVar12 = iVar12 + -1;
                      if (iVar12 == 0) {
                        return;
                      }
                    } while( true );
                  }
                  if (*(float *)(puVar3 + 0x2c) != (float)_DAT_0064a660) {
                    if (piVar4 == (int *)0x0) {
                      return;
                    }
                    if (*(float *)(puVar3 + 0x2c) == (float)_DAT_0064a668) {
                      return;
                    }
                    iVar6 = __ftol();
                    uVar2 = *(undefined4 *)(*piVar4 + iVar6 * 4);
                    if (iVar12 < iVar13) {
                      return;
                    }
                    iVar12 = (iVar12 - iVar13) + 1;
                    do {
                      if (puVar3[2] == 1) {
                        FUN_005fded0(uVar2,param_1,pbVar5,iVar11);
                      }
                      else if (puVar3[2] == 2) {
                        FUN_005fe073(uVar2,param_1,pbVar5,iVar11);
                      }
                      pbVar5 = pbVar5 + (uint)*(ushort *)(param_2 + 0x18) *
                                        (uint)*(ushort *)(param_2 + 0x14);
                      param_1 = (ushort *)((int)param_1 + (uint)puVar3[3]);
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                    return;
                  }
                }
                if (iVar13 <= iVar12) {
                  param_5 = (iVar12 - iVar13) + 1;
                  do {
                    uVar1 = puVar3[2];
                    pbVar8 = pbVar5;
                    pbVar14 = (byte *)param_1;
                    for (uVar9 = (uint)uVar1 * iVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar8;
                      pbVar8 = pbVar8 + 4;
                      pbVar14 = pbVar14 + 4;
                    }
                    for (uVar9 = (uint)uVar1 * iVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *pbVar14 = *pbVar8;
                      pbVar8 = pbVar8 + 1;
                      pbVar14 = pbVar14 + 1;
                    }
                    pbVar5 = pbVar5 + (uint)*(ushort *)(param_2 + 0x18) *
                                      (uint)*(ushort *)(param_2 + 0x14);
                    param_1 = (ushort *)((int)param_1 + (uint)puVar3[3]);
                    param_5 = param_5 + -1;
                  } while (param_5 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

