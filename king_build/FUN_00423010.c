
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423010(void)

{
  char cVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int **extraout_ECX;
  int ***extraout_ECX_00;
  int **ppiVar9;
  char **ppcVar10;
  uint *puVar11;
  int ***pppiStack_314;
  char *apcStack_310 [2];
  int **ppiStack_308;
  int *piStack_304;
  int ***pppiStack_300;
  int **ppiStack_2fc;
  int **ppiStack_2f8;
  int ****ppppiStack_2f4;
  int **local_2f0;
  int **local_2d8;
  undefined1 *puStack_2d4;
  int *local_2d0;
  int iStack_2cc;
  uint local_2c8;
  int **local_2c4;
  int **local_2c0;
  int ***local_2bc;
  int *local_2b8 [2];
  int ***pppiStack_2b0;
  int **ppiStack_2ac;
  int **ppiStack_2a8;
  undefined4 uStack_2a4;
  int **local_2a0;
  int *local_298 [2];
  uint local_290;
  int *apiStack_28c [2];
  uint uStack_284;
  int *local_280 [2];
  uint uStack_278;
  char *local_274;
  undefined *local_270;
  undefined1 auStack_26c [4];
  int *local_268 [2];
  undefined4 local_260;
  undefined4 local_25c;
  char *local_258;
  char *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_244;
  undefined4 local_240;
  int **ppiStack_238;
  undefined4 auStack_234 [2];
  double dStack_22c;
  int iStack_224;
  int iStack_220;
  int *apiStack_214 [2];
  int ***pppiStack_20c;
  int **ppiStack_208;
  int **ppiStack_204;
  undefined1 *puStack_200;
  int **ppiStack_1fc;
  int *apiStack_1f4 [8];
  uint auStack_1d4 [8];
  uint auStack_1b4 [8];
  uint auStack_194 [8];
  uint auStack_174 [5];
  int iStack_160;
  uint auStack_154 [8];
  uint auStack_134 [8];
  uint auStack_114 [4];
  int iStack_104;
  uint auStack_f4 [5];
  int iStack_e0;
  uint auStack_d4 [5];
  int iStack_c0;
  uint auStack_b4 [4];
  int iStack_a4;
  uint auStack_94 [8];
  undefined4 auStack_74 [8];
  uint auStack_54 [5];
  int iStack_40;
  int *apiStack_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cd87;
  local_14 = ExceptionList;
  local_2f0 = (int **)0x8;
  ppppiStack_2f4 = (int ****)s_START__0066b830;
  local_274 = s_createPlayersRegular___0066c914;
  local_270 = &DAT_0071d768;
  ppiStack_2f8 = (int **)0x42305c;
  ExceptionList = &local_14;
  FUN_00401870();
  local_2f0 = (int **)s_createPlayersRegular___0066c914;
  ppppiStack_2f4 = (int ****)0x42306b;
  FUN_004018b0();
  ppppiStack_2f4 = &local_2bc;
  local_2f0 = (int **)s_node_store_0000_0066c904;
  local_c = 0;
  ppiStack_2f8 = (int **)0x423083;
  FUN_004365f0();
  if (*(int *)(DAT_0068bc08 + 4) < *(int *)(DAT_0068be88 + 4)) {
    local_2f0 = (int **)0xffffffff;
    ppppiStack_2f4 = (int ****)0x0;
    ppiStack_2f8 = (int **)0x1;
    ppiStack_2fc = (int **)0x4230ad;
    ppiVar3 = (int **)FUN_00415840();
    pppiStack_300 = &local_2c0;
    piStack_304 = (int *)0x4230ba;
    ppiStack_2fc = ppiVar3;
    FUN_00422480();
    ppiStack_308 = local_2b8;
    piStack_304 = (int *)&DAT_0068a900;
    apcStack_310[1] = (undefined1 *)0x4230c9;
    FUN_004369e0();
    local_2f0 = local_268;
    local_244 = 0xffffffff;
    local_240 = 0xffffffff;
    local_268[0] = (int *)0x0;
    ppiVar5 = local_2b8;
    ppcVar10 = apcStack_310;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar10 = (char *)*ppiVar5;
      ppiVar5 = ppiVar5 + 1;
      ppcVar10 = ppcVar10 + 1;
    }
    local_260 = 0;
    local_25c = 0;
    local_258 = s_UNDEFINED_MODULE_0066c638;
    local_254 = s_UNDEFINED_ROOM_0066c628;
    local_250 = 0;
    local_24c = 0;
    pppiStack_314 = (int ***)0x423130;
    FUN_00438e50();
    piVar4 = DAT_0068a904;
    if (((uint)local_268[0] & 8) != 0) {
      local_2a0 = (int **)((uint)local_2a0 | 1);
    }
    ppiVar3[0x9a] = DAT_0068a900;
    ppiVar3[0x9b] = piVar4;
    *(undefined8 *)(ppiVar3 + 0x9c) = _DAT_0068a908;
    local_2f0 = local_2b8;
    *(undefined8 *)(ppiVar3 + 0x9e) = _DAT_0068a910;
    ppppiStack_2f4 = (int ****)0x423184;
    FUN_004742e0();
    ppiVar3[0x16] = (int *)((uint)ppiVar3[0x16] | 1);
    if (DAT_0068c27c != '\0') {
      ppppiStack_2f4 = (int ****)0x42319c;
      local_2f0 = ppiVar3;
      FUN_0046db70();
    }
    local_2c4 = (int **)&local_2f0;
    local_2f0 = local_2c0;
    ppppiStack_2f4 = (int ****)0x4231b1;
    FUN_004200f0();
  }
  if (DAT_0066e62a == '\0') {
    local_2f0 = (int **)0x8;
    ppppiStack_2f4 = (int ****)s_COMPL__0066b7ec;
    ppiStack_2f8 = (int **)0x4231ce;
    FUN_00401870();
    local_2f0 = (int **)s_createPlayersRegular___0066c914;
    ppppiStack_2f4 = (int ****)0x4231dd;
    FUN_004018b0();
    ExceptionList = local_14;
    return;
  }
  local_2c4 = (int **)0x0;
  local_2c0 = (int **)0x0;
  do {
    ppiVar3 = local_2c0;
    ppiVar5 = local_2c4;
    local_2f0 = (int **)((int)local_2c0 + DAT_006897a0);
    ppppiStack_2f4 = (int ****)0x423210;
    FUN_00455dc0();
    local_c._0_1_ = 1;
    if (*(int *)(DAT_0068bc08 + (int)ppiVar5 * 4) < *(int *)(DAT_0068be88 + (int)ppiVar5 * 4)) {
      do {
        if ((ppiVar3 == (int **)0x60) || (ppiVar3 == (int **)0x6c)) break;
        local_2f0 = (int **)0x6c;
        ppppiStack_2f4 = (int ****)0x42324a;
        FUN_004012c0();
        local_2d8 = DAT_0068a8f0;
        if ((char)local_2c8 == '\x02') {
          local_2f0 = &local_2d0;
          ppppiStack_2f4 = (int ****)local_298;
          ppiStack_2f8 = (int **)0x423271;
          iVar8 = FUN_00407ec0();
          cVar1 = *(char *)(iVar8 + 8);
          if (((((local_290 & 0x10000) == 0) && (local_298[0] != (int *)0x0)) &&
              (local_298[0][1] = local_298[0][1] + -1, local_298[0][1] == 0)) &&
             (local_298[0] != (int *)0x0)) {
            local_2f0 = (int **)0x1;
            ppppiStack_2f4 = (int ****)0x4232ad;
            (**(code **)(*local_298[0] + 0xc))();
          }
          if (cVar1 != '\x02') goto LAB_004235ae;
          local_2f0 = &local_2d0;
          ppppiStack_2f4 = (int ****)local_280;
          ppiStack_2f8 = (int **)0x4232c4;
          piVar4 = (int *)FUN_00407ec0();
          puStack_2d4 = (undefined1 *)&ppiStack_2f8;
          ppiStack_2fc = (int **)0x4232d8;
          ppiStack_2f8 = extraout_ECX;
          FUN_004042a0();
          local_c._0_1_ = 3;
          if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
            ppiStack_2f8 = (int **)0x0;
            local_2f0 = (int **)0x0;
          }
          else {
            ppiStack_2fc = (int **)0x4232ea;
            iVar8 = (*(code *)**(undefined4 **)*piVar4)();
            if (iVar8 == 2) {
              ppiStack_2f8 = (int **)*piVar4;
              local_2f0 = (int **)piVar4[2];
              ppiStack_2f8[1] = (int *)((int)ppiStack_2f8[1] + 1);
            }
            else {
              ppiStack_2fc = (int **)&DAT_0066bb08;
              pppiStack_300 = (int ***)0x4232fd;
              pppiStack_300 = (int ***)(**(code **)(*(int *)*piVar4 + 4))();
              piStack_304 = (int *)0x1;
              ppiStack_308 = (int **)0x2;
              apcStack_310[1] = (undefined1 *)0x423307;
              FUN_004a5670();
            }
          }
          local_c._0_1_ = 2;
          pppiStack_300 = (int ***)0x423338;
          ppiStack_2fc = ppiVar5;
          ppiVar5 = (int **)FUN_00414a30();
          local_c._0_1_ = 1;
          if (((((uStack_278 & 0x10000) == 0) && (local_280[0] != (int *)0x0)) &&
              (local_280[0][1] = local_280[0][1] + -1, local_280[0][1] == 0)) &&
             (local_280[0] != (int *)0x0)) {
            local_2f0 = (int **)0x1;
            ppppiStack_2f4 = (int ****)0x423378;
            (**(code **)(*local_280[0] + 0xc))();
          }
          ppppiStack_2f4 = (int ****)auStack_26c;
          ppiStack_2f8 = (int **)0x423386;
          local_2f0 = ppiVar5;
          piVar4 = (int *)FUN_00422480();
          local_2d8 = (int **)*piVar4;
          if (local_2d8[0x17] == (int *)0x2) {
            puStack_2d4 = (undefined1 *)&local_2f0;
            ppppiStack_2f4 = (int ****)0x4233a3;
            local_2f0 = local_2d8;
            FUN_004186a0();
          }
          else {
            ppiVar3 = local_2d8 + 10;
            ppcVar10 = apcStack_310 + 1;
            for (apcStack_310[0] = (char *)0x8; apcStack_310[0] != (char *)0x0;
                apcStack_310[0] = apcStack_310[0] + -1) {
              *ppcVar10 = (char *)*ppiVar3;
              ppiVar3 = ppiVar3 + 1;
              ppcVar10 = ppcVar10 + 1;
            }
            puStack_2d4 = (undefined1 *)apcStack_310;
            pppiStack_314 = &local_2d8;
            FUN_0041d3f0();
            pppiStack_314 = (int ***)0x4233cd;
            FUN_00417720();
          }
          ppiVar3 = local_2d8 + 10;
          puVar6 = auStack_74;
          for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar6 = *ppiVar3;
            ppiVar3 = ppiVar3 + 1;
            puVar6 = puVar6 + 1;
          }
          local_2f0 = (int **)0x4233f1;
          iVar8 = FUN_0040a460();
          if (iVar8 == 0) {
            ppiVar3 = local_2d8 + 10;
            ppiVar9 = apiStack_214;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *ppiVar9 = *ppiVar3;
              ppiVar3 = ppiVar3 + 1;
              ppiVar9 = ppiVar9 + 1;
            }
            local_2f0 = ppiStack_1fc;
            ppppiStack_2f4 = (int ****)puStack_200;
            ppiStack_2f8 = ppiStack_204;
            ppiStack_2fc = ppiStack_208;
            pppiStack_300 = pppiStack_20c;
            piStack_304 = apiStack_214[0];
            ppiStack_308 = (int **)s___d__g__d__d__x__0066bc0c;
            apcStack_310[1] = &DAT_0077d640;
            apcStack_310[0] = (char *)0x423449;
            FUN_0061c369();
            apcStack_310[0] = &DAT_0077d640;
            pppiStack_314 = (int ***)s_PositionId_0066bc00;
            FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1ff0,s_Invalid_id_0066bbf4);
          }
          ppiVar3 = local_2d8 + 10;
          ppiVar9 = ppiVar3;
          puVar11 = auStack_94;
          for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = (uint)*ppiVar9;
            ppiVar9 = ppiVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          if ((-1 < (int)auStack_94[0]) &&
             (auStack_94[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
            ppiVar9 = ppiVar3;
            puVar11 = auStack_d4;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = (uint)*ppiVar9;
              ppiVar9 = ppiVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            ppiVar9 = ppiVar3;
            puVar11 = auStack_194;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = (uint)*ppiVar9;
              ppiVar9 = ppiVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar8 = *(int *)(DAT_0068be98 + auStack_194[0] * 4);
            if (iStack_c0 < *(int *)(iVar8 + 0x7c) - *(int *)(iVar8 + 0x78) >> 2) {
              ppiVar9 = ppiVar3;
              puVar11 = auStack_114;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = (uint)*ppiVar9;
                ppiVar9 = ppiVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              ppiVar9 = ppiVar3;
              puVar11 = auStack_54;
              for (iVar8 = 8; iVar2 = iStack_40, iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = (uint)*ppiVar9;
                ppiVar9 = ppiVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              puVar11 = auStack_154;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = (uint)*ppiVar3;
                ppiVar3 = ppiVar3 + 1;
                puVar11 = puVar11 + 1;
              }
              local_2f0 = (int **)0x42353e;
              iVar8 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + auStack_154[0] * 4) +
                                                      0x78) + iVar2 * 4) + 0x18))();
              if (iStack_104 < iVar8) goto LAB_00423571;
            }
            local_2f0 = (int **)&DAT_0068c120;
            ppppiStack_2f4 = (int ****)&DAT_0068c120;
            ppiStack_2f8 = (int **)s_Invalid_Position_Id_0066bbe0;
            ppiStack_2fc = (int **)0x1ff0;
            pppiStack_300 = (int ***)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
            piStack_304 = (int *)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
            ppiStack_308 = (int **)0x64;
            apcStack_310[1] = (undefined1 *)0x21;
            apcStack_310[0] = (char *)0x42356e;
            FUN_00401010();
          }
