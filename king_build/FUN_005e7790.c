
undefined4 FUN_005e7790(uint param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint local_20;
  uint local_1c;
  uint local_4;
  
  iVar19 = param_3;
  iVar5 = param_1;
  FUN_0061dd53(param_2,param_3,0);
  iVar8 = FUN_0061f40b(param_2);
  iVar9 = FUN_0061f40b(param_2);
  iVar10 = FUN_0061f40b(param_2);
  uVar11 = FUN_005aa7c0(param_2);
  local_1c = FUN_005aa7c0(param_2);
  iVar12 = FUN_0061f40b(param_2);
  FUN_005aa7c0(param_2);
  FUN_005aa7c0(param_2);
  uVar13 = FUN_005aa7c0(param_2);
  uVar14 = FUN_005aa7c0(param_2);
  iVar15 = FUN_0061f40b(param_2);
  uVar16 = FUN_0061f40b(param_2);
  iVar17 = FUN_0061db0f(param_2);
  if (0 < iVar8) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffffffef;
    uVar6 = FUN_0061f40b(param_2);
    param_3 = CONCAT31(param_3._1_3_,uVar6);
    uVar6 = FUN_0061f40b(param_2);
    param_3._0_2_ = CONCAT11(uVar6,(char)param_3);
    uVar6 = FUN_0061f40b(param_2);
    param_3._0_3_ = CONCAT12(uVar6,(undefined2)param_3);
    uVar6 = FUN_0061f40b(param_2);
    param_3 = CONCAT13(uVar6,(undefined3)param_3);
    iVar18 = _strncmp((char *)&param_3,&DAT_006823d8,4);
    if (iVar18 == 0) {
      iVar18 = FUN_005aa810(param_2);
      if (iVar18 != 4) {
        return 0;
      }
      iVar18 = FUN_005aa810(param_2,0);
      FUN_0061dd53(param_2,iVar18 + iVar19);
      uVar6 = FUN_0061f40b(param_2);
      param_3 = CONCAT31(param_3._1_3_,uVar6);
      uVar6 = FUN_0061f40b(param_2);
      param_3._0_2_ = CONCAT11(uVar6,(char)param_3);
      uVar6 = FUN_0061f40b(param_2);
      param_3._0_3_ = CONCAT12(uVar6,(undefined2)param_3);
      uVar6 = FUN_0061f40b(param_2);
      param_3 = CONCAT13(uVar6,(undefined3)param_3);
      iVar19 = _strncmp((char *)&param_3,&DAT_006823d0,4);
      if (iVar19 == 0) {
        iVar19 = FUN_005aa810(param_2);
        iVar18 = FUN_0061db0f(param_2);
        local_20 = iVar19 + iVar18;
        param_1 = -1;
        iVar19 = FUN_0061db0f(param_2);
        while (iVar19 < (int)local_20) {
          uVar6 = FUN_0061f40b(param_2);
          param_3 = CONCAT31(param_3._1_3_,uVar6);
          uVar6 = FUN_0061f40b(param_2);
          param_3._0_2_ = CONCAT11(uVar6,(char)param_3);
          uVar6 = FUN_0061f40b(param_2);
          param_3._0_3_ = CONCAT12(uVar6,(undefined2)param_3);
          uVar6 = FUN_0061f40b(param_2);
          param_3 = CONCAT13(uVar6,(undefined3)param_3);
          iVar19 = FUN_005aa810(param_2);
          iVar18 = FUN_0061db0f(param_2);
          iVar20 = _strncmp((char *)&param_3,&DAT_006823f8,4);
          if (iVar20 == 0) {
            FUN_005aa810(param_2);
            param_1 = FUN_005aa810(param_2);
          }
          else {
            iVar20 = _strncmp((char *)&param_3,&DAT_006823f0,4);
            if (iVar20 == 0) {
              if (param_1 == -1) {
                return 0;
              }
              iVar20 = FUN_005e7550(*(undefined4 *)(iVar5 + 0xc),param_2,
                                    *(undefined2 *)(iVar5 + 0x18),iVar19,
                                    *(int *)(iVar5 + 0x10) + 0x18,
                                    (int)(iVar15 + (iVar15 >> 0x1f & 7U)) >> 3);
              if (iVar20 == 0) {
                return 0;
              }
            }
          }
          FUN_0061dd53(param_2,(iVar19 + 3U & 0xfffffffc) + iVar18,0);
          iVar19 = FUN_0061db0f(param_2);
        }
        *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 0x10;
      }
      else {
        iVar19 = _strncmp((char *)&param_3,&DAT_006823ac,4);
        if (iVar19 == 0) {
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10;
          iVar18 = FUN_005aa810(param_2);
          FUN_005aa810(param_2);
          iVar19 = FUN_005aa810(param_2);
          FUN_005aa810(param_2);
          local_20 = FUN_005aa810(param_2);
          if (*(ushort *)(param_1 + 0x18) == local_20) {
            FUN_0061d8bf(*(undefined4 *)(param_1 + 0xc),iVar18 + -0x10,1,param_2);
          }
          else {
            iVar18 = 0;
            for (; 0 < iVar19; iVar19 = iVar19 >> 1) {
              iVar18 = iVar18 + iVar19 * iVar19;
            }
            iVar19 = 0;
            if (0 < iVar18) {
              do {
                if (*(short *)(param_1 + 0x18) == 2) {
                  if (local_20 != 1) {
                    return 0;
                  }
                  iVar20 = FUN_0061f40b(param_2);
                  if (iVar20 < (int)uVar11) {
                    return 0;
                  }
                  if ((int)((local_1c - 1) + uVar11) < iVar20) {
                    return 0;
                  }
                  iVar1 = *(int *)(param_1 + 0x10) + iVar20 * 3;
                  *(ushort *)(*(int *)(param_1 + 0xc) + iVar19 * 2) =
                       ((*(byte *)(iVar20 * 3 + *(int *)(param_1 + 0x10) + 0x18) & 0xfff8) << 5 |
                       *(byte *)(iVar1 + 0x19) & 0xfff8) << 2 |
                       (ushort)(*(byte *)(iVar1 + 0x1a) >> 3);
                }
                else if (*(short *)(param_1 + 0x18) == 4) {
                  if (local_20 != 1) {
                    return 0;
                  }
                  iVar20 = FUN_0061f40b(param_2);
                  puVar2 = (undefined1 *)(*(int *)(param_1 + 0xc) + iVar19 * 4);
                  *puVar2 = *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1a + iVar20 * 3);
                  puVar2[1] = *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x19 + iVar20 * 3);
                  puVar2[2] = *(undefined1 *)(iVar20 * 3 + 0x18 + *(int *)(param_1 + 0x10));
                  puVar2[3] = 0;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < iVar18);
            }
          }
        }
      }
    }
  }
  FUN_0061dd53(param_2,iVar17 + iVar8,0);
  if (iVar9 != 0) {
    if (iVar12 == 0x10) {
      return 0;
    }
    if (iVar12 != 0x18) {
      return 0;
    }
    FUN_0061dd53(param_2,local_1c * 3,1);
  }
  if (iVar10 == 1) {
    sVar4 = *(short *)(iVar5 + 0x18);
    if (sVar4 == 1) {
      uVar11 = 0;
      if (uVar14 != 0) {
        do {
          uVar21 = uVar11;
          if ((uVar16 & 0x20) == 0) {
            uVar21 = (uVar14 - uVar11) - 1;
          }
          FUN_0061d8bf(uVar21 * uVar13 + *(int *)(iVar5 + 8),uVar13,1,param_2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar14);
      }
    }
    else if (sVar4 == 2) {
      uVar21 = FUN_005d31a0();
      if ((uVar21 & 4) == 0) {
        *(undefined4 *)(iVar5 + 0x40) = 2;
      }
      else {
        *(undefined4 *)(iVar5 + 0x40) = 3;
      }
      param_3 = 0;
      if (uVar14 != 0) {
        do {
          param_1 = 0;
          if (uVar13 != 0) {
            do {
              uVar21 = FUN_0061f40b(param_2);
              if (uVar21 < uVar11) {
                return 0;
              }
              if ((local_1c - 1) + uVar11 < uVar21) {
                return 0;
              }
              uVar22 = param_3;
              if ((uVar16 & 0x20) == 0) {
                uVar22 = (uVar14 - param_3) - 1;
              }
              iVar8 = uVar22 * uVar13 + param_1;
              iVar19 = *(int *)(iVar5 + 0x10) + uVar21 * 3;
              uVar22 = (uint)*(byte *)(uVar21 * 3 + *(int *)(iVar5 + 0x10) + 0x18);
              uVar21 = (uint)*(byte *)(iVar19 + 0x19);
              bVar3 = *(byte *)(iVar19 + 0x1a);
              if (*(int *)(iVar5 + 0x40) == 2) {
                *(ushort *)(*(int *)(iVar5 + 8) + iVar8 * 2) =
                     (ushort)(((uVar22 & 0xfff8) << 5 | uVar21 & 0xfffc) << 3) |
                     (ushort)(bVar3 >> 3);
              }
              else {
                *(ushort *)(*(int *)(iVar5 + 8) + iVar8 * 2) =
                     (ushort)(((uVar22 & 0xfff8) << 5 | uVar21 & 0xfff8) << 2) |
                     (ushort)(bVar3 >> 3);
              }
              param_1 = param_1 + 1;
            } while (param_1 < uVar13);
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar14);
      }
    }
    else {
      if ((sVar4 != 3) && (sVar4 != 4)) {
        return 0;
      }
      param_3 = 0;
      if (uVar14 != 0) {
        do {
          param_1 = 0;
          if (uVar13 != 0) {
            do {
              uVar21 = FUN_0061f40b(param_2);
              if (uVar21 < uVar11) {
                return 0;
              }
              if ((local_1c - 1) + uVar11 < uVar21) {
                return 0;
              }
              uVar22 = param_3;
              if ((uVar16 & 0x20) == 0) {
                uVar22 = (uVar14 - param_3) - 1;
              }
              iVar19 = uVar22 * uVar13 + param_1;
              *(undefined1 *)(*(int *)(iVar5 + 8) + (uint)*(ushort *)(iVar5 + 0x18) * iVar19) =
                   *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x1a + uVar21 * 3);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 1 + *(int *)(iVar5 + 8)) =
                   *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x19 + uVar21 * 3);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 2 + *(int *)(iVar5 + 8)) =
                   *(undefined1 *)(uVar21 * 3 + 0x18 + *(int *)(iVar5 + 0x10));
              if (*(short *)(iVar5 + 0x18) == 4) {
                *(undefined1 *)(*(int *)(iVar5 + 8) + 3 + iVar19 * 4) = 0xff;
              }
              param_1 = param_1 + 1;
            } while (param_1 < uVar13);
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar14);
      }
    }
  }
  else {
    if (iVar10 != 2) {
      return 0;
    }
    if (iVar15 == 0x10) {
      sVar4 = *(short *)(iVar5 + 0x18);
      if (sVar4 == 2) {
        param_3 = 0;
        if (uVar14 != 0) {
          do {
            uVar11 = 0;
            if (uVar13 != 0) {
              do {
                uVar7 = FUN_005aa7c0(param_2);
                uVar21 = param_3;
                if ((uVar16 & 0x20) == 0) {
                  uVar21 = (uVar14 - param_3) - 1;
                }
                iVar19 = uVar21 * uVar13 + uVar11;
                uVar11 = uVar11 + 1;
                *(undefined2 *)(*(int *)(iVar5 + 8) + iVar19 * 2) = uVar7;
              } while (uVar11 < uVar13);
            }
            param_3 = param_3 + 1;
          } while (param_3 < uVar14);
        }
      }
      else {
        if ((sVar4 != 3) && (sVar4 != 4)) {
          DAT_0072081c = 3;
          return 0;
        }
        param_3 = 0;
        if (uVar14 != 0) {
          iVar19 = 0;
          local_4 = 2;
          do {
            param_1 = 0;
            if (uVar13 != 0) {
              do {
                uVar11 = param_3;
                if ((uVar16 & 0x20) == 0) {
                  uVar11 = (uVar14 - param_3) - 1;
                }
                iVar9 = uVar11 * uVar13 + param_1;
                uVar11 = FUN_005aa7c0(param_2);
                iVar8 = *(int *)(iVar5 + 0x40);
                if (iVar8 == 2) {
                  iVar19 = (uVar11 & 0x1f) << 3;
                  local_1c = uVar11 >> 3 & 0xfc;
                  local_20 = uVar11 >> 8 & 0xf8;
                }
                else if (iVar8 == 3) {
                  iVar19 = (uVar11 & 0x1f) << 3;
                  local_1c = uVar11 >> 2 & 0xf8;
                  local_20 = uVar11 >> 7 & 0xf8;
                }
                else if (iVar8 == 5) {
                  iVar19 = (uVar11 & 0xf) << 4;
                  local_1c = uVar11 & 0xf0;
                  local_20 = uVar11 >> 4 & 0xf0;
                  local_4 = uVar11 >> 8 & 0xf0;
                }
                *(char *)((uint)*(ushort *)(iVar5 + 0x18) * iVar9 + 2 + *(int *)(iVar5 + 8)) =
                     (char)iVar19;
                *(char *)((uint)*(ushort *)(iVar5 + 0x18) * iVar9 + 1 + *(int *)(iVar5 + 8)) =
                     (char)local_1c;
                *(char *)((uint)*(ushort *)(iVar5 + 0x18) * iVar9 + *(int *)(iVar5 + 8)) =
                     (char)local_20;
                if (*(short *)(iVar5 + 0x18) == 4) {
                  *(undefined1 *)(*(int *)(iVar5 + 8) + 3 + iVar9 * 4) = (undefined1)local_4;
                }
                param_1 = param_1 + 1;
              } while (param_1 < uVar13);
            }
            param_3 = param_3 + 1;
          } while (param_3 < uVar14);
        }
        if (*(short *)(iVar5 + 0x18) == 4) {
          *(undefined4 *)(iVar5 + 0x40) = 7;
        }
        else {
          *(undefined4 *)(iVar5 + 0x40) = 6;
        }
      }
    }
    else if (iVar15 == 0x18) {
      if ((*(short *)(iVar5 + 0x18) != 3) && (*(short *)(iVar5 + 0x18) != 4)) {
        DAT_0072081c = 3;
        return 0;
      }
      param_3 = 0;
      if (uVar14 != 0) {
        do {
          param_1 = 0;
          if (uVar13 != 0) {
            do {
              uVar11 = param_3;
              if ((uVar16 & 0x20) == 0) {
                uVar11 = (uVar14 - param_3) - 1;
              }
              iVar19 = uVar11 * uVar13 + param_1;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 2 + *(int *)(iVar5 + 8)) =
                   uVar6;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 1 + *(int *)(iVar5 + 8)) =
                   uVar6;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + *(int *)(iVar5 + 8)) =
                   uVar6;
              if (*(short *)(iVar5 + 0x18) == 4) {
                *(undefined1 *)(*(int *)(iVar5 + 8) + 3 + iVar19 * 4) = 0;
              }
              param_1 = param_1 + 1;
            } while (param_1 < uVar13);
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar14);
      }
    }
    else {
      if (iVar15 != 0x20) {
        return 0;
      }
      if (*(short *)(iVar5 + 0x18) != 4) {
        DAT_0072081c = 3;
        return 0;
      }
      param_3 = 0;
      if (uVar14 != 0) {
        do {
          uVar11 = 0;
          if (uVar13 != 0) {
            do {
              uVar21 = param_3;
              if ((uVar16 & 0x20) == 0) {
                uVar21 = (uVar14 - param_3) - 1;
              }
              iVar19 = uVar21 * uVar13 + uVar11;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + *(int *)(iVar5 + 8)) =
                   uVar6;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 1 + *(int *)(iVar5 + 8)) =
                   uVar6;
              uVar6 = FUN_0061f43c(param_2);
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 2 + *(int *)(iVar5 + 8)) =
                   uVar6;
              uVar6 = FUN_0061f43c(param_2);
              uVar11 = uVar11 + 1;
              *(undefined1 *)((uint)*(ushort *)(iVar5 + 0x18) * iVar19 + 3 + *(int *)(iVar5 + 8)) =
                   uVar6;
            } while (uVar11 < uVar13);
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar14);
      }
    }
  }
  *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 1;
  return 1;
}

