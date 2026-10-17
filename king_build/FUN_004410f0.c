
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004410f0(undefined1 *param_1,int param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  double dVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  int *piVar11;
  char **ppcVar12;
  uint *puVar13;
  char **ppcVar14;
  float10 fVar15;
  char *apcStack_134 [4];
  int iStack_124;
  undefined1 **ppuStack_120;
  undefined1 **ppuStack_11c;
  undefined1 **ppuStack_118;
  uint *puStack_114;
  undefined1 **ppuStack_110;
  uint local_f0;
  undefined4 local_ec;
  int *local_e8;
  int *local_e4;
  undefined1 *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  char *local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_ac;
  undefined *local_a8;
  undefined1 *local_a4 [30];
  int local_2c;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dde1;
  local_14 = ExceptionList;
  ppuStack_110 = (undefined1 **)0x8;
  puStack_114 = (uint *)s_START__0066b830;
  local_ac = s_getOrderInfo_PlayerId_player__To_0066df1c;
  local_a8 = &DAT_0071d768;
  ppuStack_118 = (undefined1 **)0x441135;
  ExceptionList = &local_14;
  FUN_00401870();
  ppuStack_110 = (undefined1 **)s_getOrderInfo_PlayerId_player__To_0066df1c;
  puStack_114 = (uint *)0x441144;
  FUN_004018b0();
  piVar5 = param_4;
  piVar11 = (int *)0x0;
  *(undefined1 *)(param_4 + 0x2e) = 0;
  local_c = 0;
  iVar9 = *(int *)(DAT_0068be20 + param_2 * 4);
  if ((uint)(*(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x1c) >> 4) <= param_3) {
    ppuStack_110 = (undefined1 **)0x8;
    puStack_114 = (uint *)s_COMPL__0066b7ec;
    ppuStack_118 = (undefined1 **)0x441185;
    FUN_00401870();
    ppuStack_110 = (undefined1 **)s_getOrderInfo_PlayerId_player__To_0066df1c;
    puStack_114 = (uint *)0x441194;
    FUN_004018b0();
    ExceptionList = local_14;
    return 0xffffffff;
  }
  local_e8 = (int *)0x0;
  piVar10 = (int *)(param_3 * 0x10 + *(int *)(iVar9 + 0x1c));
  ppuStack_110 = (undefined1 **)(param_1 + 8);
  local_e4 = piVar10;
  if (ppuStack_110 != (undefined1 **)0x0) {
    if ((*(int *)(param_1 + 0x204) != 0) &&
       ((iVar9 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x204) + 4) * 4) +
                         0x20), iVar9 == 2 || (iVar9 == 3)))) {
      local_e8 = (int *)piVar10[2];
    }
    piVar11 = local_e8;
    if (ppuStack_110 != (undefined1 **)0x0) {
      puStack_114 = (uint *)0x4411fe;
      cVar6 = FUN_004418e0();
      if (cVar6 == '\0') {
        piVar11 = (int *)piVar10[3];
        local_e8 = piVar11;
      }
    }
  }
  if (piVar11 == (int *)0x0) {
    ppuStack_110 = (undefined1 **)0x8;
    puStack_114 = (uint *)s_COMPL__0066b7ec;
    ppuStack_118 = (undefined1 **)0x441223;
    FUN_00401870();
    ppuStack_110 = (undefined1 **)s_getOrderInfo_PlayerId_player__To_0066df1c;
    puStack_114 = (uint *)0x441232;
    FUN_004018b0();
    ExceptionList = local_14;
    return 0xfffffffe;
  }
  iVar9 = *piVar11;
  if (iVar9 == -1) {
    ppuStack_110 = (undefined1 **)&DAT_0068c120;
    puStack_114 = (uint *)&DAT_0068c120;
    ppuStack_118 = (undefined1 **)s_Internal_error_05712_0066df04;
    ppuStack_11c = (undefined1 **)0x42b6;
    ppuStack_120 = (undefined1 **)s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    iStack_124 = (int)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
    apcStack_134[3] = (char *)0xc8;
    apcStack_134[2] = (char *)0x0;
    apcStack_134[1] = (char *)0x44127d;
    FUN_00401010();
    ppuStack_110 = (undefined1 **)0x8;
    puStack_114 = (uint *)s_COMPL__0066b7ec;
    ppuStack_118 = (undefined1 **)0x441291;
    FUN_00401870();
    ppuStack_110 = (undefined1 **)s_getOrderInfo_PlayerId_player__To_0066df1c;
    puStack_114 = (uint *)0x4412a0;
    FUN_004018b0();
    ExceptionList = local_14;
    return 0xffffffe5;
  }
  *piVar5 = iVar9;
  local_d8 = piVar11[3];
  puVar1 = (uint *)(piVar5 + 0xd);
  puVar3 = (undefined1 *)(DAT_0068bc18 + iVar9 * 0x68);
  puVar13 = (uint *)(puVar3 + 0x58);
  local_e0 = puVar3;
  if (puVar13 != puVar1) {
    puStack_114 = *(uint **)(puVar3 + 0x5c);
    ppuStack_118 = (undefined1 **)*puVar13;
    uVar7 = (int)puStack_114 - (int)ppuStack_118;
    if (piVar5[0xf] - *puVar1 < uVar7) {
      ppuStack_11c = (undefined1 **)0x441314;
      uVar8 = (uint)ppuStack_118;
      ppuStack_118 = (undefined1 **)uVar7;
      ppuStack_110 = (undefined1 **)puStack_114;
      puStack_114 = (uint *)uVar8;
      uVar8 = FUN_00458d60();
      puStack_114 = (uint *)*puVar1;
      ppuStack_110 = (undefined1 **)(piVar5[0xf] - (int)puStack_114);
      if (ppuStack_110 != (undefined1 **)0x0) {
        ppuStack_118 = (undefined1 **)0x441326;
        FUN_0044b440();
      }
      *puVar1 = uVar8;
      piVar5[0xf] = uVar8 + uVar7;
    }
    else if (piVar5[0xe] - *puVar1 < uVar7) {
      ppuStack_110 = (undefined1 **)*puVar1;
      puStack_114 = (uint *)((piVar5[0xe] - (int)ppuStack_110) + (int)ppuStack_118);
      ppuStack_11c = (undefined1 **)0x44136e;
      FUN_00407250();
      ppuStack_11c = (undefined1 **)piVar5[0xe];
      ppuStack_120 = *(undefined1 ***)(puVar3 + 0x5c);
      iStack_124 = (int)ppuStack_11c + (*puVar13 - *puVar1);
      apcStack_134[3] = (char *)0x441384;
      FUN_00407250();
    }
    else {
      ppuStack_110 = (undefined1 **)*puVar1;
      ppuStack_11c = (undefined1 **)0x441357;
      FUN_00407250();
    }
    piVar5[0xe] = *puVar1 + uVar7;
  }
  if ((local_e8[2] != -1) &&
     (puVar13 = (uint *)(DAT_0068bc18 + 0x58 + local_e8[2] * 0x68), puVar13 != puVar1)) {
    puStack_114 = (uint *)puVar13[1];
    ppuStack_118 = (undefined1 **)*puVar13;
    uVar7 = (int)puStack_114 - (int)ppuStack_118;
    local_f0 = uVar7;
    if (piVar5[0xf] - *puVar1 < uVar7) {
      ppuStack_11c = (undefined1 **)0x4413e5;
      uVar8 = (uint)ppuStack_118;
      ppuStack_118 = (undefined1 **)uVar7;
      ppuStack_110 = (undefined1 **)puStack_114;
      puStack_114 = (uint *)uVar8;
      local_f0 = FUN_00458d60();
      puStack_114 = (uint *)*puVar1;
      ppuStack_110 = (undefined1 **)(piVar5[0xf] - (int)puStack_114);
      if (ppuStack_110 != (undefined1 **)0x0) {
        ppuStack_118 = (undefined1 **)0x4413f9;
        FUN_0044b440();
      }
      *puVar1 = local_f0;
      piVar5[0xf] = local_f0 + uVar7;
    }
    else if (piVar5[0xe] - *puVar1 < uVar7) {
      ppuStack_110 = (undefined1 **)*puVar1;
      puStack_114 = (uint *)((piVar5[0xe] - (int)ppuStack_110) + (int)ppuStack_118);
      ppuStack_11c = (undefined1 **)0x44143b;
      FUN_00407250();
      local_f0 = *puVar13;
      ppuStack_120 = (undefined1 **)puVar13[1];
      ppuStack_11c = (undefined1 **)piVar5[0xe];
      iStack_124 = (int)ppuStack_11c + (local_f0 - *puVar1);
      apcStack_134[3] = (char *)0x44145d;
      FUN_00407250();
    }
    else {
      ppuStack_110 = (undefined1 **)*puVar1;
      ppuStack_11c = (undefined1 **)0x441428;
      FUN_00407250();
    }
    piVar5[0xe] = *puVar1 + uVar7;
  }
  ppuStack_110 = (undefined1 **)piVar5[0x11];
  puStack_114 = (uint *)piVar5[0x10];
  ppuStack_118 = (undefined1 **)0x441477;
  FUN_004471c0();
  iVar9 = *(int *)(DAT_0068be20 + param_2 * 4);
  puVar13 = (uint *)(iVar9 + 0xc);
  if (puVar13 != (uint *)(piVar5 + 0x13)) {
    local_f0 = *(uint *)(iVar9 + 0x10);
    ppuStack_118 = (undefined1 **)*puVar13;
    uVar7 = local_f0 - (int)ppuStack_118;
    ppuStack_110 = (undefined1 **)piVar5[0x13];
    if ((uint)(piVar5[0x15] - (int)ppuStack_110) < uVar7) {
      ppuStack_11c = (undefined1 **)0x4414c7;
      puStack_114 = (uint *)ppuStack_118;
      ppuStack_118 = (undefined1 **)uVar7;
      ppuStack_110 = (undefined1 **)local_f0;
      iVar9 = FUN_00458d60();
      ppuStack_110 = (undefined1 **)(piVar5[0x15] - piVar5[0x13]);
      if (ppuStack_110 != (undefined1 **)0x0) {
        ppuStack_118 = (undefined1 **)0x4414da;
        puStack_114 = (uint *)piVar5[0x13];
        FUN_0044b440();
      }
      piVar5[0x13] = iVar9;
      piVar5[0x15] = iVar9 + uVar7;
    }
    else if ((uint)(piVar5[0x14] - (int)ppuStack_110) < uVar7) {
      puStack_114 = (uint *)((piVar5[0x14] - (int)ppuStack_110) + (int)ppuStack_118);
      ppuStack_11c = (undefined1 **)0x44152b;
      FUN_00407250();
      ppuStack_11c = (undefined1 **)piVar5[0x14];
      ppuStack_120 = *(undefined1 ***)(iVar9 + 0x10);
      iStack_124 = (int)ppuStack_11c + (*puVar13 - piVar5[0x13]);
      apcStack_134[3] = (char *)0x441542;
      FUN_00407250();
    }
    else {
      ppuStack_11c = (undefined1 **)0x441512;
      puStack_114 = (uint *)local_f0;
      FUN_00407250();
    }
    piVar5[0x14] = piVar5[0x13] + uVar7;
  }
  puVar13 = (uint *)(piVar5 + 0x16);
  iVar9 = *(int *)(DAT_0068be20 + local_d8 * 4);
  puVar2 = (uint *)(iVar9 + 0xc);
  if (puVar2 != puVar13) {
    local_f0 = *(uint *)(iVar9 + 0x10);
    ppuStack_118 = (undefined1 **)*puVar2;
    uVar7 = local_f0 - (int)ppuStack_118;
    if (piVar5[0x18] - *puVar13 < uVar7) {
      ppuStack_11c = (undefined1 **)0x4415a0;
      puStack_114 = (uint *)ppuStack_118;
      ppuStack_118 = (undefined1 **)uVar7;
      ppuStack_110 = (undefined1 **)local_f0;
      local_f0 = FUN_00458d60();
      ppuStack_110 = (undefined1 **)(piVar5[0x18] - *puVar13);
      if (ppuStack_110 != (undefined1 **)0x0) {
        ppuStack_118 = (undefined1 **)0x4415b4;
        puStack_114 = (uint *)*puVar13;
        FUN_0044b440();
      }
      *puVar13 = local_f0;
      piVar5[0x18] = local_f0 + uVar7;
    }
    else if (piVar5[0x17] - *puVar13 < uVar7) {
      ppuStack_110 = (undefined1 **)*puVar13;
      puStack_114 = (uint *)((piVar5[0x17] - (int)ppuStack_110) + (int)ppuStack_118);
      ppuStack_11c = (undefined1 **)0x441600;
      FUN_00407250();
      local_f0 = *puVar2;
      ppuStack_120 = *(undefined1 ***)(iVar9 + 0x10);
      ppuStack_11c = (undefined1 **)piVar5[0x17];
      iStack_124 = (int)ppuStack_11c + (local_f0 - *puVar13);
      apcStack_134[3] = (char *)0x441622;
      FUN_00407250();
    }
    else {
      ppuStack_110 = (undefined1 **)*puVar13;
      ppuStack_11c = (undefined1 **)0x4415e9;
      puStack_114 = (uint *)local_f0;
      FUN_00407250();
    }
    piVar5[0x17] = uVar7 + *puVar13;
  }
  piVar11 = local_e8;
  piVar5[0x19] = *puVar1;
  piVar5[0xc] = local_d8;
  piVar5[0x1c] = *puVar13;
  piVar5[0x1e] = 0;
  piVar5[0x20] = 0;
  piVar5[0x1a] = 0;
  piVar5[0x1b] = piVar5[0x13];
  piVar5[0x1f] = 0;
  piVar5[0x21] = 0;
  piVar5[0x22] = local_e8[6];
  iVar9 = local_e8[7];
  piVar5[0x24] = 0;
  piVar5[0x26] = 0;
  piVar5[0x23] = iVar9;
  piVar5[0x25] = 0;
  piVar5[0x27] = 0;
  piVar5[0x28] = *(int *)(local_e0 + 0x40);
  piVar5[0x29] = *(int *)(local_e0 + 0x44);
  ppuStack_110 = (undefined1 **)0x4416a5;
  fVar15 = (float10)FUN_00401000();
  dVar4 = *(double *)(piVar11 + 4);
  *(double *)(piVar5 + 0x2a) = (double)((float10)dVar4 - fVar15);
  if ((float10)dVar4 - fVar15 < (float10)_DAT_0064a668) {
    piVar5[0x2a] = 0;
    piVar5[0x2b] = 0;
  }
  if (param_1 != DAT_0068a8f0) {
    puStack_114 = &local_f0;
    ppuStack_110 = (undefined1 **)local_e0;
    ppuStack_118 = (undefined1 **)&local_d8;
    ppuStack_120 = &local_e0;
    local_e0 = (undefined1 *)&ppuStack_120;
    iStack_124 = (int)&param_1;
    apcStack_134[3] = (char *)0x4416fc;
    ppuStack_11c = ppuStack_120;
    FUN_0041d3f0();
    iStack_124 = 0x441701;
    FUN_0041bb20();
    piVar5[0x24] = (int)local_e0;
    piVar5[0x25] = local_dc;
    piVar5[0x26] = local_d8;
    piVar5[0x27] = local_d4;
    ppuStack_110 = (undefined1 **)0x441735;
    FUN_00470dd0();
    ppuStack_110 = (undefined1 **)local_ec;
    local_bc = 0;
    local_c8 = *local_e4;
    puStack_114 = (uint *)local_f0;
    local_cc = (char *)0xffffffff;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0xffffffff;
    local_c4 = 0;
    local_c0 = 0;
    ppcVar12 = &local_cc;
    ppcVar14 = apcStack_134;
    for (iVar9 = 8; piVar11 = local_e8, iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppcVar14 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
      ppcVar14 = ppcVar14 + 1;
    }
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00471640(local_a4,local_e8,param_2);
    ppuStack_118 = local_a4;
    ppuStack_120 = &param_1;
    ppuStack_11c = (undefined1 **)
                   CONCAT31((int3)((uint)extraout_ECX >> 8),*(int *)(param_1 + 0x208) != 0);
    puStack_114 = (uint *)0x0;
    local_e4 = (int *)&ppuStack_11c;
    iStack_124 = 0x4417cd;
    ppuStack_110 = ppuStack_11c;
    FUN_0041d3f0();
    ppuStack_120 = (undefined1 **)0x4417d2;
    FUN_00471250();
    if (*(int *)(param_1 + 0x208) != 0) {
      *(double *)(piVar5 + 0x22) = _DAT_0066e898 * *(double *)(piVar5 + 0x22);
    }
    ppuStack_110 = (undefined1 **)0x1;
    puStack_114 = (uint *)0x0;
    ppuStack_11c = local_a4;
    ppuStack_118 = (undefined1 **)0x0;
    ppuStack_120 = (undefined1 **)0x441804;
    fVar15 = (float10)FUN_004715b0();
    *(double *)(piVar5 + 0x1e) = (double)fVar15;
    *(double *)(piVar5 + 0x20) = (double)fVar15;
    if (((*(int *)(param_1 + 0x204) != 0) &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0x204) + 0x10) + 0xa0) != 0)) && (piVar11[1] != -1)) {
      ppuStack_110 = (undefined1 **)(DAT_0068bc18 + 0x58 + piVar11[1] * 0x68);
      puStack_114 = (uint *)0x44184c;
      FUN_0044c100();
      piVar5[0x1a] = piVar5[0x10];
    }
    local_e4 = &local_2c;
    local_c._0_1_ = 2;
    for (iVar9 = local_2c; iVar9 != local_28; iVar9 = iVar9 + 0x10) {
      puStack_114 = (uint *)0x44187c;
      ppuStack_110 = (undefined1 **)iVar9;
      FUN_00460d40();
    }
    local_c = (uint)local_c._1_3_ << 8;
    ppuStack_110 = (undefined1 **)0x44189a;
    FUN_0044abe0();
  }
  ppuStack_110 = (undefined1 **)0x8;
  puStack_114 = (uint *)s_COMPL__0066b7ec;
  *(undefined1 *)(piVar5 + 0x2e) = 1;
  ppuStack_118 = (undefined1 **)0x4418b2;
  FUN_00401870();
  ppuStack_110 = (undefined1 **)s_getOrderInfo_PlayerId_player__To_0066df1c;
  puStack_114 = (uint *)0x4418c1;
  FUN_004018b0();
  ExceptionList = local_14;
  return 0;
}

