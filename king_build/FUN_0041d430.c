
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d430(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  double dVar2;
  int *piVar3;
  undefined4 *puVar4;
  int ****ppppiVar5;
  uint uVar6;
  undefined4 *puVar7;
  int ****ppppiVar8;
  int ***pppiVar9;
  int iVar10;
  int ****extraout_ECX;
  int ****extraout_ECX_00;
  int ****extraout_ECX_01;
  double *pdVar11;
  int ****extraout_ECX_02;
  int ****extraout_ECX_03;
  int ****ppppiVar12;
  double **ppdVar13;
  int **ppiVar14;
  undefined4 *puVar15;
  float10 fVar16;
  int ***pppiStack_250;
  int iStack_24c;
  int ****ppppiStack_248;
  int iStack_244;
  int ****ppppiStack_240;
  char *pcStack_23c;
  double ****ppppdStack_238;
  double ****ppppdStack_234;
  double ****ppppdStack_230;
  double ****ppppdStack_22c;
  double ****ppppdStack_228;
  undefined1 uStack_213;
  undefined1 local_212;
  undefined1 uStack_211;
  int local_210;
  int ****local_20c;
  int ****local_208;
  int ****ppppiStack_204;
  int ****local_200;
  undefined1 local_1f9;
  double local_1f8;
  double *local_1ec;
  double *pdStack_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1dc;
  int ****local_1cc;
  double local_1c8;
  int ***local_1bc;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  int ***pppiStack_18c;
  int ***apppiStack_188 [2];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [4];
  double *local_174 [6];
  int ***local_15c [6];
  int ***pppiStack_144;
  int ***local_140 [2];
  int **local_138 [6];
  undefined4 local_120;
  undefined4 local_11c;
  char acStack_118 [4];
  int ***pppiStack_114;
  int *apiStack_110 [8];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int ***pppiStack_e8;
  int ****appppiStack_e4 [3];
  int iStack_d8;
  int aiStack_cc [8];
  int **ppiStack_ac;
  undefined4 uStack_a8;
  double dStack_8c;
  undefined4 uStack_7c;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ***local_54 [8];
  int ***apppiStack_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  iVar10 = DAT_0068a8f0;
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cba5;
  local_14 = ExceptionList;
  if (DAT_0068be60 == DAT_0068be64) {
    return;
  }
  ppppdStack_228 = (double ****)&local_1bc;
  local_174[0] = (double *)0x0;
  local_174[1] = (double *)0x0;
  local_174[2] = (double *)0x0;
  local_174[3] = (double *)0x0;
  local_174[4] = (double *)0x0;
  local_174[5] = (double *)0x0;
  ppppdStack_22c = (double ****)0x41d4b9;
  ExceptionList = &local_14;
  piVar3 = (int *)FUN_00477c00();
  if (*piVar3 != iVar10) {
    local_1bc = (int ***)&ppppdStack_228;
    ppppdStack_22c = (double ****)&ppppdStack_228;
    ppppdStack_230 = (double ****)0x41d4d4;
    FUN_00477c00();
    ppppdStack_22c = (double ****)(local_174 + 6);
    ppppdStack_230 = (double ****)0x41d4e4;
    puVar4 = (undefined4 *)FUN_0040b030();
    local_174[0] = (double *)*puVar4;
    local_174[1] = (double *)puVar4[1];
    local_174[2] = (double *)puVar4[2];
    local_174[3] = (double *)puVar4[3];
    local_174[4] = (double *)puVar4[4];
    local_174[5] = (double *)puVar4[5];
  }
  local_210 = 0;
  while (DAT_006898c8 < DAT_006898ec) {
    local_140[0] = (int ***)s_pos_hidden_0066c720;
    ppppdStack_228 = (double ****)&DAT_0068a928;
    ppdVar13 = local_174;
    pppiVar9 = (int ***)(local_140 + 2);
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pppiVar9 = (int **)*ppdVar13;
      ppdVar13 = ppdVar13 + 1;
      pppiVar9 = pppiVar9 + 1;
    }
    local_120 = param_1;
    local_11c = param_2;
    pppiVar9 = (int ***)local_140;
    ppppiVar5 = &pppiStack_250;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar5 = (int ***)*pppiVar9;
      pppiVar9 = pppiVar9 + 1;
      ppppiVar5 = ppppiVar5 + 1;
    }
    iVar10 = FUN_0045db40(DAT_0068be60,DAT_0068be64);
    if ((iVar10 == DAT_0068be64) ||
       (local_208 = (int ****)(iVar10 - DAT_0068be60 >> 2), local_208 == (int ****)0xffffffff))
    break;
    ppppdStack_228 = (double ****)0x70;
    ppppdStack_22c = (double ****)0x41d5cc;
    ppppiVar5 = (int ****)FUN_00631d33();
    if (ppppiVar5 == (int ****)0x0) {
      ppppiVar5 = (int ****)0x0;
    }
    else {
      *ppppiVar5 = (int ***)0xffffffff;
      ppppiVar5[1] = (int ***)0x12345678;
      ppppiVar5[2] = (int ***)0x0;
      ppppiVar5[3] = (int ***)0xffffffff;
      ppppiVar5[4] = (int ***)0xffffffff;
      ppppiVar5[5] = (int ***)0x0;
      ppppiVar5[6] = (int ***)0xffffffff;
      ppppdStack_228 = (double ****)0x41d5fa;
      FUN_004132a0();
      ppppiVar5[0x18] = (int ***)0xffffffff;
      ppppiVar5[0x16] = (int ***)0x0;
      ppppiVar5[0x19] = (int ***)0x7fefffff;
      *(undefined1 *)(ppppiVar5 + 0x1a) = 0;
      ppppiVar5[0x1b] = (int ***)0xffffffff;
    }
    ppppiVar5[6] = (int ***)local_208;
    ppppiVar5[2] = (int ***)((uint)ppppiVar5[2] | 0x10);
    iVar10 = *(int *)(DAT_0068be60 + (int)local_208 * 4);
    ppppdStack_228 = (double ****)(ppppiVar5 + 8);
    pppiVar9 = *(int ****)(iVar10 + 0x34);
    *ppppdStack_228 = (double ***)*(int ****)(iVar10 + 0x30);
    ppppiVar5[9] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x3c);
    ppppiVar5[10] = *(int ****)(iVar10 + 0x38);
    ppppiVar5[0xb] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x44);
    ppppiVar5[0xc] = *(int ****)(iVar10 + 0x40);
    ppppdStack_22c = (double ****)local_54;
    ppppiVar5[0xd] = pppiVar9;
    ppppdStack_230 = (double ****)0x41d660;
    puVar4 = (undefined4 *)FUN_004369e0();
    ppppiVar12 = ppppiVar5 + 0xe;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar12 = (int ***)*puVar4;
      puVar4 = puVar4 + 1;
      ppppiVar12 = ppppiVar12 + 1;
    }
    iVar10 = *(int *)(DAT_0068be60 + (int)local_208 * 4);
    *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) | 0x10;
    ppppiVar12 = DAT_0068c01c;
    ppppiVar8 = DAT_0068c018;
    DAT_006898c8 = DAT_006898c8 + 1;
    ppppdStack_228 = (double ****)&local_212;
    local_20c = (int ****)CONCAT31(local_20c._1_3_,local_212);
    ppppdStack_22c = (double ****)0x41d6b3;
    FUN_00478a20();
    ppppdStack_228 = (double ****)&local_1f9;
    local_c = 0;
    ppppdStack_22c = (double ****)0x41d6cc;
    FUN_00478a20();
    local_c = CONCAT31(local_c._1_3_,1);
    local_1b8 = 0.0;
    for (local_200 = ppppiVar8; local_200 != ppppiVar12; local_200 = local_200 + 1) {
      ppppdStack_228 = (double ****)*local_200;
      ppppdStack_22c = (double ****)0x41d6fa;
      fVar16 = (float10)FUN_0041ede0();
      local_1f8 = (double)fVar16;
      if ((float10)_DAT_0064a668 < fVar16) {
        local_1b8 = local_1f8 + local_1b8;
        ppppdStack_228 = (double ****)&local_200;
        ppppdStack_22c = (double ****)0x41d725;
        FUN_0045a070();
        ppppdStack_228 = (double ****)&local_1f8;
        ppppdStack_22c = (double ****)0x41d733;
        FUN_00447500();
      }
    }
    if (local_1e0 != local_1dc) {
      if (((int)local_1dc - (int)local_1e0 & 0xfffffffcU) == 4) {
        ppppiVar12 = (int ****)*local_1e0;
      }
      else {
        ppppdStack_228 = (double ****)0xf4240;
        ppppdStack_22c = (double ****)0x41d76a;
        uVar6 = FUN_004155e0();
        local_1c8 = (double)(ulonglong)uVar6;
        local_1b0 = (double)(longlong)local_1c8 * local_1b8 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        pdVar11 = local_1ec;
        for (puVar4 = local_1e0; puVar4 != local_1dc; puVar4 = puVar4 + 1) {
          if ((dVar2 <= local_1b0) && (local_1b0 <= dVar2 + *pdVar11)) {
            ppppiVar12 = (int ****)*puVar4;
            break;
          }
          dVar2 = dVar2 + *pdVar11;
          pdVar11 = pdVar11 + 1;
        }
      }
    }
    local_c = local_c & 0xffffff00;
    ppppdStack_228 = (double ****)0x41d7d9;
    FUN_004473b0();
    local_c = 0xffffffff;
    ppppdStack_228 = (double ****)0x41d7ed;
    FUN_00449a70();
    if (ppppiVar12 == DAT_0068c01c) {
      ppppdStack_228 = (double ****)&DAT_0068c120;
      ppppdStack_22c = (double ****)&DAT_0068c120;
      ppppdStack_230 = (double ****)s_Internal_error_9874_0066c70c;
      ppppdStack_234 = (double ****)0x19ad;
      ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      ppppiStack_240 = (int ****)0x64;
      iStack_244 = 0;
      ppppiStack_248 = (int ****)0x41d81c;
      FUN_00401010();
    }
    else {
      ppppiVar5[0x1b] = (int ***)((int)ppppiVar12 - (int)DAT_0068c018 >> 2);
      (*ppppiVar12)[10] = (int **)((int)(*ppppiVar12)[10] + 1);
    }
    ppppdStack_22c = (double ****)&local_1cc;
    ppppdStack_230 = (double ****)0x41d847;
    ppppdStack_228 = (double ****)ppppiVar5;
    FUN_0041be00();
    ppppdStack_230 = (double ****)&local_1cc;
    ppppdStack_228 = (double ****)0x1;
    local_1bc = (int ***)&ppppdStack_22c;
    ppppdStack_234 = (double ****)0x41d85d;
    ppppdStack_22c = (double ****)extraout_ECX;
    FUN_0041d3f0();
    ppppdStack_230 = (double ****)0x41d863;
    (*DAT_0068c07c)();
    if ((double)CONCAT44(param_2,param_1) == _DAT_0064a668) {
      ppppdStack_228 = (double ****)0x70;
      ppppdStack_22c = (double ****)0x41d87d;
      FUN_004012c0();
    }
    local_210 = local_210 + 1;
    if (999 < local_210) break;
  }
  local_210 = 0;
  do {
    if (DAT_0068beb4 <= DAT_0068bf7c) break;
    ppppdStack_228 = (double ****)&DAT_0068a928;
    local_140[0] = (int ***)s_pos_base_0066c700;
    ppdVar13 = local_174;
    pppiVar9 = (int ***)(local_140 + 2);
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pppiVar9 = (int **)*ppdVar13;
      ppdVar13 = ppdVar13 + 1;
      pppiVar9 = pppiVar9 + 1;
    }
    local_120 = param_1;
    local_11c = param_2;
    pppiVar9 = (int ***)local_140;
    ppppiVar5 = &pppiStack_250;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar5 = (int ***)*pppiVar9;
      pppiVar9 = pppiVar9 + 1;
      ppppiVar5 = ppppiVar5 + 1;
    }
    iVar10 = FUN_0045db40(DAT_0068be60,DAT_0068be64);
    ppppiVar5 = DAT_0068bf3c;
    ppppiVar12 = DAT_0068bf38;
    if ((iVar10 == DAT_0068be64) ||
       (ppppiStack_204 = (int ****)(iVar10 - DAT_0068be60 >> 2),
       ppppiStack_204 == (int ****)0xffffffff)) break;
    ppppdStack_228 = (double ****)&local_1f9;
    ppppdStack_22c = (double ****)0x41d955;
    local_20c = ppppiStack_204;
    FUN_00478a20();
    ppppdStack_228 = (double ****)&local_212;
    local_c = 2;
    ppppdStack_22c = (double ****)0x41d96e;
    FUN_00478a20();
    local_c = CONCAT31(local_c._1_3_,3);
    local_1b8 = 0.0;
    puVar4 = local_1e0;
    for (local_200 = ppppiVar12; local_1e0 = puVar4, local_200 != ppppiVar5;
        local_200 = local_200 + 1) {
      ppppdStack_228 = (double ****)*local_200;
      ppppdStack_22c = (double ****)0x41d99c;
      fVar16 = (float10)FUN_0041ec70();
      local_1f8 = (double)fVar16;
      if ((float10)_DAT_0064a668 < fVar16) {
        local_1b8 = local_1f8 + local_1b8;
        ppppdStack_228 = (double ****)&local_200;
        ppppdStack_22c = (double ****)0x41d9c7;
        FUN_00459c50();
        ppppdStack_228 = (double ****)&local_1f8;
        ppppdStack_22c = (double ****)0x41d9d5;
        FUN_00447500();
      }
      puVar4 = local_1e0;
    }
    if (puVar4 == local_1dc) {
LAB_0041da6e:
      local_c = CONCAT31(local_c._1_3_,2);
      ppppdStack_228 = (double ****)0x41da7f;
      FUN_004473b0();
      local_c = 0xffffffff;
      ppppdStack_228 = (double ****)0x41da8f;
      FUN_00449a70();
    }
    else {
      if (((int)local_1dc - (int)puVar4 & 0xfffffffcU) != 4) {
        ppppdStack_228 = (double ****)0xf4240;
        ppppdStack_22c = (double ****)0x41da0c;
        uVar6 = FUN_004155e0();
        local_1c8 = (double)(ulonglong)uVar6;
        local_1b0 = (double)(longlong)local_1c8 * local_1b8 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        pdVar11 = local_1ec;
        for (puVar4 = local_1e0; puVar4 != local_1dc; puVar4 = puVar4 + 1) {
          if ((dVar2 <= local_1b0) && (local_1b0 <= dVar2 + *pdVar11)) goto LAB_0041db07;
          dVar2 = dVar2 + *pdVar11;
          pdVar11 = pdVar11 + 1;
        }
        goto LAB_0041da6e;
      }
LAB_0041db07:
      ppppiVar5 = (int ****)*puVar4;
      local_c = CONCAT31(local_c._1_3_,2);
      ppppdStack_228 = (double ****)0x41db1a;
      FUN_004473b0();
      local_c = 0xffffffff;
      ppppdStack_228 = (double ****)0x41db2a;
      FUN_00449a70();
    }
    if (ppppiVar5 == DAT_0068bf3c) {
      ppppdStack_228 = (double ****)&DAT_0068c120;
      ppppdStack_22c = (double ****)&DAT_0068c120;
      ppppdStack_230 = (double ****)s_Internal_error_1945_0066c6ec;
      ppppdStack_234 = (double ****)0x19c4;
      ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      ppppiStack_240 = (int ****)0x1;
      iStack_244 = 0;
      ppppiStack_248 = (int ****)0x41dccb;
      FUN_00401010();
      break;
    }
    ppppdStack_228 = (double ****)0x70;
    *(double *)(*ppppiVar5 + 0x1c) = *(double *)(*ppppiVar5 + 0x1c) * _DAT_0064a6f0;
    local_20c = (int ****)((int)ppppiVar5 - (int)DAT_0068bf38 >> 2);
    ppppdStack_22c = (double ****)0x41dabf;
    puVar4 = (undefined4 *)FUN_00631d33();
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0xffffffff;
      puVar4[1] = 0x12345678;
      puVar4[2] = 0;
      puVar4[3] = 0xffffffff;
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0;
      puVar4[6] = 0xffffffff;
      ppppdStack_228 = (double ****)0x41daed;
      FUN_004132a0();
      puVar4[0x18] = 0xffffffff;
      puVar4[0x16] = 0;
      puVar4[0x19] = 0x7fefffff;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      puVar4[0x1b] = 0xffffffff;
    }
    ppppdStack_228 = (double ****)0x30;
    puVar4[6] = ppppiStack_204;
    ppppdStack_22c = (double ****)0x41db43;
    puVar7 = (undefined4 *)FUN_00631d33();
    dStack_1a8 = (double)CONCAT44(dStack_1a8._4_4_,puVar7);
    local_c = 4;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      ppppdStack_228 = (double ****)&uStack_211;
      ppppdStack_22c = (double ****)apppiStack_188;
      puVar7[2] = 0;
      ppppdStack_230 = (double ****)0x13;
      *puVar7 = 0xffffffff;
      puVar7[1] = local_20c;
      puVar7[3] = 0x3ff00000;
      apppiStack_188[0] = (int ***)0x0;
      uStack_180 = 0;
      uStack_17c = 0x3ff00000;
      ppppdStack_234 = (double ****)0x41dba6;
      FUN_00448480();
      ppppdStack_228 = (double ****)&uStack_213;
      local_c = CONCAT31(local_c._1_3_,5);
      ppppdStack_22c = (double ****)0x41dbbb;
      FUN_00478a20();
      puVar7[10] = 0;
    }
    puVar4[5] = puVar7;
    ppppdStack_228 = (double ****)(puVar4 + 8);
    puVar4[2] = puVar4[2] | 0x20;
    local_c = 0xffffffff;
    iVar10 = *(int *)(DAT_0068be60 + (int)ppppiStack_204 * 4);
    uVar1 = *(undefined4 *)(iVar10 + 0x34);
    *ppppdStack_228 = (double ***)*(int ****)(iVar10 + 0x30);
    puVar4[9] = uVar1;
    uVar1 = *(undefined4 *)(iVar10 + 0x3c);
    puVar4[10] = *(undefined4 *)(iVar10 + 0x38);
    puVar4[0xb] = uVar1;
    uVar1 = *(undefined4 *)(iVar10 + 0x44);
    puVar4[0xc] = *(undefined4 *)(iVar10 + 0x40);
    ppppdStack_22c = (double ****)local_54;
    puVar4[0xd] = uVar1;
    ppppdStack_230 = (double ****)0x41dc1a;
    puVar7 = (undefined4 *)FUN_004369e0();
    puVar15 = puVar4 + 0xe;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar15 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar15 + 1;
    }
    iVar10 = *(int *)(DAT_0068be60 + (int)ppppiStack_204 * 4);
    *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) | 0x10;
    DAT_0068bf7c = DAT_0068bf7c + 1;
    ppppdStack_234 = (double ****)&local_208;
    ppppdStack_238 = (double ****)0x41dc53;
    ppppdStack_230 = (double ****)puVar4;
    FUN_0041be00();
    ppppdStack_230 = (double ****)&local_208;
    ppppdStack_228 = (double ****)0x1;
    ppppdStack_234 = (double ****)0x41dc69;
    ppppdStack_22c = (double ****)extraout_ECX_00;
    local_1bc = (int ***)&ppppdStack_22c;
    FUN_0041d3f0();
    ppppdStack_230 = (double ****)0x41dc6f;
    (*DAT_0068c07c)();
    if ((double)CONCAT44(param_2,param_1) == _DAT_0064a668) {
      ppppdStack_228 = (double ****)0x70;
      ppppdStack_22c = (double ****)0x41dc89;
      FUN_004012c0();
    }
    local_210 = local_210 + 1;
  } while (local_210 < 1000);
  local_210 = 0;
