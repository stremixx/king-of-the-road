
/* WARNING: Removing unreachable block (ram,0x004071b0) */
/* WARNING: Removing unreachable block (ram,0x004071dc) */
/* WARNING: Removing unreachable block (ram,0x004066ed) */
/* WARNING: Removing unreachable block (ram,0x004071bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406560(void)

{
  int iVar1;
  undefined4 uVar2;
  double *pdVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  char cVar9;
  HANDLE hFindFile;
  BOOL BVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  double *pdVar18;
  undefined4 *puVar19;
  CHAR *pCVar20;
  uint uVar21;
  double *pdVar22;
  int *piVar23;
  undefined4 *puVar24;
  float10 fVar25;
  ulonglong uVar26;
  int *local_8e8;
  undefined4 local_8d4;
  uint local_8d0;
  uint local_8cc;
  int *local_8c0;
  LPCSTR local_898;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  int local_864;
  int local_860;
  int *local_84c;
  double local_844;
  double local_83c;
  double local_834;
  undefined1 local_80c [128];
  _WIN32_FIND_DATAA local_78c [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0063b220;
  local_14 = ExceptionList;
  bVar7 = false;
  bVar6 = false;
  DAT_0066b730 = 0xffffffff;
  _DAT_0068c104 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0044a420();
  FUN_0061c980();
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_0044c1c0();
  hFindFile = FindFirstFileA(local_898,local_78c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      iVar16 = -1;
      pCVar20 = local_78c[0].cFileName;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        cVar9 = *pCVar20;
        pCVar20 = pCVar20 + 1;
      } while (cVar9 != '\0');
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_0044c1c0();
      if (local_8cc == 0) {
        FUN_004525d0();
      }
      else {
        FUN_004611f0();
        local_8cc = local_8cc + 0xc;
      }
      FUN_0044c1c0();
      local_c = CONCAT31(local_c._1_3_,1);
      BVar10 = FindNextFileA(hFindFile,local_78c);
    } while (BVar10 != 0);
    FindClose(hFindFile);
  }
  if (local_8cc != 0) {
    for (iVar16 = (int)local_8cc / 0xc; iVar16 != 1; iVar16 = iVar16 >> 1) {
    }
    uVar26 = (ulonglong)local_8cc;
    uVar15 = local_8d0;
    FUN_0045b360();
    FUN_0045b470(0,local_8cc,local_8d4,uVar15,uVar26);
  }
  uVar15 = local_8d0;
  if (local_8cc != 0) {
    do {
      FUN_004012c0();
      FUN_004886c0();
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_004883f0();
      FUN_00489650();
      local_8e8 = (int *)*local_84c;
      if (local_8e8 != local_84c) {
        do {
          iVar16 = FUN_004053f0();
          iVar11 = FUN_00405510();
          piVar17 = (int *)(iVar16 + 0x10);
          if (&local_864 != piVar17) {
            uVar21 = local_860 - local_864;
            if ((uint)(*(int *)(iVar16 + 0x18) - *piVar17) < uVar21) {
              iVar12 = FUN_00458d60();
              if (*(int *)(iVar16 + 0x18) != *piVar17) {
                FUN_0044b440();
              }
              *piVar17 = iVar12;
              *(uint *)(iVar16 + 0x18) = iVar12 + uVar21;
            }
            else if ((uint)(*(int *)(iVar16 + 0x14) - *piVar17) < uVar21) {
              FUN_00407250();
              FUN_00407250((*(int *)(iVar16 + 0x14) - *piVar17) + local_864,local_860,
                           *(int *)(iVar16 + 0x14));
            }
            else {
              FUN_0061c980();
            }
            *(uint *)(iVar16 + 0x14) = *piVar17 + uVar21;
          }
          piVar17 = (int *)local_8e8[5];
          if (piVar17 != (int *)local_8e8[6]) {
            do {
              if ((uint)((*(int *)(*piVar17 + 0x14) - *(int *)(*piVar17 + 0x10)) / 0x18) < 2) {
                FUN_00401010(0x233,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                             s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x6c1,
                             s_Empty_or_single_point_road_segme_0066b9fc);
              }
              if ((*(byte *)(*piVar17 + 0xc) & 1) == 0) {
                while( true ) {
                  iVar12 = 0;
                  pdVar18 = *(double **)(*piVar17 + 0x10);
                  pdVar14 = *(double **)(*piVar17 + 0x14);
                  pdVar3 = pdVar18;
                  if (pdVar18 == pdVar14) break;
                  while( true ) {
                    pdVar22 = pdVar3 + 3;
                    if (pdVar22 == pdVar14) goto LAB_00406c8e;
                    FUN_00405ea0(*pdVar22 - *pdVar18,pdVar3[4] - pdVar18[1]);
                    dVar4 = SQRT(local_844 * local_844 +
                                 local_834 * local_834 + local_83c * local_83c);
                    if (dVar4 < _DAT_0064a5e8) break;
                    if (_DAT_0064a5e0 < dVar4) {
                      FUN_0061c369(local_80c,s__d___g__g__g____g__g__g__0066b9e0,iVar12,
                                   *(undefined4 *)pdVar18,*(undefined4 *)((int)pdVar18 + 4),
                                   *(undefined4 *)(pdVar18 + 1),*(undefined4 *)((int)pdVar18 + 0xc),
                                   *(undefined4 *)(pdVar18 + 2),*(undefined4 *)((int)pdVar18 + 0x14)
                                   ,*(undefined4 *)pdVar22,*(undefined4 *)((int)pdVar3 + 0x1c),
                                   *(undefined4 *)(pdVar3 + 4));
                      FUN_00401010(0x233,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x6eb,
                                   s_Erroneous_Bline_segment_data_fou_0066b9bc);
                    }
                    pdVar18 = pdVar18 + 3;
                    iVar12 = iVar12 + 1;
                    pdVar14 = *(double **)(*piVar17 + 0x14);
                    pdVar3 = pdVar22;
                    if (pdVar18 == pdVar14) goto LAB_00406c8e;
                  }
                  iVar12 = *piVar17;
                  if (pdVar3 + 6 != *(double **)(iVar12 + 0x14)) {
                    FUN_004608c0();
                  }
                  piVar13 = (int *)(iVar12 + 0x14);
                  *piVar13 = *piVar13 + -0x18;
                }
LAB_00406c8e:
                local_8c0 = (int *)FUN_00631d33();
                local_c._0_1_ = 0xe;
                if (local_8c0 == (int *)0x0) {
                  local_8c0 = (int *)0x0;
                }
                else {
                  FUN_004072e0();
                  *local_8c0 = (int)&PTR_LAB_0064a61c;
                  local_c._0_1_ = 0xf;
                  FUN_0048c6d0();
                  *local_8c0 = (int)&PTR_LAB_0064a5b0;
                }
                local_c = CONCAT31(local_c._1_3_,3);
                iVar12 = (**(code **)(*local_8c0 + 0x18))();
                if (iVar12 < 1) {
                  FUN_00401010(0x233,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x6fd,
                               s_Empty_or_single_point_road_segme_0066b98c);
                }
              }
              else {
                local_8c0 = (int *)FUN_00631d33();
                local_c._0_1_ = 4;
                if (local_8c0 == (int *)0x0) {
                  local_8c0 = (int *)0x0;
                }
                else {
                  FUN_00490590();
                  local_c = CONCAT31(local_c._1_3_,5);
                  piVar13 = (int *)FUN_0048e990();
                  bVar7 = true;
                  bVar6 = true;
                  local_c = 6;
                  FUN_004072e0();
                  *local_8c0 = (int)&PTR_LAB_0064a61c;
                  local_c = 7;
                  FUN_00478a20();
                  *local_8c0 = (int)&PTR_FUN_0064a5f0;
                  iVar12 = *piVar13;
                  local_c._0_1_ = 8;
                  if (iVar12 != piVar13[1]) {
                    do {
                      FUN_0048dc60();
                      local_c._0_1_ = 9;
                      FUN_00459180();
                      local_c._0_1_ = 8;
                      FUN_00458980();
                      iVar12 = iVar12 + 0x244;
                    } while (iVar12 != piVar13[1]);
                  }
                }
                if (bVar7) {
                  bVar7 = false;
                  local_c = 0xc;
                  for (iVar12 = local_88c; iVar12 != local_888; iVar12 = iVar12 + 0x244) {
                    FUN_0046c880();
                  }
                  local_c._1_3_ = (undefined3)((uint)local_c >> 8);
                  local_c = CONCAT31(local_c._1_3_,10);
                  if ((local_884 - local_88c) / 0x244 != 0) {
                    FUN_0044b440();
                  }
                }
                local_c = 3;
                if (bVar6) {
                  bVar6 = false;
                  local_c._0_1_ = 0xd;
                  local_c._1_3_ = 0;
                  FUN_0047aba0();
                  local_c = CONCAT31(local_c._1_3_,3);
                  FUN_00447240();
                }
              }
              piVar13 = local_8c0 + 10;
              local_8c0[7] = *(int *)(*piVar17 + 8);
              piVar23 = (int *)*piVar17;
              local_8c0[8] = *piVar23;
              local_8c0[9] = piVar23[1];
              iVar12 = *piVar17;
              piVar23 = (int *)(iVar12 + 0x1c);
              if (piVar23 != piVar13) {
                uVar21 = *(int *)(iVar12 + 0x20) - *piVar23 >> 3;
                if ((uint)(local_8c0[0xc] - *piVar13 >> 3) < uVar21) {
                  iVar12 = FUN_00458e70();
                  if (local_8c0[0xc] - *piVar13 >> 3 != 0) {
                    FUN_0044b440();
                  }
                  *piVar13 = iVar12;
                  local_8c0[0xc] = iVar12 + uVar21 * 8;
                }
                else if ((uint)(local_8c0[0xb] - *piVar13 >> 3) < uVar21) {
                  FUN_00407220();
                  FUN_00407220(*piVar23 + (local_8c0[0xb] - *piVar13 >> 3) * 8,
                               *(undefined4 *)(iVar12 + 0x20),local_8c0[0xb]);
                }
                else {
                  FUN_0061c980();
                }
                local_8c0[0xb] = *piVar13 + uVar21 * 8;
              }
              local_8c0[4] = iVar16;
              local_8c0[5] = iVar11;
              if ((*(byte *)(*piVar17 + 0xc) & 4) != 0) {
                local_8c0[2] = local_8c0[2] | 4;
              }
              if ((*(byte *)(*piVar17 + 0xc) & 8) != 0) {
                local_8c0[2] = local_8c0[2] & 0xfffffffbU | 8;
              }
              if ((*(byte *)(*piVar17 + 0xc) & 0x10) != 0) {
                local_8c0[2] = local_8c0[2] | 0x10;
              }
              if ((*(byte *)(*piVar17 + 0xc) & 0x20) != 0) {
                local_8c0[2] = local_8c0[2] | 0x20;
              }
              if ((*(byte *)(*piVar17 + 0xc) & 0x40) != 0) {
                local_8c0[2] = local_8c0[2] | 0xc0;
              }
              fVar25 = (float10)(**(code **)(*local_8c0 + 0x24))();
              *(double *)(iVar11 + 0x10) = (double)(fVar25 + (float10)*(double *)(iVar11 + 0x10));
              if (((*(byte *)(*piVar17 + 0xc) & 1) == 0) &&
                 (iVar12 = (**(code **)(*local_8c0 + 0x18))(), iVar12 < 1)) {
                FUN_00401010(0x233,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                             s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x720,
                             s_Empty_or_single_point_road_segme_0066b95c);
              }
              FUN_00405a50();
              piVar17 = piVar17 + 1;
            } while (piVar17 != (int *)local_8e8[6]);
          }
          piVar17 = (int *)local_8e8[8];
          piVar13 = DAT_0068be60;
          piVar23 = DAT_0068be64;
          if (piVar17 != (int *)local_8e8[9]) {
            do {
              while ((piVar8 = DAT_0068be64, bVar5 = piVar13 != DAT_0068be64, DAT_0068be64 = piVar23
                     , bVar5 && (cVar9 = FUN_00407280(), cVar9 == '\0'))) {
                piVar13 = piVar13 + 1;
                piVar23 = DAT_0068be64;
                DAT_0068be64 = piVar8;
              }
              if (piVar13 == DAT_0068be64) {
                iVar12 = FUN_00631d33();
                local_c._0_1_ = 0x10;
                if (iVar12 == 0) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = FUN_00470a10();
                }
                local_c = CONCAT31(local_c._1_3_,3);
                if (DAT_0068be64 == DAT_0068be68) {
                  FUN_0044cb90();
                }
                else {
                  if (DAT_0068be64 != (int *)0x0) {
                    *DAT_0068be64 = iVar12;
                  }
                  DAT_0068be64 = DAT_0068be64 + 1;
                }
                if ((*(byte *)(*piVar17 + 0x88) & 1) != 0) {
                  *(uint *)(DAT_0068be64[-1] + 0xc) = *(uint *)(DAT_0068be64[-1] + 0xc) | 8;
                }
                if ((*(byte *)(*piVar17 + 0x88) & 2) != 0) {
                  *(uint *)(DAT_0068be64[-1] + 0xc) = *(uint *)(DAT_0068be64[-1] + 0xc) | 0x40;
                }
                piVar13 = DAT_0068be64 + -1;
              }
              else {
                FUN_00401010(0,200);
              }
              iVar12 = *piVar17;
              iVar1 = *piVar13;
              uVar2 = *(undefined4 *)(iVar12 + 0x14);
              *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar12 + 0x10);
              *(undefined4 *)(iVar1 + 0x34) = uVar2;
              uVar2 = *(undefined4 *)(iVar12 + 0x1c);
              *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar12 + 0x18);
              *(undefined4 *)(iVar1 + 0x3c) = uVar2;
              uVar2 = *(undefined4 *)(iVar12 + 0x24);
              *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar12 + 0x20);
              *(undefined4 *)(iVar1 + 0x44) = uVar2;
              *(int *)(*piVar13 + 0xb8) = iVar16;
              *(int *)(*piVar13 + 0xbc) = iVar11;
              if (*(char *)(*piVar17 + 0x8c) != '\0') {
                *(uint *)(*piVar13 + 0xc) = *(uint *)(*piVar13 + 0xc) | 0x80;
                puVar19 = (undefined4 *)(*piVar17 + 0x28);
                puVar24 = (undefined4 *)(*piVar13 + 0x48);
                for (iVar12 = 0x18; iVar12 != 0; iVar12 = iVar12 + -1) {
                  *puVar24 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar24 = puVar24 + 1;
                }
              }
              piVar17 = piVar17 + 1;
              piVar13 = DAT_0068be60;
              piVar23 = DAT_0068be64;
            } while (piVar17 != (int *)local_8e8[9]);
          }
          local_8e8 = (int *)*local_8e8;
        } while (local_8e8 != local_84c);
      }
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00488780();
      uVar15 = uVar15 + 0xc;
    } while (uVar15 != local_8cc);
  }
  FUN_00405ef0();
  FUN_004af790();
  FUN_00454890();
  FUN_004060c0();
  uVar15 = local_890 - (int)local_898;
  if (uVar15 != 0) {
    if (uVar15 < 0x81) {
      FUN_00401aa0();
      *(undefined4 *)local_898 = *(undefined4 *)(&DAT_0068c120 + (uVar15 + 7 >> 3) * 4);
      *(LPCSTR *)(&DAT_0068c120 + (uVar15 + 7 >> 3) * 4) = local_898;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888();
    }
  }
  local_c = 0x11;
  if (local_8cc != 0) {
    do {
      FUN_004497b0();
      local_8d0 = local_8d0 + 0xc;
    } while (local_8d0 != local_8cc);
  }
  ExceptionList = local_14;
  return;
}