LAB_00423571:
          if (ppiVar5[4] == ppiVar5[5]) {
            local_2f0 = (int **)&DAT_0068c120;
            ppppiStack_2f4 = (int ****)&DAT_0068c120;
            ppiStack_2f8 = (int **)s_Cannot_trace_player_0066c8e4;
            ppiStack_2fc = (int **)0x1ff2;
            pppiStack_300 = (int ***)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
            piStack_304 = (int *)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
            ppiStack_308 = (int **)0x64;
            apcStack_310[1] = (undefined1 *)0x0;
            apcStack_310[0] = (char *)0x4235a6;
            FUN_00401010();
          }
        }
        else {
LAB_004235ae:
          local_2f0 = (int **)0xffffffff;
          ppppiStack_2f4 = (int ****)0x0;
          ppiStack_2fc = (int **)0x4235ba;
          ppiStack_2f8 = ppiVar5;
          ppiVar5 = (int **)FUN_00415840();
          pppiStack_300 = &ppiStack_238;
          piStack_304 = (int *)0x4235ca;
          ppiStack_2fc = ppiVar5;
          piVar4 = (int *)FUN_00422480();
          local_2d8 = (int **)*piVar4;
          if ((ppiVar3 == (int **)0xc) || (DAT_0068be60 == DAT_0068be64)) {
            ppppiStack_2f4 = (int ****)local_268;
            local_2f0 = &DAT_0068a900;
            ppiStack_2f8 = (int **)0x4238cf;
            local_2f0 = (int **)FUN_004369e0();
            ppppiStack_2f4 = (int ****)0x4238da;
            FUN_004742e0();
            ppiVar5[0x16] = (int *)((uint)ppiVar5[0x16] | 1);
          }
          else {
            local_2f0 = apiStack_1f4;
            ppppiStack_2f4 = (int ****)0x4235fc;
            FUN_00422e50();
            if (DAT_0068c0e8 == 0) {
              if (ppiVar5[4] == ppiVar5[5]) {
                do {
                  local_2f0 = apiStack_34;
                  ppppiStack_2f4 = (int ****)0x423623;
                  puVar6 = (undefined4 *)FUN_00422e50();
                  ppiVar3 = apiStack_1f4;
                  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *ppiVar3 = (int *)*puVar6;
                    puVar6 = puVar6 + 1;
                    ppiVar3 = ppiVar3 + 1;
                  }
                  local_2f0 = apiStack_1f4;
                  ppppiStack_2f4 = (int ****)0x42364a;
                  FUN_004742e0();
                  local_2f0 = (int **)0x1;
                  puStack_2d4 = (undefined1 *)apcStack_310;
                  pppiStack_314 = local_2bc;
                  FUN_0040a430();
                  puStack_2d4 = (undefined1 *)&pppiStack_314;
                  pppiStack_314 = extraout_ECX_00;
                  FUN_0041d3f0(&local_2d8);
                  FUN_00478300();
                } while (ppiVar5[4] == ppiVar5[5]);
              }
            }
            else {
              local_2f0 = apiStack_1f4;
              ppppiStack_2f4 = (int ****)0x423698;
              FUN_004742e0();
            }
            if (local_2d8[0x17] == (int *)0x2) {
              puStack_2d4 = (undefined1 *)&local_2f0;
              local_2f0 = local_2d8;
              ppppiStack_2f4 = (int ****)0x4236b0;
              FUN_004186a0();
            }
            else {
              ppiVar3 = apiStack_1f4;
              ppcVar10 = apcStack_310 + 1;
              for (apcStack_310[0] = (char *)0x8; apcStack_310[0] != (char *)0x0;
                  apcStack_310[0] = apcStack_310[0] + -1) {
                *ppcVar10 = (char *)*ppiVar3;
                ppiVar3 = ppiVar3 + 1;
                ppcVar10 = ppcVar10 + 1;
              }
              puStack_2d4 = (undefined1 *)apcStack_310;
              pppiStack_314 = &local_2d8;
              FUN_0041d3f0();
              pppiStack_314 = (int ***)0x4236de;
              FUN_00417720();
            }
            ppiVar3 = local_2d8 + 10;
            puVar6 = auStack_234;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar6 = *ppiVar3;
              ppiVar3 = ppiVar3 + 1;
              puVar6 = puVar6 + 1;
            }
            local_2f0 = (int **)0x423702;
            iVar8 = FUN_00423b20();
            if (iVar8 == 0) {
              local_2f0 = (int **)0x423712;
              iVar8 = FUN_00423b50();
              if (iVar8 != 0) goto LAB_00423716;
LAB_00423754:
              ppiVar3 = local_2d8 + 10;
              ppiVar9 = local_2b8;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *ppiVar9 = *ppiVar3;
                ppiVar3 = ppiVar3 + 1;
                ppiVar9 = ppiVar9 + 1;
              }
              local_2f0 = local_2a0;
              ppppiStack_2f4 = (int ****)uStack_2a4;
              ppiStack_2f8 = ppiStack_2a8;
              ppiStack_2fc = ppiStack_2ac;
              pppiStack_300 = pppiStack_2b0;
              piStack_304 = local_2b8[0];
              ppiStack_308 = (int **)s___d__g__d__d__x__0066bc0c;
              apcStack_310[1] = &DAT_0077d640;
              apcStack_310[0] = (char *)0x423793;
              FUN_0061c369();
              apcStack_310[0] = &DAT_0077d640;
              pppiStack_314 = (int ***)s_PositionId_0066bc00;
              FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                           s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x200f,s_Invalid_id_0066bbf4)
              ;
            }
            else {
LAB_00423716:
              if (((dStack_22c < _DAT_0064a678) || (_DAT_0064a670 < dStack_22c)) ||
                 ((iStack_224 < 0 || (iStack_220 < 0)))) goto LAB_00423754;
            }
            ppiVar3 = local_2d8 + 10;
            ppiVar9 = ppiVar3;
            puVar11 = auStack_1d4;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = (uint)*ppiVar9;
              ppiVar9 = ppiVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            if ((-1 < (int)auStack_1d4[0]) &&
               (auStack_1d4[0] < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
              ppiVar9 = ppiVar3;
              puVar11 = auStack_174;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = (uint)*ppiVar9;
                ppiVar9 = ppiVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              ppiVar9 = ppiVar3;
              puVar11 = auStack_1b4;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = (uint)*ppiVar9;
                ppiVar9 = ppiVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              iVar8 = *(int *)(DAT_0068be98 + auStack_1b4[0] * 4);
              if (iStack_160 < *(int *)(iVar8 + 0x7c) - *(int *)(iVar8 + 0x78) >> 2) {
                ppiVar9 = ppiVar3;
                puVar11 = auStack_b4;
                for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar11 = (uint)*ppiVar9;
                  ppiVar9 = ppiVar9 + 1;
                  puVar11 = puVar11 + 1;
                }
                ppiVar9 = ppiVar3;
                puVar11 = auStack_f4;
                for (iVar8 = 8; iVar2 = iStack_e0, iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar11 = (uint)*ppiVar9;
                  ppiVar9 = ppiVar9 + 1;
                  puVar11 = puVar11 + 1;
                }
                puVar11 = auStack_134;
                for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar11 = (uint)*ppiVar3;
                  ppiVar3 = ppiVar3 + 1;
                  puVar11 = puVar11 + 1;
                }
                local_2f0 = (int **)0x423888;
                iVar8 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + auStack_134[0] * 4)
                                                        + 0x78) + iVar2 * 4) + 0x18))();
                if (iStack_a4 < iVar8) goto LAB_004238e2;
              }
              local_2f0 = (int **)&DAT_0068c120;
              ppppiStack_2f4 = (int ****)&DAT_0068c120;
              ppiStack_2f8 = (int **)s_Invalid_Position_Id_0066bbe0;
              ppiStack_2fc = (int **)0x200f;
              pppiStack_300 = (int ***)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
              piStack_304 = (int *)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
              ppiStack_308 = (int **)0x64;
              apcStack_310[1] = (undefined1 *)0x21;
              apcStack_310[0] = (char *)0x4238b8;
              FUN_00401010();
            }
          }
        }