LAB_0041dcd6:
  if (DAT_0068c000 <= DAT_0068c044) goto LAB_0041e42c;
  ppppdStack_228 = (double ****)&DAT_0068a928;
  local_140[0] = (int ***)s_pos_road_0066c6e0;
  ppdVar13 = local_174;
  pppiVar9 = (int ***)(local_140 + 2);
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pppiVar9 = (int **)*ppdVar13;
    ppdVar13 = ppdVar13 + 1;
    pppiVar9 = pppiVar9 + 1;
  }
  local_120 = param_1;
  local_11c = param_2;
  pppiVar9 = (int ***)local_140;
  ppppiVar5 = &pppiStack_250;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppppiVar5 = (int ***)*pppiVar9;
    pppiVar9 = pppiVar9 + 1;
    ppppiVar5 = ppppiVar5 + 1;
  }
  iVar10 = FUN_0045db40(DAT_0068be60,DAT_0068be64);
  ppppiVar5 = DAT_0068bf3c;
  ppppiVar12 = DAT_0068bf38;
  if ((iVar10 == DAT_0068be64) ||
     (ppppiVar8 = (int ****)(iVar10 - DAT_0068be60 >> 2), local_20c = ppppiVar8,
     ppppiVar8 == (int ****)0xffffffff)) goto LAB_0041e42c;
  ppppdStack_228 = (double ****)&uStack_213;
  pppiStack_18c = (int ***)0xffffffff;
  ppppdStack_22c = (double ****)0x41dd96;
  FUN_00478a20();
  ppppdStack_228 = (double ****)&uStack_211;
  local_c = 6;
  ppppdStack_22c = (double ****)0x41ddb2;
  FUN_00478a20();
  local_c = CONCAT31(local_c._1_3_,7);
  local_1f8 = 0.0;
  for (local_1cc = ppppiVar12; local_1cc != ppppiVar5; local_1cc = local_1cc + 1) {
    ppppdStack_228 = (double ****)*local_1cc;
    ppppdStack_22c = (double ****)0x41dde3;
    fVar16 = (float10)FUN_0041ec70();
    local_1c8 = (double)fVar16;
    if ((float10)_DAT_0064a668 < fVar16) {
      local_1f8 = local_1c8 + local_1f8;
      ppppdStack_228 = (double ****)&local_1cc;
      ppppdStack_22c = (double ****)0x41de0e;
      FUN_00459c50();
      ppppdStack_228 = (double ****)&local_1c8;
      ppppdStack_22c = (double ****)0x41de1f;
      FUN_00447500();
    }
  }
  if (local_1ec != pdStack_1e8) {
    if (((int)pdStack_1e8 - (int)local_1ec & 0xfffffffcU) == 4) {
      ppppiVar5 = *(int *****)local_1ec;
    }
    else {
      ppppdStack_228 = (double ****)0xf4240;
      ppppdStack_22c = (double ****)0x41de5a;
      puStack_198 = (undefined4 *)FUN_004155e0();
      puStack_194 = (undefined4 *)0x0;
      dStack_1a8 = (double)puStack_198 * local_1f8 * _DAT_0064a6c8;
      dVar2 = _DAT_0064a668;
      pppiVar9 = local_15c[0];
      for (pdVar11 = local_1ec; pdVar11 != pdStack_1e8; pdVar11 = (double *)((int)pdVar11 + 4)) {
        if ((dVar2 <= dStack_1a8) && (dStack_1a8 <= dVar2 + *(double *)pppiVar9)) {
          ppppiVar5 = *(int *****)pdVar11;
          break;
        }
        dVar2 = dVar2 + *(double *)pppiVar9;
        pppiVar9 = (int ***)((int)pppiVar9 + 8);
      }
    }
  }
  local_c = CONCAT31(local_c._1_3_,6);
  ppppdStack_228 = (double ****)0x41dedc;
  FUN_004473b0();
  local_c = 0xffffffff;
  ppppdStack_228 = (double ****)0x41def0;
  FUN_00449a70();
  ppppiStack_204 = ppppiVar5;
  if (ppppiVar5 == DAT_0068bf3c) {
    ppppdStack_228 = (double ****)&DAT_0068c120;
    ppppdStack_22c = (double ****)&DAT_0068c120;
    ppppdStack_230 = (double ****)s_Internal_error_1945_0066c6ec;
    ppppdStack_234 = (double ****)0x19e3;
    ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    ppppiStack_240 = (int ****)0x1;
    iStack_244 = 0;
    ppppiStack_248 = (int ****)0x41e3d8;
    FUN_00401010();
    goto LAB_0041e42c;
  }
  ppppdStack_228 = (double ****)0x70;
  *(double *)(*ppppiVar5 + 0x1c) = *(double *)(*ppppiVar5 + 0x1c) * _DAT_0064a6f0;
  iVar10 = (int)ppppiVar5 - (int)DAT_0068bf38;
  ppppdStack_22c = (double ****)0x41df1f;
  ppppiVar5 = (int ****)FUN_00631d33();
  if (ppppiVar5 == (int ****)0x0) {
    ppppiVar5 = (int ****)0x0;
  }
  else {
    *ppppiVar5 = (int ***)0xffffffff;
    ppppiVar5[1] = (int ***)0x12345678;
    ppppiVar5[2] = (int ***)0x0;
    ppppiVar5[3] = (int ***)0xffffffff;
    ppppiVar5[4] = (int ***)0xffffffff;
    ppppiVar5[5] = (int ***)0x0;
    ppppiVar5[6] = (int ***)0xffffffff;
    ppppdStack_228 = (double ****)0x41df4d;
    FUN_004132a0();
    ppppiVar5[0x16] = (int ***)0x0;
    ppppiVar5[0x18] = (int ***)0xffffffff;
    ppppiVar5[0x19] = (int ***)0x7fefffff;
    *(undefined1 *)(ppppiVar5 + 0x1a) = 0;
    ppppiVar5[0x1b] = (int ***)0xffffffff;
  }
  ppppdStack_228 = (double ****)0x30;
  ppppiVar5[6] = (int ***)ppppiVar8;
  ppppdStack_22c = (double ****)0x41df83;
  local_208 = ppppiVar5;
  pppiVar9 = (int ***)FUN_00631d33();
  dStack_1a8 = (double)CONCAT44(dStack_1a8._4_4_,pppiVar9);
  local_c = 8;
  if (pppiVar9 == (int ***)0x0) {
    pppiVar9 = (int ***)0x0;
  }
  else {
    ppppdStack_228 = (double ****)&local_1f9;
    pppiVar9[1] = (int **)(iVar10 >> 2);
    ppppdStack_22c = (double ****)apppiStack_188;
    pppiVar9[2] = (int **)0x0;
    ppppdStack_230 = (double ****)0x13;
    *pppiVar9 = (int **)0xffffffff;
    pppiVar9[3] = (int **)0x3ff00000;
    apppiStack_188[0] = (int ***)0x0;
    uStack_180 = 0;
    uStack_17c = 0x3ff00000;
    ppppdStack_234 = (double ****)0x41dfe0;
    FUN_00448480();
    ppppdStack_228 = (double ****)&local_212;
    local_c = CONCAT31(local_c._1_3_,9);
    ppppdStack_22c = (double ****)0x41dff5;
    FUN_00478a20();
    pppiVar9[10] = (int **)0x0;
  }
  local_c = 0xffffffff;
  local_208[5] = pppiVar9;
  ppppiVar5 = local_208 + 8;
  local_208[2] = (int ***)((uint)local_208[2] | 0x60);
  ppppiVar12 = local_208 + 0xe;
  ppppdStack_22c = (double ****)local_54;
  iVar10 = *(int *)(DAT_0068be60 + (int)local_20c * 4);
  pppiVar9 = *(int ****)(iVar10 + 0x34);
  *ppppiVar5 = *(int ****)(iVar10 + 0x30);
  local_208[9] = pppiVar9;
  pppiVar9 = *(int ****)(iVar10 + 0x3c);
  local_208[10] = *(int ****)(iVar10 + 0x38);
  local_208[0xb] = pppiVar9;
  pppiVar9 = *(int ****)(iVar10 + 0x44);
  local_208[0xc] = *(int ****)(iVar10 + 0x40);
  local_208[0xd] = pppiVar9;
  ppppdStack_230 = (double ****)0x41e05a;
  ppppdStack_228 = (double ****)ppppiVar5;
  piVar3 = (int *)FUN_004369e0();
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppppiVar12 = (int ***)*piVar3;
    piVar3 = piVar3 + 1;
    ppppiVar12 = ppppiVar12 + 1;
  }
  iVar10 = *(int *)(DAT_0068be60 + (int)local_20c * 4);
  *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) | 0x10;
  DAT_0068c044 = DAT_0068c044 + 1;
  ppppdStack_228 = (double ****)0x41e093;
  FUN_00470dd0();
  ppppdStack_22c = (double ****)&local_200;
  local_c = 10;
  ppppdStack_230 = (double ****)0x41e0a9;
  ppppdStack_228 = (double ****)ppppiVar5;
  FUN_00404e60();
  if (((uint)(*ppppiStack_204)[1] & 1) == 0) {
    ppppdStack_228 = (double ****)0x4;
    ppppdStack_22c = (double ****)0x0;
    ppppdStack_230 = *(double *****)(DAT_0068be20 + (int)local_200 * 4);
    ppppdStack_234 = (double ****)&pppiStack_114;
    ppppdStack_238 = (double ****)0x41e0e5;
    puVar4 = (undefined4 *)FUN_0041b370();
    ppppdStack_22c = (double ****)*puVar4;
    if (ppppdStack_22c == (double ****)0xffffffff) {
      ppppdStack_22c = (double ****)&pppiStack_e8;
      ppppdStack_228 = (double ****)local_200;
      ppppdStack_230 = (double ****)0x41e101;
      puVar4 = (undefined4 *)FUN_00405090();
      local_200 = (int ****)*puVar4;
      ppppdStack_230 = (double ****)0x4;
      ppppdStack_238 = *(double *****)(DAT_0068be20 + (int)local_200 * 4);
      ppppdStack_234 = (double ****)0x0;
      pcStack_23c = acStack_118;
      ppppiStack_240 = (int ****)0x41e122;
      puVar4 = (undefined4 *)FUN_0041b370();
      ppppdStack_22c = (double ****)*puVar4;
      if (ppppdStack_22c == (double ****)0xffffffff) {
        ppppdStack_230 = (double ****)&pppiStack_144;
        ppppdStack_22c = (double ****)0x0;
        goto LAB_0041e138;
      }
    }
  }
  else {
    ppppdStack_230 = (double ****)auStack_178;
    ppppdStack_22c = (double ****)0x4;
LAB_0041e138:
    ppppdStack_228 = (double ****)0x4;
    ppppdStack_234 = (double ****)0x41e13d;
    puVar4 = (undefined4 *)FUN_0041b1f0();
    ppppdStack_22c = (double ****)*puVar4;
  }
  ppppdStack_228 = (double ****)&DAT_0068a928;
  ppppdStack_230 = *(double *****)(DAT_0068be20 + (int)local_200 * 4);
  ppppdStack_234 = (double ****)&local_1b0;
  ppppdStack_238 = (double ****)0x41e167;
  appppiStack_e4[0] = (int ****)ppppdStack_22c;
  piVar3 = (int *)FUN_00404c70();
  ppppiVar5 = local_208;
  iStack_d8 = *piVar3;
  if (iStack_d8 != -1) {
    ppppiVar12 = local_208 + 0xe;
    piVar3 = aiStack_cc;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar3 = (int)*ppppiVar12;
      ppppiVar12 = ppppiVar12 + 1;
      piVar3 = piVar3 + 1;
    }
    ppppiVar12 = local_208 + 0xe;
    piVar3 = &iStack_244;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar3 = (int)*ppppiVar12;
      ppppiVar12 = ppppiVar12 + 1;
      piVar3 = piVar3 + 1;
    }
    ppppiStack_248 = (int ****)appppiStack_e4;
    iStack_24c = 0x41e1ae;
    FUN_004717d0();
    dStack_8c = dStack_8c * _DAT_0066e898;
    uStack_7c = 2;
    local_1e0 = (undefined4 *)0x0;
    local_1dc = (undefined4 *)0x0;
    iStack_24c = DAT_0068bc18 + (int)appppiStack_e4[0] * 0x68;
    pppiStack_250 = (int ***)&local_1b8;
    dStack_1a0 = 0.0;
    local_1b8 = 0.0;
    FUN_0041bab0(ppppiVar5[5][1],&local_1e0,&dStack_1a0);
    uStack_a8 = local_1b8._4_4_;
    ppiStack_ac = (int **)local_1b8;
    if (local_1b8 < _DAT_0064a668) {
      ppppdStack_228 = (double ****)&DAT_0068c120;
      ppppdStack_22c = (double ****)&DAT_0068c120;
      ppppdStack_230 = (double ****)&DAT_0066c624;
      ppppdStack_234 = (double ****)0x1a20;
      ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      ppppiStack_240 = (int ****)0x200;
      iStack_244 = 0;
      ppppiStack_248 = (int ****)0x41e29e;
      FUN_00401010();
    }
    ppppdStack_228 = (double ****)0x1;
    ppppdStack_234 = (double ****)appppiStack_e4;
    ppppdStack_22c = (double ****)0x1;
    dStack_1a8 = (double)CONCAT44(dStack_1a8._4_4_,&ppppdStack_234);
    ppppdStack_238 = (double ****)0x41e2bc;
    ppppdStack_230 = ppppdStack_234;
    FUN_0041ec60();
    ppppdStack_238 = (double ****)0x41e2c1;
    FUN_00471250();
    pppiVar9 = ppppiVar5[5];
    ppppdStack_22c = (double ****)pppiVar9[8];
    if (ppppdStack_22c == (double ****)pppiVar9[9]) {
      ppppdStack_228 = (double ****)appppiStack_e4;
      ppppdStack_230 = (double ****)0x41e302;
      FUN_00450900();
    }
    else {
      ppppdStack_228 = (double ****)appppiStack_e4;
      ppppdStack_230 = (double ****)0x41e2e2;
      FUN_00460d50();
      pppiVar9[8] = pppiVar9[8] + 0x24;
    }
    ppppdStack_22c = (double ****)&local_1bc;
    ppppdStack_228 = (double ****)ppppiVar5;
    ppppdStack_230 = (double ****)0x41e30d;
    FUN_0041be00();
    ppppdStack_230 = (double ****)&local_1bc;
    ppppdStack_228 = (double ****)0x1;
    dStack_1a8 = (double)CONCAT44(dStack_1a8._4_4_,&ppppdStack_22c);
    ppppdStack_234 = (double ****)0x41e326;
    ppppdStack_22c = (double ****)extraout_ECX_01;
    FUN_0041d3f0();
    ppppdStack_230 = (double ****)0x41e32c;
    (*DAT_0068c07c)();
    if ((double)CONCAT44(param_2,param_1) == _DAT_0064a668) {
      ppppdStack_228 = (double ****)0x70;
      ppppdStack_22c = (double ****)0x41e346;
      FUN_004012c0();
    }
    ppppiVar12 = ppppiStack_68;
    dStack_1a8 = (double)CONCAT44(dStack_1a8._4_4_,&ppppiStack_6c);
    local_c = 0xc;
    for (ppppiVar5 = ppppiStack_6c; ppppiVar5 != ppppiVar12; ppppiVar5 = ppppiVar5 + 4) {
      ppppdStack_22c = (double ****)0x41e377;
      ppppdStack_228 = (double ****)ppppiVar5;
      FUN_00460d40();
    }
    local_c = 0xffffffff;
    ppppdStack_228 = (double ****)0x41e398;
    FUN_0044abe0();
    local_210 = local_210 + 1;
    if (999 < local_210) goto LAB_0041e42c;
    goto LAB_0041dcd6;
  }
  local_1b0 = (double)CONCAT44(local_1b0._4_4_,&ppppiStack_6c);
  local_c = 0xb;
  for (ppppiVar5 = ppppiStack_6c; ppppiVar5 != ppppiStack_68; ppppiVar5 = ppppiVar5 + 4) {
    ppppdStack_22c = (double ****)0x41e40b;
    ppppdStack_228 = (double ****)ppppiVar5;
    FUN_00460d40();
  }
  local_c = 0xffffffff;
  ppppdStack_228 = (double ****)0x41e42c;
  FUN_0044abe0();
