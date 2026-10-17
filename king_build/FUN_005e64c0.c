
int * FUN_005e64c0(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  int local_24;
  int local_20;
  byte local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14[0] = FUN_0061f43c(param_1);
  local_14[1] = FUN_0061f43c(param_1);
  local_14[2] = FUN_0061f43c(param_1);
  local_14[3] = FUN_0061f43c(param_1);
  local_14[4] = 0;
  pbVar11 = &DAT_00682378;
  pbVar4 = local_14;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_005e653e:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_005e6543;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_005e653e;
    pbVar4 = pbVar4 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_005e6543:
  if (iVar5 != 0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  iVar5 = FUN_00631d33(0x330);
  local_4 = 0;
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_005b8b90();
  }
  local_4 = 0xffffffff;
  piVar6[199] = 0;
  piVar6[200] = 0;
  *piVar6 = 0;
  piVar6[2] = 0;
  piVar6[0xca] = 0;
  iVar5 = FUN_005aa810(param_1);
  iVar7 = FUN_0061db0f(param_1);
  iVar8 = FUN_0061db0f(param_1);
  if (iVar8 < iVar5 + iVar7) {
    local_14[4] = 0;
    do {
      local_14[0] = FUN_0061f43c(param_1);
      local_14[1] = FUN_0061f43c(param_1);
      local_14[2] = FUN_0061f43c(param_1);
      local_14[3] = FUN_0061f43c(param_1);
      iVar8 = FUN_005aa810(param_1);
      pbVar11 = &DAT_00682370;
      pbVar4 = local_14;
      do {
        bVar1 = *pbVar4;
        bVar13 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_005e6627:
          iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_005e662c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar13 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_005e6627;
        pbVar4 = pbVar4 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar9 = 0;
LAB_005e662c:
      if (iVar9 == 0) {
        iVar9 = iVar8 / 3;
        if (0 < iVar9) {
          puVar12 = (undefined1 *)((int)piVar6 + 0x19);
          do {
            uVar2 = FUN_0061f43c(param_1);
            puVar12[-1] = uVar2;
            uVar2 = FUN_0061f43c(param_1);
            *puVar12 = uVar2;
            uVar2 = FUN_0061f43c(param_1);
            puVar12[1] = uVar2;
            puVar12 = puVar12 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        pbVar11 = &DAT_00682368;
        pbVar4 = local_14;
        do {
          bVar1 = *pbVar4;
          bVar13 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_005e66a4:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_005e66a9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar13 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_005e66a4;
          pbVar4 = pbVar4 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_005e66a9:
        if (iVar9 == 0) {
          piVar6[0xca] = 1;
          iVar9 = FUN_005aa810(param_1);
          piVar6[199] = iVar9;
          iVar9 = FUN_005aa810(param_1);
          piVar6[0xc6] = iVar9;
          FUN_005aa810(param_1);
          iVar9 = FUN_00631d33(piVar6[199] << 2);
          *piVar6 = iVar9;
          iVar9 = FUN_00631d33(piVar6[199] << 1);
          piVar6[1] = iVar9;
          local_20 = 0;
          if (0 < piVar6[199]) {
            do {
              uVar14 = FUN_00631d33(piVar6[0xc6] << 8);
              *(undefined4 *)(*piVar6 + local_20 * 4) = uVar14;
              uVar3 = FUN_0062a170(*(undefined4 *)(*piVar6 + local_20 * 4),piVar6[0xc6] << 8);
              *(undefined2 *)(piVar6[1] + local_20 * 2) = uVar3;
              if (*(int *)(*piVar6 + local_20 * 4) == 0) goto LAB_005e6cd7;
              local_24 = 0;
              if (0 < piVar6[0xc6]) {
                do {
                  iVar9 = 0;
                  do {
                    uVar2 = FUN_0061f43c(param_1);
                    iVar9 = iVar9 + 1;
                    *(undefined1 *)
                     (*(int *)(*piVar6 + local_20 * 4) + local_24 * 0x100 + -1 + iVar9) = uVar2;
                  } while (iVar9 < 0x100);
                  local_24 = local_24 + 1;
                } while (local_24 < piVar6[0xc6]);
              }
              local_20 = local_20 + 1;
            } while (local_20 < piVar6[199]);
          }
        }
        else {
          pbVar11 = &DAT_00682360;
          pbVar4 = local_14;
          do {
            bVar1 = *pbVar4;
            bVar13 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_005e67ed:
              iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_005e67f2;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar13 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_005e67ed;
            pbVar4 = pbVar4 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar9 = 0;
LAB_005e67f2:
          if (iVar9 == 0) {
            piVar6[0xca] = 2;
            iVar9 = FUN_005aa810(param_1);
            piVar6[199] = iVar9;
            iVar9 = FUN_005aa810(param_1);
            piVar6[0xc6] = iVar9;
            FUN_005aa810(param_1);
            iVar9 = FUN_00631d33(piVar6[199] << 2);
            *piVar6 = iVar9;
            iVar9 = FUN_00631d33(piVar6[199] << 1);
            piVar6[1] = iVar9;
            local_20 = 0;
            if (0 < piVar6[199]) {
              do {
                uVar14 = FUN_00631d33(piVar6[0xc6] << 0x10);
                *(undefined4 *)(*piVar6 + local_20 * 4) = uVar14;
                *(undefined2 *)(piVar6[1] + local_20 * 2) = 0;
                iVar9 = *(int *)(*piVar6 + local_20 * 4);
                if (iVar9 == 0) goto LAB_005e6cd7;
                FUN_0061d8bf(iVar9,piVar6[0xc6] << 0x10,1,param_1);
                local_20 = local_20 + 1;
              } while (local_20 < piVar6[199]);
            }
          }
          else {
            pbVar11 = &DAT_0068235c;
            pbVar4 = local_14;
            do {
              bVar1 = *pbVar4;
              bVar13 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_005e68d7:
                iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_005e68dc;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar13 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_005e68d7;
              pbVar4 = pbVar4 + 2;
              pbVar11 = pbVar11 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_005e68dc:
            if (iVar9 == 0) {
              piVar6[0xca] = 1;
              iVar9 = FUN_005aa810(param_1);
              piVar6[0xcb] = iVar9;
              iVar9 = FUN_005aa810(param_1);
              piVar6[200] = iVar9;
              FUN_005aa810(param_1);
              iVar9 = FUN_00631d33(piVar6[200] << 2);
              piVar6[2] = iVar9;
              iVar9 = FUN_00631d33(piVar6[200] << 1);
              piVar6[3] = iVar9;
              iVar9 = 0;
              if (0 < piVar6[200]) {
                do {
                  uVar14 = FUN_00631d33(0x100);
                  *(undefined4 *)(piVar6[2] + iVar9 * 4) = uVar14;
                  uVar3 = FUN_0062a170(*(undefined4 *)(piVar6[2] + iVar9 * 4),0x100);
                  *(undefined2 *)(piVar6[3] + iVar9 * 2) = uVar3;
                  if (*(int *)(piVar6[2] + iVar9 * 4) == 0) goto LAB_005e6ce0;
                  iVar10 = 0;
                  do {
                    uVar2 = FUN_0061f43c(param_1);
                    iVar10 = iVar10 + 1;
                    *(undefined1 *)(*(int *)(piVar6[2] + iVar9 * 4) + -1 + iVar10) = uVar2;
                  } while (iVar10 < 0x100);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < piVar6[200]);
              }
            }
            else {
              pbVar11 = &DAT_00682354;
              pbVar4 = local_14;
              do {
                bVar1 = *pbVar4;
                bVar13 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_005e69d9:
                  iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_005e69de;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar13 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_005e69d9;
                pbVar4 = pbVar4 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar9 = 0;
LAB_005e69de:
              if (iVar9 == 0) {
                piVar6[0xca] = 2;
                iVar9 = FUN_005aa810(param_1);
                piVar6[0xcb] = iVar9;
                iVar9 = FUN_005aa810(param_1);
                piVar6[200] = iVar9;
                FUN_005aa810(param_1);
                iVar9 = FUN_00631d33(piVar6[200] << 2);
                piVar6[2] = iVar9;
                iVar9 = FUN_00631d33(piVar6[200] << 1);
                piVar6[3] = iVar9;
                iVar9 = 0;
                if (0 < piVar6[200]) {
                  do {
                    uVar14 = FUN_00631d33(0x10000);
                    *(undefined4 *)(piVar6[2] + iVar9 * 4) = uVar14;
                    *(undefined2 *)(piVar6[3] + iVar9 * 2) = 0;
                    iVar10 = *(int *)(piVar6[2] + iVar9 * 4);
                    if (iVar10 == 0) goto LAB_005e6ce0;
                    FUN_0061d8bf(iVar10,0x10000,1,param_1);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < piVar6[200]);
                }
              }
              else {
                pbVar11 = &DAT_0068234c;
                pbVar4 = local_14;
                do {
                  bVar1 = *pbVar4;
                  bVar13 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_005e6abc:
                    iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_005e6ac1;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar13 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_005e6abc;
                  pbVar4 = pbVar4 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar9 = 0;
LAB_005e6ac1:
                if (iVar9 == 0) {
                  piVar6[0xca] = 1;
                  FUN_005aa810(param_1);
                  iVar9 = FUN_005aa810(param_1);
                  piVar6[0xc9] = iVar9;
                  FUN_005aa810(param_1);
                  iVar9 = FUN_00631d33(piVar6[0xc9] << 2);
                  piVar6[4] = iVar9;
                  iVar9 = FUN_00631d33(piVar6[0xc9] << 1);
                  piVar6[5] = iVar9;
                  iVar9 = 0;
                  if (0 < piVar6[0xc9]) {
                    do {
                      uVar14 = FUN_00631d33(0x100);
                      *(undefined4 *)(piVar6[4] + iVar9 * 4) = uVar14;
                      uVar3 = FUN_0062a170(*(undefined4 *)(piVar6[4] + iVar9 * 4),0x100);
                      *(undefined2 *)(piVar6[5] + iVar9 * 2) = uVar3;
                      if (*(int *)(piVar6[4] + iVar9 * 4) == 0) goto LAB_005e6ce9;
                      iVar10 = 0;
                      do {
                        uVar2 = FUN_0061f43c(param_1);
                        iVar10 = iVar10 + 1;
                        *(undefined1 *)(*(int *)(piVar6[4] + iVar9 * 4) + -1 + iVar10) = uVar2;
                      } while (iVar10 < 0x100);
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < piVar6[0xc9]);
                  }
                }
                else {
                  pbVar11 = &DAT_00682344;
                  pbVar4 = local_14;
                  do {
                    bVar1 = *pbVar4;
                    bVar13 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_005e6bb8:
                      iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_005e6bbd;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar13 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_005e6bb8;
                    pbVar4 = pbVar4 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_005e6bbd:
                  iVar10 = iVar8;
                  if (iVar9 == 0) {
                    piVar6[0xca] = 2;
                    FUN_005aa810(param_1);
                    iVar9 = FUN_005aa810(param_1);
                    piVar6[0xc9] = iVar9;
                    FUN_005aa810(param_1);
                    iVar9 = FUN_00631d33(piVar6[0xc9] << 2);
                    piVar6[4] = iVar9;
                    iVar9 = FUN_00631d33(piVar6[0xc9] << 1);
                    piVar6[5] = iVar9;
                    iVar9 = 0;
                    if (0 < piVar6[0xc9]) {
                      do {
                        uVar14 = FUN_00631d33(0x10000);
                        *(undefined4 *)(piVar6[4] + iVar9 * 4) = uVar14;
                        *(undefined2 *)(piVar6[5] + iVar9 * 2) = 0;
                        iVar10 = *(int *)(piVar6[4] + iVar9 * 4);
                        if (iVar10 == 0) goto LAB_005e6ce9;
                        FUN_0061d8bf(iVar10,0x10000,1,param_1);
                        iVar9 = iVar9 + 1;
                      } while (iVar9 < piVar6[0xc9]);
                    }
                  }
                  else {
                    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
                      FUN_0061f43c(param_1);
                    }
                  }
                }
              }
            }
          }
        }
      }
      for (iVar8 = (iVar8 + 3U & 0xfffffffc) - iVar8; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_0061f43c(param_1);
      }
      iVar8 = FUN_0061db0f(param_1);
    } while (iVar8 < iVar5 + iVar7);
  }
  iVar5 = FUN_005d7a00();
  if (piVar6[0xca] == iVar5) {
    if (*piVar6 == 0) {
      FUN_005b8f00(1,5);
    }
    if (piVar6[2] == 0) {
      FUN_005b9210(0x20,4);
    }
    if (piVar6[4] != 0) {
      ExceptionList = local_c;
      return piVar6;
    }
    uVar14 = 0x20;
  }
  else {
    FUN_005b8df0();
    iVar5 = FUN_005d7a00();
    piVar6[0xca] = iVar5;
    FUN_005b8f00(1,5);
    FUN_005b9210(8,4);
    uVar14 = 8;
  }
  FUN_005b94e0(uVar14);
  ExceptionList = local_c;
  return piVar6;
LAB_005e6ce9:
  piVar6[0xc9] = iVar9 + 1;
  goto LAB_005e6cf0;
LAB_005e6ce0:
  piVar6[200] = iVar9 + 1;
  goto LAB_005e6cf0;
LAB_005e6cd7:
  piVar6[199] = local_20 + 1;
LAB_005e6cf0:
  if (piVar6 != (int *)0x0) {
    FUN_005b8bd0();
    FUN_00631d5c(piVar6);
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

