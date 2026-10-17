
byte * __thiscall FUN_005eb720(int param_1,byte *param_2,int param_3,int param_4,LPCSTR param_5)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  HANDLE pvVar8;
  LPVOID pvVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  LPCSTR pCVar18;
  byte *pbVar19;
  char *pcVar20;
  int iVar21;
  char *pcVar22;
  bool bVar23;
  undefined4 uVar24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648d0e;
  pvStack_c = ExceptionList;
  pbVar19 = &DAT_00670204;
  pbVar6 = param_2;
  do {
    bVar3 = *pbVar6;
    bVar23 = bVar3 < *pbVar19;
    if (bVar3 != *pbVar19) {
LAB_005eb775:
      iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
      goto LAB_005eb77a;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar6[1];
    bVar23 = bVar3 < pbVar19[1];
    if (bVar3 != pbVar19[1]) goto LAB_005eb775;
    pbVar6 = pbVar6 + 2;
    pbVar19 = pbVar19 + 2;
  } while (bVar3 != 0);
  iVar7 = 0;
LAB_005eb77a:
  pbVar6 = param_2;
  if (iVar7 == 0) {
    pbVar6 = &DAT_0068c120;
  }
  ExceptionList = &pvStack_c;
  FUN_005e63e0(pbVar6);
  pCVar18 = param_5;
  if (param_4 == 3) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
    pvVar8 = CreateFileA(param_5,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    *(HANDLE *)(param_1 + 0x2c) = pvVar8;
    if (pvVar8 == (HANDLE)0xffffffff) {
      FUN_005d2520(s_Cannot_open___rmp_006826c8,0);
    }
    pvVar8 = CreateFileMappingA(*(HANDLE *)(param_1 + 0x2c),(LPSECURITY_ATTRIBUTES)0x0,2,0,0,
                                (LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x30) = pvVar8;
    pvVar9 = MapViewOfFile(pvVar8,4,0,0,0);
    *(LPVOID *)(param_1 + 0x28) = pvVar9;
    iVar7 = 2;
  }
  else {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffe;
    iVar7 = param_4;
    if (param_4 != 2) goto LAB_005eb85d;
  }
  *(int *)(param_1 + 0x24) = param_3;
  param_4 = FUN_00631d33(0x2020c);
  local_4 = 0;
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_005e61d0();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  FUN_005e6280(pCVar18);
  param_4 = iVar7;
LAB_005eb85d:
  param_4 = param_4 + -1;
  iVar7 = param_4;
  iVar17 = param_3;
LAB_005eb86f:
  do {
    do {
      if (iVar7 == 0) {
        FUN_0061e41f(&DAT_00721004,0x46,iVar17);
      }
      else {
        FUN_005eb6e0(&DAT_00721004);
      }
      param_2 = &DAT_00721004;
      pbVar6 = (byte *)FUN_005aa880(&param_2);
    } while ((pbVar6 == (byte *)0x0) && ((*(byte *)(iVar17 + 0xc) & 0x10) == 0));
    if ((*(byte *)(iVar17 + 0xc) & 0x10) != 0) goto LAB_005ecbc7;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))();
    }
    pcVar20 = s_COLORS_006826c0;
    pbVar19 = pbVar6;
    do {
      bVar3 = *pbVar19;
      bVar23 = bVar3 < (byte)*pcVar20;
      if (bVar3 != *pcVar20) {
LAB_005eb8e9:
        iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
        goto LAB_005eb8ee;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar19[1];
      bVar23 = bVar3 < (byte)pcVar20[1];
      if (bVar3 != pcVar20[1]) goto LAB_005eb8e9;
      pbVar19 = pbVar19 + 2;
      pcVar20 = pcVar20 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_005eb8ee:
    if (iVar7 == 0) {
      uVar10 = FUN_005aa880(&param_2);
      iVar11 = FUN_0061f34d(uVar10);
      iVar17 = param_4;
      iVar7 = param_3;
      iVar21 = 0;
      if (0 < iVar11) {
        do {
          if (iVar17 == 0) {
            FUN_0061e41f(&DAT_00721004,0x50,iVar7);
          }
          else {
            FUN_005eb6e0(&DAT_00721004);
          }
          param_2 = &DAT_00721004;
          iVar12 = FUN_005aa880(&param_2);
          if (iVar12 != 0) {
            iVar21 = iVar21 + 1;
          }
        } while (iVar21 < iVar11);
      }
    }
    else {
      pcVar20 = s_EFFECTS_00671998;
      pbVar19 = pbVar6;
      do {
        bVar3 = *pbVar19;
        bVar23 = bVar3 < (byte)*pcVar20;
        if (bVar3 != *pcVar20) {
LAB_005eb98c:
          iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_005eb991;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar19[1];
        bVar23 = bVar3 < (byte)pcVar20[1];
        if (bVar3 != pcVar20[1]) goto LAB_005eb98c;
        pbVar19 = pbVar19 + 2;
        pcVar20 = pcVar20 + 2;
      } while (bVar3 != 0);
      iVar7 = 0;
LAB_005eb991:
      if (iVar7 == 0) {
        uVar10 = FUN_005aa880(&param_2);
        iVar11 = FUN_0061f34d(uVar10);
        iVar7 = param_4;
        iVar17 = param_3;
        if (iVar11 == 0) goto LAB_005eb86f;
        *(int *)(param_1 + 0x84) = iVar11;
        uVar10 = FUN_00631d33(iVar11 * 4);
        *(undefined4 *)(param_1 + 0x7c) = uVar10;
        uVar10 = FUN_00631d33(iVar11 * 4);
        iVar17 = 0;
        *(undefined4 *)(param_1 + 0x80) = uVar10;
        iVar7 = param_3;
        if (0 < iVar11) {
          do {
            if (param_4 == 0) {
              FUN_0061e41f(&DAT_00721004,0x50,iVar7);
            }
            else {
              FUN_005eb6e0(&DAT_00721004);
            }
            param_2 = &DAT_00721004;
            pcVar20 = (char *)FUN_005aa880(&param_2);
            if (pcVar20 != (char *)0x0) {
              uVar15 = 0xffffffff;
              pcVar22 = pcVar20;
              do {
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                cVar2 = *pcVar22;
                pcVar22 = pcVar22 + 1;
              } while (cVar2 != '\0');
              uVar10 = FUN_00631d33(~uVar15);
              *(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar17 * 4) = uVar10;
              uVar15 = 0xffffffff;
              do {
                pcVar22 = pcVar20;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                pcVar22 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar22;
              } while (cVar2 != '\0');
              uVar15 = ~uVar15;
              pcVar20 = pcVar22 + -uVar15;
              pcVar22 = *(char **)(*(int *)(param_1 + 0x7c) + iVar17 * 4);
              for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar22 = pcVar22 + 4;
              }
              for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *pcVar22 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar22 = pcVar22 + 1;
              }
              if (param_2 == (byte *)0x0) {
                *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar17 * 4) = 0;
              }
              else {
                uVar15 = 0xffffffff;
                pbVar6 = param_2;
                do {
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  bVar3 = *pbVar6;
                  pbVar6 = pbVar6 + 1;
                } while (bVar3 != 0);
                uVar10 = FUN_00631d33(~uVar15);
                *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar17 * 4) = uVar10;
                uVar15 = 0xffffffff;
                pbVar6 = param_2;
                do {
                  pbVar19 = pbVar6;
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  pbVar19 = pbVar6 + 1;
                  bVar3 = *pbVar6;
                  pbVar6 = pbVar19;
                } while (bVar3 != 0);
                uVar15 = ~uVar15;
                pbVar6 = pbVar19 + -uVar15;
                pbVar19 = *(byte **)(*(int *)(param_1 + 0x80) + iVar17 * 4);
                for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pbVar19 = *(undefined4 *)pbVar6;
                  pbVar6 = pbVar6 + 4;
                  pbVar19 = pbVar19 + 4;
                }
                for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *pbVar19 = *pbVar6;
                  pbVar6 = pbVar6 + 1;
                  pbVar19 = pbVar19 + 1;
                }
              }
              iVar17 = iVar17 + 1;
              iVar7 = param_3;
            }
          } while (iVar17 < iVar11);
        }
      }
      else {
        pcVar20 = s_SOUNDFILES_006826b4;
        pbVar19 = pbVar6;
        do {
          bVar3 = *pbVar19;
          bVar23 = bVar3 < (byte)*pcVar20;
          if (bVar3 != *pcVar20) {
LAB_005ebb13:
            iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
            goto LAB_005ebb18;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar19[1];
          bVar23 = bVar3 < (byte)pcVar20[1];
          if (bVar3 != pcVar20[1]) goto LAB_005ebb13;
          pbVar19 = pbVar19 + 2;
          pcVar20 = pcVar20 + 2;
        } while (bVar3 != 0);
        iVar7 = 0;
LAB_005ebb18:
        if (iVar7 == 0) {
          uVar10 = FUN_005aa880(&param_2);
          iVar11 = FUN_0061f34d(uVar10);
          iVar7 = param_4;
          iVar17 = param_3;
          if (iVar11 == 0) goto LAB_005eb86f;
          FUN_005fc510(iVar11);
          pCVar18 = (LPCSTR)0x0;
          param_5 = (LPCSTR)0x0;
          iVar7 = param_3;
          if (0 < iVar11) {
            do {
              if (param_4 == 0) {
                FUN_0061e41f(&DAT_00721004,0x50,iVar7);
              }
              else {
                FUN_005eb6e0(&DAT_00721004);
              }
              param_2 = &DAT_00721004;
              iVar17 = FUN_005aa880(&param_2);
              if (iVar17 != 0) {
                pbVar6 = (byte *)FUN_005aa880(&param_2);
                iVar7 = param_3;
                if (pbVar6 == (byte *)0x0) {
LAB_005ebbf0:
                  uVar10 = 0;
                }
                else {
                  pcVar20 = s_noload_006826ac;
                  do {
                    bVar3 = *pbVar6;
                    bVar23 = bVar3 < (byte)*pcVar20;
                    if (bVar3 != *pcVar20) {
LAB_005ebbe0:
                      iVar21 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                      goto LAB_005ebbe5;
                    }
                    if (bVar3 == 0) break;
                    bVar3 = pbVar6[1];
                    bVar23 = bVar3 < (byte)pcVar20[1];
                    if (bVar3 != pcVar20[1]) goto LAB_005ebbe0;
                    pbVar6 = pbVar6 + 2;
                    pcVar20 = pcVar20 + 2;
                  } while (bVar3 != 0);
                  iVar21 = 0;
LAB_005ebbe5:
                  if (iVar21 != 0) goto LAB_005ebbf0;
                  uVar10 = 1;
                }
                if (param_4 == 0) {
                  uVar10 = FUN_005fc5f0(iVar17,pCVar18,uVar10);
                }
                else {
                  iVar21 = FUN_005aa810(param_3);
                  iVar12 = FUN_0061db0f(iVar7);
                  uVar10 = FUN_005fc6d0(iVar7,param_5,iVar21,uVar10);
                  FUN_0061dd53(iVar7,iVar12 + iVar21,0);
                  pCVar18 = param_5;
                }
                pCVar18 = pCVar18 + 1;
                param_5 = pCVar18;
                FUN_005d1bf0(iVar17,uVar10);
                iVar7 = param_3;
              }
            } while ((int)pCVar18 < iVar11);
          }
        }
        else {
          pcVar20 = s_SOUNDS_006826a4;
          pbVar19 = pbVar6;
          do {
            bVar3 = *pbVar19;
            bVar23 = bVar3 < (byte)*pcVar20;
            if (bVar3 != *pcVar20) {
LAB_005ebc91:
              iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
              goto LAB_005ebc96;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar19[1];
            bVar23 = bVar3 < (byte)pcVar20[1];
            if (bVar3 != pcVar20[1]) goto LAB_005ebc91;
            pbVar19 = pbVar19 + 2;
            pcVar20 = pcVar20 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_005ebc96:
          if (iVar7 == 0) {
            uVar10 = FUN_005aa880(&param_2);
            iVar11 = FUN_0061f34d(uVar10);
            iVar7 = param_4;
            iVar17 = param_3;
            if (iVar11 == 0) goto LAB_005eb86f;
            *(int *)(param_1 + 0x70) = iVar11;
            uVar10 = FUN_00631d33(iVar11 * 4);
            iVar17 = 0;
            *(undefined4 *)(param_1 + 0x74) = uVar10;
            iVar7 = param_3;
            if (0 < iVar11) {
              do {
                if (param_4 == 0) {
                  FUN_0061e41f(&DAT_00721004,0x50,iVar7);
                }
                else {
                  FUN_005eb6e0(&DAT_00721004);
                }
                param_2 = &DAT_00721004;
                iVar21 = FUN_005aa880(&param_2);
                if (iVar21 != 0) {
                  param_5 = (LPCSTR)FUN_00631d33(0x20);
                  local_4 = 1;
                  if (param_5 == (LPCSTR)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar24 = 1;
                    uVar10 = FUN_005aa880(&param_2,1);
                    iVar7 = FUN_0061f34d(uVar10);
                    uVar10 = FUN_005fc9e0(iVar21,iVar7 + -1,uVar24);
                  }
                  local_4 = 0xffffffff;
                  *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar17 * 4) = uVar10;
                  FUN_005d1bf0(iVar21,*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar17 * 4));
                  iVar17 = iVar17 + 1;
                  iVar7 = param_3;
                }
              } while (iVar17 < iVar11);
            }
          }
          else {
            pcVar20 = s_MASKFILES_00682698;
            pbVar19 = pbVar6;
            do {
              bVar3 = *pbVar19;
              bVar23 = bVar3 < (byte)*pcVar20;
              if (bVar3 != *pcVar20) {
LAB_005ebdc5:
                iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                goto LAB_005ebdca;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar19[1];
              bVar23 = bVar3 < (byte)pcVar20[1];
              if (bVar3 != pcVar20[1]) goto LAB_005ebdc5;
              pbVar19 = pbVar19 + 2;
              pcVar20 = pcVar20 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_005ebdca:
            if (iVar7 == 0) {
              uVar10 = FUN_005aa880(&param_2);
              iVar11 = FUN_0061f34d(uVar10);
              iVar7 = param_4;
              iVar17 = param_3;
              if (iVar11 == 0) goto LAB_005eb86f;
              *(int *)(param_1 + 0x68) = iVar11;
              uVar10 = FUN_00631d33(iVar11 * 4);
              *(undefined4 *)(param_1 + 0x6c) = uVar10;
              pCVar18 = (LPCSTR)0x0;
              param_5 = (LPCSTR)0x0;
              if (0 < iVar11) {
                do {
                  iVar7 = param_4;
                  if (param_4 == 0) {
                    FUN_0061e41f(&DAT_00721004,0x50,param_3);
                  }
                  else {
                    FUN_005eb6e0(&DAT_00721004,param_3);
                  }
                  param_2 = &DAT_00721004;
                  iVar21 = FUN_005aa880(&param_2);
                  pbVar6 = (byte *)FUN_005aa880(&param_2);
                  iVar17 = param_3;
                  if (iVar7 == 0) {
                    if (pbVar6 == (byte *)0x0) {
LAB_005ec088:
                      iVar7 = (int)pCVar18 * 4;
                      uVar10 = FUN_005e8930(iVar21);
                      *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)) = uVar10;
                    }
                    else {
                      pcVar20 = s_noload_006826ac;
                      do {
                        bVar3 = *pbVar6;
                        bVar23 = bVar3 < (byte)*pcVar20;
                        if (bVar3 != *pcVar20) {
LAB_005ec02e:
                          iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                          goto LAB_005ec033;
                        }
                        if (bVar3 == 0) break;
                        bVar3 = pbVar6[1];
                        bVar23 = bVar3 < (byte)pcVar20[1];
                        if (bVar3 != pcVar20[1]) goto LAB_005ec02e;
                        pbVar6 = pbVar6 + 2;
                        pcVar20 = pcVar20 + 2;
                      } while (bVar3 != 0);
                      iVar7 = 0;
LAB_005ec033:
                      if (iVar7 != 0) goto LAB_005ec088;
                      iVar7 = FUN_00631d33(0x28);
                      local_4 = 4;
                      if (iVar7 == 0) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = FUN_005bb410(iVar21);
                      }
                      iVar7 = (int)pCVar18 * 4;
                      local_4 = 0xffffffff;
                      *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)) = uVar10;
                      FUN_005e8a50(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)),iVar21);
                    }
                  }
                  else {
                    iVar12 = FUN_005aa810(param_3);
                    iVar13 = FUN_0061db0f(iVar17);
                    if (pbVar6 == (byte *)0x0) {
LAB_005ebf6a:
                      if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
                        iVar7 = (int)param_5 * 4;
                        uVar10 = FUN_005e8990(iVar17,iVar12);
                        *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)) = uVar10;
                      }
                      else {
                        iVar7 = FUN_00631d33(0x28);
                        local_4 = 3;
                        if (iVar7 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = FUN_005bb3d0(iVar17,iVar13,iVar12);
                        }
                        iVar7 = (int)param_5 * 4;
                        *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)) = uVar10;
