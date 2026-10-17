
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f4e0(void)

{
  LPCSTR lpFileName;
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  BOOL BVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  bool bVar22;
  char *pcVar23;
  undefined1 *puVar25;
  undefined8 uVar24;
  char *pcVar26;
  undefined8 uVar27;
  char local_9a1;
  int local_9a0;
  int *local_99c;
  int local_998;
  float local_994;
  undefined4 *local_990;
  float local_984;
  float local_97c;
  float local_978;
  FARPROC local_968;
  HMODULE local_958;
  char local_90c [32];
  float local_8ec;
  float local_8e8;
  float local_8e4;
  undefined4 auStack_8e0 [9];
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  float local_8b0;
  float local_8ac;
  float local_8a0;
  float local_89c;
  float local_898;
  float local_894;
  float local_888;
  float local_884;
  float local_880;
  float local_87c;
  float local_874;
  float local_870;
  char local_868 [300];
  undefined1 auStack_73c [100];
  undefined1 local_6d8 [48];
  undefined1 auStack_6a8 [100];
  undefined1 auStack_644 [100];
  CHAR local_5e0 [100];
  undefined1 local_57c [48];
  undefined1 local_54c [48];
  CHAR local_51c [200];
  CHAR local_454 [100];
  undefined1 local_3f0 [200];
  undefined1 local_328 [200];
  undefined1 local_260 [300];
  undefined1 local_134 [304];
  
  local_968 = (FARPROC)0x0;
  local_958 = (HMODULE)0x0;
  if ((DAT_006967c0 == 0) &&
     ((local_958 = LoadLibraryA(s_qhdll_dll_00674294), local_958 == (HMODULE)0x0 ||
      (local_968 = GetProcAddress(local_958,s_make_qh_planes_00674270), local_968 == (FARPROC)0x0)))
     ) {
    FUN_004e1e9c();
  }
  local_998 = 0;
  if (0 < DAT_006cd28c) {
    do {
      uVar16 = 0xffffffff;
      iVar19 = local_998 * 0x970;
      pcVar26 = &DAT_006970c6 + iVar19;
      pcVar23 = pcVar26;
      do {
        pcVar21 = pcVar23;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar21 = pcVar23 + 1;
        cVar4 = *pcVar23;
        pcVar23 = pcVar21;
      } while (cVar4 != '\0');
      uVar16 = ~uVar16;
      pcVar23 = pcVar21 + -uVar16;
      pcVar21 = local_90c;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar21 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar21 = pcVar21 + 1;
      }
      iVar8 = FUN_005ee8e0(0);
      iVar20 = local_998 * 0x5d0;
      *(int *)(&DAT_006d1050 + iVar20) = iVar8;
      if (iVar8 == 0) {
        FUN_0061c369(local_868,s_There_is_No_the_node_of_Vehicle___00678b64,local_998 + 1);
        FUN_004e1e9c();
      }
      else {
        (&DAT_0069702c)[local_998 * 0x25c] = 0;
        (&DAT_00697028)[local_998 * 0x25c] = 0;
        local_9a1 = '\0';
        local_994 = 100.0;
        local_984 = -100.0;
        do {
          FUN_0061c369(local_868,s__sWheel_dSpace_00678b54,local_90c);
          iVar9 = FUN_005ee8e0(0,local_868);
          iVar8 = local_998 * 0x174 + (int)local_9a1;
          *(int *)(&DAT_006d1054 + iVar8 * 4) = iVar9;
          if ((iVar9 == 0) ||
             ((&DAT_0069702c)[local_998 * 0x25c] != (&DAT_00697028)[local_998 * 0x25c])) {
            if ((local_9a1 < '\x02') && ((&DAT_0069710c)[local_998 * 0x25c] == 3)) {
              puVar25 = local_3f0;
              uVar24 = CONCAT44(local_868,s_There_was_NOT_found_the_wheel_sp_00678b20);
              FUN_0061c369();
              FUN_004e1e9c(local_3f0,puVar25,uVar24);
            }
            if ((local_9a1 < '\x04') &&
               ((((iVar9 = (&DAT_0069710c)[local_998 * 0x25c], iVar9 == 4 || (iVar9 == 2)) ||
                 (iVar9 == 1)) || (iVar9 == 0)))) {
              puVar25 = local_328;
              uVar24 = CONCAT44(local_868,s_There_was_NOT_found_the_wheel_sp_00678b20);
              FUN_0061c369();
              FUN_004e1e9c(local_328,puVar25,uVar24);
            }
            FUN_0061c369(local_868,s__sAddWheel_dSpace_00678b0c,local_90c);
            iVar9 = FUN_005ee8e0(0,local_868);
            *(int *)(&DAT_006d1054 + iVar8 * 4) = iVar9;
            if (iVar9 == 0) break;
            FUN_005e10a0(iVar9);
          }
          else {
            FUN_005e10a0(iVar9);
            iVar8 = __ftol();
            fVar11 = (float)iVar8;
            if (fVar11 < local_994) {
              local_994 = fVar11;
            }
            if (fVar11 <= local_984) {
              (&DAT_00697028)[local_998 * 0x25c] = (&DAT_00697028)[local_998 * 0x25c] + 1;
            }
            else {
              (&DAT_00697028)[local_998 * 0x25c] = (&DAT_00697028)[local_998 * 0x25c] + 1;
              local_984 = fVar11;
            }
          }
          (&DAT_0069702c)[local_998 * 0x25c] = (&DAT_0069702c)[local_998 * 0x25c] + 1;
          local_9a1 = local_9a1 + '\x01';
        } while (local_9a1 < '\b');
        if ((float)(&DAT_006968dc)[local_998 * 0x25c] == _DAT_0064b254) {
          pcVar26 = local_868;
          uVar24 = CONCAT44(&DAT_006970ee + iVar19,s_There_is_NO_body_MASS_of_the_Veh_00678ac0);
          FUN_0061c369();
          FUN_004e1e9c(local_868,pcVar26,uVar24);
        }
        else {
          if ((&DAT_00696b24)[local_998 * 0x25c] == 0) {
            local_8b0 = *(float *)(&DAT_00696880 + iVar19) * DAT_007015a0;
            local_8ac = *(float *)(&DAT_00696880 + iVar19) * DAT_007015a4;
            local_898 = local_8b0 * _DAT_0064b248;
            local_894 = local_8ac * _DAT_0064b248;
            local_874 = *(float *)(&DAT_006d1184 + iVar20) - local_898;
            local_870 = *(float *)(&DAT_006d1188 + iVar20) - local_894;
            puVar10 = (undefined4 *)
                      FUN_005ab330(local_57c,local_874 - *(float *)(&DAT_00696970 + iVar19),
                                   local_870 - *(float *)(&DAT_00696974 + iVar19));
            puVar15 = (undefined4 *)(&DAT_006d1310 + iVar20);
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar10 = (undefined4 *)FUN_005aba00(local_54c);
            puVar15 = (undefined4 *)(&DAT_006d1340 + iVar20);
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            puVar10 = &DAT_006967c8 + local_998 * 0x25c;
            puVar15 = (undefined4 *)(&DAT_006d1310 + iVar20);
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
            puVar10 = (undefined4 *)FUN_005aba00(local_6d8);
            iVar8 = (&DAT_00696a90)[local_998 * 0x25c];
            puVar15 = (undefined4 *)(&DAT_006d1340 + iVar20);
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
            if (iVar8 == 0) {
              bVar18 = 0;
              if (0 < (int)(&DAT_0069702c)[local_998 * 0x25c]) {
                iVar8 = 0;
                do {
                  if (iVar8 == 0) {
                    local_888 = -DAT_007015a4;
                    fVar11 = *(float *)(&DAT_00696880 + iVar19);
                    local_884 = -DAT_007015a8;
                    local_97c = -DAT_007015a0 * fVar11;
                    local_978 = fVar11 * local_888;
                    fVar11 = fVar11 * local_884;
                  }
                  else if (iVar8 == 1) {
                    fVar11 = *(float *)(&DAT_00696880 + iVar19);
                    local_97c = fVar11 * DAT_007015a0;
                    local_978 = fVar11 * DAT_007015a4;
                    fVar11 = fVar11 * DAT_007015a8;
                    local_8ec = local_97c;
                    local_8e8 = local_978;
                    local_8e4 = fVar11;
                  }
                  else if ((bVar18 & 1) == 0) {
                    local_8a0 = -DAT_007015a4;
                    fVar11 = *(float *)(&DAT_00696884 + iVar19);
                    local_89c = -DAT_007015a8;
                    local_97c = fVar11 * -DAT_007015a0;
                    local_978 = fVar11 * local_8a0;
                    fVar11 = fVar11 * local_89c;
                  }
                  else {
                    fVar11 = *(float *)(&DAT_00696884 + iVar19);
                    local_97c = fVar11 * DAT_007015a0;
                    local_978 = fVar11 * DAT_007015a4;
                    fVar11 = fVar11 * DAT_007015a8;
                  }
                  iVar9 = (local_998 * 0x1f + iVar8) * 0x30;
                  fVar2 = *(float *)(&DAT_006d1188 + iVar9);
                  fVar3 = *(float *)(&DAT_006d118c + iVar9);
                  if (iVar8 < (int)(&DAT_00697028)[local_998 * 0x25c]) {
                    pfVar1 = (float *)(&DAT_00696970 + iVar8 * 0xc + iVar19);
                    *pfVar1 = local_97c + *(float *)(&DAT_006d1184 + iVar9);
                    pfVar1[1] = local_978 + fVar2;
                    pfVar1[2] = fVar11 + fVar3;
                  }
                  else {
                    pfVar1 = (float *)(&DAT_006969d0 +
                                      (iVar8 - (&DAT_00697028)[local_998 * 0x25c]) * 0xc + iVar19);
                    *pfVar1 = local_97c + *(float *)(&DAT_006d1184 + iVar9);
                    pfVar1[1] = local_978 + fVar2;
                    pfVar1[2] = fVar11 + fVar3;
                  }
                  bVar18 = bVar18 + 1;
                  iVar8 = (int)(char)bVar18;
                } while (iVar8 < (int)(&DAT_0069702c)[local_998 * 0x25c]);
              }
              if ((int)(&DAT_00697028)[local_998 * 0x25c] < 8) {
                puVar10 = (undefined4 *)
                          (&DAT_00696970 + (&DAT_00697028)[local_998 * 0x25c] * 0xc + iVar19);
                *puVar10 = (&DAT_00696fa4)[local_998 * 0x25c];
                puVar10[1] = (&DAT_00696fa8)[local_998 * 0x25c];
                puVar10[2] = (&DAT_00696fac)[local_998 * 0x25c];
                *(float *)(&DAT_00696978 + (&DAT_00697028)[local_998 * 0x25c] * 0xc + iVar19) =
                     *(float *)(&DAT_00696978 + iVar19) - (float)_DAT_0064ba68;
              }
            }
          }
          if (local_968 != (FARPROC)0x0) {
            lpFileName = &DAT_0069706c + iVar19;
            SetFileAttributesA(lpFileName,0x20);
            iVar8 = (&DAT_00697028)[local_998 * 0x25c];
            iVar9 = 0;
            local_9a1 = '\0';
            if (iVar8 < 1) goto LAB_0053fe1b;
            do {
              if ((local_9a1 < '\x02') || (iVar8 + -2 <= (int)local_9a1)) {
                fVar11 = *(float *)(&DAT_0069682c + iVar19);
                local_880 = DAT_00701590 * fVar11;
                local_87c = DAT_00701594 * fVar11;
                pfVar1 = (float *)(&DAT_00696970 + local_9a1 * 0xc + iVar19);
                fVar2 = *pfVar1 - local_880;
                fVar3 = pfVar1[1] - local_87c;
                fVar11 = pfVar1[2] - fVar11 * DAT_00701598;
                pfVar1 = (float *)(&DAT_00696b38 +
                                  local_998 * 0x25c + (&DAT_00696b30)[local_998 * 0x25c] * 3);
                *pfVar1 = fVar2;
                pfVar1[1] = fVar3;
                pfVar1[2] = fVar11;
                FUN_0061c369();
                FUN_0061c369(local_5e0,s__f__f__f_00678ab4,(double)fVar2,(double)fVar3,
                             (double)fVar11);
                iVar9 = iVar9 + 1;
                BVar12 = WritePrivateProfileStringA
                                   ((LPCSTR)(&DAT_006970a8 + local_998 * 0x25c),local_51c,local_5e0,
                                    lpFileName);
                if (BVar12 == 0) {
                  GetLastError();
                  uVar13 = FUN_0061f231();
                  uVar27 = CONCAT44(uVar13,&DAT_006970a8 + local_998 * 0x25c);
                  puVar25 = local_260;
                  uVar24 = CONCAT44(lpFileName,s_InitVehicleNodes__Error_1_while_w_00678a7c);
                  FUN_0061c369();
                  FUN_004e1e9c(local_260,puVar25,uVar24,uVar27);
                }
                (&DAT_00696b30)[local_998 * 0x25c] = (&DAT_00696b30)[local_998 * 0x25c] + 1;
              }
              iVar8 = (&DAT_00697028)[local_998 * 0x25c];
              local_9a1 = local_9a1 + '\x01';
            } while (local_9a1 < iVar8);
            for (; iVar9 < 8; iVar9 = iVar9 + 1) {
LAB_0053fe1b:
              FUN_0061c369();
              BVar12 = WritePrivateProfileStringA
                                 ((LPCSTR)(&DAT_006970a8 + local_998 * 0x25c),local_454,(LPCSTR)0x0,
                                  lpFileName);
              if (BVar12 == 0) {
                GetLastError();
                uVar13 = FUN_0061f231();
                puVar25 = local_134;
                uVar27 = CONCAT44(uVar13,lpFileName);
                uVar24 = CONCAT44(&DAT_006970a8 + local_998 * 0x25c,
                                  s_InitVehicleNodes__Error_while_wr_00678a44);
                FUN_0061c369();
                FUN_004e1e9c(local_134,puVar25,uVar24,uVar27);
              }
            }
            (*local_968)(&DAT_00696b38 + local_998 * 0x25c,(&DAT_00696b30)[local_998 * 0x25c],
                         lpFileName);
          }
          fVar2 = (float)(&DAT_006967f0)[local_998 * 0x25c];
          fVar11 = (float)(&DAT_006968ec)[local_998 * 0x25c];
          iVar8 = (&DAT_0069710c)[local_998 * 0x25c];
          fVar3 = (local_984 - local_994) * (float)_DAT_0064a5a8;
          fVar6 = fVar3 + local_994;
          fVar3 = local_984 - fVar3;
          if (iVar8 != 3) {
            if (fVar2 < fVar6) {
LAB_0053ff87:
              pcVar23 = s_Center_Mass_of__s_is_out_of_chas_006789bc;
              fVar5 = fVar2;
              fVar7 = fVar6;
            }
            else {
              if ((fVar2 <= fVar3) &&
                 (((local_994 <= fVar11 && (fVar11 <= local_984)) || ((iVar8 != 1 && (iVar8 != 4))))
                 )) goto LAB_0053ffd2;
              if (fVar3 < fVar2) goto LAB_0053ff87;
              pcVar23 = s_Cargo_Load_Point_of__s_is_out_of_00678a00;
              fVar5 = fVar11;
              fVar3 = local_984;
              fVar7 = local_994;
            }
            FUN_0061c369(local_868,pcVar23,local_90c,(double)fVar5,(double)fVar3,(double)fVar7);
            FUN_004e1e9c();
          }
LAB_0053ffd2:
          if ((&DAT_0069710c)[local_998 * 0x25c] == 3) {
            fVar3 = (float)(&DAT_00696fa8)[local_998 * 0x25c];
            if (fVar2 < fVar6) {
LAB_0054005f:
              pcVar23 = s_Center_Mass_of__s_is_out_of_chas_006789bc;
            }
            else {
              if (((fVar2 <= fVar3) && (local_994 <= fVar11)) && (fVar11 <= fVar3))
              goto LAB_005400aa;
              if (fVar3 < fVar2) goto LAB_0054005f;
              pcVar23 = s_Cargo_Load_Point_of__s_is_out_of_00678978;
              fVar2 = fVar11;
            }
            FUN_0061c369(local_868,pcVar23,local_90c,(double)fVar2,(double)fVar3,(double)local_994);
            FUN_004e1e9c();
          }
LAB_005400aa:
          *(undefined4 *)(&DAT_006d1370 + iVar20) = (&DAT_00696b18)[local_998 * 0x25c];
          *(undefined4 *)(&DAT_006d1374 + iVar20) = (&DAT_00696b1c)[local_998 * 0x25c];
          iVar8 = (&DAT_0069710c)[local_998 * 0x25c];
          *(undefined4 *)(&DAT_006d1378 + iVar20) = (&DAT_00696b20)[local_998 * 0x25c];
          *(undefined4 *)(&DAT_006d1078 + iVar20) = 0;
          if ((iVar8 == 3) || (iVar8 == 4)) {
            *(undefined4 *)(&DAT_006d1074 + iVar20) = 0;
LAB_00540131:
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d12e0 + iVar20);
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            pcVar23 = local_868;
            uVar24 = CONCAT44(pcVar26,s__sBoothSpace_00678968);
            FUN_0061c369();
            iVar8 = FUN_004e3fe0(0,local_868,0,pcVar23,uVar24);
            *(int *)(&DAT_006d1074 + iVar20) = iVar8;
            if (iVar8 == 0) goto LAB_00540131;
            FUN_005e10a0(iVar8);
          }
          *(undefined4 *)(&DAT_006d10dc + iVar20) = 0;
          *(undefined4 *)(&DAT_006d10fc + iVar20) = 0;
          *(undefined4 *)(&DAT_006d111c + iVar20) = 0;
          *(undefined4 *)(&DAT_006d1120 + iVar20) = 0;
          *(undefined4 *)(&DAT_006d1124 + iVar20) = 0;
          *(undefined4 *)(&DAT_006d10e0 + iVar20) = 0;
          *(undefined4 *)(&DAT_006d1100 + iVar20) = 0;
          *(undefined4 *)(&DAT_006d1128 + iVar20) = 0;
          *(undefined4 *)(&DAT_006d112c + iVar20) = 0;
          *(undefined4 *)(&DAT_006d1130 + iVar20) = 0;
          if (((&DAT_0069710c)[local_998 * 0x25c] != 3) && ((&DAT_0069710c)[local_998 * 0x25c] != 4)
             ) {
            pcVar23 = local_868;
            uVar24 = CONCAT44(local_90c,s__sFFaraL_0067895c);
            FUN_0061c369();
            uVar13 = FUN_004e3fe0(0,local_868,0,pcVar23,uVar24);
            uVar14 = FUN_005ee8e0(uVar13,&DAT_00678954);
            *(undefined4 *)(&DAT_006d10e4 + iVar20) = uVar14;
            uVar13 = FUN_005ee8e0(uVar13,&DAT_0067894c);
            *(undefined4 *)(&DAT_006d10e8 + iVar20) = uVar13;
          }
          FUN_0061c369();
          iVar8 = FUN_005ee8e0();
          if (iVar8 == 0) {
            *(undefined4 *)(&DAT_006d107c + iVar20) = 0;
            *(undefined4 *)(&DAT_006d108c + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1104 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d110c + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1110 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1134 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d113c + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1140 + iVar20) = 0;
          }
          else {
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d107c + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d108c + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d1104 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraKey_00678904);
            *(undefined4 *)(&DAT_006d110c + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraKeyBG_006788f4);
            *(undefined4 *)(&DAT_006d1110 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraBW_006788e8);
            *(undefined4 *)(&DAT_006d1134 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraB_006788dc);
            *(undefined4 *)(&DAT_006d113c + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraBG_006788d0);
            *(undefined4 *)(&DAT_006d1140 + iVar20) = uVar13;
          }
          FUN_0061c369();
          iVar8 = FUN_005ee8e0();
          if (iVar8 == 0) {
            *(undefined4 *)(&DAT_006d1080 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1090 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1108 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1114 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1118 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1138 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1144 + iVar20) = 0;
            *(undefined4 *)(&DAT_006d1148 + iVar20) = 0;
          }
          else {
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d1080 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d1090 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8);
            *(undefined4 *)(&DAT_006d1108 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraKey_00678904);
            *(undefined4 *)(&DAT_006d1114 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraKeyBG_006788f4);
            *(undefined4 *)(&DAT_006d1118 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraBW_006788e8);
            *(undefined4 *)(&DAT_006d1138 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraB_006788dc);
            *(undefined4 *)(&DAT_006d1144 + iVar20) = uVar13;
            uVar13 = FUN_005ee8e0(iVar8,s_ReflFaraBG_006788d0);
            *(undefined4 *)(&DAT_006d1148 + iVar20) = uVar13;
          }
          puVar10 = auStack_8e0 + 2;
          iVar8 = 4;
          do {
            puVar10[-2] = 0;
            puVar10[-1] = 0;
            *puVar10 = 0;
            puVar10 = puVar10 + 3;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          puVar10 = &DAT_00701550;
          puVar15 = auStack_8e0;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar15 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          }
          pcVar23 = local_868;
          uVar24 = CONCAT44(local_90c,s_hit__s_006773e0);
          FUN_0061c369();
          uVar13 = FUN_004e3fe0(0,local_868,local_90c,pcVar23,uVar24);
          *(undefined4 *)(&DAT_006d1094 + iVar20) = uVar13;
          uVar13 = FUN_004e3fe0(uVar13,s_CollisionKey_006773d0,local_90c);
          *(undefined4 *)(&DAT_006d1098 + iVar20) = uVar13;
          local_9a1 = '\0';
          if (0 < (int)(&DAT_0069702c)[local_998 * 0x25c]) {
            iVar8 = 0;
            do {
              FUN_0061c369(local_868,s__swheel_d_00678898,local_90c);
              FUN_0061c369();
              iVar8 = (iVar8 + local_998 * 0x174) * 4;
              *(undefined4 *)(&DAT_006d109c + iVar8) = 0;
              uVar13 = FUN_004e3fe0(0);
              *(undefined4 *)(&DAT_006d10bc + iVar8) = uVar13;
              local_9a1 = local_9a1 + '\x01';
              iVar8 = (int)local_9a1;
            } while (iVar8 < (int)(&DAT_0069702c)[local_998 * 0x25c]);
          }
          local_990 = (undefined4 *)(&DAT_006d10ec + iVar20);
          local_9a0 = 0;
          local_99c = (int *)0x4;
          do {
            switch(local_9a0) {
            case 0:
              pcVar23 = s_FGLKey_0067887c;
              break;
            case 1:
              pcVar23 = s_FGRKey_00678874;
              break;
            case 2:
              pcVar23 = s_BGLKey_0067886c;
              break;
            case 3:
              pcVar23 = &DAT_00678864;
              break;
            default:
              goto switchD_005404f2_default;
            }
            uVar16 = 0xffffffff;
            do {
              pcVar21 = pcVar23;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar21 = pcVar23 + 1;
              cVar4 = *pcVar23;
              pcVar23 = pcVar21;
            } while (cVar4 != '\0');
            uVar16 = ~uVar16;
            pcVar23 = pcVar21 + -uVar16;
            pcVar21 = local_868;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar23;
              pcVar23 = pcVar23 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar21 = *pcVar23;
              pcVar23 = pcVar23 + 1;
              pcVar21 = pcVar21 + 1;
            }
switchD_005404f2_default:
            uVar13 = FUN_005ee8e0(0);
            *local_990 = uVar13;
            local_990 = local_990 + 1;
            local_9a0 = local_9a0 + 1;
            local_99c = (int *)((int)local_99c + -1);
          } while (local_99c != (int *)0x0);
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d1154 + iVar20) = uVar13;
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d114c + iVar20) = uVar13;
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d1150 + iVar20) = uVar13;
          FUN_0061c369();
          if (((&DAT_0069710c)[local_998 * 0x25c] != 3) && ((&DAT_0069710c)[local_998 * 0x25c] != 4)
             ) {
            iVar8 = FUN_005ee8e0(0);
            *(int *)(&DAT_006d137c + iVar20) = iVar8;
            if (iVar8 == 0) {
              uVar16 = 0xffffffff;
              pcVar23 = &DAT_00697a4a + DAT_006cd298 * 0x970;
              do {
                pcVar21 = pcVar23;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                pcVar21 = pcVar23 + 1;
                cVar4 = *pcVar23;
                pcVar23 = pcVar21;
              } while (cVar4 != '\0');
              uVar16 = ~uVar16;
              pcVar23 = pcVar21 + -uVar16;
              pcVar21 = &DAT_006970da + iVar19;
              for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar23;
                pcVar23 = pcVar23 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar21 = *pcVar23;
                pcVar23 = pcVar23 + 1;
                pcVar21 = pcVar21 + 1;
              }
              FUN_0061c369();
              iVar8 = FUN_005ee8e0();
              bVar22 = DAT_006cdbc8 != 0;
              *(int *)(&DAT_006d137c + iVar20) = iVar8;
              if (bVar22) {
                if (iVar8 == 0) {
                  pcVar23 = local_868;
                  uVar24 = CONCAT44(auStack_73c,s_In_b3d_there_is_no_Cab_node___s__00678820);
                  FUN_0061c369();
                  FUN_004e1e9c(local_868,pcVar23,uVar24);
                }
                if (DAT_006cdbc8 != 0) {
                  iVar9 = 3;
                  iVar8 = DAT_006cd298 * 0x970;
                  (&DAT_00696ffc)[local_998 * 0x25c] = *(undefined4 *)(&DAT_0069796c + iVar8);
                  (&DAT_00697000)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697970 + iVar8);
                  (&DAT_00697004)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697974 + iVar8);
                  (&DAT_00697008)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697978 + iVar8);
                  (&DAT_00696fd0)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697940 + iVar8);
                  (&DAT_00696fd4)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697944 + iVar8);
                  (&DAT_00696fd8)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697948 + iVar8);
                  (&DAT_00696fdc)[local_998 * 0x25c] = *(undefined4 *)(&DAT_0069794c + iVar8);
                  (&DAT_00696fe0)[local_998 * 0x25c] = *(undefined4 *)(&DAT_00697950 + iVar8);
                  puVar10 = (undefined4 *)(&DAT_00696ff0 + iVar19);
                  puVar15 = (undefined4 *)(&DAT_00697960 + iVar8);
                  do {
                    puVar10[-3] = puVar15[-3];
                    *puVar10 = *puVar15;
                    puVar10 = puVar10 + 1;
                    iVar9 = iVar9 + -1;
                    puVar15 = puVar15 + 1;
                  } while (iVar9 != 0);
                  puVar10 = (undefined4 *)(&DAT_0069700c + iVar19);
                  puVar15 = (undefined4 *)(&DAT_0069797c + iVar8);
                  iVar19 = 7;
                  do {
                    uVar13 = *puVar15;
                    puVar15 = puVar15 + 1;
                    *puVar10 = uVar13;
                    puVar10 = puVar10 + 1;
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                }
              }
            }
            FUN_0061c369();
            uVar13 = FUN_005ee8e0();
            *(undefined4 *)(&DAT_006d1380 + iVar20) = uVar13;
            FUN_0061c369();
            uVar13 = FUN_005ee8e0();
            *(undefined4 *)(&DAT_006d1384 + iVar20) = uVar13;
            FUN_0061c369();
            uVar13 = FUN_005ee8e0();
            *(undefined4 *)(&DAT_006d1388 + iVar20) = uVar13;
            if (*(int *)(&DAT_006d1380 + iVar20) == 0) {
              puVar10 = &DAT_00701550;
              puVar15 = (undefined4 *)(&DAT_006d138c + iVar20);
              for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar15 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar15 + 1;
              }
              *(undefined4 *)(&DAT_006d141c + iVar20) = 0;
            }
            else {
              FUN_004e420a(*(int *)(&DAT_006d1380 + iVar20));
              *(undefined4 *)(&DAT_006d141c + iVar20) = 1;
            }
            if (*(int *)(&DAT_006d1384 + iVar20) == 0) {
              puVar10 = &DAT_00701550;
              puVar15 = (undefined4 *)(&DAT_006d13bc + iVar20);
              for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar15 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar15 + 1;
              }
              *(undefined4 *)(&DAT_006d1420 + iVar20) = 0;
            }
            else {
              FUN_004e420a(*(int *)(&DAT_006d1384 + iVar20));
              *(undefined4 *)(&DAT_006d1420 + iVar20) = 1;
            }
            if (*(int *)(&DAT_006d1388 + iVar20) == 0) {
              puVar10 = &DAT_00701550;
              puVar15 = (undefined4 *)(&DAT_006d13ec + iVar20);
              for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar15 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar15 = puVar15 + 1;
              }
              *(undefined4 *)(&DAT_006d1424 + iVar20) = 0;
            }
            else {
              FUN_004e420a(*(int *)(&DAT_006d1388 + iVar20));
              *(undefined4 *)(&DAT_006d1424 + iVar20) = 1;
            }
          }
          pcVar23 = local_868;
          uVar24 = CONCAT44(pcVar26,s__s_car_cl_006773f4);
          FUN_0061c369();
          uVar13 = FUN_005eea00(local_868,pcVar23,uVar24);
          puVar10 = (undefined4 *)(&DAT_006d1440 + iVar20);
          (&DAT_006d1428)[local_998 * 0x174] = uVar13;
          *puVar10 = 0;
          if ((&DAT_006d1428)[local_998 * 0x174] == 0) {
            local_9a0 = 6;
            do {
              FUN_0061c369(local_868,s__s_d_car_cl_006773e8,pcVar26);
              uVar13 = FUN_005eea00();
              puVar10[-6] = uVar13;
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
              local_9a0 = local_9a0 + -1;
            } while (local_9a0 != 0);
          }
          else {
            puVar10 = (undefined4 *)(&DAT_006d1444 + iVar20);
            iVar19 = 5;
            do {
              puVar10[-6] = 0;
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d1478 + iVar20) = uVar13;
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d147c + iVar20) = uVar13;
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d1158 + iVar20) = uVar13;
          local_99c = (int *)(&DAT_006d1464 + iVar20);
          local_9a0 = 3;
          iVar19 = 0;
          do {
            FUN_0061c369(auStack_6a8,s__scgRedSpace_d_006787d0,pcVar26);
            iVar8 = FUN_005ee8e0(0);
            local_99c[-3] = iVar8;
            uVar13 = DAT_007015b4;
            if (iVar8 == 0) {
              iVar8 = (iVar19 + local_998 * 0x7c) * 0xc;
              *(undefined4 *)(&DAT_006d1484 + iVar8) = DAT_007015b0;
              uVar14 = DAT_007015b8;
              *(undefined4 *)(&DAT_006d1488 + iVar8) = uVar13;
            }
            else {
              FUN_005e10a0(iVar8);
              iVar8 = (iVar19 + local_998 * 0x7c) * 0xc;
              *(undefined4 *)(&DAT_006d1484 + iVar8) = uStack_8bc;
              *(undefined4 *)(&DAT_006d1488 + iVar8) = uStack_8b8;
              uVar14 = uStack_8b4;
            }
            *(undefined4 *)(&DAT_006d148c + iVar8) = uVar14;
            FUN_0061c369(auStack_644,s__scgBlueSpace_d_006787c0,pcVar26);
            iVar9 = FUN_005ee8e0(0);
            *local_99c = iVar9;
            uVar13 = DAT_007015b4;
            if (iVar9 == 0) {
              *(undefined4 *)(&DAT_006d14a8 + iVar8) = DAT_007015b0;
              uVar14 = DAT_007015b8;
              *(undefined4 *)(&DAT_006d14ac + iVar8) = uVar13;
              *(undefined4 *)(&DAT_006d14b0 + iVar8) = uVar14;
            }
            else {
              FUN_005e10a0(iVar9);
              *(undefined4 *)(&DAT_006d14a8 + iVar8) = uStack_8bc;
              *(undefined4 *)(&DAT_006d14ac + iVar8) = uStack_8b8;
              *(undefined4 *)(&DAT_006d14b0 + iVar8) = uStack_8b4;
            }
            local_99c = local_99c + 1;
            local_9a0 = local_9a0 + -1;
            iVar19 = iVar19 + 1;
          } while (local_9a0 != 0);
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d1470 + iVar20) = iVar19;
          uVar13 = DAT_007015b4;
          if (iVar19 == 0) {
            *(undefined4 *)(&DAT_006d14cc + iVar20) = DAT_007015b0;
            uVar14 = DAT_007015b8;
            *(undefined4 *)(&DAT_006d14d0 + iVar20) = uVar13;
            *(undefined4 *)(&DAT_006d14d4 + iVar20) = uVar14;
          }
          else {
            FUN_005e10a0(iVar19);
            *(undefined4 *)(&DAT_006d14cc + iVar20) = uStack_8bc;
            *(undefined4 *)(&DAT_006d14d0 + iVar20) = uStack_8b8;
            *(undefined4 *)(&DAT_006d14d4 + iVar20) = uStack_8b4;
          }
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d1474 + iVar20) = iVar19;
          uVar13 = DAT_007015b4;
          if (iVar19 == 0) {
            *(undefined4 *)(&DAT_006d14d8 + iVar20) = DAT_007015b0;
            uVar14 = DAT_007015b8;
            *(undefined4 *)(&DAT_006d14dc + iVar20) = uVar13;
            *(undefined4 *)(&DAT_006d14e0 + iVar20) = uVar14;
          }
          else {
            FUN_005e10a0(iVar19);
            *(undefined4 *)(&DAT_006d14d8 + iVar20) = uStack_8bc;
            *(undefined4 *)(&DAT_006d14dc + iVar20) = uStack_8b8;
            *(undefined4 *)(&DAT_006d14e0 + iVar20) = uStack_8b4;
          }
          uVar13 = FUN_005ee8e0(0);
          *(undefined4 *)(&DAT_006d1480 + iVar20) = uVar13;
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14e4 + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d14fc + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14e8 + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d152c + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          FUN_0061c369();
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14ec + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d155c + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14f0 + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d158c + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14f4 + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d15bc + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          FUN_0061c369();
          iVar19 = FUN_005ee8e0();
          *(int *)(&DAT_006d14f8 + iVar20) = iVar19;
          if (iVar19 == 0) {
            puVar10 = &DAT_00701550;
            puVar15 = (undefined4 *)(&DAT_006d15ec + iVar20);
            for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar15 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar15 = puVar15 + 1;
            }
          }
          else {
            FUN_005e10a0(iVar19);
          }
          uVar13 = FUN_005ee8e0(*(undefined4 *)(&DAT_006d1050 + iVar20));
          *(undefined4 *)(&DAT_006d161c + iVar20) = uVar13;
        }
      }
      local_998 = local_998 + 1;
    } while (local_998 < DAT_006cd28c);
  }
  if (local_958 != (HMODULE)0x0) {
    FreeLibrary(local_958);
  }
  if (DAT_006967c0 == 0) {
    Sleep(12000);
    FUN_00507b80(&DAT_00695b28,1);
    FUN_005067d0();
    FUN_00509fc0(&DAT_00695b28,0);
    FUN_004e1e9c();
  }
  DAT_006ee168 = FUN_005ee8e0(0,&DAT_00671f78);
  pcVar26 = s_k50_car_cl_006786f0;
  DAT_006ee164 = FUN_005eea00();
  uVar24 = CONCAT44(pcVar26,s_CopGlowRed_006786e4);
  DAT_006ee150 = 0;
  uVar13 = 0;
  DAT_006ee1b4 = FUN_005ee8e0();
  DAT_006ee1b8 = FUN_005ee8e0(0,s_CopGlowBlue_006786d8,uVar13,uVar24);
  _DAT_006ee1bc = FUN_005ee8e0(0,s_SwitchFlame_006786cc);
  DAT_006ee1c0 = FUN_005eea00(s_shieldSound_006786c0);
  DAT_006ee1c4 = FUN_005eea00(s_carhornSound_006721ec);
  DAT_006ee1c8 = FUN_005eea00(s_hornSound_00672298);
  _DAT_006ee1cc = FUN_005eea00(s_bighornSound_00672288);
  DAT_006ee1d0 = FUN_005eea00(s_hornupgrSound_006786b0);
  _DAT_006ee1d4 = FUN_005ee8e0(0,s_flame_lamp_006786a4);
  _DAT_006ee1d8 = FUN_005ee8e0(0,s_FlameSpace_00678698);
  _DAT_006ee1dc = FUN_005eea00();
  _DAT_006ee1e0 = FUN_005eea00(s_effect_SLReflection_00678670);
  _DAT_006ee1e4 = FUN_005eea00();
  _DAT_006ee1e8 = FUN_005ee8e0(0,s_HLRKeyL_00678654);
  _DAT_006ee1ec = FUN_005ee8e0(0,s_HLRKeyR_0067864c);
  _DAT_006ee1f8 = FUN_005ee8e0(0,s_SLRKeyL_00678644);
  _DAT_006ee1fc = FUN_005ee8e0(0,s_SLRKeyR_0067863c);
  _DAT_006ee1f0 = FUN_005ee8e0(0,s_BLRKeyL_00678634);
  _DAT_006ee1f4 = FUN_005ee8e0(0,s_BLRKeyR_0067862c);
  return;
}

