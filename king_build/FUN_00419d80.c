
undefined4 FUN_00419d80(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  char **ppcVar6;
  float10 fVar7;
  int iStack_a0;
  char *apcStack_9c [3];
  undefined1 **local_90;
  char *local_8c;
  char *pcStack_88;
  undefined8 local_84;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 uStack_64;
  char *local_5c;
  undefined *local_58;
  uint local_54;
  int local_50;
  int local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063c9c8;
  local_14 = ExceptionList;
  local_84 = 1.69792922906944e-313;
  local_5c = s_actOnArrival_PlayerId_player__0066c4e8;
  local_58 = &DAT_0071d768;
  pcStack_88 = (char *)0x419dc2;
  ExceptionList = &local_14;
  FUN_00401870();
  local_84 = 1.0132614788489538e-306;
  FUN_004018b0();
  local_6c = (undefined1 *)((int)&local_84 + 4);
  local_c = 0;
  local_84 = (double)CONCAT44(param_1,0x419de8);
  iVar2 = FUN_00456670();
  if (iVar2 != 0) {
    local_84 = 1.0132587632561158e-306;
    pcStack_88 = (char *)0x419dfe;
    FUN_0061c369();
    pcStack_88 = &DAT_0077d5c0;
    local_8c = s_PlayerId_0066c4d8;
    local_90 = (undefined1 **)s_Invalid_id_0066bbf4;
    apcStack_9c[2] = (char *)0x140f;
    apcStack_9c[1] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_9c[0] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    iStack_a0 = 100;
    FUN_00401010(0x21);
  }
  pcVar5 = param_1;
  if (*(int *)(param_1 + 0x5c) != 1) {
    if (*(int *)(param_1 + 0x5c) == 8) {
      pcVar5 = param_1 + 0x28;
      ppcVar6 = apcStack_9c;
      for (iStack_a0 = 8; iStack_a0 != 0; iStack_a0 = iStack_a0 + -1) {
        *ppcVar6 = (char *)*(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        ppcVar6 = ppcVar6 + 1;
      }
      local_6c = (undefined1 *)&iStack_a0;
      FUN_0041d3f0(&param_1);
      FUN_00417720();
    }
    else {
      if (DAT_0068c0e8 != 1) {
        if (DAT_0068c0e8 != 0) goto LAB_0041a1db;
        if (*(int *)(param_1 + 100) == 5) goto LAB_00419e90;
LAB_0041a2a5:
        local_84 = 3.95252516672997e-323;
        local_6c = (undefined1 *)&pcStack_88;
        local_8c = (char *)&param_1;
        local_90 = (undefined1 **)0x41a2bc;
        pcStack_88 = pcVar5;
        FUN_0041d3f0();
        local_8c = (char *)0x41a2c1;
        FUN_004015a0();
        local_8c = (char *)&param_1;
        local_84 = 4.94065645841247e-323;
        local_6c = (undefined1 *)&pcStack_88;
        local_90 = (undefined1 **)0x41a2d7;
        pcStack_88 = extraout_ECX_02;
        FUN_0041d3f0();
        local_8c = (char *)0x41a2dc;
        iVar2 = FUN_004015a0();
        if (iVar2 == 0) {
          local_84 = 1.6979292257098e-313;
          pcStack_88 = (char *)0x41a2f3;
          FUN_00401870();
          goto LAB_0041a870;
        }
        if (DAT_0068c0e8 == 1) {
LAB_0041a825:
          local_68 = (undefined1 *)((int)&local_84 + 4);
          local_84 = (double)CONCAT44(param_1,0x41a833);
          FUN_00416a80();
          if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_0041a870;
        }
        else {
          if (DAT_0068c0e8 == 0) {
            if (*(int *)(param_1 + 100) != 5) goto LAB_0041a318;
            goto LAB_0041a825;
          }
          if (DAT_0068c0e8 != 2) {
LAB_0041a318:
            iVar2 = *(int *)(param_1 + 100);
            if (iVar2 == 0x100) {
              local_84 = 1.1016071241785525e-306;
              pcStack_88 = s_Internal_error_073415_0066c4c0;
              local_8c = (char *)0x1496;
              local_90 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
              apcStack_9c[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
              apcStack_9c[1] = (char *)0x1;
              apcStack_9c[0] = (char *)0x0;
              iStack_a0 = 0x41a349;
              FUN_00401010();
            }
            else if (iVar2 == 0x101) {
              *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x400;
              DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
              uStack_64 = 0;
              DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
              (&DAT_0068a928)[DAT_0068aa04] =
                   (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
              local_68 = (undefined1 *)((uint)(&DAT_0068a928)[DAT_0068aa04] % 0x5dc + 0x4b0);
              local_84 = (double)local_68;
              pcStack_88 = param_1 + 8;
              local_8c = (char *)0x41a417;
              FUN_00477c70();
              iVar2 = *(int *)(*(int *)(DAT_0068bbf8 + *(int *)(param_1 + 0x78) * 4) + 0x1c);
              *(uint *)(iVar2 + 4 + *(int *)(param_1 + 0x7c) * 0x24) =
                   *(uint *)(iVar2 + 4 + *(int *)(param_1 + 0x7c) * 0x24) | 2;
              DAT_0068c0b4 = DAT_0068c0b4 + 1;
              pcStack_88 = (char *)(DAT_0068c0b0 + -2);
              if ((int)pcStack_88 < DAT_0068c0b4) {
                local_84 = (double)CONCAT44(&DAT_0068a928,local_6c);
                local_8c = (char *)&pcStack_88;
                local_90 = (undefined1 **)0x41a471;
                FUN_004896a0();
                local_90 = &local_8c;
                apcStack_9c[2] = (char *)0x41a47d;
                FUN_004af790();
                local_90 = &local_6c;
                apcStack_9c[2] = (char *)0x41a487;
                FUN_0045d140();
                if (local_6c == DAT_0068a8f0) {
                  local_70 = DAT_0068a8f0;
                }
                else {
                  local_84 = (double)CONCAT44(local_6c,0x41a4ad);
                  FUN_004042b0();
                }
                if (local_70 != DAT_0068a8f0) {
                  local_6c = (undefined1 *)((int)&local_84 + 4);
                  local_84 = (double)CONCAT44(local_70,0x41a4cc);
                  FUN_00419830();
                }
              }
            }
            else if (*(int *)(param_1 + 0x5c) == 2) {
              if (iVar2 == 4) {
                local_84 = (double)CONCAT44(param_1 + 8,0x41a4f0);
                iVar2 = FUN_00477850();
                if (iVar2 == 0) {
                  local_6c = (undefined1 *)((int)&local_84 + 4);
                  param_1[100] = '\0';
                  param_1[0x65] = '\0';
                  param_1[0x66] = '\0';
                  param_1[0x67] = '\0';
                  local_84 = (double)CONCAT44(param_1,0x41a50e);
                  FUN_004195b0();
                }
                else {
                  local_70 = (undefined1 *)((int)&local_84 + 4);
                  local_68 = (undefined1 *)0x0;
                  uStack_64 = 0xc12e8480;
                  local_6c = (undefined1 *)0xffffffff;
                  local_84 = (double)CONCAT44(param_1,0x41a53f);
                  iVar2 = FUN_00477920();
                  apcStack_9c[2] = (char *)&param_1;
                  local_8c = *(char **)(*(int *)(DAT_0068be20 + *(int *)(iVar2 + 0xc) * 4) + 0x18);
                  local_90 = &local_68;
                  local_84 = (double)CONCAT44(&local_6c,local_90);
                  pcStack_88 = (char *)0x0;
                  local_70 = (undefined1 *)(apcStack_9c + 3);
                  apcStack_9c[1] = (char *)0x41a56c;
                  FUN_0041d3f0();
                  apcStack_9c[2] = (char *)0x41a571;
                  FUN_00443d20();
                  local_8c = (char *)&param_1;
                  local_84 = 1.0;
                  local_70 = (undefined1 *)&pcStack_88;
                  param_1[100] = '\0';
                  param_1[0x65] = '\0';
                  param_1[0x66] = '\0';
                  param_1[0x67] = '\0';
                  local_90 = (undefined1 **)0x41a590;
                  FUN_0041d3f0();
                  local_8c = (char *)0x41a595;
                  FUN_00477cb0();
                  local_70 = (undefined1 *)((int)&local_84 + 4);
                  local_84 = (double)CONCAT44(param_1,0x41a5a8);
                  FUN_004195b0();
                  local_84 = (double)CONCAT44(param_1,0x41a5b8);
                  local_70 = (undefined1 *)((int)&local_84 + 4);
                  FUN_004772b0();
                }
              }
              else if (iVar2 == 3) {
                local_68 = (undefined1 *)0x0;
                uStack_64 = 0x412e8480;
                local_6c = (undefined1 *)0xffffffff;
                local_90 = *(undefined1 ***)(param_1 + 0x84);
                local_84 = (double)CONCAT44(&local_6c,&local_68);
                local_8c = *(char **)(param_1 + 0x80);
                local_70 = (undefined1 *)(apcStack_9c + 3);
                apcStack_9c[2] = (char *)&param_1;
                apcStack_9c[1] = (char *)0x41a609;
                pcStack_88 = (char *)local_90;
                FUN_0041d3f0();
                apcStack_9c[2] = (char *)0x41a60e;
                FUN_00443d20();
                apcStack_9c[2] = param_1 + 8;
                apcStack_9c[1] = (char *)0x41a61a;
                iVar2 = FUN_00477850();
                local_70 = (undefined1 *)((int)&local_84 + 4);
                if (iVar2 == 0) {
                  local_84 = (double)CONCAT44(param_1,0x41a632);
                  local_70 = (undefined1 *)((int)&local_84 + 4);
                  FUN_004186a0();
                }
                else {
                  local_84 = (double)CONCAT44(param_1,0x41a647);
                  FUN_00417dd0();
                  param_1[100] = '\x04';
                  param_1[0x65] = '\0';
                  param_1[0x66] = '\0';
                  param_1[0x67] = '\0';
                }
                local_84 = 1.0;
                local_70 = (undefined1 *)&pcStack_88;
                local_8c = (char *)&param_1;
                local_90 = (undefined1 **)0x41a66a;
                FUN_0041d3f0();
                local_8c = (char *)0x41a66f;
                FUN_00477cb0();
              }
              else {
                local_84 = (double)CONCAT44(&DAT_0068a928,&local_6c);
                pcStack_88 = (char *)0x41a686;
                FUN_00404d10();
                *(undefined4 *)(param_1 + 0x80) =
                     *(undefined4 *)(*(int *)(DAT_0068be20 + (int)local_6c * 4) + 0x18);
                pcStack_88 = (char *)&param_1;
                local_70 = (undefined1 *)&local_84;
                local_84 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x80),param_1);
                local_8c = (char *)0x41a6bc;
                FUN_0041d3f0();
                pcStack_88 = (char *)0x41a6c1;
                uVar3 = FUN_00418300();
                local_84 = (double)CONCAT44(0x41a6ce,(undefined4)local_84);
                iVar2 = FUN_00418950();
                *(undefined4 *)(iVar2 + 0x7c) = uVar3;
                if (*(int *)(param_1 + 0x84) == -1) {
                  local_84 = (double)CONCAT44(param_1,&local_70);
                  pcStack_88 = (char *)0x41a6f2;
                  local_70 = (undefined1 *)((int)&local_84 + 4);
                  puVar4 = (undefined4 *)FUN_0040a590();
                  pcStack_88 = (char *)&param_1;
                  local_68 = (undefined1 *)&local_84;
                  local_84 = (double)CONCAT44(*puVar4,extraout_ECX_03);
                  local_8c = (char *)0x41a708;
                  FUN_0041d3f0();
                  pcStack_88 = (char *)0x41a70d;
                  FUN_0040a200();
                }
                else {
                  pcStack_88 = *(char **)(param_1 + 0x80);
                  local_8c = (char *)&param_1;
                  local_84 = (double)CONCAT44(*(int *)(param_1 + 0x84),pcStack_88);
                  local_68 = (undefined1 *)&pcStack_88;
                  local_90 = (undefined1 **)0x41a729;
                  FUN_0041d3f0();
                  local_8c = (char *)0x41a72e;
                  FUN_00417ff0();
                  param_1[100] = '\x03';
                  param_1[0x65] = '\0';
                  param_1[0x66] = '\0';
                  param_1[0x67] = '\0';
                }
                local_84 = 1.0;
                local_68 = (undefined1 *)&pcStack_88;
                local_8c = (char *)&param_1;
                local_90 = (undefined1 **)0x41a751;
                FUN_0041d3f0();
                local_8c = (char *)0x41a756;
                FUN_00477cb0();
              }
            }
            else {
              local_68 = (undefined1 *)((int)&local_84 + 4);
              local_84 = (double)CONCAT44(param_1,&local_68);
              pcStack_88 = (char *)0x41a76e;
              puVar4 = (undefined4 *)FUN_0040a590();
              pcStack_88 = (char *)&param_1;
              local_6c = (undefined1 *)&local_84;
              local_84 = (double)CONCAT44(*puVar4,*puVar4);
              local_8c = (char *)0x41a784;
              FUN_0041d3f0();
              pcStack_88 = (char *)0x41a789;
              FUN_0040a200();
            }
            if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
              pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
              *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
              *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
              DAT_0071d778 = DAT_0071d778 + 8;
            }
            pcVar5 = s_actOnArrival_PlayerId_player__0066c4e8;
            if (DAT_0071d774 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (s_actOnArrival_PlayerId_player__0066c4e8[0] == '\0') {
              ExceptionList = local_14;
              return 0;
            }
            do {
              if (DAT_0071d770 <= DAT_0071d778) {
                ExceptionList = local_14;
                return 0;
              }
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
              DAT_0071d778 = DAT_0071d778 + 1;
            } while (*pcVar5 != '\0');
            ExceptionList = local_14;
            return 0;
          }
          if ((DAT_0071d774 == 0) || (DAT_0071d770 <= DAT_0071d778 + 8)) goto LAB_0041a870;
        }
        pcVar5 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar5 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar5 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
        goto LAB_0041a870;
      }
LAB_00419e90:
      if (*(int *)(param_1 + 0x2d4) == 10) {
        DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
        uStack_64 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0x3ff00000;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
        (&DAT_0068a928)[DAT_0068aa04] =
             (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
        local_68 = (undefined1 *)((uint)(&DAT_0068a928)[DAT_0068aa04] % 0x168 + 0x168);
        local_44 = (double)local_68;
        if ((*(uint *)(param_1 + 0x60) & 0x4000) != 0) {
          local_84 = (double)CONCAT44(0x419f79,(undefined4)local_84);
          fVar7 = (float10)FUN_00401000();
          *(double *)(pcVar5 + 0x328) = (double)(fVar7 - (float10)*(double *)(pcVar5 + 0x318));
        }
        local_3c = *(undefined4 *)(param_1 + 0x328);
        local_38 = *(undefined4 *)(param_1 + 0x32c);
        if ((DAT_0068c0c4 == 0) && (DAT_006898e0 != DAT_006898e4)) {
          *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
          local_50 = *(int *)(param_1 + 0x218);
          local_54 = local_54 | (local_50 < 2) - 1 & 2 | 1;
          local_70 = (undefined1 *)(local_50 + 1);
          local_84 = (double)CONCAT44(0x419ffb,(undefined4)local_84);
          local_4c = __ftol();
          if (3 < local_4c) {
            local_4c = 3;
          }
          local_90 = &param_1;
          local_84 = (double)CONCAT44(local_4c,local_44._4_4_);
          pcStack_88 = (char *)local_44;
          local_6c = (undefined1 *)&local_8c;
          local_8c = (char *)local_44;
          apcStack_9c[2] = (char *)0x41a028;
          FUN_0041d3f0();
          local_90 = (undefined1 **)0x41a02d;
          FUN_00477580();
          pcVar5 = extraout_ECX;
        }
        else {
          param_1[0x218] = '\0';
          param_1[0x219] = '\0';
          param_1[0x21a] = '\0';
          param_1[0x21b] = '\0';
          pcVar5 = param_1;
        }
        if (*(int *)(param_1 + 0x5c) != 1) {
          local_8c = (char *)&param_1;
          local_84 = (double)CONCAT44(&local_54,0xb);
          local_6c = (undefined1 *)&pcStack_88;
          local_90 = (undefined1 **)0x41a058;
          pcStack_88 = pcVar5;
          FUN_0041d3f0();
          local_8c = (char *)0x41a05d;
          FUN_004015a0();
        }
        local_6c = (undefined1 *)((int)&local_84 + 4);
        *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
        local_84 = (double)CONCAT44(param_1,0x41a081);
        cVar1 = FUN_004171e0();
        if (cVar1 != '\0') {
          DAT_0068c0c4 = DAT_0068c0c4 + 1;
          local_6c = (undefined1 *)((int)&local_84 + 4);
          local_84._4_4_ = param_1;
          local_84._0_4_ = 0x41a0a6;
          FUN_00417430();
          local_84 = (double)CONCAT44(local_84._4_4_,s_COMPETITOR_ARRIVED_0066bc78);
          pcStack_88 = (char *)0x41a0b0;
          pcStack_88 = (char *)FUN_0040e1d0();
          local_8c = (char *)0x41a0b6;
          FUN_00483da0();
        }
        local_6c = (undefined1 *)((int)&local_84 + 4);
        local_84 = (double)CONCAT44(param_1,0x41a0ca);
        cVar1 = FUN_00417560();
        if (cVar1 == '\0') {
          local_6c = (undefined1 *)((int)&local_84 + 4);
          local_84 = (double)CONCAT44(param_1,0x41a0e2);
          FUN_00417580();
        }
        if (DAT_0068c0e8 != 0) {
          local_6c = (undefined1 *)((int)&local_84 + 4);
          local_84 = (double)CONCAT44(param_1,0x41a0fe);
          cVar1 = FUN_00417560();
          if (cVar1 == '\0') {
            local_6c = (undefined1 *)((int)&local_84 + 4);
            local_84 = (double)CONCAT44(param_1,0x41a116);
            FUN_00477cf0();
          }
          if (DAT_0068c0e8 != 0) goto LAB_0041a1db;
        }
        local_6c = (undefined1 *)((int)&local_84 + 4);
        local_84 = (double)CONCAT44(param_1,0x41a137);
        cVar1 = FUN_00417560();
        if (cVar1 != '\0') {
LAB_0041a1db:
          pcVar5 = param_1;
          if ((DAT_0068c0e8 == 2) && (*(int *)(param_1 + 0x2d4) < 0xb)) {
            if (*(int *)(param_1 + 0x5c) != 1) {
              local_84 = 5.43472210425371e-323;
              local_6c = (undefined1 *)&pcStack_88;
              local_8c = (char *)&param_1;
              local_90 = (undefined1 **)0x41a20f;
              pcStack_88 = param_1;
              FUN_0041d3f0();
              local_8c = (char *)0x41a214;
              FUN_004015a0();
            }
            local_6c = (undefined1 *)((int)&local_84 + 4);
            param_1[0x2d4] = '\v';
            param_1[0x2d5] = '\0';
            param_1[0x2d6] = '\0';
            param_1[0x2d7] = '\0';
            local_84 = (double)CONCAT44(param_1,0x41a231);
            cVar1 = FUN_00417560();
            pcVar5 = extraout_ECX_00;
            if (cVar1 == '\0') {
              local_6c = (undefined1 *)((int)&local_84 + 4);
              local_84 = (double)CONCAT44(param_1,0x41a249);
              cVar1 = FUN_004171e0();
              if (cVar1 != '\0') {
                DAT_0068c0c4 = DAT_0068c0c4 + 1;
                local_6c = (undefined1 *)((int)&local_84 + 4);
                local_84._4_4_ = param_1;
                local_84._0_4_ = 0x41a26e;
                FUN_00417430();
                local_84 = (double)CONCAT44(local_84._4_4_,s_COMPETITOR_ARRIVED_0066bc78);
                pcStack_88 = (char *)0x41a278;
                pcStack_88 = (char *)FUN_0040e1d0();
                local_8c = (char *)0x41a27e;
                FUN_00483da0();
              }
              local_6c = (undefined1 *)((int)&local_84 + 4);
              local_84 = (double)CONCAT44(param_1,0x41a292);
              FUN_00417580();
              local_84 = (double)CONCAT44(param_1,0x41a2a2);
              local_6c = (undefined1 *)((int)&local_84 + 4);
              FUN_00477cf0();
              pcVar5 = extraout_ECX_01;
            }
          }
          goto LAB_0041a2a5;
        }
        local_6c = (undefined1 *)((int)&local_84 + 4);
        local_84 = (double)CONCAT44(param_1,0x41a153);
        FUN_00417580();
        local_8c = (char *)&param_1;
        local_84 = 20.0;
        local_6c = (undefined1 *)&pcStack_88;
        param_1[100] = '\0';
        param_1[0x65] = '\0';
        param_1[0x66] = '\0';
        param_1[0x67] = '\0';
        local_90 = (undefined1 **)0x41a172;
        FUN_0041d3f0();
        local_8c = (char *)0x41a177;
        FUN_00477cb0();
        pcVar5 = param_1 + 0x28;
        ppcVar6 = apcStack_9c;
        for (iStack_a0 = 8; iStack_a0 != 0; iStack_a0 = iStack_a0 + -1) {
          *ppcVar6 = (char *)*(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          ppcVar6 = ppcVar6 + 1;
        }
        local_6c = (undefined1 *)&iStack_a0;
        FUN_0041d3f0(&param_1);
        FUN_00417720();
        local_6c = (undefined1 *)((int)&local_84 + 4);
        param_1[0x2d4] = '\0';
        param_1[0x2d5] = '\0';
        param_1[0x2d6] = '\0';
        param_1[0x2d7] = '\0';
        local_84 = (double)CONCAT44(param_1,0x41a1ba);
        FUN_004772b0();
        local_84 = (double)CONCAT44(0x41a1c2,(undefined4)local_84);
        FUN_00419570();
      }
      else if (*(int *)(param_1 + 0x2d4) < 10) goto LAB_0041a1db;
    }
  }
  local_84 = 1.6979292257098e-313;
  pcStack_88 = (char *)0x419e44;
  FUN_00401870();
LAB_0041a870:
  local_84 = 1.013261478849386e-306;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0;
}