LAB_0041e42c:
  local_210 = 0;
  while (DAT_0068bf44 < DAT_006898c4) {
    apiStack_110[0] = (int *)s_pos_hidden_0066c720;
    ppdVar13 = local_174;
    ppiVar14 = apiStack_110 + 2;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppiVar14 = (int *)*ppdVar13;
      ppdVar13 = ppdVar13 + 1;
      ppiVar14 = ppiVar14 + 1;
    }
    ppppdStack_228 = (double ****)&DAT_0068a928;
    uStack_f0 = param_1;
    uStack_ec = param_2;
    ppiVar14 = apiStack_110;
    ppppiVar5 = &pppiStack_250;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar5 = (int ***)*ppiVar14;
      ppiVar14 = ppiVar14 + 1;
      ppppiVar5 = ppppiVar5 + 1;
    }
    iVar10 = FUN_0045db40(DAT_0068be60,DAT_0068be64);
    if ((iVar10 == DAT_0068be64) ||
       (local_1cc = (int ****)(iVar10 - DAT_0068be60 >> 2), local_1cc == (int ****)0xffffffff))
    break;
    ppppdStack_228 = (double ****)0x70;
    ppppdStack_22c = (double ****)0x41e4d3;
    ppppiVar5 = (int ****)FUN_00631d33();
    if (ppppiVar5 == (int ****)0x0) {
      ppppiVar5 = (int ****)0x0;
    }
    else {
      *ppppiVar5 = (int ***)0xffffffff;
      ppppiVar5[1] = (int ***)0x12345678;
      ppppiVar5[2] = (int ***)0x0;
      ppppiVar5[3] = (int ***)0xffffffff;
      ppppiVar5[4] = (int ***)0xffffffff;
      ppppiVar5[5] = (int ***)0x0;
      ppppiVar5[6] = (int ***)0xffffffff;
      ppppdStack_228 = (double ****)0x41e501;
      FUN_004132a0();
      ppppiVar5[0x18] = (int ***)0xffffffff;
      ppppiVar5[0x16] = (int ***)0x0;
      ppppiVar5[0x19] = (int ***)0x7fefffff;
      *(undefined1 *)(ppppiVar5 + 0x1a) = 0;
      ppppiVar5[0x1b] = (int ***)0xffffffff;
    }
    ppppiVar5[6] = (int ***)local_1cc;
    ppppiVar5[2] = (int ***)((uint)ppppiVar5[2] | 0x40);
    iVar10 = *(int *)(DAT_0068be60 + (int)local_1cc * 4);
    *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) | 0x10;
    iVar10 = *(int *)(DAT_0068be60 + (int)local_1cc * 4);
    ppppdStack_228 = (double ****)(ppppiVar5 + 8);
    pppiVar9 = *(int ****)(iVar10 + 0x34);
    *ppppdStack_228 = (double ***)*(int ****)(iVar10 + 0x30);
    ppppiVar5[9] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x3c);
    ppppiVar5[10] = *(int ****)(iVar10 + 0x38);
    ppppiVar5[0xb] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x44);
    ppppiVar5[0xc] = *(int ****)(iVar10 + 0x40);
    ppppdStack_22c = (double ****)apppiStack_34;
    ppppiVar5[0xd] = pppiVar9;
    ppppdStack_230 = (double ****)0x41e578;
    puVar4 = (undefined4 *)FUN_004369e0();
    ppppdStack_230 = (double ****)0x4;
    ppppiVar12 = ppppiVar5 + 0xe;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar12 = (int ***)*puVar4;
      puVar4 = puVar4 + 1;
      ppppiVar12 = ppppiVar12 + 1;
    }
    ppppdStack_238 = (double ****)&local_20c;
    DAT_0068bf44 = DAT_0068bf44 + 1;
    ppppdStack_234 = (double ****)0x0;
    pcStack_23c = (char *)0x41e59f;
    FUN_0041b1f0();
    pcStack_23c = (char *)0x20;
    ppppiStack_240 = (int ****)0x41e5a6;
    pppiVar9 = (int ***)FUN_00631d33();
    local_c = 0xd;
    if (pppiVar9 == (int ***)0x0) {
      pppiVar9 = (int ***)0x0;
    }
    else {
      ppppdStack_22c = (double ****)&pppiStack_144;
      ppppdStack_228 = (double ****)local_20c;
      ppppdStack_230 = (double ****)0x41e5d0;
      local_1b0._0_4_ = pppiVar9;
      puVar4 = (undefined4 *)FUN_00404c20();
      ppiVar14 = (int **)*puVar4;
      *pppiVar9 = (int **)local_20c;
      pppiVar9[1] = (int **)0xffffffff;
      pppiVar9[2] = (int **)0xffffffff;
      pppiVar9[3] = ppiVar14;
      pppiVar9[4] = (int **)0x0;
      pppiVar9[6] = (int **)0x0;
      pppiVar9[5] = (int **)0x0;
      pppiVar9[7] = (int **)0x0;
    }
    ppppiVar5[0x16] = pppiVar9;
    local_c = 0xffffffff;
    iStack_244 = -1;
    ppppiStack_240 = local_1cc;
    ppppdStack_228 = (double ****)0xffffffff;
    ppppiStack_248 = local_54;
    local_1b0 = (double)CONCAT44(local_1b0._4_4_,&iStack_244);
    pcStack_23c = (char *)0x0;
    ppppdStack_238 = (double ****)0x0;
    ppppdStack_234 = (double ****)0x0;
    ppppdStack_230 = (double ****)0x0;
    ppppdStack_22c = (double ****)0x0;
    iStack_24c = 0x41e63c;
    iStack_24c = FUN_00435cd0();
    pppiStack_250 = (int ***)local_140;
    puVar4 = (undefined4 *)FUN_004369e0();
    piVar3 = &iStack_244;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      piVar3 = piVar3 + 1;
    }
    ppppiStack_248 = (int ****)ppppiVar5[0x16];
    iStack_24c = 0x41e661;
    FUN_0041b3f0();
    ppppiVar12 = DAT_0068c01c;
    ppppiVar8 = DAT_0068c018;
    ppppdStack_228 = (double ****)&uStack_213;
    local_1bc = (int ***)CONCAT31(local_1bc._1_3_,uStack_213);
    ppppdStack_22c = (double ****)0x41e686;
    FUN_00478a20();
    ppppdStack_228 = (double ****)&uStack_211;
    local_c = 0xe;
    ppppdStack_22c = (double ****)0x41e6a2;
    FUN_00478a20();
    local_c = CONCAT31(local_c._1_3_,0xf);
    local_1f8 = 0.0;
    for (local_208 = ppppiVar8; local_208 != ppppiVar12; local_208 = local_208 + 1) {
      ppppdStack_228 = (double ****)*local_208;
      ppppdStack_22c = (double ****)0x41e6d0;
      fVar16 = (float10)FUN_0041ee10();
      local_1c8 = (double)fVar16;
      if ((float10)_DAT_0064a668 < fVar16) {
        local_1f8 = local_1c8 + local_1f8;
        ppppdStack_228 = (double ****)&local_208;
        ppppdStack_22c = (double ****)0x41e6fb;
        FUN_0045a070();
        ppppdStack_228 = (double ****)&local_1c8;
        ppppdStack_22c = (double ****)0x41e70c;
        FUN_00447500();
      }
    }
    if (local_1ec != pdStack_1e8) {
      if (((int)pdStack_1e8 - (int)local_1ec & 0xfffffffcU) == 4) {
        ppppiVar12 = *(int *****)local_1ec;
      }
      else {
        ppppdStack_228 = (double ****)0xf4240;
        ppppdStack_22c = (double ****)0x41e747;
        local_1e0 = (undefined4 *)FUN_004155e0();
        local_1dc = (undefined4 *)0x0;
        dStack_1a0 = (double)local_1e0 * local_1f8 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        pppiVar9 = local_15c[0];
        for (pdVar11 = local_1ec; pdVar11 != pdStack_1e8; pdVar11 = (double *)((int)pdVar11 + 4)) {
          if ((dVar2 <= dStack_1a0) && (dStack_1a0 <= dVar2 + *(double *)pppiVar9)) {
            ppppiVar12 = *(int *****)pdVar11;
            break;
          }
          dVar2 = dVar2 + *(double *)pppiVar9;
          pppiVar9 = (int ***)((int)pppiVar9 + 8);
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,0xe);
    ppppdStack_228 = (double ****)0x41e7c5;
    FUN_004473b0();
    local_c = 0xffffffff;
    ppppdStack_228 = (double ****)0x41e7d9;
    FUN_00449a70();
    if (ppppiVar12 == DAT_0068c01c) {
      ppppdStack_228 = (double ****)&DAT_0068c120;
      ppppdStack_22c = (double ****)&DAT_0068c120;
      ppppdStack_230 = (double ****)s_Internal_error_9874_0066c70c;
      ppppdStack_234 = (double ****)0x1a4e;
      ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      ppppiStack_240 = (int ****)0x64;
      iStack_244 = 0;
      ppppiStack_248 = (int ****)0x41e808;
      FUN_00401010();
    }
    else {
      ppppiVar5[0x1b] = (int ***)((int)ppppiVar12 - (int)DAT_0068c018 >> 2);
      (*ppppiVar12)[10] = (int **)((int)(*ppppiVar12)[10] + 1);
    }
    ppppdStack_22c = (double ****)&pppiStack_18c;
    ppppdStack_230 = (double ****)0x41e836;
    ppppdStack_228 = (double ****)ppppiVar5;
    FUN_0041be00();
    ppppdStack_230 = (double ****)&pppiStack_18c;
    ppppdStack_228 = (double ****)0x1;
    local_1b0 = (double)CONCAT44(local_1b0._4_4_,&ppppdStack_22c);
    ppppdStack_234 = (double ****)0x41e84f;
    ppppdStack_22c = (double ****)extraout_ECX_02;
    FUN_0041d3f0();
    ppppdStack_230 = (double ****)0x41e855;
    (*DAT_0068c07c)();
    if ((double)CONCAT44(param_2,param_1) == _DAT_0064a668) {
      ppppdStack_228 = (double ****)0x70;
      ppppdStack_22c = (double ****)0x41e86f;
      FUN_004012c0();
    }
    local_210 = local_210 + 1;
    if (999 < local_210) break;
  }
  local_210 = 0;
  do {
    if (DAT_0068aab4 <= DAT_0068be94) {
      ExceptionList = local_14;
      return;
    }
    ppppdStack_228 = (double ****)&DAT_0068a928;
    apiStack_110[0] = (int *)s_pos_parking_0066c6d4;
    ppdVar13 = local_174;
    ppiVar14 = apiStack_110 + 2;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppiVar14 = (int *)*ppdVar13;
      ppdVar13 = ppdVar13 + 1;
      ppiVar14 = ppiVar14 + 1;
    }
    uStack_f0 = param_1;
    uStack_ec = param_2;
    ppiVar14 = apiStack_110;
    ppppiVar5 = &pppiStack_250;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar5 = (int ***)*ppiVar14;
      ppiVar14 = ppiVar14 + 1;
      ppppiVar5 = ppppiVar5 + 1;
    }
    iVar10 = FUN_0045db40(DAT_0068be60,DAT_0068be64);
    if (iVar10 == DAT_0068be64) {
      ExceptionList = local_14;
      return;
    }
    local_20c = (int ****)(iVar10 - DAT_0068be60 >> 2);
    if (local_20c == (int ****)0xffffffff) {
      ExceptionList = local_14;
      return;
    }
    ppppdStack_228 = (double ****)0x70;
    ppppdStack_22c = (double ****)0x41e92e;
    ppppiVar5 = (int ****)FUN_00631d33();
    if (ppppiVar5 == (int ****)0x0) {
      ppppiVar5 = (int ****)0x0;
    }
    else {
      *ppppiVar5 = (int ***)0xffffffff;
      ppppiVar5[1] = (int ***)0x12345678;
      ppppiVar5[2] = (int ***)0x0;
      ppppiVar5[3] = (int ***)0xffffffff;
      ppppiVar5[4] = (int ***)0xffffffff;
      ppppiVar5[5] = (int ***)0x0;
      ppppiVar5[6] = (int ***)0xffffffff;
      ppppiVar5[0xe] = (int ***)0xffffffff;
      ppppiVar5[0xf] = (int ***)0xffffffff;
      ppppiVar5[0x10] = (int ***)0x0;
      ppppiVar5[0x11] = (int ***)0x0;
      ppppiVar5[0x12] = (int ***)0x0;
      ppppiVar5[0x13] = (int ***)0x0;
      ppppiVar5[0x14] = (int ***)0x0;
      ppppiVar5[0x15] = (int ***)0xffffffff;
      ppppiVar5[0x18] = (int ***)0xffffffff;
      ppppiVar5[0x16] = (int ***)0x0;
      ppppiVar5[0x19] = (int ***)0x7fefffff;
      *(undefined1 *)(ppppiVar5 + 0x1a) = 0;
      ppppiVar5[0x1b] = (int ***)0xffffffff;
    }
    ppppiVar5[6] = (int ***)local_20c;
    ppppiVar5[2] = (int ***)((uint)ppppiVar5[2] | 0x80);
    iVar10 = *(int *)(DAT_0068be60 + (int)local_20c * 4);
    ppppdStack_228 = (double ****)(ppppiVar5 + 8);
    pppiVar9 = *(int ****)(iVar10 + 0x34);
    *ppppdStack_228 = (double ***)*(int ****)(iVar10 + 0x30);
    ppppiVar5[9] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x3c);
    ppppiVar5[10] = *(int ****)(iVar10 + 0x38);
    ppppiVar5[0xb] = pppiVar9;
    pppiVar9 = *(int ****)(iVar10 + 0x44);
    ppppiVar5[0xc] = *(int ****)(iVar10 + 0x40);
    ppppdStack_22c = (double ****)local_140;
    ppppiVar5[0xd] = pppiVar9;
    ppppdStack_230 = (double ****)0x41e9d0;
    puVar4 = (undefined4 *)FUN_004369e0();
    ppppiVar12 = ppppiVar5 + 0xe;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *ppppiVar12 = (int ***)*puVar4;
      puVar4 = puVar4 + 1;
      ppppiVar12 = ppppiVar12 + 1;
    }
    iVar10 = *(int *)(DAT_0068be60 + (int)local_20c * 4);
    *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) | 0x10;
    ppppiVar12 = DAT_0068c01c;
    ppppiVar8 = DAT_0068c018;
    DAT_0068be94 = DAT_0068be94 + 1;
    ppppdStack_228 = (double ****)&uStack_213;
    auStack_178[0] = uStack_213;
    ppppdStack_22c = (double ****)0x41ea29;
    FUN_00478a20();
    ppppdStack_228 = (double ****)&uStack_211;
    local_c = 0x10;
    ppppdStack_22c = (double ****)0x41ea45;
    FUN_00478a20();
    local_c = CONCAT31(local_c._1_3_,0x11);
    local_1f8 = 0.0;
    for (ppppiStack_204 = ppppiVar8; ppppiStack_204 != ppppiVar12;
        ppppiStack_204 = ppppiStack_204 + 1) {
      ppppdStack_228 = (double ****)*ppppiStack_204;
      ppppdStack_22c = (double ****)0x41ea76;
      fVar16 = (float10)FUN_0041edb0();
      local_1c8 = (double)fVar16;
      if ((float10)_DAT_0064a668 < fVar16) {
        local_1f8 = local_1c8 + local_1f8;
        ppppdStack_228 = (double ****)&ppppiStack_204;
        ppppdStack_22c = (double ****)0x41eaa4;
        FUN_0045a070();
        ppppdStack_228 = (double ****)&local_1c8;
        ppppdStack_22c = (double ****)0x41eab5;
        FUN_00447500();
      }
    }
    if (puStack_198 != puStack_194) {
      if (((int)puStack_194 - (int)puStack_198 & 0xfffffffcU) == 4) {
        ppppiVar12 = (int ****)*puStack_198;
      }
      else {
        ppppdStack_228 = (double ****)0xf4240;
        ppppdStack_22c = (double ****)0x41eaf6;
        local_1e0 = (undefined4 *)FUN_004155e0();
        local_1dc = (undefined4 *)0x0;
        dStack_1a0 = (double)local_1e0 * local_1f8 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        pppiVar9 = apppiStack_188[0];
        for (puVar4 = puStack_198; puVar4 != puStack_194; puVar4 = puVar4 + 1) {
          if ((dVar2 <= dStack_1a0) && (dStack_1a0 <= dVar2 + *(double *)pppiVar9)) {
            ppppiVar12 = (int ****)*puVar4;
            break;
          }
          dVar2 = dVar2 + *(double *)pppiVar9;
          pppiVar9 = pppiVar9 + 2;
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,0x10);
    ppppdStack_228 = (double ****)0x41eb7a;
    FUN_004473b0();
    local_c = 0xffffffff;
    ppppdStack_228 = (double ****)0x41eb91;
    FUN_00449a70();
    if (ppppiVar12 == DAT_0068c01c) {
      ppppdStack_228 = (double ****)&DAT_0068c120;
      ppppdStack_22c = (double ****)&DAT_0068c120;
      ppppdStack_230 = (double ****)s_Internal_error_9874_0066c70c;
      ppppdStack_234 = (double ****)0x1a6e;
      ppppdStack_238 = (double ****)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
      pcStack_23c = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
      ppppiStack_240 = (int ****)0x64;
      iStack_244 = 0;
      ppppiStack_248 = (int ****)0x41ebc0;
      FUN_00401010();
    }
    else {
      ppppiVar5[0x1b] = (int ***)((int)ppppiVar12 - (int)DAT_0068c018 >> 2);
      (*ppppiVar12)[10] = (int **)((int)(*ppppiVar12)[10] + 1);
    }
    ppppdStack_228 = (double ****)0x41ebe5;
    fVar16 = (float10)FUN_00401000();
    *(double *)(ppppiVar5 + 0x18) = (double)fVar16;
    ppppdStack_22c = (double ****)&dStack_1a8;
    ppppdStack_230 = (double ****)0x41ebf3;
    ppppdStack_228 = (double ****)ppppiVar5;
    FUN_0041be00();
    ppppdStack_230 = (double ****)&dStack_1a8;
    ppppdStack_228 = (double ****)0x1;
    local_1b0 = (double)CONCAT44(local_1b0._4_4_,&ppppdStack_22c);
    ppppdStack_234 = (double ****)0x41ec09;
    ppppdStack_22c = (double ****)extraout_ECX_03;
    FUN_0041d3f0();
    ppppdStack_230 = (double ****)0x41ec0f;
    (*DAT_0068c07c)();
    if ((double)CONCAT44(param_2,param_1) == _DAT_0064a668) {
      ppppdStack_228 = (double ****)0x70;
      ppppdStack_22c = (double ****)0x41ec29;
      FUN_004012c0();
    }
    local_210 = local_210 + 1;
    if (999 < local_210) {
      ExceptionList = local_14;
      return;
    }
  } while( true );
}

