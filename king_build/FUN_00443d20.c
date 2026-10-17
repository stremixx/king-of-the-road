
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00443d20(int param_1,undefined4 param_2,uint param_3,double *param_4,int *param_5)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  double *pdVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  undefined4 extraout_ECX;
  char *pcVar15;
  undefined4 *puVar16;
  char **ppcVar17;
  int *piVar18;
  float10 fVar19;
  int local_1e4;
  int local_1e0;
  undefined4 uStack_18c;
  undefined1 *puStack_188;
  int *piStack_184;
  int iStack_180;
  char *apcStack_17c [5];
  undefined8 local_168;
  double *pdStack_160;
  undefined8 local_15c;
  undefined8 local_138;
  int *local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  int local_10c;
  int *local_108;
  undefined4 uStack_104;
  uint local_100 [4];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  char *local_b8;
  undefined *local_b4;
  double local_b0;
  undefined1 local_a4 [120];
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dfb7;
  local_14 = ExceptionList;
  local_15c = 1.69792922906944e-313;
  local_b8 = s_loadOrder_PlayerId_player__VrInd_0066e220;
  local_b4 = &DAT_0071d768;
  pdStack_160 = (double *)0x443d6b;
  ExceptionList = &local_14;
  FUN_00401870();
  local_15c = 1.018340688001393e-306;
  FUN_004018b0();
  local_c = 0;
  local_15c = (double)CONCAT44(param_1,0x443d94);
  iVar6 = FUN_00456670();
  if (iVar6 != 0) {
    local_15c = 1.0132587632561158e-306;
    pdStack_160 = (double *)0x443daa;
    FUN_0061c369();
    pdStack_160 = (double *)&DAT_0077d5c0;
    local_168 = 1.0132506146150922e-306;
    apcStack_17c[4] = (char *)0x450e;
    apcStack_17c[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_17c[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_17c[1] = (char *)0x64;
    apcStack_17c[0] = (char *)0x21;
    iStack_180 = 0x443dd1;
    FUN_00401010();
  }
  local_15c = (double)CONCAT44(param_1,0x443de5);
  cVar5 = FUN_00417560();
  if (cVar5 != '\0') {
    local_15c = (double)CONCAT44(0x443df1,(undefined4)local_15c);
    fVar19 = (float10)FUN_00401000();
    _DAT_0068c060 = (double)fVar19;
  }
  local_15c = (double)CONCAT44(param_2,&local_10c);
  *param_5 = -1;
  pdStack_160 = (double *)0x443e0e;
  FUN_00404b50();
  iVar6 = *(int *)(DAT_0068be20 + local_10c * 4);
  if (param_3 < (uint)(*(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c) >> 4)) {
    piVar7 = (int *)(param_3 * 0x10 + *(int *)(iVar6 + 0x1c));
    local_130 = (int *)0x0;
    iVar6 = param_1 + 8;
    if (iVar6 != 0) {
      if ((*(int *)(param_1 + 0x204) != 0) &&
         ((iVar13 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) +
                            0x20), iVar13 == 2 || (iVar13 == 3)))) {
        local_130 = (int *)piVar7[2];
      }
      if (iVar6 != 0) {
        local_15c = (double)CONCAT44(iVar6,0x443e83);
        cVar5 = FUN_004418e0();
        if (cVar5 == '\0') {
          local_130 = (int *)piVar7[3];
        }
      }
    }
    pdVar4 = param_4;
    if ((*(byte *)(piVar7 + 1) & 1) == 0) {
      if (_DAT_0064a668 < *param_4) {
        if (local_130 != (int *)0x0) {
          local_15c = (double)CONCAT44(param_1,0x4445b4);
          cVar5 = FUN_00417560();
          if (cVar5 != '\0') {
            if ((*(byte *)(DAT_0068bc18 + 0x30 + *local_130 * 0x68) & 4) != 0) {
              local_15c = (double)CONCAT44(param_1,0x4445e5);
              uVar9 = FUN_0041ba70();
              if ((uVar9 & 1) == 0) {
                local_15c._4_4_ = s_NEED_A_PETROL_SEMITRAILER_0066e168;
                local_15c._0_4_ = 0x4445f6;
                uVar8 = FUN_0040e1d0();
                local_15c = (double)CONCAT44(local_15c._4_4_,uVar8);
                pdStack_160 = (double *)0x4445fc;
                FUN_00483da0();
                local_15c = 1.6979292257098e-313;
                pdStack_160 = (double *)0x444610;
                FUN_00401870();
                local_15c = 1.0183406880017429e-306;
                FUN_004018b0();
                ExceptionList = local_14;
                return 0xfffffff6;
              }
            }
            if ((*(byte *)(DAT_0068bc18 + 0x30 + *local_130 * 0x68) & 4) == 0) {
              local_15c = (double)CONCAT44(param_1,0x44465e);
              uVar9 = FUN_0041ba70();
              if ((uVar9 & 1) != 0) {
                local_15c._4_4_ = s_LOAD_AT_AN_OIL_TANK_0066e154;
                local_15c._0_4_ = 0x44466f;
                uVar8 = FUN_0040e1d0();
                local_15c = (double)CONCAT44(local_15c._4_4_,uVar8);
                pdStack_160 = (double *)0x444675;
                FUN_00483da0();
                local_15c = 1.6979292257098e-313;
                pdStack_160 = (double *)0x444689;
                FUN_00401870();
                local_15c = 1.018340688001762e-306;
                FUN_004018b0();
                ExceptionList = local_14;
                return 0xfffffff5;
              }
            }
          }
          local_128 = 0;
          local_124 = 0;
          iVar6 = *(int *)(param_1 + 0x208);
          local_120 = 0.0;
          local_138 = 0.0;
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            iVar6 = *(int *)(param_1 + 0x204);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              local_15c = 1.1016071241785525e-306;
              pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
              local_168 = 1.57028021091759e-311;
              apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
              apcStack_17c[3] = (char *)0x1;
              apcStack_17c[2] = (char *)0x0;
              apcStack_17c[1] = (char *)0x444736;
              FUN_00401010();
              piVar18 = piVar7;
            }
            else {
              piVar18 = (int *)(iVar6 + 0x1c);
            }
          }
          else {
            piVar18 = (int *)(iVar6 + 0x1c);
          }
          iVar6 = param_1;
          piVar11 = (int *)*piVar18;
          piVar18 = piVar7;
          while( true ) {
            iVar13 = *(int *)(iVar6 + 0x208);
            if ((iVar13 == 0) || (*(int *)(iVar13 + 4) == -1)) {
              iVar13 = *(int *)(iVar6 + 0x204);
              if ((iVar13 == 0) || (*(int *)(iVar13 + 4) == -1)) {
                local_15c = 1.1016071241785525e-306;
                pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
                local_168 = 1.57028021091759e-311;
                apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
                apcStack_17c[3] = (char *)0x1;
                apcStack_17c[2] = (char *)0x0;
                apcStack_17c[1] = (char *)0x444797;
                FUN_00401010();
                iVar6 = param_1;
              }
              else {
                piVar18 = (int *)(iVar13 + 0x1c);
              }
            }
            else {
              piVar18 = (int *)(iVar13 + 0x1c);
            }
            if (piVar11 == (int *)piVar18[1]) break;
            local_120 = *(double *)(DAT_0068bc18 + 0x10 + *piVar11 * 0x68) *
                        *(double *)(piVar11 + 0xe) + local_120;
            local_138 = *(double *)(DAT_0068bc18 + *piVar11 * 0x68 + 0x18) *
                        *(double *)(piVar11 + 0xe) + local_138;
            piVar11 = piVar11 + 0x24;
          }
          pdStack_160 = (double *)&local_118;
          local_15c = (double)CONCAT44(&local_108,pdStack_160);
          local_168 = (double)CONCAT44(&param_1,0x4447f5);
          FUN_0041d3f0();
          local_168 = (double)CONCAT44(0x4447fa,(undefined4 *)local_168);
          FUN_0041b9e0();
          pdStack_160 = &local_b0;
          local_15c = (double)CONCAT44(DAT_0068bc18 + *local_130 * 0x68,&local_128);
          local_168 = (double)CONCAT44(&local_c0,&local_c0);
          apcStack_17c[4] = (char *)&param_1;
          apcStack_17c[3] = (char *)0x444837;
          FUN_0041d3f0();
          apcStack_17c[4] = (char *)0x44483c;
          FUN_0041bb20();
          if (((double)CONCAT44(uStack_114,local_118) < local_c0 + local_120) ||
             ((double)CONCAT44(uStack_104,local_108) < local_b0 + local_138)) {
            local_15c = (double)CONCAT44(param_1,0x444ef6);
            cVar5 = FUN_00417560();
            if (cVar5 != '\0') {
              local_15c._4_4_ = s_NOT_ENOUGH_SPACE_0066e200;
              local_15c._0_4_ = 0x444f07;
              uVar8 = FUN_0040e1d0();
              local_15c = (double)CONCAT44(local_15c._4_4_,uVar8);
              pdStack_160 = (double *)0x444f0d;
              FUN_0056a570();
            }
            local_15c = 1.6979292257098e-313;
            pdStack_160 = (double *)0x444f21;
            FUN_00401870();
            local_15c = 1.0183406880021098e-306;
            FUN_004018b0();
            ExceptionList = local_14;
            return 0xfffffff8;
          }
          if (_DAT_0064a668 <= local_120 - (double)CONCAT44(uStack_114,local_118)) {
            local_15c = 1.6979292257098e-313;
            pdStack_160 = (double *)0x4448a5;
            FUN_00401870();
            local_15c = 1.0183406880018474e-306;
            FUN_004018b0();
            ExceptionList = local_14;
            return 0xfffffffd;
          }
          if (_DAT_0064a668 <= local_138 - (double)CONCAT44(uStack_104,local_108)) {
            if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
              pcVar14 = (char *)(DAT_0071d778 + DAT_0071d774);
              *(undefined4 *)pcVar14 = s_COMPL__0066b7ec._0_4_;
              *(undefined4 *)(pcVar14 + 4) = s_COMPL__0066b7ec._4_4_;
              DAT_0071d778 = DAT_0071d778 + 8;
            }
            local_15c = 1.0183406880018659e-306;
            FUN_004018b0();
            ExceptionList = local_14;
            return 0xfffffffc;
          }
          *(undefined4 *)pdVar4 = local_128;
          *(undefined4 *)((int)pdVar4 + 4) = local_124;
          local_15c = (double)CONCAT44(0x44495c,(undefined4)local_15c);
          FUN_00470dd0();
          local_100[0] = 0xffffffff;
          local_e4 = 0xffffffff;
          local_100[1] = *piVar7;
          local_f0 = 0.0;
          local_e8 = 0;
          local_15c = *pdVar4;
          local_100[2] = 0;
          local_100[3] = 0;
          puVar10 = local_100;
          ppcVar17 = apcStack_17c;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *ppcVar17 = (char *)*puVar10;
            puVar10 = puVar10 + 1;
            ppcVar17 = ppcVar17 + 1;
          }
          iStack_180 = local_10c;
          puStack_188 = local_a4;
          piStack_184 = local_130;
          local_c._0_1_ = 1;
          uStack_18c = 0x4449cb;
          FUN_00471640();
          piVar11 = &local_1e4;
          piVar7 = &local_1e4;
          piVar12 = &local_1e4;
          piVar18 = &local_1e4;
          FUN_00443830(local_a4);
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00418950();
          FUN_004437d0();
          uVar8 = FUN_00447d30();
          FUN_00418950(uVar8);
          FUN_004437d0();
          uVar8 = FUN_004558b0();
          puVar10 = (uint *)FUN_004579d0(uVar8);
          iVar6 = *(int *)(param_1 + 0x208);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            iVar6 = *(int *)(param_1 + 0x204);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              local_15c = 1.1016071241785525e-306;
              pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
              local_168 = 1.57028021091759e-311;
              apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
              apcStack_17c[3] = (char *)0x1;
              apcStack_17c[2] = (char *)0x0;
              apcStack_17c[1] = (char *)0x444a81;
              FUN_00401010();
            }
            else {
              piVar11 = (int *)(iVar6 + 0x1c);
            }
          }
          else {
            piVar11 = (int *)(iVar6 + 0x1c);
          }
          if (puVar10 == *(uint **)((int)piVar11 + 4)) {
            iVar6 = *(int *)(param_1 + 0x208);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              iVar6 = *(int *)(param_1 + 0x204);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
                local_15c = 1.1016071241785525e-306;
                pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
                local_168 = 1.57028021091759e-311;
                apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
                apcStack_17c[3] = (char *)0x1;
                apcStack_17c[2] = (char *)0x0;
                apcStack_17c[1] = (char *)0x444ae3;
                FUN_00401010();
              }
              else {
                piVar7 = (int *)(iVar6 + 0x1c);
              }
            }
            else {
              piVar7 = (int *)(iVar6 + 0x1c);
            }
            iVar6 = *(int *)((int)piVar7 + 4);
            if (iVar6 == *(int *)((int)piVar7 + 8)) {
              local_15c = (double)CONCAT44(local_a4,iVar6);
              pdStack_160 = (double *)0x444b22;
              FUN_00450900();
            }
            else {
              local_15c = (double)CONCAT44(local_a4,iVar6);
              pdStack_160 = (double *)0x444b02;
              FUN_00460d50();
              *(int *)((int)piVar7 + 4) = *(int *)((int)piVar7 + 4) + 0x90;
            }
            iVar6 = *(int *)(param_1 + 0x208);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              iVar6 = *(int *)(param_1 + 0x204);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
                local_15c = 1.1016071241785525e-306;
                pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
                local_168 = 1.57028021091759e-311;
                apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
                apcStack_17c[3] = (char *)0x1;
                apcStack_17c[2] = (char *)0x0;
                apcStack_17c[1] = (char *)0x444b8e;
                FUN_00401010();
                puVar10 = (uint *)(local_1e0 + -0x90);
              }
              else {
                puVar10 = (uint *)(*(int *)(iVar6 + 0x20) + -0x90);
              }
            }
            else {
              puVar10 = (uint *)(*(int *)(iVar6 + 0x20) + -0x90);
            }
          }
          else {
            *(double *)(puVar10 + 0xe) = *(double *)(puVar10 + 0xe) + *pdVar4;
          }
          iVar6 = *(int *)(param_1 + 0x208);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            iVar6 = *(int *)(param_1 + 0x204);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              local_15c = 1.1016071241785525e-306;
              pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
              local_168 = 1.57028021091759e-311;
              apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
              apcStack_17c[3] = (char *)0x1;
              apcStack_17c[2] = (char *)0x0;
              apcStack_17c[1] = (char *)0x444c00;
              FUN_00401010();
            }
            else {
              piVar12 = (int *)(iVar6 + 0x1c);
            }
          }
          else {
            piVar12 = (int *)(iVar6 + 0x1c);
          }
          *param_5 = ((int)puVar10 - *piVar12) / 0x90;
          dVar1 = *(double *)(puVar10 + 0xe);
          if ((dVar1 == _DAT_0064a668) == 0) {
            local_168._0_4_ = &param_1;
            local_15c = (double)((ulonglong)
                                 CONCAT11(dVar1 < _DAT_0064a668 |
                                          (byte)((ushort)((ushort)(NAN(dVar1) || NAN(_DAT_0064a668))
                                                         << 10) >> 8) |
                                          (byte)((ushort)((ushort)(dVar1 == _DAT_0064a668) << 0xe)
                                                >> 8),*(int *)(param_1 + 0x208) != 0) << 0x20);
            local_168._4_4_ = param_5;
            apcStack_17c[4] = (char *)0x444d0d;
            pdStack_160 = (double *)puVar10;
            FUN_0041d3f0();
            local_168 = (double)CONCAT44(local_168._4_4_,0x444d12);
            FUN_00471250();
            if (*(int *)(param_1 + 0x208) != 0) {
              *(double *)(puVar10 + 0x16) = _DAT_0066e898 * *(double *)(puVar10 + 0x16);
              *(double *)(puVar10 + 0x12) =
                   (_DAT_0066e898 - _DAT_0064a660) * *(double *)(local_130 + 6) +
                   *(double *)(puVar10 + 0x12);
            }
          }
          else {
            *param_5 = -1;
            iVar6 = *(int *)(param_1 + 0x208);
            if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
              iVar6 = *(int *)(param_1 + 0x204);
              if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
                local_15c = 1.1016071241785525e-306;
                pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
                local_168 = 1.57028021091759e-311;
                apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
                apcStack_17c[3] = (char *)0x1;
                apcStack_17c[2] = (char *)0x0;
                apcStack_17c[1] = (char *)0x444c8b;
                FUN_00401010();
              }
              else {
                piVar18 = (int *)(iVar6 + 0x1c);
              }
            }
            else {
              piVar18 = (int *)(iVar6 + 0x1c);
            }
            if (puVar10 + 0x24 != *(uint **)((int)piVar18 + 4)) {
              local_15c = (double)ZEXT48(&local_1e4);
              local_168 = (double)CONCAT44(*(uint **)((int)piVar18 + 4),puVar10 + 0x24);
              apcStack_17c[4] = (char *)0x444cae;
              pdStack_160 = (double *)puVar10;
              FUN_00460e90();
            }
            iVar6 = *(int *)((int)piVar18 + 4);
            *(int *)((int)piVar18 + 4) = iVar6 + -0x90;
            local_15c = *(double *)(iVar6 + -0x18);
            local_c._0_1_ = 3;
            pdStack_160 = (double *)0x444cda;
            FUN_00460d20();
            local_c = CONCAT31(local_c._1_3_,1);
            local_15c = (double)CONCAT44(0x444cec,(undefined4)local_15c);
            FUN_0044abe0();
          }
          local_c._0_1_ = 4;
          for (puVar16 = local_2c; puVar16 != local_28; puVar16 = puVar16 + 4) {
            local_15c = (double)CONCAT44(puVar16,0x444d72);
            FUN_00460d40();
          }
          local_c = (uint)local_c._1_3_ << 8;
          iVar6 = local_24 - (int)local_2c >> 4;
          if (iVar6 != 0) {
            uVar9 = iVar6 * 0x10;
            if (uVar9 < 0x81) {
              local_15c = (double)CONCAT44(0x444dc5,(undefined4)local_15c);
              FUN_00401aa0();
              *local_2c = *(undefined4 *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
              *(undefined4 **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = local_2c;
              local_15c = (double)CONCAT44(0x444dd5,(undefined4)local_15c);
              FUN_00434030();
            }
            else {
              local_15c = (double)CONCAT44(local_2c,0x444da9);
              FUN_0061c888();
            }
          }
          goto LAB_00444dd5;
        }
        *param_5 = -1;
      }
    }
    else if (*param_4 < _DAT_0064a668) {
      bVar3 = false;
      bVar2 = false;
      local_138 = 0.0;
      local_118 = 0;
      uStack_114 = 0;
      local_128 = 0;
      local_124 = 0;
      local_100[0] = 0;
      local_100[1] = 0;
      local_100[2] = 0;
      local_f0 = 0.0;
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      local_dc = 0;
      local_d8 = 0;
      local_d4 = 0x3ff00000;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      while( true ) {
        iVar13 = local_10c;
        iVar6 = *(int *)(param_1 + 0x208);
        if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
          iVar6 = *(int *)(param_1 + 0x204);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            local_15c = 1.1016071241785525e-306;
            pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
            local_168 = 1.57028021091759e-311;
            apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
            apcStack_17c[3] = (char *)0x1;
            apcStack_17c[2] = (char *)0x0;
            apcStack_17c[1] = (char *)0x443fc5;
            FUN_00401010();
          }
          else {
            local_130 = (int *)(iVar6 + 0x1c);
          }
        }
        else {
          local_130 = (int *)(iVar6 + 0x1c);
        }
        pcVar14 = (char *)local_130[1];
        iVar6 = *(int *)(param_1 + 0x208);
        if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
          iVar6 = *(int *)(param_1 + 0x204);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            local_15c = 1.1016071241785525e-306;
            pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
            local_168 = 1.57028021091759e-311;
            apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
            apcStack_17c[3] = (char *)0x1;
            apcStack_17c[2] = (char *)0x0;
            apcStack_17c[1] = (char *)0x44402b;
            FUN_00401010();
          }
          else {
            local_108 = (int *)(iVar6 + 0x1c);
          }
        }
        else {
          local_108 = (int *)(iVar6 + 0x1c);
        }
        for (pcVar15 = (char *)*local_108;
            (pcVar15 != pcVar14 && (*(int *)(pcVar15 + 0xc) != iVar13)); pcVar15 = pcVar15 + 0x90) {
        }
        iVar6 = *(int *)(param_1 + 0x208);
        if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
          iVar6 = *(int *)(param_1 + 0x204);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            local_15c = 1.1016071241785525e-306;
            pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
            local_168 = 1.57028021091759e-311;
            apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
            apcStack_17c[3] = (char *)0x1;
            apcStack_17c[2] = (char *)0x0;
            apcStack_17c[1] = (char *)0x4440a3;
            FUN_00401010();
          }
          else {
            local_120 = (double)CONCAT44(local_120._4_4_,iVar6 + 0x1c);
          }
        }
        else {
          local_120 = (double)CONCAT44(local_120._4_4_,iVar6 + 0x1c);
        }
        if (pcVar15 == *(char **)(local_120._0_4_ + 4)) break;
        local_15c = (double)CONCAT44(param_1,0x4440c4);
        cVar5 = FUN_00417560();
        if (cVar5 != '\0') {
          local_15c = (double)CONCAT44(0x4440d9,(undefined4)local_15c);
          iVar6 = __ftol();
          local_15c = (double)iVar6;
          pdStack_160 = (double *)s_X_INTEGRITY_0066e214;
          local_168 = (double)CONCAT44(0x4440f1,(undefined4 *)local_168);
          pdStack_160 = (double *)FUN_0040e1d0();
          local_168._4_4_ = (int *)local_a4;
          local_168._0_4_ = (undefined4 *)0x444102;
          FUN_0061c369();
          local_168 = (double)CONCAT44(local_168._4_4_,local_a4);
          apcStack_17c[4] = (char *)0x44410f;
          FUN_0056a570();
        }
        if ((bVar2) || (bVar2 = false, *(int *)(pcVar15 + 0x68) == 1)) {
          bVar2 = true;
        }
        local_d4 = *(undefined4 *)(pcVar15 + 100);
        local_d8 = *(undefined4 *)(pcVar15 + 0x60);
        local_15c = (double)CONCAT44(param_1,0x444151);
        cVar5 = FUN_004171e0();
        if (cVar5 == '\0') {
          local_15c = (double)CONCAT44(param_1,0x444169);
          cVar5 = FUN_00417560();
          if (cVar5 != '\0') goto LAB_00444170;
LAB_0044417c:
          pdStack_160 = (double *)0x0;
        }
        else {
LAB_00444170:
          pdStack_160 = (double *)0x1;
          if (*(int *)(pcVar15 + 0x68) != 1) goto LAB_0044417c;
        }
        local_168 = (double)DAT_0068c0c4;
        local_15c = (double)CONCAT44(&local_128,&local_118);
        apcStack_17c[3] = (char *)0x44419b;
        apcStack_17c[4] = pcVar15;
        fVar19 = (float10)FUN_004714a0();
        iVar6 = *(int *)(param_1 + 0x208);
        bVar3 = true;
        local_138 = (double)(fVar19 + (float10)local_138);
        if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
          iVar6 = *(int *)(param_1 + 0x204);
          if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
            local_15c = 1.1016071241785525e-306;
            pdStack_160 = (double *)s_Internal_error_9012_0066c41c;
            local_168 = 1.57028021091759e-311;
            apcStack_17c[4] = s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc;
            apcStack_17c[3] = (char *)0x1;
            apcStack_17c[2] = (char *)0x0;
            apcStack_17c[1] = (char *)0x444207;
            FUN_00401010();
          }
          else {
            local_12c = iVar6 + 0x1c;
          }
        }
        else {
          local_12c = iVar6 + 0x1c;
        }
        if ((uint *)(pcVar15 + 0x90) != *(uint **)(local_12c + 4)) {
          local_15c = (double)CONCAT44(pcVar15,*(uint **)(local_12c + 4));
          local_168 = (double)CONCAT44(0x444223,(undefined4 *)local_168);
          pdStack_160 = (double *)(pcVar15 + 0x90);
          FUN_00457bf0();
        }
        *(int *)(local_12c + 4) = *(int *)(local_12c + 4) + -0x90;
        local_15c = 2.21015375417188e-317;
        FUN_00461b20();
      }
      if (*(int *)(param_1 + 0xb0) == DAT_0068a8f0) {
        *(double *)(param_1 + 0x88) = local_138 + *(double *)(param_1 + 0x88);
      }
      else {
        *(double *)(param_1 + 0x220) = local_138 + *(double *)(param_1 + 0x220);
        *(double *)(*(int *)(param_1 + 0xb0) + 0x88) =
             local_138 + *(double *)(*(int *)(param_1 + 0xb0) + 0x88);
      }
      *(double *)(param_1 + 0x2f8) = local_138 + *(double *)(param_1 + 0x2f8);
      DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
      DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
      (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
      local_dc = local_138._4_4_;
      local_c8 = local_128;
      local_f0 = (double)((uint)(&DAT_0068a928)[DAT_0068aa04] % 0x168 + 0x168);
      local_d0 = local_118;
      local_e0 = (undefined4)local_138;
      local_cc = uStack_114;
      local_c4 = local_124;
      local_15c = (double)CONCAT44(param_1,0x44435c);
      cVar5 = FUN_004171e0();
      if (cVar5 == '\0') {
        if (*(int *)(param_1 + 0x5c) == 1) {
          if ((((DAT_0068c0c4 == 0) && (bVar3)) && (bVar2)) && (DAT_006898e0 != DAT_006898e4)) {
            *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
            local_100[1] = *(int *)(param_1 + 0x218);
            local_100[0] = local_100[0] | ((int)local_100[1] < 2) - 1 & 2 | 1;
            local_15c = (double)CONCAT44(0x44444f,(undefined4)local_15c);
            local_100[2] = __ftol();
            if (3 < (int)local_100[2]) {
              local_100[2] = 3;
            }
            local_15c = (double)CONCAT44(local_100[2],local_f0._4_4_);
            pdStack_160 = (double *)(uint *)local_f0;
            local_168._0_4_ = &param_1;
            apcStack_17c[4] = (char *)0x44447c;
            local_168._4_4_ = (int *)extraout_ECX;
            FUN_0041d3f0();
            local_168 = (double)CONCAT44(local_168._4_4_,0x444481);
            FUN_00477580();
          }
          else {
            *(undefined4 *)(param_1 + 0x218) = 0;
          }
        }
        else {
          local_15c = (double)CONCAT44(param_1,0x44449c);
          FUN_00429930();
        }
      }
      else {
        if (((DAT_0068c0c4 == 0) && (bVar3)) && (DAT_006898e0 != DAT_006898e4)) {
          local_15c = (double)CONCAT44(1,local_f0._4_4_);
          pdStack_160 = (double *)(uint *)local_f0;
          local_168._0_4_ = &param_1;
          local_168._4_4_ = (int *)local_f0._4_4_;
          apcStack_17c[4] = (char *)0x44439e;
          FUN_0041d3f0();
          local_168 = (double)CONCAT44(local_168._4_4_,0x4443a3);
          FUN_00477580();
        }
        DAT_0068c0c4 = DAT_0068c0c4 + 1;
        local_15c._4_4_ = s_COMPETITOR_ARRIVED_0066bc78;
        local_15c._0_4_ = 0x4443bd;
        uVar8 = FUN_0040e1d0();
        local_15c = (double)CONCAT44(local_15c._4_4_,uVar8);
        pdStack_160 = (double *)0x4443c3;
        FUN_00483da0();
      }
      local_15c = (double)CONCAT44(param_1,0x4444b0);
      cVar5 = FUN_00417560();
      if ((cVar5 != '\0') && (local_138 != _DAT_0064a668)) {
        local_15c = (double)CONCAT44(0x4444d7,(undefined4)local_15c);
        iVar6 = __ftol();
        local_15c = (double)iVar6 * _DAT_0064a590;
        pdStack_160 = (double *)s_YOU_MADE_0066c9d4;
        local_168 = (double)CONCAT44(0x4444f5,(undefined4 *)local_168);
        pdStack_160 = (double *)FUN_0040e1d0();
        local_168._4_4_ = (int *)local_a4;
        local_168._0_4_ = (undefined4 *)0x444506;
        FUN_0061c369();
        local_168 = (double)CONCAT44(local_168._4_4_,local_a4);
        apcStack_17c[4] = (char *)0x444513;
        FUN_0056a570();
      }
      if (bVar3) {
        pdStack_160 = (double *)local_100;
        local_15c = (double)CONCAT44(pdStack_160,0xb);
        local_168 = (double)CONCAT44(&param_1,0x444535);
        FUN_0041d3f0();
        local_168 = (double)CONCAT44(0x44453a,(undefined4 *)local_168);
        FUN_004015a0();
      }
      *param_5 = -1;
LAB_00444dd5:
      local_15c = (double)CONCAT44(param_1,0x444de6);
      cVar5 = FUN_00417560();
      if ((cVar5 != '\0') &&
         (iVar6 = DAT_006898e4 - DAT_006898e0 >> 2, (uint)(iVar6 + DAT_0068c0c4) < DAT_0068c0c0)) {
        do {
          local_15c = (double)CONCAT44(0x444e17,(undefined4)local_15c);
          FUN_00426380();
          iVar13 = DAT_006898e4 - DAT_006898e0 >> 2;
          if (iVar6 == iVar13) break;
          iVar6 = iVar13;
        } while ((uint)(iVar13 + DAT_0068c0c4) < DAT_0068c0c0);
      }
      local_15c = (double)CONCAT44(param_1,0x444e4f);
      FUN_00442c30();
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar14 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar14 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar14 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar14 = s_loadOrder_PlayerId_player__VrInd_0066e220;
      cVar5 = s_loadOrder_PlayerId_player__VrInd_0066e220[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar5 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar5 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar5;
          cVar5 = *pcVar14;
        }
      }
      ExceptionList = local_14;
      return 0;
    }
  }
  local_15c = 1.6979292257098e-313;
  pdStack_160 = (double *)0x44457f;
  FUN_00401870();
  local_15c = 1.01834068800172e-306;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0xffffffff;
}

