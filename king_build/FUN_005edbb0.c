
int * __thiscall FUN_005edbb0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  byte *local_8c;
  int *local_88;
  int *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined *local_6c;
  byte *local_68;
  int *local_64;
  int local_60;
  undefined1 local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648dd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = param_3;
  local_88 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = -1;
  if ((param_2 != 0) &&
     (local_84 = param_1, iVar3 = FUN_0061c356(param_2,&DAT_00675198), iVar3 != 0)) {
    local_7c = iVar3;
    FUN_0061e41f(&DAT_007218d0,0x46,iVar3);
    bVar2 = *(byte *)(iVar3 + 0xc);
joined_r0x005edc33:
    if ((bVar2 & 0x10) == 0) {
      local_6c = &DAT_007218d0;
      local_8c = (byte *)FUN_005aa880(&local_6c);
      if (local_8c != (byte *)0x0) {
        pcVar10 = s_CLUSTER_00682a8c;
        pbVar6 = local_8c;
        do {
          bVar2 = *pbVar6;
          bVar16 = bVar2 < (byte)*pcVar10;
          if (bVar2 != *pcVar10) {
LAB_005edc8e:
            iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_005edc95;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar16 = bVar2 < (byte)pcVar10[1];
          if (bVar2 != pcVar10[1]) goto LAB_005edc8e;
          pbVar6 = pbVar6 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_005edc95:
        if (iVar3 == 0) {
          local_70 = 0;
          local_80 = 0;
          local_78 = 0;
          local_74 = 0;
          local_8c = (byte *)FUN_005aa880(&local_6c);
          if (local_8c == (byte *)0x0) {
            FUN_005d2520(s_Cluster_have_not_name__00682a74,0);
          }
          uVar7 = 0xffffffff;
          pbVar6 = local_8c;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar2 != 0);
          pbVar4 = (byte *)FUN_00631d33(~uVar7);
          uVar7 = 0xffffffff;
          piVar9 = &DAT_0072107c;
          pbVar6 = local_8c;
          do {
            pbVar12 = pbVar6;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pbVar12 = pbVar6 + 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar12;
          } while (bVar2 != 0);
          uVar7 = ~uVar7;
          local_64 = &DAT_00720834;
          local_68 = (byte *)&DAT_00722104;
          pbVar6 = pbVar12 + -uVar7;
          pbVar12 = pbVar4;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar12 = pbVar12 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pbVar12 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar12 = pbVar12 + 1;
          }
          piVar13 = (int *)0x72191c;
LAB_005edd28:
          iVar3 = FUN_005ee6a0(local_7c,&local_8c);
          switch(iVar3) {
          case 0:
          case 5:
            goto switchD_005edd45_caseD_0;
          case 1:
            if (0x7220eb < (int)piVar13) {
              FUN_0061c369(&DAT_007218d0,s_Too_many_images_in_cluster__s__00682a54,pbVar4);
              FUN_005d2520(&DAT_007218d0,0);
            }
            iVar3 = FUN_005eea00(local_8c);
            piVar13[1] = iVar3;
            piVar1 = piVar13 + 1;
            piVar13 = piVar13 + 1;
            local_74 = local_74 + 1;
            if (*piVar1 == 0) {
              FUN_0061c369(&DAT_007218d0,s_Not_found__s_image_in_cluster__s_00682a30,local_8c,pbVar4
                          );
              FUN_005d2520(&DAT_007218d0,0);
            }
            if ((*(byte *)(*piVar13 + 0x34) & 4) != 0) goto LAB_005edd28;
            pcVar10 = s_Image__s_in_cluster__s_has_not___00682a04;
            break;
          case 2:
            if (0x7228d3 < (int)local_68) {
              FUN_0061c369(&DAT_007218d0,s_Too_many_masks_in_cluster__s__006829e4,pbVar4);
              FUN_005d2520(&DAT_007218d0,0);
            }
            uVar5 = FUN_005eea00(local_8c);
            local_78 = local_78 + 1;
            *(undefined4 *)local_68 = uVar5;
            iVar3 = *(int *)local_68;
            local_68 = local_68 + 4;
            if (iVar3 != 0) goto LAB_005edd28;
            pcVar10 = s_Not_found__s_mask_in_cluster__s__006829c0;
            break;
          case 3:
            iVar3 = FUN_005fc7c0();
            piVar1 = local_64;
            if (iVar3 == 0) goto LAB_005edd28;
            if (0x721003 < (int)local_64) {
              FUN_0061c369(&DAT_007218d0,s_Too_many_sounds_in_cluster__s__006829a0,pbVar4);
              FUN_005d2520(&DAT_007218d0,0);
            }
            iVar3 = FUN_005eea00(local_8c);
            *piVar1 = iVar3;
            local_64 = piVar1 + 1;
            local_80 = local_80 + 1;
            if (*piVar1 != 0) goto LAB_005edd28;
            pcVar10 = s_Not_found__s_sound_in_cluster__s_0068297c;
            break;
          default:
            FUN_0061c369(&DAT_007218d0,s_Unrecognize_error_in_cluster__s__00682908,pbVar4);
            FUN_005d2520(&DAT_007218d0,0);
switchD_005edd45_caseD_0:
            if (iVar3 == 0) goto code_r0x005edf85;
            goto LAB_005edd28;
          case 6:
            if (0x72184b < (int)piVar9) {
              FUN_0061c369(&DAT_007218d0,s_Too_many_clasters_in_overlay__0068295c);
              FUN_005d2520(&DAT_007218d0,0);
            }
            FUN_005d1dd0(local_8c,piVar9);
            if (*piVar9 == 0) {
              FUN_0061c369(&DAT_007218d0,s_Not_found__s_cluster__00682944,local_8c);
              FUN_005d2520(&DAT_007218d0,0);
            }
            if (*(int *)(*piVar9 + 0x28) != 0) {
              FUN_0061c369(&DAT_007218d0,s_Twice_using_cluster__s__0068292c,local_8c);
              FUN_005d2520(&DAT_007218d0,0);
            }
            local_70 = local_70 + 1;
            piVar9 = piVar9 + 1;
            goto LAB_005edd28;
          }
          FUN_0061c369(&DAT_007218d0,pcVar10,local_8c,pbVar4);
          FUN_005d2520(&DAT_007218d0,0);
          goto LAB_005edd28;
        }
        pcVar10 = s_OVERLAY_006828d4;
        pbVar6 = local_8c;
        do {
          bVar2 = *pbVar6;
          bVar16 = bVar2 < (byte)*pcVar10;
          if (bVar2 != *pcVar10) {
LAB_005ee0e1:
            iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_005ee0e6;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar16 = bVar2 < (byte)pcVar10[1];
          if (bVar2 != pcVar10[1]) goto LAB_005ee0e1;
          pbVar6 = pbVar6 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar2 != 0);
        iVar3 = 0;
LAB_005ee0e6:
        if (iVar3 == 0) {
          iVar3 = 0;
          local_8c = (byte *)FUN_005aa880(&local_6c);
          if (local_8c == (byte *)0x0) {
            local_8c = &DAT_0068c120;
          }
          uVar7 = 0xffffffff;
          pbVar6 = local_8c;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar2 != 0);
          pbVar4 = (byte *)FUN_00631d33(~uVar7);
          uVar7 = 0xffffffff;
          pbVar6 = local_8c;
          do {
            pbVar12 = pbVar6;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pbVar12 = pbVar6 + 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar12;
          } while (bVar2 != 0);
          uVar7 = ~uVar7;
          pbVar6 = pbVar12 + -uVar7;
          pbVar12 = pbVar4;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar12 = pbVar12 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pbVar12 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar12 = pbVar12 + 1;
          }
          piVar9 = &DAT_0072107c;
          local_68 = pbVar4;
LAB_005ee14e:
          do {
            iVar15 = FUN_005ee6a0(local_7c,&local_8c);
            if ((iVar15 != 0) && (iVar15 != 5)) {
              if (iVar15 == 6) {
                if (0x72184b < (int)piVar9) {
                  FUN_0061c369(&DAT_007218d0,s_Too_many_clasters_in_overlay__0068295c);
                  FUN_005d2520(&DAT_007218d0,0);
                }
                FUN_005d1dd0(local_8c,piVar9);
                if (*piVar9 == 0) {
                  FUN_0061c369(&DAT_007218d0,s_Not_found__s_cluster__00682944,local_8c);
                  FUN_005d2520(&DAT_007218d0,0);
                }
                if (*(int *)(*piVar9 + 0x28) != 0) {
                  FUN_0061c369(&DAT_007218d0,s_Twice_using_cluster__s__0068292c,local_8c);
                  FUN_005d2520(&DAT_007218d0,0);
                }
                iVar3 = iVar3 + 1;
                piVar9 = piVar9 + 1;
                goto LAB_005ee14e;
              }
              FUN_0061c369(&DAT_007218d0,s_Unrecognize_error_in_overlay__s__006828b0,pbVar4);
              FUN_005d2520(&DAT_007218d0,0);
            }
          } while (iVar15 != 0);
          local_64 = (int *)FUN_00631d33(0x38);
          local_4 = 1;
          if (local_64 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_005ed800(iVar3,param_3);
          }
          local_4 = 0xffffffff;
          piVar9[9] = (int)local_68;
          if (0 < iVar3) {
            puVar11 = &DAT_0072107c;
            do {
              iVar15 = (**(code **)(*piVar9 + 0x14))(*puVar11);
              if (iVar15 == 0) {
                FUN_0061c369(&DAT_007218d0,s_Error_in_using_cluster_in_overla_00682888,local_68);
                FUN_005d2520(&DAT_007218d0,0);
              }
              puVar11 = puVar11 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          pbVar4 = &DAT_0068c120;
          pbVar6 = local_68;
          do {
            bVar2 = *pbVar6;
            bVar16 = bVar2 < *pbVar4;
            if (bVar2 != *pbVar4) {
LAB_005ee2e7:
              iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_005ee2ec;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar16 = bVar2 < pbVar4[1];
            if (bVar2 != pbVar4[1]) goto LAB_005ee2e7;
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_005ee2ec:
          if (iVar3 == 0) {
            iVar3 = *local_84;
            if (iVar3 == 0) {
              *local_84 = (int)piVar9;
            }
            else {
LAB_005ee5ed:
              FUN_005d1840(iVar3);
            }
          }
          else {
            FUN_005d1bf0(local_68,piVar9);
          }
        }
        else {
          pbVar4 = &DAT_00682880;
          pbVar6 = local_8c;
          do {
            bVar2 = *pbVar6;
            bVar16 = bVar2 < *pbVar4;
            if (bVar2 != *pbVar4) {
LAB_005ee349:
              iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_005ee34e;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar16 = bVar2 < pbVar4[1];
            if (bVar2 != pbVar4[1]) goto LAB_005ee349;
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_005ee34e:
          if (iVar3 == 0) {
            local_68 = (byte *)0x0;
            local_8c = (byte *)FUN_005aa880(&local_6c);
            if (local_8c == (byte *)0x0) {
              FUN_005d2520(s_Room_have_not_name__0068286c,0);
            }
            uVar7 = 0xffffffff;
            pbVar6 = local_8c;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              bVar2 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar2 != 0);
            pbVar4 = (byte *)FUN_00631d33(~uVar7);
            uVar7 = 0xffffffff;
            pbVar6 = local_8c;
            do {
              pbVar12 = pbVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pbVar12 = pbVar6 + 1;
              bVar2 = *pbVar6;
              pbVar6 = pbVar12;
            } while (bVar2 != 0);
            uVar7 = ~uVar7;
            pbVar6 = pbVar12 + -uVar7;
            pbVar12 = pbVar4;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
              pbVar6 = pbVar6 + 4;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pbVar12 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar12 = pbVar12 + 1;
            }
            local_64 = (int *)FUN_005ee8e0(0,local_8c);
            if (local_64 == (int *)0x0) {
              FUN_0061c369(local_5c,s_Not_found_room__s__00682858,local_8c);
              FUN_005d2520(local_5c,0);
            }
            local_88 = (int *)0x0;
            if (*(int *)(local_84[3] + 0x58) < 1) {
              iVar3 = 0;
            }
            else {
              iVar3 = **(int **)(local_84[3] + 0x5c);
            }
LAB_005ee408:
            do {
              iVar15 = FUN_005ee6a0(local_7c,&local_8c);
              switch(iVar15) {
              case 0:
              case 5:
                break;
              case 1:
                iVar3 = FUN_005eea00(local_8c);
                if (iVar3 == 0) {
                  pbVar12 = &DAT_0068284c;
                  pbVar6 = local_8c;
                  do {
                    bVar2 = *pbVar6;
                    bVar16 = bVar2 < *pbVar12;
                    if (bVar2 != *pbVar12) {
LAB_005ee46e:
                      iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_005ee473;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar6[1];
                    bVar16 = bVar2 < pbVar12[1];
                    if (bVar2 != pbVar12[1]) goto LAB_005ee46e;
                    pbVar6 = pbVar6 + 2;
                    pbVar12 = pbVar12 + 2;
                  } while (bVar2 != 0);
                  iVar15 = 0;
LAB_005ee473:
                  if (iVar15 != 0) {
                    pcVar10 = s_Not_found__s_image_00682838;
                    goto LAB_005ee4a9;
                  }
                }
                goto LAB_005ee408;
              default:
                FUN_0061c369(&DAT_007218d0,s_Unrecognize_error_in_ROOM_OVL_DE_006827d8,pbVar4);
                FUN_005d2520(&DAT_007218d0,0);
                break;
              case 6:
                FUN_005d1dd0(local_8c,&local_88);
                if (local_88 == (int *)0x0) {
                  pcVar10 = s_Not_found_cluster__s__00682820;
LAB_005ee4a9:
                  FUN_0061c369(&DAT_007218d0,pcVar10,local_8c);
                  FUN_005d2520(&DAT_007218d0,0);
                }
                goto LAB_005ee408;
              case 7:
                FUN_005d1dd0(local_8c,&local_60);
                if (local_60 == 0) {
                  FUN_0061c369(&DAT_007218d0,s_Not_found_Palette__s__00682808,local_8c);
                  FUN_005d2520(&DAT_007218d0,0);
                }
                iVar14 = 0;
                iVar15 = *(int *)(local_84[3] + 0x60);
                if (0 < iVar15) {
                  piVar9 = *(int **)(local_84[3] + 100);
                  do {
                    if (local_60 == *piVar9) break;
                    iVar14 = iVar14 + 1;
                    piVar9 = piVar9 + 1;
                  } while (iVar14 < iVar15);
                }
                local_68 = (byte *)((uint)local_68 | 1 << ((byte)iVar14 & 0x1f));
                goto LAB_005ee408;
              }
            } while (iVar15 != 0);
            FUN_00631d5c(pbVar4);
            piVar9 = local_84;
            iVar15 = *(int *)(local_84[3] + 0x58);
            if (iVar15 == 0) {
              iVar14 = -2;
            }
            else {
              iVar14 = 0;
              if (0 < iVar15) {
                piVar13 = *(int **)(local_84[3] + 0x5c);
                do {
                  if (iVar3 == *piVar13) break;
                  iVar14 = iVar14 + 1;
                  piVar13 = piVar13 + 1;
                } while (iVar14 < iVar15);
              }
              if (iVar15 <= iVar14) {
                iVar14 = -1;
              }
            }
            puVar11 = (undefined4 *)FUN_00631d33(0x1c);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              puVar11[3] = local_64;
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = &PTR_FUN_00651808;
              puVar11[4] = local_68;
              puVar11[5] = local_88;
              puVar11[6] = iVar14;
            }
            *(undefined4 **)((int)local_64 + 0x38) = puVar11;
            iVar3 = piVar9[2];
            if (iVar3 != 0) goto LAB_005ee5ed;
            piVar9[2] = (int)puVar11;
          }
        }
      }
      goto LAB_005ee5f2;
    }
    iVar15 = FUN_005edb20(param_4);
    if (iVar15 == 0) {
      FUN_005d2520(s_Not_enough_memory_for_Overlay_Sy_006827b0,0);
    }
    FUN_0061c25a(iVar3);
  }
  ExceptionList = local_c;
  return param_1;
code_r0x005edf85:
  local_64 = (int *)FUN_00631d33(0x50);
  iVar14 = local_74;
  iVar15 = local_78;
  if (local_64 == (int *)0x0) {
    local_88 = (int *)0x0;
  }
  else {
    local_4 = iVar3;
    local_88 = (int *)FUN_005ed010(local_74,local_78,local_80,local_70,param_3);
  }
  local_4 = 0xffffffff;
  local_88[9] = (int)pbVar4;
  if (0 < iVar14) {
    puVar11 = &DAT_00721920;
    do {
      FUN_005ed1c0(*puVar11);
      puVar11 = puVar11 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (0 < iVar15) {
    puVar11 = &DAT_00722104;
    do {
      FUN_005ed210(*puVar11);
      puVar11 = puVar11 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (0 < local_80) {
    puVar11 = &DAT_00720834;
    iVar3 = local_80;
    do {
      FUN_005ed260(*puVar11);
      puVar11 = puVar11 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = local_70;
  iVar15 = 0;
  if (0 < local_70) {
    puVar11 = &DAT_0072107c;
    do {
      iVar14 = (**(code **)(*local_88 + 0x14))(*puVar11);
      if (iVar14 == 0) {
        FUN_0061c369(&DAT_007218d0,s_Error_in_using__d_overlay_in_clu_006828dc,iVar15,pbVar4);
        FUN_005d2520(&DAT_007218d0,0);
      }
      iVar15 = iVar15 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar15 < iVar3);
  }
  if (local_84[1] == 0) {
    local_84[1] = (int)local_88;
  }
  else {
    FUN_005d1840(local_84[1]);
  }
  FUN_005d1bf0(pbVar4,local_88);
LAB_005ee5f2:
  iVar3 = local_7c;
  FUN_0061e41f(&DAT_007218d0,0x46,local_7c);
  bVar2 = *(byte *)(iVar3 + 0xc);
  iVar3 = local_7c;
  param_1 = local_84;
  goto joined_r0x005edc33;
}