LAB_004238e2:
        if (DAT_0068c27c != '\0') {
          ppppiStack_2f4 = (int ****)0x4238f1;
          local_2f0 = ppiVar5;
          FUN_0046db70();
        }
        if ((ppiVar5[0x15] != (int *)0x1) && (ppiVar5[0x15] != (int *)0x2)) {
          local_2f0 = (int **)0x0;
          ppppiStack_2f4 = (int ****)0x0;
          ppiStack_2f8 = (int **)0x423910;
          FUN_004881a0();
        }
        puStack_2d4 = (undefined1 *)&local_2f0;
        local_2f0 = local_2d8;
        ppppiStack_2f4 = (int ****)0x423926;
        FUN_004200f0();
        if ((char)local_2c8 == '\x02') {
          local_2f0 = &local_2d0;
          ppppiStack_2f4 = (int ****)apiStack_28c;
          ppiStack_2f8 = (int **)0x423944;
          piVar4 = (int *)FUN_00407f50();
          local_c = CONCAT31(local_c._1_3_,4);
          if ((((local_2d0 != (int *)0x0) && (local_2d0[1] = local_2d0[1] + -1, local_2d0[1] == 0))
              && ((local_2d0 != (int *)*piVar4 ||
                  ((local_2c8 != piVar4[2] || (iStack_2cc != piVar4[1])))))) &&
             (local_2d0 != (int *)0x0)) {
            local_2f0 = (int **)0x1;
            ppppiStack_2f4 = (int ****)0x42398e;
            (**(code **)(*local_2d0 + 0xc))();
          }
          if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
            local_2d0 = (int *)0x0;
            local_2c8 = 0;
LAB_004239d6:
            iStack_2cc = 0;
          }
          else {
            local_2f0 = (int **)0x423998;
            iVar8 = (*(code *)**(undefined4 **)*piVar4)();
            if (iVar8 == 2) {
              local_2d0 = (int *)*piVar4;
              local_2c8 = piVar4[2];
              local_2d0[1] = local_2d0[1] + 1;
              goto LAB_004239d6;
            }
            local_2f0 = (int **)&DAT_0066bb08;
            ppppiStack_2f4 = (int ****)0x4239a9;
            ppppiStack_2f4 = (int ****)(**(code **)(*(int *)*piVar4 + 4))();
            ppiStack_2f8 = (int **)0x1;
            ppiStack_2fc = (int **)0x2;
            pppiStack_300 = (int ***)0x4239b3;
            FUN_004a5670();
          }
          local_c._0_1_ = 1;
          if (((((uStack_284 & 0x10000) == 0) && (apiStack_28c[0] != (int *)0x0)) &&
              (apiStack_28c[0][1] = apiStack_28c[0][1] + -1, apiStack_28c[0][1] == 0)) &&
             (apiStack_28c[0] != (int *)0x0)) {
            local_2f0 = (int **)0x1;
            ppppiStack_2f4 = (int ****)0x423a10;
            (**(code **)(*apiStack_28c[0] + 0xc))();
          }
        }
        ppiVar5 = local_2c4;
        ppiVar3 = local_2c0;
      } while (*(int *)(DAT_0068bc08 + (int)local_2c4 * 4) <
               *(int *)(DAT_0068be88 + (int)local_2c4 * 4));
    }
    local_c = (uint)local_c._1_3_ << 8;
    if ((((local_2c8 & 0x10000) == 0) && (local_2d0 != (int *)0x0)) &&
       ((local_2d0[1] = local_2d0[1] + -1, local_2d0[1] == 0 && (local_2d0 != (int *)0x0)))) {
      local_2f0 = (int **)0x1;
      ppppiStack_2f4 = (int ****)0x423a6c;
      (**(code **)(*local_2d0 + 0xc))();
    }
    local_2c0 = ppiVar3 + 3;
    local_2c4 = (int **)((int)ppiVar5 + 1);
    if (0x77 < (int)local_2c0) {
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar7 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar7 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar7 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      pcVar7 = s_createPlayersRegular___0066c914;
      cVar1 = s_createPlayersRegular___0066c914[0];
      if (DAT_0071d774 != 0) {
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *pcVar7;
        }
      }
      ExceptionList = local_14;
      return;
    }
  } while( true );
}

