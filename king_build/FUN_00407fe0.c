
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407fe0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *extraout_ECX;
  float10 fVar6;
  char *pcStack_c8;
  int **ppiStack_c4;
  int **ppiStack_c0;
  int *apiStack_ac [2];
  uint uStack_a4;
  int *local_a0;
  undefined4 local_9c;
  uint local_98;
  int *local_94 [2];
  uint local_8c;
  int *apiStack_88 [2];
  uint uStack_80;
  int *apiStack_7c [2];
  uint uStack_74;
  int *apiStack_70 [2];
  uint uStack_68;
  int *apiStack_64 [2];
  uint uStack_5c;
  undefined1 *puStack_58;
  int *apiStack_54 [2];
  uint uStack_4c;
  int *apiStack_48 [2];
  uint uStack_40;
  int *apiStack_3c [2];
  uint uStack_34;
  int *apiStack_30 [2];
  uint uStack_28;
  int *apiStack_24 [2];
  uint uStack_1c;
  int *apiStack_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b5ca;
  pvStack_c = ExceptionList;
  local_a0 = (int *)0x0;
  local_9c = 0;
  local_98 = 0;
  ppiStack_c0 = (int **)&stack0x00000008;
  ppiStack_c4 = local_94;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pcStack_c8 = (char *)0x40802e;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00407ec0();
  pcStack_c8 = s_playertypes_0066bb10;
  local_4._0_1_ = 2;
  cVar1 = FUN_004b6670(uVar2);
  local_4._0_1_ = 1;
  if (((((local_8c & 0x10000) == 0) && (local_94[0] != (int *)0x0)) &&
      (local_94[0][1] = local_94[0][1] + -1, local_94[0][1] == 0)) && (local_94[0] != (int *)0x0)) {
    ppiStack_c0 = (int **)0x1;
    ppiStack_c4 = (int **)0x40807e;
    (**(code **)(*local_94[0] + 0xc))();
  }
  if (cVar1 == '\0') {
    ppiStack_c0 = (int **)&stack0x00000008;
    ppiStack_c4 = local_94;
    pcStack_c8 = (char *)0x40836d;
    uVar2 = FUN_00407ec0();
    pcStack_c8 = s_startposition_0066baf8;
    local_4._0_1_ = 7;
    cVar1 = FUN_004b6670(uVar2);
    local_4._0_1_ = 1;
    if ((((local_8c & 0x10000) == 0) && (local_94[0] != (int *)0x0)) &&
       ((local_94[0][1] = local_94[0][1] + -1, local_94[0][1] == 0 && (local_94[0] != (int *)0x0))))
    {
      ppiStack_c0 = (int **)0x1;
      ppiStack_c4 = (int **)0x4083b8;
      (**(code **)(*local_94[0] + 0xc))();
    }
    if (cVar1 == '\0') {
      ppiStack_c0 = (int **)&stack0x00000008;
      ppiStack_c4 = apiStack_ac;
      pcStack_c8 = (char *)0x408873;
      uVar2 = FUN_00407ec0();
      pcStack_c8 = s_forsale_0066baf0;
      local_4._0_1_ = 0x20;
      cVar1 = FUN_004b6670(uVar2);
      local_4._0_1_ = 1;
      ppiStack_c0 = (int **)0x40889c;
      FUN_00492340();
      ppiStack_c0 = (int **)&stack0x00000008;
      if (cVar1 == '\0') {
        ppiStack_c4 = apiStack_ac;
        pcStack_c8 = (char *)0x408924;
        uVar2 = FUN_00407ec0();
        pcStack_c8 = s_forsale_used_0066bae0;
        local_4._0_1_ = 0x26;
        cVar1 = FUN_004b6670(uVar2);
        local_4._0_1_ = 1;
        ppiStack_c0 = (int **)0x40894d;
        FUN_00492340();
        ppiStack_c0 = (int **)&stack0x00000008;
        if (cVar1 == '\0') {
          ppiStack_c4 = apiStack_ac;
          pcStack_c8 = (char *)0x4089d5;
          uVar2 = FUN_00407ec0();
          pcStack_c8 = s_forsale_stolen_0066bad0;
          local_4._0_1_ = 0x2c;
          cVar1 = FUN_004b6670(uVar2);
          local_4._0_1_ = 1;
          ppiStack_c0 = (int **)0x4089fe;
          FUN_00492340();
          ppiStack_c0 = (int **)&stack0x00000008;
          if (cVar1 == '\0') {
            ppiStack_c4 = apiStack_ac;
            pcStack_c8 = (char *)0x408a86;
            uVar2 = FUN_00407ec0();
            pcStack_c8 = s_forhire_0066bac8;
            local_4._0_1_ = 0x32;
            cVar1 = FUN_004b6670(uVar2);
            local_4._0_1_ = 1;
            ppiStack_c0 = (int **)0x408aaf;
            FUN_00492340();
            ppiStack_c0 = (int **)&stack0x00000008;
            if (cVar1 == '\0') {
              ppiStack_c4 = apiStack_ac;
              pcStack_c8 = (char *)0x408b37;
              uVar2 = FUN_00407ec0();
              pcStack_c8 = &DAT_0066bac0;
              local_4._0_1_ = 0x38;
              cVar1 = FUN_004b6670(uVar2);
              local_4._0_1_ = 1;
              ppiStack_c0 = (int **)0x408b60;
              FUN_00492340();
              ppiStack_c0 = (int **)&stack0x00000008;
              if (cVar1 == '\0') {
                ppiStack_c4 = apiStack_ac;
                pcStack_c8 = (char *)0x408be8;
                uVar2 = FUN_00407ec0();
                pcStack_c8 = s_containers_0066bab4;
                local_4._0_1_ = 0x3e;
                cVar1 = FUN_004b6670(uVar2);
                local_4._0_1_ = 1;
                ppiStack_c0 = (int **)0x408c11;
                FUN_00492340();
                ppiStack_c0 = (int **)&stack0x00000008;
                if (cVar1 == '\0') {
                  ppiStack_c4 = apiStack_ac;
                  pcStack_c8 = (char *)0x408c99;
                  uVar2 = FUN_00407ec0();
                  pcStack_c8 = s_semitrailers_0066baa4;
                  local_4._0_1_ = 0x44;
                  cVar1 = FUN_004b6670(uVar2);
                  local_4._0_1_ = 1;
                  ppiStack_c0 = (int **)0x408cc2;
                  FUN_00492340();
                  ppiStack_c0 = (int **)&stack0x00000008;
                  if (cVar1 == '\0') {
                    ppiStack_c4 = apiStack_ac;
                    pcStack_c8 = (char *)0x408d4a;
                    uVar2 = FUN_00407ec0();
                    pcStack_c8 = s_missions_0066ba98;
                    local_4._0_1_ = 0x4a;
                    cVar1 = FUN_004b6670(uVar2);
                    local_4._0_1_ = 1;
                    ppiStack_c0 = (int **)0x408d73;
                    FUN_00492340();
                    ppiStack_c0 = (int **)&stack0x00000008;
                    if (cVar1 == '\0') {
                      ppiStack_c4 = apiStack_ac;
                      pcStack_c8 = (char *)0x408dfb;
                      uVar2 = FUN_00407ec0();
                      pcStack_c8 = s_parkings_0066ba8c;
                      local_4._0_1_ = 0x50;
                      cVar1 = FUN_004b6670(uVar2);
                      local_4._0_1_ = 1;
                      ppiStack_c0 = (int **)0x408e24;
                      FUN_00492340();
                      ppiStack_c0 = (int **)&stack0x00000008;
                      if (cVar1 == '\0') {
                        ppiStack_c4 = apiStack_ac;
                        pcStack_c8 = (char *)0x408eac;
                        uVar2 = FUN_00407ec0();
                        pcStack_c8 = s_scenario_0066ba80;
                        local_4._0_1_ = 0x56;
                        cVar1 = FUN_004b6670(uVar2);
                        local_4._0_1_ = 1;
                        ppiStack_c0 = (int **)0x408ed5;
                        FUN_00492340();
                        if (cVar1 == '\0') goto LAB_00408f88;
                        ppiStack_c0 = (int **)&stack0x00000008;
                        ppiStack_c4 = apiStack_7c;
                        pcStack_c8 = (char *)0x408eef;
                        pcStack_c8 = (char *)FUN_00407f50();
                        ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                        local_4._0_1_ = 0x58;
                        ppiStack_c4 = (int **)0x408f0f;
                        FUN_0044c9a0();
                        local_4._0_1_ = 0x5b;
                        ppiStack_c0 = (int **)0x408f20;
                        FUN_00492340();
                        local_4._0_1_ = 0x5a;
                        ppiStack_c0 = (int **)0x408f31;
                        FUN_00492340();
                        ppiStack_c4 = apiStack_ac;
                        ppiStack_c0 = (int **)s_races_0066ba78;
                        DAT_0068c0e8 = 0;
                        pcStack_c8 = (char *)0x408f46;
                        cVar1 = FUN_004b6670();
                        if (cVar1 != '\0') {
                          DAT_0068c0e8 = 1;
                        }
                        ppiStack_c4 = apiStack_ac;
                        ppiStack_c0 = (int **)s_trial_0066ba70;
                        pcStack_c8 = (char *)0x408f66;
                        cVar1 = FUN_004b6670();
                        if (cVar1 != '\0') {
                          DAT_0068c0e8 = 2;
                        }
                      }
                      else {
                        ppiStack_c4 = apiStack_7c;
                        pcStack_c8 = (char *)0x408e3a;
                        pcStack_c8 = (char *)FUN_00407f50();
                        ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                        local_4._0_1_ = 0x52;
                        ppiStack_c4 = (int **)0x408e5a;
                        FUN_00455640();
                        local_4._0_1_ = 0x55;
                        ppiStack_c0 = (int **)0x408e6b;
                        FUN_00492340();
                        local_4._0_1_ = 0x54;
                        ppiStack_c0 = (int **)0x408e7c;
                        FUN_00492340();
                        ppiStack_c0 = (int **)0x408e85;
                        FUN_004b8250();
                        ppiStack_c0 = (int **)0x408e8c;
                        DAT_0068aab4 = FUN_004b0f30();
                      }
                    }
                    else {
                      ppiStack_c4 = apiStack_7c;
                      pcStack_c8 = (char *)0x408d89;
                      pcStack_c8 = (char *)FUN_00407f50();
                      ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                      local_4._0_1_ = 0x4c;
                      ppiStack_c4 = (int **)0x408da9;
                      FUN_00455640();
                      local_4._0_1_ = 0x4f;
                      ppiStack_c0 = (int **)0x408dba;
                      FUN_00492340();
                      local_4._0_1_ = 0x4e;
                      ppiStack_c0 = (int **)0x408dcb;
                      FUN_00492340();
                      ppiStack_c0 = (int **)0x408dd4;
                      FUN_004b8250();
                      ppiStack_c0 = (int **)0x408ddb;
                      DAT_0068c000 = FUN_004b0f30();
                    }
                  }
                  else {
                    ppiStack_c4 = apiStack_7c;
                    pcStack_c8 = (char *)0x408cd8;
                    pcStack_c8 = (char *)FUN_00407f50();
                    ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                    local_4._0_1_ = 0x46;
                    ppiStack_c4 = (int **)0x408cf8;
                    FUN_00455640();
                    local_4._0_1_ = 0x49;
                    ppiStack_c0 = (int **)0x408d09;
                    FUN_00492340();
                    local_4._0_1_ = 0x48;
                    ppiStack_c0 = (int **)0x408d1a;
                    FUN_00492340();
                    ppiStack_c0 = (int **)0x408d23;
                    FUN_004b8250();
                    ppiStack_c0 = (int **)0x408d2a;
                    DAT_0068beb4 = FUN_004b0f30();
                  }
                }
                else {
                  ppiStack_c4 = apiStack_7c;
                  pcStack_c8 = (char *)0x408c27;
                  pcStack_c8 = (char *)FUN_00407f50();
                  ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                  local_4._0_1_ = 0x40;
                  ppiStack_c4 = (int **)0x408c47;
                  FUN_00455640();
                  local_4._0_1_ = 0x43;
                  ppiStack_c0 = (int **)0x408c58;
                  FUN_00492340();
                  local_4._0_1_ = 0x42;
                  ppiStack_c0 = (int **)0x408c69;
                  FUN_00492340();
                  ppiStack_c0 = (int **)0x408c72;
                  FUN_004b8250();
                  ppiStack_c0 = (int **)0x408c79;
                  DAT_006898c4 = FUN_004b0f30();
                }
              }
              else {
                ppiStack_c4 = apiStack_7c;
                pcStack_c8 = (char *)0x408b76;
                pcStack_c8 = (char *)FUN_00407f50();
                ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
                local_4._0_1_ = 0x3a;
                ppiStack_c4 = (int **)0x408b96;
                FUN_00455640();
                local_4._0_1_ = 0x3d;
                ppiStack_c0 = (int **)0x408ba7;
                FUN_00492340();
                local_4._0_1_ = 0x3c;
                ppiStack_c0 = (int **)0x408bb8;
                FUN_00492340();
                ppiStack_c0 = (int **)0x408bc1;
                FUN_004b8250();
                ppiStack_c0 = (int **)0x408bc8;
                DAT_006898ec = FUN_004b0f30();
              }
            }
            else {
              ppiStack_c4 = apiStack_7c;
              pcStack_c8 = (char *)0x408ac5;
              pcStack_c8 = (char *)FUN_00407f50();
              ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
              local_4._0_1_ = 0x34;
              ppiStack_c4 = (int **)0x408ae5;
              FUN_00455640();
              local_4._0_1_ = 0x37;
              ppiStack_c0 = (int **)0x408af6;
              FUN_00492340();
              local_4._0_1_ = 0x36;
              ppiStack_c0 = (int **)0x408b07;
              FUN_00492340();
              ppiStack_c0 = (int **)0x408b10;
              FUN_004b8250();
              ppiStack_c0 = (int **)0x408b17;
              DAT_0068c0b0 = FUN_004b0f30();
            }
          }
          else {
            ppiStack_c4 = apiStack_7c;
            pcStack_c8 = (char *)0x408a14;
            pcStack_c8 = (char *)FUN_00407f50();
            ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
            local_4._0_1_ = 0x2e;
            ppiStack_c4 = (int **)0x408a34;
            FUN_00455640();
            local_4._0_1_ = 0x31;
            ppiStack_c0 = (int **)0x408a45;
            FUN_00492340();
            local_4._0_1_ = 0x30;
            ppiStack_c0 = (int **)0x408a56;
            FUN_00492340();
            ppiStack_c0 = (int **)0x408a5f;
            FUN_004b8250();
            ppiStack_c0 = (int **)0x408a66;
            DAT_0068be58 = FUN_004b0f30();
          }
        }
        else {
          ppiStack_c4 = apiStack_7c;
          pcStack_c8 = (char *)0x408963;
          pcStack_c8 = (char *)FUN_00407f50();
          ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
          local_4._0_1_ = 0x28;
          ppiStack_c4 = (int **)0x408983;
          FUN_00455640();
          local_4._0_1_ = 0x2b;
          ppiStack_c0 = (int **)0x408994;
          FUN_00492340();
          local_4._0_1_ = 0x2a;
          ppiStack_c0 = (int **)0x4089a5;
          FUN_00492340();
          ppiStack_c0 = (int **)0x4089ae;
          FUN_004b8250();
          ppiStack_c0 = (int **)0x4089b5;
          DAT_0068be48 = FUN_004b0f30();
        }
      }
      else {
        ppiStack_c4 = apiStack_7c;
        pcStack_c8 = (char *)0x4088b2;
        pcStack_c8 = (char *)FUN_00407f50();
        ppiStack_c0 = (int **)FUN_00407e60(apiStack_88);
        local_4._0_1_ = 0x22;
        ppiStack_c4 = (int **)0x4088d2;
        FUN_00455640();
        local_4._0_1_ = 0x25;
        ppiStack_c0 = (int **)0x4088e3;
        FUN_00492340();
        local_4._0_1_ = 0x24;
        ppiStack_c0 = (int **)0x4088f4;
        FUN_00492340();
        ppiStack_c0 = (int **)0x4088fd;
        FUN_004b8250();
        ppiStack_c0 = (int **)0x408904;
        DAT_0068be38 = FUN_004b0f30();
      }
    }
    else {
      ppiStack_c0 = (int **)&stack0x00000008;
      ppiStack_c4 = apiStack_54;
      pcStack_c8 = (char *)0x4083d2;
      pcStack_c8 = (char *)FUN_00407f50();
      piVar5 = (int *)FUN_00407e60(apiStack_48);
      ppiStack_c0 = (int **)0x4083ee;
      FUN_004042a0();
      local_4._0_1_ = 10;
      if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
        local_94[0] = (int *)0x0;
        local_8c = 0;
      }
      else {
        ppiStack_c0 = (int **)0x408400;
        iVar4 = (*(code *)**(undefined4 **)*piVar5)();
        if (iVar4 == 6) {
          local_94[0] = (int *)*piVar5;
          local_8c = piVar5[2];
          local_94[0][1] = local_94[0][1] + 1;
        }
        else {
          ppiStack_c0 = (int **)s_Number_0066ba60;
          ppiStack_c4 = (int **)0x408411;
          ppiStack_c4 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
          pcStack_c8 = (char *)0x1;
          FUN_004a5670(2);
        }
      }
      local_4._0_1_ = 0xd;
      if ((((uStack_40 & 0x10000) == 0) && (apiStack_48[0] != (int *)0x0)) &&
         ((apiStack_48[0][1] = apiStack_48[0][1] + -1, apiStack_48[0][1] == 0 &&
          (apiStack_48[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x408471;
        (**(code **)(*apiStack_48[0] + 0xc))();
      }
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (((((uStack_4c & 0x10000) == 0) && (apiStack_54[0] != (int *)0x0)) &&
          (apiStack_54[0][1] = apiStack_54[0][1] + -1, apiStack_54[0][1] == 0)) &&
         (apiStack_54[0] != (int *)0x0)) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4084a4;
        (**(code **)(*apiStack_54[0] + 0xc))();
      }
      if (local_94[0] == (int *)0x0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x0;
        pcStack_c8 = (char *)0x4084b2;
        FUN_004a5470();
      }
      if ((local_8c & 0x10000) != 0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4;
        pcStack_c8 = (char *)0x4084c4;
        FUN_004a5470();
      }
      ppiStack_c0 = (int **)0x4084d0;
      fVar6 = (float10)FUN_004b0f20();
      _DAT_0068a900 = (double)fVar6;
      ppiStack_c0 = (int **)&stack0x00000008;
      ppiStack_c4 = apiStack_3c;
      pcStack_c8 = (char *)0x4084eb;
      pcStack_c8 = (char *)FUN_00407f50();
      local_4._0_1_ = 0xe;
      uVar2 = FUN_00409000(apiStack_18);
      piVar5 = (int *)FUN_00407e60(apiStack_30,uVar2);
      ppiStack_c0 = (int **)0x40851d;
      FUN_004042a0();
      local_4._0_1_ = 0x11;
      if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
        apiStack_70[0] = (int *)0x0;
        uStack_68 = 0;
      }
      else {
        ppiStack_c0 = (int **)0x40852f;
        iVar4 = (*(code *)**(undefined4 **)*piVar5)();
        if (iVar4 == 6) {
          apiStack_70[0] = (int *)*piVar5;
          uStack_68 = piVar5[2];
          apiStack_70[0][1] = apiStack_70[0][1] + 1;
        }
        else {
          ppiStack_c0 = (int **)s_Number_0066ba60;
          ppiStack_c4 = (int **)0x408540;
          ppiStack_c4 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
          pcStack_c8 = (char *)0x1;
          FUN_004a5670(2);
        }
      }
      local_4._0_1_ = 0x15;
      if ((((uStack_28 & 0x10000) == 0) && (apiStack_30[0] != (int *)0x0)) &&
         ((apiStack_30[0][1] = apiStack_30[0][1] + -1, apiStack_30[0][1] == 0 &&
          (apiStack_30[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4085a9;
        (**(code **)(*apiStack_30[0] + 0xc))();
      }
      local_4._0_1_ = 0x14;
      if ((((uStack_10 & 0x10000) == 0) && (apiStack_18[0] != (int *)0x0)) &&
         ((apiStack_18[0][1] = apiStack_18[0][1] + -1, apiStack_18[0][1] == 0 &&
          (apiStack_18[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4085e5;
        (**(code **)(*apiStack_18[0] + 0xc))();
      }
      local_4 = CONCAT31(local_4._1_3_,0x13);
      if (((((uStack_34 & 0x10000) == 0) && (apiStack_3c[0] != (int *)0x0)) &&
          (apiStack_3c[0][1] = apiStack_3c[0][1] + -1, apiStack_3c[0][1] == 0)) &&
         (apiStack_3c[0] != (int *)0x0)) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x408622;
        (**(code **)(*apiStack_3c[0] + 0xc))();
      }
      if (apiStack_70[0] == (int *)0x0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x0;
        pcStack_c8 = (char *)0x408630;
        FUN_004a5470();
      }
      if ((uStack_68 & 0x10000) != 0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4;
        pcStack_c8 = (char *)0x408642;
        FUN_004a5470();
      }
      ppiStack_c0 = (int **)0x40864e;
      fVar6 = (float10)FUN_004b0f20();
      _DAT_0068a908 = (double)fVar6;
      ppiStack_c0 = (int **)&stack0x00000008;
      ppiStack_c4 = apiStack_ac;
      pcStack_c8 = (char *)0x408666;
      pcStack_c8 = (char *)FUN_00407f50();
      local_4._0_1_ = 0x16;
      uVar2 = FUN_00409000(apiStack_88);
      local_4._0_1_ = 0x17;
      uVar2 = FUN_00409000(apiStack_7c,uVar2);
      piVar5 = (int *)FUN_00407e60(apiStack_24,uVar2);
      ppiStack_c0 = (int **)0x4086a8;
      FUN_004042a0();
      local_4._0_1_ = 0x1a;
      if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
        apiStack_64[0] = (int *)0x0;
        uStack_5c = 0;
      }
      else {
        ppiStack_c0 = (int **)0x4086ba;
        iVar4 = (*(code *)**(undefined4 **)*piVar5)();
        if (iVar4 == 6) {
          apiStack_64[0] = (int *)*piVar5;
          uStack_5c = piVar5[2];
          apiStack_64[0][1] = apiStack_64[0][1] + 1;
        }
        else {
          ppiStack_c0 = (int **)s_Number_0066ba60;
          ppiStack_c4 = (int **)0x4086cb;
          ppiStack_c4 = (int **)(**(code **)(*(int *)*piVar5 + 4))();
          pcStack_c8 = (char *)0x1;
          FUN_004a5670(2);
        }
      }
      local_4._0_1_ = 0x1f;
      if ((((uStack_1c & 0x10000) == 0) && (apiStack_24[0] != (int *)0x0)) &&
         ((apiStack_24[0][1] = apiStack_24[0][1] + -1, apiStack_24[0][1] == 0 &&
          (apiStack_24[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x408734;
        (**(code **)(*apiStack_24[0] + 0xc))();
      }
      local_4._0_1_ = 0x1e;
      if ((((uStack_74 & 0x10000) == 0) && (apiStack_7c[0] != (int *)0x0)) &&
         ((apiStack_7c[0][1] = apiStack_7c[0][1] + -1, apiStack_7c[0][1] == 0 &&
          (apiStack_7c[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x408767;
        (**(code **)(*apiStack_7c[0] + 0xc))();
      }
      local_4._0_1_ = 0x1d;
      if (((((uStack_80 & 0x10000) == 0) && (apiStack_88[0] != (int *)0x0)) &&
          (apiStack_88[0][1] = apiStack_88[0][1] + -1, apiStack_88[0][1] == 0)) &&
         (apiStack_88[0] != (int *)0x0)) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x40879a;
        (**(code **)(*apiStack_88[0] + 0xc))();
      }
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      if ((((uStack_a4 & 0x10000) == 0) && (apiStack_ac[0] != (int *)0x0)) &&
         ((apiStack_ac[0][1] = apiStack_ac[0][1] + -1, apiStack_ac[0][1] == 0 &&
          (apiStack_ac[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4087cd;
        (**(code **)(*apiStack_ac[0] + 0xc))();
      }
      if (apiStack_64[0] == (int *)0x0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x0;
        pcStack_c8 = (char *)0x4087db;
        FUN_004a5470();
      }
      if ((uStack_5c & 0x10000) != 0) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4;
        pcStack_c8 = (char *)0x4087ed;
        FUN_004a5470();
      }
      ppiStack_c0 = (int **)0x4087f9;
      fVar6 = (float10)FUN_004b0f20();
      _DAT_0068a910 = (double)fVar6;
      _DAT_0068aa18 = _DAT_0068a908;
      DAT_0068aa10 = DAT_0068a900;
      _DAT_0068aa20 = _DAT_0068a910;
      DAT_0068aa14 = DAT_0068a904;
      local_4._0_1_ = 0x13;
      ppiStack_c0 = (int **)0x40883f;
      FUN_00492340();
      local_4._0_1_ = 0xc;
      ppiStack_c0 = (int **)0x408850;
      FUN_00492340();
    }
    local_4._0_1_ = 1;
    ppiStack_c0 = (int **)0x408f88;
    FUN_00492340();
  }
  else {
    ppiStack_c0 = (int **)&stack0x00000008;
    ppiStack_c4 = local_94;
    pcStack_c8 = (char *)0x408098;
    puVar3 = (undefined4 *)FUN_00407f50();
    local_4._0_1_ = 3;
    if (((local_a0 != (int *)0x0) && ((local_98 & 0x10000) == 0)) &&
       (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) {
      ppiStack_c4 = &local_a0;
      pcStack_c8 = (char *)0x4080ce;
      ppiStack_c0 = (int **)puVar3;
      cVar1 = FUN_00408fd0();
      if ((cVar1 == '\0') && (local_a0 != (int *)0x0)) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4080e4;
        (**(code **)(*local_a0 + 0xc))();
      }
    }
    local_98 = puVar3[2];
    if ((local_98 & 0x10000) == 0) {
      local_9c = 0;
      local_a0 = (int *)*puVar3;
      if (local_a0 == (int *)0x0) {
        local_a0 = (int *)0x0;
        local_98 = 0;
      }
      else {
        local_98 = puVar3[2];
        local_a0[1] = local_a0[1] + 1;
      }
    }
    else {
      local_a0 = (int *)*puVar3;
      local_9c = puVar3[1];
    }
    local_4._0_1_ = 1;
    if (((((local_8c & 0x10000) == 0) && (local_94[0] != (int *)0x0)) &&
        (local_94[0][1] = local_94[0][1] + -1, local_94[0][1] == 0)) && (local_94[0] != (int *)0x0))
    {
      ppiStack_c0 = (int **)0x1;
      ppiStack_c4 = (int **)0x408157;
      (**(code **)(*local_94[0] + 0xc))();
    }
    while ((char)local_98 == '\x02') {
      ppiStack_c0 = &local_a0;
      ppiStack_c4 = local_94;
      pcStack_c8 = (char *)0x40817c;
      iVar4 = FUN_00407e60();
      cVar1 = *(char *)(iVar4 + 8);
      if ((((local_8c & 0x10000) == 0) && (local_94[0] != (int *)0x0)) &&
         ((local_94[0][1] = local_94[0][1] + -1, local_94[0][1] == 0 && (local_94[0] != (int *)0x0))
         )) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x4081b6;
        (**(code **)(*local_94[0] + 0xc))();
      }
      if (cVar1 == '\x02') {
        ppiStack_c0 = &local_a0;
        ppiStack_c4 = apiStack_70;
        pcStack_c8 = (char *)0x4081cd;
        piVar5 = (int *)FUN_00407e60();
        puStack_58 = (undefined1 *)&pcStack_c8;
        pcStack_c8 = extraout_ECX;
        FUN_004042a0();
        local_4._0_1_ = 6;
        if ((undefined4 *)*piVar5 == (undefined4 *)0x0) {
          pcStack_c8 = (char *)0x0;
          ppiStack_c0 = (int **)0x0;
        }
        else {
          iVar4 = (*(code *)**(undefined4 **)*piVar5)();
          if (iVar4 == 2) {
            pcStack_c8 = (char *)*piVar5;
            ppiStack_c0 = (int **)piVar5[2];
            *(int *)(pcStack_c8 + 4) = *(int *)(pcStack_c8 + 4) + 1;
          }
          else {
            uVar2 = (**(code **)(*(int *)*piVar5 + 4))(&DAT_0066bb08);
            FUN_004a5670(2,1,uVar2);
          }
        }
        local_4._0_1_ = 5;
        FUN_004074d0(param_1);
        local_4._0_1_ = 1;
        if ((((uStack_68 & 0x10000) == 0) && (apiStack_70[0] != (int *)0x0)) &&
           ((apiStack_70[0][1] = apiStack_70[0][1] + -1, apiStack_70[0][1] == 0 &&
            (apiStack_70[0] != (int *)0x0)))) {
          ppiStack_c0 = (int **)0x1;
          ppiStack_c4 = (int **)0x408274;
          (**(code **)(*apiStack_70[0] + 0xc))();
        }
      }
      ppiStack_c0 = &local_a0;
      ppiStack_c4 = apiStack_64;
      pcStack_c8 = (char *)0x40828c;
      puVar3 = (undefined4 *)FUN_00409000();
      local_4._0_1_ = 4;
      if (((local_a0 != (int *)0x0) && ((local_98 & 0x10000) == 0)) &&
         (local_a0[1] = local_a0[1] + -1, local_a0[1] == 0)) {
        ppiStack_c4 = &local_a0;
        pcStack_c8 = (char *)0x4082c2;
        ppiStack_c0 = (int **)puVar3;
        cVar1 = FUN_00408fd0();
        if ((cVar1 == '\0') && (local_a0 != (int *)0x0)) {
          ppiStack_c0 = (int **)0x1;
          ppiStack_c4 = (int **)0x4082d8;
          (**(code **)(*local_a0 + 0xc))();
        }
      }
      local_98 = puVar3[2];
      if ((local_98 & 0x10000) == 0) {
        local_9c = 0;
        local_a0 = (int *)*puVar3;
        if (local_a0 == (int *)0x0) {
          local_a0 = (int *)0x0;
          local_98 = 0;
        }
        else {
          local_98 = puVar3[2];
          local_a0[1] = local_a0[1] + 1;
        }
      }
      else {
        local_a0 = (int *)*puVar3;
        local_9c = puVar3[1];
      }
      local_4._0_1_ = 1;
      if ((((uStack_5c & 0x10000) == 0) && (apiStack_64[0] != (int *)0x0)) &&
         ((apiStack_64[0][1] = apiStack_64[0][1] + -1, apiStack_64[0][1] == 0 &&
          (apiStack_64[0] != (int *)0x0)))) {
        ppiStack_c0 = (int **)0x1;
        ppiStack_c4 = (int **)0x40834b;
        (**(code **)(*apiStack_64[0] + 0xc))();
      }
    }
  }
LAB_00408f88:
  local_4 = (uint)local_4._1_3_ << 8;
  ppiStack_c0 = (int **)0x408f99;
  FUN_00492340();
  local_4 = 0xffffffff;
  ppiStack_c0 = (int **)0x408fb0;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

