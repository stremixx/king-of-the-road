
void FUN_004132c0(int **param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int ***pppiStack_1b0;
  int ***pppiStack_1ac;
  int ***pppiStack_1a8;
  char ***pppcStack_194;
  undefined1 **ppuStack_190;
  uint uStack_18c;
  undefined1 *puStack_188;
  int *piStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  int *local_178;
  undefined4 local_174;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [12];
  int *piStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  undefined4 local_130;
  undefined1 auStack_12c [12];
  int *apiStack_120 [2];
  uint uStack_118;
  int *apiStack_114 [2];
  uint uStack_10c;
  int *apiStack_108 [2];
  uint uStack_100;
  int *apiStack_fc [2];
  uint uStack_f4;
  int *apiStack_f0 [2];
  uint uStack_e8;
  int *apiStack_e4 [2];
  uint uStack_dc;
  int *apiStack_d8 [2];
  uint uStack_d0;
  undefined1 local_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 *apuStack_9c [3];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [108];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c578;
  pvStack_c = ExceptionList;
  pppiStack_1a8 = (int ***)&local_130;
  pppiStack_1ac = &param_1;
  pppiStack_1b0 = (int ***)0x0;
  local_130 = 1;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00455eb0(local_b4);
  local_178 = (int *)0x0;
  local_174 = 0;
  local_170 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
    local_178 = (int *)0x0;
    local_170 = 0;
  }
  else {
    pppiStack_1a8 = (int ***)0x413331;
    iVar3 = (*(code *)**(undefined4 **)*piVar2)();
    if (iVar3 == 0xb) {
      local_178 = (int *)*piVar2;
      local_170 = piVar2[2];
      local_178[1] = local_178[1] + 1;
    }
    else {
      pppiStack_1a8 = (int ***)&DAT_0066bb28;
      pppiStack_1ac = (int ***)0x413342;
      pppiStack_1ac = (int ***)(**(code **)(*(int *)*piVar2 + 4))();
      pppiStack_1b0 = (int ***)0x1;
      FUN_004a5670(2);
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  pppiStack_1a8 = (int ***)0x413383;
  FUN_00492340();
  if (local_178 == (int *)0x0) {
    pppiStack_1a8 = (int ***)0x1;
    pppiStack_1ac = (int ***)0x0;
    pppiStack_1b0 = (int ***)0x413391;
    FUN_004a5470();
  }
  if ((local_170 & 0x10000) != 0) {
    pppiStack_1a8 = (int ***)0x1;
    pppiStack_1ac = (int ***)0x4;
    pppiStack_1b0 = (int ***)0x4133ac;
    FUN_004a5470();
  }
  pppiStack_1a8 = (int ***)0x4133b8;
  iVar3 = (**(code **)(*local_178 + 0x28))();
  if (iVar3 != 0) {
    pppiStack_1a8 = (int ***)&DAT_0068c120;
    pppiStack_1ac = (int ***)param_1;
    pppiStack_1b0 = (int ***)s_Cannot_open_0066bb1c;
    FUN_00401010(0x17,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xd80);
  }
  puStack_160 = (undefined1 *)&pppiStack_1b0;
  FUN_00455dc0(&local_178);
  FUN_004b4cb0(&piStack_13c,&DAT_0068aab8);
  if ((uStack_134 & 0x10000) == 0) {
    uStack_180 = 0;
    if (piStack_13c == (int *)0x0) {
      piStack_184 = (int *)0x0;
      uStack_17c = 0;
    }
    else {
      piStack_184 = piStack_13c;
      uStack_17c = uStack_134;
      piStack_13c[1] = piStack_13c[1] + 1;
    }
  }
  else {
    uStack_17c = uStack_134;
    uStack_180 = uStack_138;
    piStack_184 = piStack_13c;
  }
  while ((char)uStack_17c == '\x02') {
    pppiStack_1a8 = (int ***)&piStack_184;
    pppiStack_1ac = (int ***)&pppcStack_194;
    pppiStack_1b0 = (int ***)0x41346b;
    FUN_00407e60();
    pppiStack_1b0 = (int ***)&pppcStack_194;
    uVar4 = FUN_00407e60(apiStack_e4);
    local_4._0_1_ = 8;
    cVar1 = FUN_004b6670(uVar4,&DAT_0066c000);
    local_4._0_1_ = 7;
    if (((((uStack_dc & 0x10000) == 0) && (apiStack_e4[0] != (int *)0x0)) &&
        (apiStack_e4[0][1] = apiStack_e4[0][1] + -1, apiStack_e4[0][1] == 0)) &&
       (apiStack_e4[0] != (int *)0x0)) {
      pppiStack_1a8 = (int ***)0x1;
      pppiStack_1ac = (int ***)0x4134d6;
      (**(code **)(*apiStack_e4[0] + 0xc))();
    }
    if (cVar1 == '\0') {
      pppiStack_1a8 = (int ***)&pppcStack_194;
      pppiStack_1ac = (int ***)apiStack_120;
      pppiStack_1b0 = (int ***)0x413587;
      uVar4 = FUN_00407e60();
      pppiStack_1b0 = (int ***)s_parking_0066bff8;
      local_4._0_1_ = 9;
      cVar1 = FUN_004b6670(uVar4);
      local_4._0_1_ = 7;
      if ((((uStack_118 & 0x10000) == 0) && (apiStack_120[0] != (int *)0x0)) &&
         ((apiStack_120[0][1] = apiStack_120[0][1] + -1, apiStack_120[0][1] == 0 &&
          (apiStack_120[0] != (int *)0x0)))) {
        pppiStack_1a8 = (int ***)0x1;
        pppiStack_1ac = (int ***)0x4135db;
        (**(code **)(*apiStack_120[0] + 0xc))();
      }
      if (cVar1 == '\0') {
        pppiStack_1a8 = (int ***)&pppcStack_194;
        pppiStack_1ac = (int ***)apiStack_fc;
        pppiStack_1b0 = (int ***)0x41368c;
        uVar4 = FUN_00407e60();
        pppiStack_1b0 = (int ***)s_service_0066bff0;
        local_4._0_1_ = 10;
        cVar1 = FUN_004b6670(uVar4);
        local_4._0_1_ = 7;
        if ((((uStack_f4 & 0x10000) == 0) && (apiStack_fc[0] != (int *)0x0)) &&
           ((apiStack_fc[0][1] = apiStack_fc[0][1] + -1, apiStack_fc[0][1] == 0 &&
            (apiStack_fc[0] != (int *)0x0)))) {
          pppiStack_1a8 = (int ***)0x1;
          pppiStack_1ac = (int ***)0x4136e0;
          (**(code **)(*apiStack_fc[0] + 0xc))();
        }
        if (cVar1 == '\0') {
          pppiStack_1a8 = (int ***)&pppcStack_194;
          pppiStack_1ac = (int ***)apiStack_d8;
          pppiStack_1b0 = (int ***)0x413791;
          uVar4 = FUN_00407e60();
          pppiStack_1b0 = (int ***)s_obstacle_0066bfe4;
          local_4._0_1_ = 0xb;
          cVar1 = FUN_004b6670(uVar4);
          local_4._0_1_ = 7;
          if (((((uStack_d0 & 0x10000) == 0) && (apiStack_d8[0] != (int *)0x0)) &&
              (apiStack_d8[0][1] = apiStack_d8[0][1] + -1, apiStack_d8[0][1] == 0)) &&
             (apiStack_d8[0] != (int *)0x0)) {
            pppiStack_1a8 = (int ***)0x1;
            pppiStack_1ac = (int ***)0x4137e5;
            (**(code **)(*apiStack_d8[0] + 0xc))();
          }
          if (cVar1 == '\0') {
            pppiStack_1a8 = (int ***)&pppcStack_194;
            pppiStack_1ac = (int ***)apiStack_114;
            pppiStack_1b0 = (int ***)0x413896;
            uVar4 = FUN_00407e60();
            pppiStack_1b0 = (int ***)s_people_0066bfdc;
            local_4._0_1_ = 0xc;
            cVar1 = FUN_004b6670(uVar4);
            local_4._0_1_ = 7;
            if ((((uStack_10c & 0x10000) == 0) && (apiStack_114[0] != (int *)0x0)) &&
               ((apiStack_114[0][1] = apiStack_114[0][1] + -1, apiStack_114[0][1] == 0 &&
                (apiStack_114[0] != (int *)0x0)))) {
              pppiStack_1a8 = (int ***)0x1;
              pppiStack_1ac = (int ***)0x4138ea;
              (**(code **)(*apiStack_114[0] + 0xc))();
            }
            if (cVar1 == '\0') {
              pppiStack_1a8 = (int ***)&pppcStack_194;
              pppiStack_1ac = (int ***)apiStack_108;
              pppiStack_1b0 = (int ***)0x413975;
              uVar4 = FUN_00407e60();
              pppiStack_1b0 = (int ***)s_ambush_0066bfd4;
              local_4._0_1_ = 0xd;
              cVar1 = FUN_004b6670(uVar4);
              local_4._0_1_ = 7;
              if ((((uStack_100 & 0x10000) == 0) && (apiStack_108[0] != (int *)0x0)) &&
                 ((apiStack_108[0][1] = apiStack_108[0][1] + -1, apiStack_108[0][1] == 0 &&
                  (apiStack_108[0] != (int *)0x0)))) {
                pppiStack_1a8 = (int ***)0x1;
                pppiStack_1ac = (int ***)0x4139c9;
                (**(code **)(*apiStack_108[0] + 0xc))();
              }
              if (cVar1 == '\0') {
                pppiStack_1a8 = (int ***)&pppcStack_194;
                pppiStack_1ac = (int ***)apuStack_9c;
                pppiStack_1b0 = (int ***)0x413a7a;
                uVar4 = FUN_00407e60();
                pppiStack_1b0 = (int ***)s_nodeevent_0066bfc8;
                local_4._0_1_ = 0xe;
                cVar1 = FUN_004b6670(uVar4);
                local_4._0_1_ = 7;
                pppiStack_1a8 = (int ***)0x413aa6;
                FUN_00492340();
                if (cVar1 != '\0') {
                  pppiStack_1a8 = (int ***)&pppcStack_194;
                  pppiStack_1ac = (int ***)0x413abc;
                  FUN_00455dc0();
                  puStack_188 = (undefined1 *)&pppiStack_1b0;
                  local_4._0_1_ = 0xf;
                  FUN_00455dc0(auStack_148);
                  pppiStack_1a8 = (int ***)FUN_004af560(auStack_78,2);
                  local_4._0_1_ = 0x10;
                  pppiStack_1ac = (int ***)0x413afb;
                  FUN_0044c9a0();
                  local_4._0_1_ = 0x12;
                  pppiStack_1a8 = (int ***)0x413b0f;
                  FUN_00492340();
                  puStack_188 = (undefined1 *)&pppiStack_1b0;
                  FUN_00455dc0(auStack_148);
                  pppiStack_1a8 = (int ***)FUN_004af560(auStack_84,3);
                  local_4._0_1_ = 0x13;
                  pppiStack_1ac = (int ***)0x413b49;
                  FUN_004556d0();
                  local_4._0_1_ = 0x15;
                  pppiStack_1a8 = (int ***)0x413b5d;
                  FUN_00492340();
                  puStack_188 = (undefined1 *)&pppiStack_1b0;
                  FUN_00455dc0(auStack_148);
                  pppiStack_1a8 = (int ***)FUN_004af560(auStack_90,4);
                  local_4._0_1_ = 0x16;
                  pppiStack_1ac = (int ***)0x413b93;
                  FUN_0044c9a0();
                  local_4._0_1_ = 0x18;
                  pppiStack_1a8 = (int ***)0x413ba7;
                  FUN_00492340();
                  puStack_188 = (undefined1 *)&pppiStack_1b0;
                  FUN_00455dc0(auStack_148);
                  pppiStack_1a8 = (int ***)FUN_004af560(auStack_a8,5);
                  local_4._0_1_ = 0x19;
                  pppiStack_1ac = (int ***)0x413be1;
                  FUN_004556d0();
                  local_4._0_1_ = 0x1b;
                  pppiStack_1a8 = (int ***)0x413bf5;
                  FUN_00492340();
                  pppiStack_1a8 = (int ***)0x38;
                  pppiStack_1ac = (int ***)0x413bfc;
                  puStack_188 = (undefined1 *)FUN_00631d33();
                  local_4._0_1_ = 0x1c;
                  if (puStack_188 == (undefined1 *)0x0) {
                    puVar5 = (undefined4 *)0x0;
                  }
                  else {
                    pppiStack_1a8 = (int ***)0x413c16;
                    puVar5 = (undefined4 *)FUN_00413fd0();
                  }
                  pppiStack_1ac = (int ***)auStack_12c;
                  pppiStack_1a8 = (int ***)s_STATEBORDER_0066bfbc;
                  local_4 = CONCAT31(local_4._1_3_,0x1b);
                  pppiStack_1b0 = (int ***)0x413c33;
                  cVar1 = FUN_004b6670();
                  if (cVar1 == '\0') {
                    pppiStack_1ac = (int ***)auStack_12c;
                    pppiStack_1a8 = (int ***)s_UNCONDITIONAL_0066bed8;
                    pppiStack_1b0 = (int ***)0x413c51;
                    cVar1 = FUN_004b6670();
                    if (cVar1 == '\0') {
                      pppiStack_1a8 = (int ***)0x413c61;
                      iVar3 = FUN_004b8250();
                      pppiStack_1ac = *(int ****)(iVar3 + 0xc);
                      pppiStack_1a8 = (int ***)&DAT_0068c120;
                      pppiStack_1b0 = (int ***)s_Unknown_node_event_type_0066bfa4;
                      FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xdbe);
                    }
                  }
                  else {
                    *puVar5 = 0x10;
                  }
                  pppiStack_1ac = (int ***)auStack_154;
                  pppiStack_1a8 = (int ***)s_NORTH_0066bf1c;
                  pppiStack_1b0 = (int ***)0x413c98;
                  cVar1 = FUN_004b6670();
                  if (cVar1 == '\0') {
                    pppiStack_1ac = (int ***)auStack_154;
                    pppiStack_1a8 = (int ***)s_SOUTH_0066bf14;
                    pppiStack_1b0 = (int ***)0x413cd9;
                    cVar1 = FUN_004b6670();
                    if (cVar1 == '\0') {
                      pppiStack_1ac = (int ***)auStack_154;
                      pppiStack_1a8 = (int ***)&DAT_0066bf0c;
                      pppiStack_1b0 = (int ***)0x413d1a;
                      cVar1 = FUN_004b6670();
                      if (cVar1 == '\0') {
                        pppiStack_1ac = (int ***)auStack_154;
                        pppiStack_1a8 = (int ***)&DAT_0066bf04;
                        pppiStack_1b0 = (int ***)0x413d5b;
                        cVar1 = FUN_004b6670();
                        if (cVar1 == '\0') {
                          pppiStack_1ac = (int ***)auStack_154;
                          pppiStack_1a8 = (int ***)&DAT_0066bfa0;
                          pppiStack_1b0 = (int ***)0x413d95;
                          cVar1 = FUN_004b6670();
                          if (cVar1 == '\0') {
                            pppiStack_1a8 = (int ***)0x413daa;
                            iVar3 = FUN_004b8250();
                            pppiStack_1ac = *(int ****)(iVar3 + 0xc);
                            pppiStack_1a8 = (int ***)&DAT_0068c120;
                            pppiStack_1b0 = (int ***)s_Unknown_node_event_direction_0066bf80;
                            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xde8);
                          }
                          else {
                            puVar5[1] = 0;
                          }
                        }
                        else {
                          pppiStack_1a8 = (int ***)0x0;
                          pppiStack_1ac = (int ***)0x0;
                          pppiStack_1b0 = (int ***)0x0;
                          puVar5[1] = 4;
                          pppiStack_1a8 = (int ***)FUN_00405ea0(0,0xbff00000,0);
                          pppiStack_1ac = (int ***)0x413d84;
                          FUN_00405ed0();
                        }
                      }
                      else {
                        pppiStack_1a8 = (int ***)0x0;
                        pppiStack_1ac = (int ***)0x0;
                        pppiStack_1b0 = (int ***)0x0;
                        puVar5[1] = 3;
                        pppiStack_1a8 = (int ***)FUN_00405ea0(0,0x3ff00000,0);
                        pppiStack_1ac = (int ***)0x413d47;
                        FUN_00405ed0();
                      }
                    }
                    else {
                      pppiStack_1a8 = (int ***)0x0;
                      pppiStack_1ac = (int ***)0x0;
                      pppiStack_1b0 = (int ***)0xbff00000;
                      puVar5[1] = 2;
                      pppiStack_1a8 = (int ***)FUN_00405ea0(0,0,0);
                      pppiStack_1ac = (int ***)0x413d06;
                      FUN_00405ed0();
                    }
                  }
                  else {
                    pppiStack_1a8 = (int ***)0x0;
                    pppiStack_1ac = (int ***)0x0;
                    pppiStack_1b0 = (int ***)0x3ff00000;
                    puVar5[1] = 1;
                    pppiStack_1a8 = (int ***)FUN_00405ea0(0,0,0);
                    pppiStack_1ac = (int ***)0x413cc5;
                    FUN_00405ed0();
                  }
                  pppiStack_1a8 = (int ***)0x413dde;
                  iVar3 = FUN_004b8250();
                  pppiStack_1a8 = (int ***)(iVar3 + 0xc);
                  pppiStack_1ac = (int ***)0x413dea;
                  FUN_0044c100();
                  pppiStack_1a8 = (int ***)0x413df6;
                  iVar3 = FUN_004b8250();
                  pppiStack_1a8 = *(int ****)(iVar3 + 0xc);
                  pppiStack_1ac = (int ***)&puStack_160;
                  pppiStack_1b0 = (int ***)0x413e04;
                  FUN_004365f0();
                  if (puStack_160 != (undefined1 *)0xffffffff) {
                    *(undefined4 **)(*(int *)(DAT_0068be60 + (int)puStack_160 * 4) + 0xc0) = puVar5;
                  }
                  local_4._0_1_ = 0x18;
                  pppiStack_1a8 = (int ***)0x413e33;
                  FUN_00492340();
                  local_4._0_1_ = 0x15;
                  pppiStack_1a8 = (int ***)0x413e44;
                  FUN_00492340();
                  local_4._0_1_ = 0x12;
                  pppiStack_1a8 = (int ***)0x413e58;
                  FUN_00492340();
                  local_4._0_1_ = 0xf;
                  pppiStack_1a8 = (int ***)0x413e69;
                  FUN_00492340();
                  local_4._0_1_ = 7;
                  pppiStack_1a8 = (int ***)0x413e7a;
                  FUN_00492340();
                }
              }
              else {
                puStack_188 = (undefined1 *)&pppiStack_1b0;
                if ((uStack_18c & 0x10000) == 0) {
                  pppiStack_1ac = (int ***)0x0;
                  if ((int ***)pppcStack_194 == (int ***)0x0) {
                    pppiStack_1b0 = (int ***)0x0;
                    pppiStack_1a8 = (int ***)0x0;
                  }
                  else {
                    pppiStack_1b0 = (int ***)pppcStack_194;
                    pppiStack_1a8 = (int ***)uStack_18c;
                    pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
                  }
                }
                else {
                  pppiStack_1a8 = (int ***)uStack_18c;
                  pppiStack_1b0 = (int ***)pppcStack_194;
                  pppiStack_1ac = (int ***)ppuStack_190;
                }
                uStack_164 = FUN_00412220(&DAT_0068aab8);
                if (DAT_006898d4 == DAT_006898d8) {
                  pppiStack_1a8 = (int ***)&uStack_164;
                  pppiStack_1ac = (int ***)DAT_006898d4;
                  pppiStack_1b0 = (int ***)0x413a63;
                  FUN_004528c0();
                }
                else {
                  pppiStack_1a8 = (int ***)&uStack_164;
                  pppiStack_1ac = (int ***)DAT_006898d4;
                  pppiStack_1b0 = (int ***)0x413a3f;
                  FUN_00460970();
                  DAT_006898d4 = DAT_006898d4 + 1;
                }
              }
            }
            else {
              puStack_188 = (undefined1 *)&pppiStack_1b0;
              if ((uStack_18c & 0x10000) == 0) {
                pppiStack_1ac = (int ***)0x0;
                if ((int ***)pppcStack_194 == (int ***)0x0) {
                  pppiStack_1b0 = (int ***)0x0;
                  pppiStack_1a8 = (int ***)0x0;
                  FUN_00411b00(&DAT_0068aab8);
                }
                else {
                  pppiStack_1b0 = (int ***)pppcStack_194;
                  pppiStack_1a8 = (int ***)uStack_18c;
                  pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
                  puStack_188 = (undefined1 *)&pppiStack_1b0;
                  FUN_00411b00(&DAT_0068aab8);
                }
              }
              else {
                pppiStack_1a8 = (int ***)uStack_18c;
                pppiStack_1b0 = (int ***)pppcStack_194;
                pppiStack_1ac = (int ***)ppuStack_190;
                puStack_188 = (undefined1 *)&pppiStack_1b0;
                FUN_00411b00(&DAT_0068aab8);
              }
            }
          }
          else {
            puStack_188 = (undefined1 *)&pppiStack_1b0;
            if ((uStack_18c & 0x10000) == 0) {
              pppiStack_1ac = (int ***)0x0;
              if ((int ***)pppcStack_194 == (int ***)0x0) {
                pppiStack_1b0 = (int ***)0x0;
                pppiStack_1a8 = (int ***)0x0;
              }
              else {
                pppiStack_1b0 = (int ***)pppcStack_194;
                pppiStack_1a8 = (int ***)uStack_18c;
                pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
              }
            }
            else {
              pppiStack_1a8 = (int ***)uStack_18c;
              pppiStack_1b0 = (int ***)pppcStack_194;
              pppiStack_1ac = (int ***)ppuStack_190;
            }
            uStack_168 = FUN_00410ee0(&DAT_0068aab8);
            if (DAT_0068bb7c == DAT_0068bb80) {
              pppiStack_1a8 = (int ***)&uStack_168;
              pppiStack_1ac = (int ***)DAT_0068bb7c;
              pppiStack_1b0 = (int ***)0x41387f;
              FUN_0044ebd0();
            }
            else {
              pppiStack_1a8 = (int ***)&uStack_168;
              pppiStack_1ac = (int ***)DAT_0068bb7c;
              pppiStack_1b0 = (int ***)0x41385b;
              FUN_00460970();
              DAT_0068bb7c = DAT_0068bb7c + 1;
            }
          }
        }
        else {
          puStack_188 = (undefined1 *)&pppiStack_1b0;
          if ((uStack_18c & 0x10000) == 0) {
            pppiStack_1ac = (int ***)0x0;
            if ((int ***)pppcStack_194 == (int ***)0x0) {
              pppiStack_1b0 = (int ***)0x0;
              pppiStack_1a8 = (int ***)0x0;
            }
            else {
              pppiStack_1b0 = (int ***)pppcStack_194;
              pppiStack_1a8 = (int ***)uStack_18c;
              pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
            }
          }
          else {
            pppiStack_1a8 = (int ***)uStack_18c;
            pppiStack_1b0 = (int ***)pppcStack_194;
            pppiStack_1ac = (int ***)ppuStack_190;
          }
          uStack_15c = FUN_0040f740(&DAT_0068aab8);
          if (DAT_0068bb4c == DAT_0068bb50) {
            pppiStack_1a8 = (int ***)&uStack_15c;
            pppiStack_1ac = (int ***)DAT_0068bb4c;
            pppiStack_1b0 = (int ***)0x41377a;
            FUN_0044e650();
          }
          else {
            pppiStack_1a8 = (int ***)&uStack_15c;
            pppiStack_1ac = (int ***)DAT_0068bb4c;
            pppiStack_1b0 = (int ***)0x413756;
            FUN_00460970();
            DAT_0068bb4c = DAT_0068bb4c + 1;
          }
        }
      }
      else {
        puStack_188 = (undefined1 *)&pppiStack_1b0;
        if ((uStack_18c & 0x10000) == 0) {
          pppiStack_1ac = (int ***)0x0;
          if ((int ***)pppcStack_194 == (int ***)0x0) {
            pppiStack_1b0 = (int ***)0x0;
            pppiStack_1a8 = (int ***)0x0;
          }
          else {
            pppiStack_1b0 = (int ***)pppcStack_194;
            pppiStack_1a8 = (int ***)uStack_18c;
            pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
          }
        }
        else {
          pppiStack_1a8 = (int ***)uStack_18c;
          pppiStack_1b0 = (int ***)pppcStack_194;
          pppiStack_1ac = (int ***)ppuStack_190;
        }
        uStack_16c = FUN_00410240(&DAT_0068aab8);
        if (DAT_0068bbfc == DAT_0068bc00) {
          pppiStack_1a8 = (int ***)&uStack_16c;
          pppiStack_1ac = (int ***)DAT_0068bbfc;
          pppiStack_1b0 = (int ***)0x413675;
          FUN_0044e0d0();
        }
        else {
          pppiStack_1a8 = (int ***)&uStack_16c;
          pppiStack_1ac = (int ***)DAT_0068bbfc;
          pppiStack_1b0 = (int ***)0x413651;
          FUN_00460970();
          DAT_0068bbfc = DAT_0068bbfc + 1;
        }
      }
    }
    else {
      puStack_188 = (undefined1 *)&pppiStack_1b0;
      if ((uStack_18c & 0x10000) == 0) {
        pppiStack_1ac = (int ***)0x0;
        if ((int ***)pppcStack_194 == (int ***)0x0) {
          pppiStack_1b0 = (int ***)0x0;
          pppiStack_1a8 = (int ***)0x0;
        }
        else {
          pppiStack_1b0 = (int ***)pppcStack_194;
          pppiStack_1a8 = (int ***)uStack_18c;
          pppcStack_194[1] = (char **)((int)pppcStack_194[1] + 1);
        }
      }
      else {
        pppiStack_1a8 = (int ***)uStack_18c;
        pppiStack_1b0 = (int ***)pppcStack_194;
        pppiStack_1ac = (int ***)ppuStack_190;
      }
      uStack_158 = FUN_0040e7d0(&DAT_0068aab8);
      if (DAT_0068be24 == DAT_0068be28) {
        pppiStack_1a8 = (int ***)&uStack_158;
        pppiStack_1ac = (int ***)DAT_0068be24;
        pppiStack_1b0 = (int ***)0x413570;
        FUN_0044de10();
      }
      else {
        pppiStack_1a8 = (int ***)&uStack_158;
        pppiStack_1ac = (int ***)DAT_0068be24;
        pppiStack_1b0 = (int ***)0x41354c;
        FUN_00460970();
        DAT_0068be24 = DAT_0068be24 + 1;
      }
    }
    local_4._0_1_ = 5;
    pppiStack_1a8 = (int ***)0x413e8b;
    FUN_00492340();
    pppiStack_1a8 = (int ***)&piStack_184;
    pppiStack_1ac = (int ***)apiStack_f0;
    pppiStack_1b0 = (int ***)0x413e9d;
    puVar5 = (undefined4 *)FUN_00409000();
    local_4._0_1_ = 6;
    if (((piStack_184 != (int *)0x0) && ((uStack_17c & 0x10000) == 0)) &&
       (piStack_184[1] = piStack_184[1] + -1, piStack_184[1] == 0)) {
      pppiStack_1ac = (int ***)&piStack_184;
      pppiStack_1b0 = (int ***)0x413ed7;
      pppiStack_1a8 = (int ***)puVar5;
      cVar1 = FUN_00408fd0();
      if ((cVar1 == '\0') && (piStack_184 != (int *)0x0)) {
        pppiStack_1a8 = (int ***)0x1;
        pppiStack_1ac = (int ***)0x413eed;
        (**(code **)(*piStack_184 + 0xc))();
      }
    }
    uStack_17c = puVar5[2];
    if ((uStack_17c & 0x10000) == 0) {
      uStack_180 = 0;
      piStack_184 = (int *)*puVar5;
      if (piStack_184 == (int *)0x0) {
        piStack_184 = (int *)0x0;
        uStack_17c = 0;
      }
      else {
        uStack_17c = puVar5[2];
        piStack_184[1] = piStack_184[1] + 1;
      }
    }
    else {
      piStack_184 = (int *)*puVar5;
      uStack_180 = puVar5[1];
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((((uStack_e8 & 0x10000) == 0) && (apiStack_f0[0] != (int *)0x0)) &&
       ((apiStack_f0[0][1] = apiStack_f0[0][1] + -1, apiStack_f0[0][1] == 0 &&
        (apiStack_f0[0] != (int *)0x0)))) {
      pppiStack_1a8 = (int ***)0x1;
      pppiStack_1ac = (int ***)0x413f6f;
      (**(code **)(*apiStack_f0[0] + 0xc))();
    }
  }
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  pppiStack_1a8 = (int ***)0x413f8b;
  FUN_00492340();
  local_4 = CONCAT31(local_4._1_3_,3);
  pppiStack_1a8 = (int ***)0x413f9c;
  FUN_00492340();
  local_4 = 0xffffffff;
  pppiStack_1a8 = (int ***)0x413fb0;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