LAB_005ebf22:
                        local_4 = 0xffffffff;
                        FUN_005e8b00(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)),iVar17,iVar12
                                     ,*(undefined4 *)(param_1 + 0x28));
                      }
                    }
                    else {
                      pcVar20 = s_noload_006826ac;
                      do {
                        bVar3 = *pbVar6;
                        bVar23 = bVar3 < (byte)*pcVar20;
                        if (bVar3 != *pcVar20) {
LAB_005ebec2:
                          iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                          goto LAB_005ebec7;
                        }
                        if (bVar3 == 0) break;
                        bVar3 = pbVar6[1];
                        bVar23 = bVar3 < (byte)pcVar20[1];
                        if (bVar3 != pcVar20[1]) goto LAB_005ebec2;
                        pbVar6 = pbVar6 + 2;
                        pcVar20 = pcVar20 + 2;
                      } while (bVar3 != 0);
                      iVar7 = 0;
LAB_005ebec7:
                      if (iVar7 != 0) goto LAB_005ebf6a;
                      iVar7 = FUN_00631d33(0x28);
                      local_4 = 2;
                      if (iVar7 == 0) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = FUN_005bb3d0(iVar17,iVar13,iVar12);
                      }
                      local_4 = 0xffffffff;
                      iVar7 = (int)param_5 * 4;
                      *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)) = uVar10;
                      if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_005ebf22;
                      FUN_005e8b00(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)),iVar17,iVar12,0
                                  );
                      iVar5 = *(int *)(iVar7 + *(int *)(param_1 + 0x6c));
                      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 4;
                      puVar1 = (uint *)(*(int *)(iVar7 + *(int *)(param_1 + 0x6c)) + 0x1c);
                      *puVar1 = *puVar1 & 0xfffffffe;
                    }
                    FUN_0061dd53(iVar17,iVar13 + iVar12,0);
                    pCVar18 = param_5;
                  }
                  FUN_005d1bf0(iVar21,*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x6c)));
                  if (iVar21 != 0) {
                    pCVar18 = pCVar18 + 1;
                    param_5 = pCVar18;
                  }
                } while ((int)pCVar18 < iVar11);
              }
            }
            else {
              pcVar20 = s_TEXTUREFILES_00682688;
              pbVar19 = pbVar6;
              do {
                bVar3 = *pbVar19;
                bVar23 = bVar3 < (byte)*pcVar20;
                if (bVar3 != *pcVar20) {
LAB_005ec0fb:
                  iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                  goto LAB_005ec100;
                }
                if (bVar3 == 0) break;
                bVar3 = pbVar19[1];
                bVar23 = bVar3 < (byte)pcVar20[1];
                if (bVar3 != pcVar20[1]) goto LAB_005ec0fb;
                pbVar19 = pbVar19 + 2;
                pcVar20 = pcVar20 + 2;
              } while (bVar3 != 0);
              iVar7 = 0;
LAB_005ec100:
              if (iVar7 == 0) {
                uVar10 = FUN_005aa880(&param_2);
                iVar11 = FUN_0061f34d(uVar10);
                *(int *)(param_1 + 0x50) = iVar11;
                iVar7 = param_4;
                iVar17 = param_3;
                if (iVar11 == 0) goto LAB_005eb86f;
                uVar10 = FUN_00631d33(iVar11 * 4);
                *(undefined4 *)(param_1 + 0x54) = uVar10;
                param_5 = (LPCSTR)0x0;
                if (0 < iVar11) {
                  pCVar18 = (LPCSTR)0x0;
                  do {
                    if (((int)pCVar18 % 10 == 0) && (*(code **)(param_1 + 0x38) != (code *)0x0)) {
                      (**(code **)(param_1 + 0x38))();
                    }
                    iVar7 = param_3;
                    if (param_4 == 0) {
                      FUN_0061e41f(&DAT_00721004,0x50,param_3);
                    }
                    else {
                      FUN_005eb6e0(&DAT_00721004);
                    }
                    param_2 = &DAT_00721004;
                    pbVar6 = (byte *)FUN_005aa880(&param_2);
                    pbVar19 = (byte *)FUN_005aa880(&param_2);
                    if (param_4 == 0) {
                      if (pbVar19 == (byte *)0x0) {
LAB_005ec543:
                        uVar10 = FUN_005e6d60(pbVar6);
                        *(undefined4 *)(*(int *)(param_1 + 0x54) + (int)pCVar18 * 4) = uVar10;
                        if (pbVar19 != (byte *)0x0) {
                          pcVar20 = s_bumpcoord_006825c8;
                          do {
                            bVar3 = *pbVar19;
                            bVar23 = bVar3 < (byte)*pcVar20;
                            if (bVar3 != *pcVar20) {
LAB_005ec589:
                              iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                              goto LAB_005ec58e;
                            }
                            if (bVar3 == 0) break;
                            bVar3 = pbVar19[1];
                            bVar23 = bVar3 < (byte)pcVar20[1];
                            if (bVar3 != pcVar20[1]) goto LAB_005ec589;
                            pbVar19 = pbVar19 + 2;
                            pcVar20 = pcVar20 + 2;
                          } while (bVar3 != 0);
                          iVar7 = 0;
LAB_005ec58e:
                          pCVar18 = param_5;
                          if (iVar7 == 0) {
                            *(undefined4 *)
                             (*(int *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) + 0x40) = 8;
                          }
                        }
                      }
                      else {
                        pcVar20 = s_noload_006826ac;
                        pbVar14 = pbVar19;
                        do {
                          bVar3 = *pbVar14;
                          bVar23 = bVar3 < (byte)*pcVar20;
                          if (bVar3 != *pcVar20) {
LAB_005ec4e1:
                            iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                            goto LAB_005ec4e6;
                          }
                          if (bVar3 == 0) break;
                          bVar3 = pbVar14[1];
                          bVar23 = bVar3 < (byte)pcVar20[1];
                          if (bVar3 != pcVar20[1]) goto LAB_005ec4e1;
                          pbVar14 = pbVar14 + 2;
                          pcVar20 = pcVar20 + 2;
                        } while (bVar3 != 0);
                        iVar7 = 0;
LAB_005ec4e6:
                        pCVar18 = param_5;
                        if (iVar7 != 0) goto LAB_005ec543;
                        iVar7 = FUN_00631d33(0x54);
                        local_4 = 7;
                        if (iVar7 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = FUN_005b9dc0(pbVar6);
                        }
                        pCVar18 = param_5;
                        local_4 = 0xffffffff;
                        *(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) = uVar10;
                        FUN_005e6f10(*(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4),
                                     pbVar6);
                      }
                    }
                    else {
                      iVar17 = FUN_005aa810(iVar7);
                      iVar7 = FUN_0061db0f(iVar7);
                      if (pbVar19 == (byte *)0x0) {
LAB_005ec31b:
                        uVar15 = 0;
                        if (pbVar19 == (byte *)0x0) {
LAB_005ec355:
                          uVar15 = 0x404;
                        }
                        else {
                          pcVar20 = s_memfix_00682680;
                          pbVar14 = pbVar19;
                          do {
                            bVar3 = *pbVar14;
                            bVar23 = bVar3 < (byte)*pcVar20;
                            if (bVar3 != *pcVar20) {
LAB_005ec34c:
                              iVar21 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                              goto LAB_005ec351;
                            }
                            if (bVar3 == 0) break;
                            bVar3 = pbVar14[1];
                            bVar23 = bVar3 < (byte)pcVar20[1];
                            if (bVar3 != pcVar20[1]) goto LAB_005ec34c;
                            pbVar14 = pbVar14 + 2;
                            pcVar20 = pcVar20 + 2;
                          } while (bVar3 != 0);
                          iVar21 = 0;
LAB_005ec351:
                          if (iVar21 != 0) goto LAB_005ec355;
                        }
                        if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
                          uVar10 = FUN_005e6da0(param_3,pbVar6,uVar15 | 1);
                          *(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) = uVar10;
                        }
                        else {
                          iVar21 = FUN_00631d33(0x54);
                          local_4 = 6;
                          if (iVar21 == 0) {
                            uVar10 = 0;
                          }
                          else {
                            uVar10 = FUN_005b9d10(pbVar6,param_3,iVar7);
                          }
                          pCVar18 = param_5;
                          local_4 = 0xffffffff;
                          *(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) = uVar10;
                          FUN_005e6f60(*(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4),
                                       param_3,*(undefined4 *)(param_1 + 0x28));
                          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x54) + (int)pCVar18 * 4) +
                                           0x34);
                          *puVar1 = *puVar1 | uVar15 | 1;
                        }
                        if (pbVar19 != (byte *)0x0) {
                          pcVar20 = s_bumpcoord_006825c8;
                          pbVar14 = pbVar19;
                          do {
                            bVar3 = *pbVar14;
                            bVar23 = bVar3 < (byte)*pcVar20;
                            if (bVar3 != *pcVar20) {
LAB_005ec41c:
                              iVar21 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                              goto LAB_005ec421;
                            }
                            if (bVar3 == 0) break;
                            bVar3 = pbVar14[1];
                            bVar23 = bVar3 < (byte)pcVar20[1];
                            if (bVar3 != pcVar20[1]) goto LAB_005ec41c;
                            pbVar14 = pbVar14 + 2;
                            pcVar20 = pcVar20 + 2;
                          } while (bVar3 != 0);
                          iVar21 = 0;
LAB_005ec421:
                          if (iVar21 == 0) {
                            *(undefined4 *)
                             (*(int *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) + 0x40) = 8;
                          }
                          else {
                            uVar10 = FUN_0061f34d(pbVar19);
                            *(undefined4 *)
                             (*(int *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) + 0x38) = uVar10
                            ;
                          }
                        }
                      }
                      else {
                        pcVar20 = s_noload_006826ac;
                        pbVar14 = pbVar19;
                        do {
                          bVar3 = *pbVar14;
                          bVar23 = bVar3 < (byte)*pcVar20;
                          if (bVar3 != *pcVar20) {
LAB_005ec20a:
                            iVar21 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                            goto LAB_005ec20f;
                          }
                          if (bVar3 == 0) break;
                          bVar3 = pbVar14[1];
                          bVar23 = bVar3 < (byte)pcVar20[1];
                          if (bVar3 != pcVar20[1]) goto LAB_005ec20a;
                          pbVar14 = pbVar14 + 2;
                          pcVar20 = pcVar20 + 2;
                        } while (bVar3 != 0);
                        iVar21 = 0;
LAB_005ec20f:
                        if (iVar21 != 0) goto LAB_005ec31b;
                        iVar12 = FUN_00631d33(0x54);
                        iVar21 = param_3;
                        local_4 = 5;
                        if (iVar12 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = FUN_005b9d10(pbVar6,param_3,iVar7);
                        }
                        pCVar18 = param_5;
                        local_4 = 0xffffffff;
                        *(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) = uVar10;
                        if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
                          FUN_005e6f60(*(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4),
                                       iVar21,0);
                        }
                        else {
                          FUN_005e6f60(*(undefined4 *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4),
                                       iVar21,*(undefined4 *)(param_1 + 0x28));
                          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x54) + (int)pCVar18 * 4) +
                                           0x34);
                          *puVar1 = *puVar1 & 0xfffffffe;
                        }
                        pbVar19 = (byte *)FUN_005aa880(&param_2);
                        if (pbVar19 == (byte *)0x0) {
LAB_005ec2e4:
                          iVar21 = *(int *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4);
                          *(uint *)(iVar21 + 0x34) = *(uint *)(iVar21 + 0x34) | 0x400;
                        }
                        else {
                          pcVar20 = s_memfix_00682680;
                          pbVar14 = pbVar19;
                          do {
                            bVar3 = *pbVar14;
                            bVar23 = bVar3 < (byte)*pcVar20;
                            if (bVar3 != *pcVar20) {
LAB_005ec2db:
                              iVar21 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                              goto LAB_005ec2e0;
                            }
                            if (bVar3 == 0) break;
                            bVar3 = pbVar14[1];
                            bVar23 = bVar3 < (byte)pcVar20[1];
                            if (bVar3 != pcVar20[1]) goto LAB_005ec2db;
                            pbVar14 = pbVar14 + 2;
                            pcVar20 = pcVar20 + 2;
                          } while (bVar3 != 0);
                          iVar21 = 0;
LAB_005ec2e0:
                          if (iVar21 != 0) goto LAB_005ec2e4;
                        }
                        if (pbVar19 != (byte *)0x0) {
                          FUN_005aa880(&param_2);
                        }
                        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x54) + (int)param_5 * 4) +
                                         0x34);
                        *puVar1 = *puVar1 | 4;
                      }
                      FUN_0061dd53(param_3,iVar7 + iVar17,0);
                      pCVar18 = param_5;
                    }
                    FUN_005d1bf0(pbVar6,*(undefined4 *)(*(int *)(param_1 + 0x54) + (int)pCVar18 * 4)
                                );
                    iVar7 = *(int *)(*(int *)(param_1 + 0x54) + (int)pCVar18 * 4);
                    if (iVar7 == 0) {
                      ExceptionList = pvStack_c;
                      return pbVar6;
                    }
                    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(param_1 + 0x34);
                    if (pbVar6 != (byte *)0x0) {
                      pCVar18 = pCVar18 + 1;
                      param_5 = pCVar18;
                    }
                  } while ((int)pCVar18 < iVar11);
                }
              }
              else {
                pcVar20 = s_MATERIALS_00682674;
                pbVar19 = pbVar6;
                do {
                  bVar3 = *pbVar19;
                  bVar23 = bVar3 < (byte)*pcVar20;
                  if (bVar3 != *pcVar20) {
LAB_005ec5d7:
                    iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                    goto LAB_005ec5dc;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar19[1];
                  bVar23 = bVar3 < (byte)pcVar20[1];
                  if (bVar3 != pcVar20[1]) goto LAB_005ec5d7;
                  pbVar19 = pbVar19 + 2;
                  pcVar20 = pcVar20 + 2;
                } while (bVar3 != 0);
                iVar7 = 0;
LAB_005ec5dc:
                if (iVar7 == 0) {
                  uVar10 = FUN_005aa880(&param_2);
                  iVar11 = FUN_0061f34d(uVar10);
                  iVar7 = param_4;
                  iVar17 = param_3;
                  if (iVar11 == 0) goto LAB_005eb86f;
                  if (iVar11 != *(int *)(param_1 + 0x48)) {
                    ExceptionList = pvStack_c;
                    return (byte *)s_num_materials_00682628;
                  }
                  param_5 = (LPCSTR)0x0;
                  if (0 < iVar11) {
                    iStack_14 = 0;
                    iVar7 = param_3;
                    do {
                      if (param_4 == 0) {
                        FUN_0061e41f(&DAT_00721004,0x50,iVar7);
                      }
                      else {
                        FUN_005eb6e0(&DAT_00721004);
                      }
                      param_2 = &DAT_00721004;
                      pbVar6 = (byte *)FUN_005aa880(&param_2);
                      if (pbVar6 != (byte *)0x0) {
                        iStack_18 = 0;
                        iStack_20 = 0;
                        do {
                          pbVar14 = (byte *)(iStack_20 + *(int *)(param_1 + 0x4c));
                          pbVar19 = pbVar6;
                          do {
                            bVar3 = *pbVar19;
                            bVar23 = bVar3 < *pbVar14;
                            if (bVar3 != *pbVar14) {
LAB_005ec6a1:
                              iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                              goto LAB_005ec6a6;
                            }
                            if (bVar3 == 0) break;
                            bVar3 = pbVar19[1];
                            bVar23 = bVar3 < pbVar14[1];
                            if (bVar3 != pbVar14[1]) goto LAB_005ec6a1;
                            pbVar19 = pbVar19 + 2;
                            pbVar14 = pbVar14 + 2;
                          } while (bVar3 != 0);
                          iVar7 = 0;
LAB_005ec6a6:
                          if (iVar7 == 0) {
                            if (param_2 == (byte *)0x0) {
                              FUN_005d2520(s_Incorrect_material_00682660,pbVar6);
                            }
                            uVar15 = 0xffffffff;
                            pbVar19 = param_2;
                            do {
                              pbVar14 = pbVar19;
                              if (uVar15 == 0) break;
                              uVar15 = uVar15 - 1;
                              pbVar14 = pbVar19 + 1;
                              bVar3 = *pbVar19;
                              pbVar19 = pbVar14;
                            } while (bVar3 != 0);
                            uVar15 = ~uVar15;
                            pbVar19 = pbVar14 + -uVar15;
                            pbVar14 = (byte *)&DAT_007218b0;
                            for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                              *(undefined4 *)pbVar14 = *(undefined4 *)pbVar19;
                              pbVar19 = pbVar19 + 4;
                              pbVar14 = pbVar14 + 4;
                            }
                            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                              *pbVar14 = *pbVar19;
                              pbVar19 = pbVar19 + 1;
                              pbVar14 = pbVar14 + 1;
                            }
                            iVar7 = FUN_005eadd0(&DAT_007218b0,iStack_20 + *(int *)(param_1 + 0x4c))
                            ;
                            if (iVar7 == 0) {
                              ExceptionList = pvStack_c;
                              return pbVar6;
                            }
                            iVar7 = _strncmp((char *)pbVar6,s_mat_road_00682654,8);
                            if (iVar7 == 0) {
                              iVar7 = (int)(char)pbVar6[8];
                              if (0 < iVar7) {
                                iVar7 = iVar7 + -0x2f;
                              }
                              if ((-1 < iVar7) && (iVar7 < 6)) {
                                *(int *)(param_1 + 0x9c + iVar7 * 4) = iStack_18;
                              }
                            }
                            FUN_005d1bf0(pbVar6,iStack_14 + *(int *)(param_1 + 0x4c));
                          }
                          iStack_18 = iStack_18 + 1;
                          iStack_20 = iStack_20 + 0x7c;
                        } while (iStack_18 < iVar11);
                        param_5 = param_5 + 1;
                        iStack_14 = iStack_14 + 0x7c;
                        iVar7 = param_3;
                      }
                    } while ((int)param_5 < iVar11);
                  }
                }
                else {
                  pcVar20 = s_PALETTEFILES_00682644;
                  pbVar19 = pbVar6;
                  do {
                    bVar3 = *pbVar19;
                    bVar23 = bVar3 < (byte)*pcVar20;
                    if (bVar3 != *pcVar20) {
LAB_005ec7c1:
                      iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                      goto LAB_005ec7c6;
                    }
                    if (bVar3 == 0) break;
                    bVar3 = pbVar19[1];
                    bVar23 = bVar3 < (byte)pcVar20[1];
                    if (bVar3 != pcVar20[1]) goto LAB_005ec7c1;
                    pbVar19 = pbVar19 + 2;
                    pcVar20 = pcVar20 + 2;
                  } while (bVar3 != 0);
                  iVar7 = 0;
LAB_005ec7c6:
                  if (iVar7 == 0) {
                    uVar10 = FUN_005aa880(&param_2);
                    iVar11 = FUN_0061f34d(uVar10);
                    *(int *)(param_1 + 0x60) = iVar11;
                    iVar7 = param_4;
                    iVar17 = param_3;
                    if (iVar11 == 0) goto LAB_005eb86f;
                    uVar10 = FUN_00631d33(iVar11 * 4);
                    iVar17 = 0;
                    *(undefined4 *)(param_1 + 100) = uVar10;
                    iVar7 = param_4;
                    if (0 < iVar11) {
                      do {
                        if (iVar7 == 0) {
                          FUN_0061e41f(&DAT_00721004,0x50,param_3);
                        }
                        else {
                          FUN_005eb6e0(&DAT_00721004);
                        }
                        param_2 = &DAT_00721004;
                        pbVar6 = (byte *)FUN_005aa880(&param_2);
                        iVar21 = param_3;
                        if (iVar7 == 0) {
                          uVar10 = FUN_005e6480(pbVar6);
                          *(undefined4 *)(*(int *)(param_1 + 100) + iVar17 * 4) = uVar10;
                        }
                        else {
                          iVar7 = FUN_005aa810(param_3);
                          iVar21 = FUN_0061db0f(iVar21);
                          uVar10 = FUN_005e64c0(param_3);
                          *(undefined4 *)(*(int *)(param_1 + 100) + iVar17 * 4) = uVar10;
                          FUN_0061dd53(param_3,iVar21 + iVar7,0);
                          iVar7 = param_4;
                        }
                        FUN_005d1bf0(pbVar6,*(undefined4 *)(*(int *)(param_1 + 100) + iVar17 * 4));
                        if (*(int *)(*(int *)(param_1 + 100) + iVar17 * 4) == 0) {
                          ExceptionList = pvStack_c;
                          return pbVar6;
                        }
                        if (pbVar6 != (byte *)0x0) {
                          iVar17 = iVar17 + 1;
                        }
                      } while (iVar17 < iVar11);
                    }
                  }
                  else {
                    pcVar20 = s_BACKFILES_00682638;
                    pbVar19 = pbVar6;
                    do {
                      bVar3 = *pbVar19;
                      bVar23 = bVar3 < (byte)*pcVar20;
                      if (bVar3 != *pcVar20) {
LAB_005ec912:
                        iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                        goto LAB_005ec917;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = pbVar19[1];
                      bVar23 = bVar3 < (byte)pcVar20[1];
                      if (bVar3 != pcVar20[1]) goto LAB_005ec912;
                      pbVar19 = pbVar19 + 2;
                      pcVar20 = pcVar20 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_005ec917:
                    if (iVar7 != 0) {
                      FUN_0061c369(&DAT_00721004,s_illegal_keyword__s_00682614,pbVar6);
                      ExceptionList = pvStack_c;
                      return &DAT_00721004;
                    }
                    uVar10 = FUN_005aa880(&param_2);
                    iVar11 = FUN_0061f34d(uVar10);
                    *(int *)(param_1 + 0x58) = iVar11;
                    iVar7 = param_4;
                    iVar17 = param_3;
                    if (iVar11 == 0) goto LAB_005eb86f;
                    uVar10 = FUN_00631d33(iVar11 * 4);
                    *(undefined4 *)(param_1 + 0x5c) = uVar10;
                    param_5 = (LPCSTR)0x0;
                    if (0 < iVar11) {
                      do {
                        iVar7 = param_4;
                        if (param_4 == 0) {
                          FUN_0061e41f(&DAT_00721004,0x50,param_3);
                        }
                        else {
                          FUN_005eb6e0(&DAT_00721004,param_3);
                        }
                        param_2 = &DAT_00721004;
                        pbVar6 = (byte *)FUN_005aa880(&param_2);
                        pbVar19 = (byte *)FUN_005aa880(&param_2);
                        iVar17 = param_3;
                        if (iVar7 == 0) {
                          if (pbVar19 == (byte *)0x0) {
LAB_005ecb43:
                            iVar7 = (int)param_5 * 4;
                            uVar10 = FUN_005e6d60(pbVar6);
                            *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)) = uVar10;
                          }
                          else {
                            pcVar20 = s_noload_006826ac;
                            do {
                              bVar3 = *pbVar19;
                              bVar23 = bVar3 < (byte)*pcVar20;
                              if (bVar3 != *pcVar20) {
LAB_005ecae1:
                                iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                                goto LAB_005ecae6;
                              }
                              if (bVar3 == 0) break;
                              bVar3 = pbVar19[1];
                              bVar23 = bVar3 < (byte)pcVar20[1];
                              if (bVar3 != pcVar20[1]) goto LAB_005ecae1;
                              pbVar19 = pbVar19 + 2;
                              pcVar20 = pcVar20 + 2;
                            } while (bVar3 != 0);
                            iVar7 = 0;
LAB_005ecae6:
                            if (iVar7 != 0) goto LAB_005ecb43;
                            iVar7 = FUN_00631d33(0x54);
                            local_4 = 9;
                            if (iVar7 == 0) {
                              uVar10 = 0;
                            }
                            else {
                              uVar10 = FUN_005b9dc0(pbVar6);
                            }
                            local_4 = 0xffffffff;
                            iVar7 = (int)param_5 * 4;
                            *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)) = uVar10;
                            FUN_005e6f10(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)),pbVar6);
                          }
                        }
                        else {
                          iVar21 = FUN_005aa810(param_3);
                          iVar12 = FUN_0061db0f(iVar17);
                          if (pbVar19 == (byte *)0x0) {
LAB_005eca71:
                            iVar7 = (int)param_5 * 4;
                            uVar10 = FUN_005e6da0(iVar17,0,0);
                            *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)) = uVar10;
                          }
                          else {
                            pcVar20 = s_noload_006826ac;
                            do {
                              bVar3 = *pbVar19;
                              bVar23 = bVar3 < (byte)*pcVar20;
                              if (bVar3 != *pcVar20) {
LAB_005eca0b:
                                iVar7 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                                goto LAB_005eca10;
                              }
                              if (bVar3 == 0) break;
                              bVar3 = pbVar19[1];
                              bVar23 = bVar3 < (byte)pcVar20[1];
                              if (bVar3 != pcVar20[1]) goto LAB_005eca0b;
                              pbVar19 = pbVar19 + 2;
                              pcVar20 = pcVar20 + 2;
                            } while (bVar3 != 0);
                            iVar7 = 0;
LAB_005eca10:
                            if (iVar7 != 0) goto LAB_005eca71;
                            iVar7 = FUN_00631d33(0x54);
                            local_4 = 8;
                            if (iVar7 == 0) {
                              uVar10 = 0;
                            }
                            else {
                              uVar10 = FUN_005b9d10(pbVar6,iVar17,iVar12);
                            }
                            iVar7 = (int)param_5 * 4;
                            local_4 = 0xffffffff;
                            *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)) = uVar10;
                            FUN_005e6f60(*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)),iVar17,0)
                            ;
                          }
                          FUN_0061dd53(iVar17,iVar12 + iVar21,0);
                        }
                        FUN_005d1bf0(pbVar6,*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x5c)));
                        if (*(int *)(iVar7 + *(int *)(param_1 + 0x5c)) == 0) {
                          ExceptionList = pvStack_c;
                          return pbVar6;
                        }
                        if (pbVar6 != (byte *)0x0) {
                          param_5 = param_5 + 1;
                        }
                      } while ((int)param_5 < iVar11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar7 = param_4;
    iVar17 = param_3;
    if ((*(byte *)(param_3 + 0xc) & 0x10) != 0) {
LAB_005ecbc7:
      iVar17 = 0;
      iVar7 = 0;
      if ((*(int **)(param_1 + 100) != (int *)0x0) &&
         (iVar11 = **(int **)(param_1 + 100), iVar11 != 0)) {
        iVar7 = iVar11 + 0x18;
      }
      param_5 = (LPCSTR)0x0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          iVar11 = iVar17 + *(int *)(param_1 + 0x4c);
          if ((*(byte *)(iVar17 + 0x20 + *(int *)(param_1 + 0x4c)) & 1) != 0) {
            *(undefined4 *)(iVar11 + 0x4c) =
                 *(undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(iVar11 + 0x38) * 4);
          }
          iVar11 = *(int *)(param_1 + 0x4c) + iVar17;
          if ((*(byte *)(iVar11 + 0x20) & 0x10) != 0) {
            *(undefined4 *)(iVar11 + 0x48) =
                 *(undefined4 *)(*(int *)(param_1 + 0x6c) + *(int *)(iVar11 + 0x3c) * 4);
          }
          if (iVar7 != 0) {
            uVar4 = *(undefined1 *)(iVar7 + *(int *)(iVar17 + 0x28 + *(int *)(param_1 + 0x4c)) * 3);
            *(uint *)(iVar17 + *(int *)(param_1 + 0x4c) + 0x44) =
                 (uint)CONCAT21(CONCAT11(uVar4,uVar4),uVar4);
          }
          param_5 = (LPCSTR)((int)param_5 + 1);
          iVar17 = iVar17 + 0x7c;
        } while ((int)param_5 < *(int *)(param_1 + 0x48));
      }
      ExceptionList = pvStack_c;
      return (byte *)0x0;
    }
  } while( true );
}

