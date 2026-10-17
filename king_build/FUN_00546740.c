
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00546740(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int *piVar16;
  bool bVar17;
  int aiStack_150 [3];
  undefined1 *puStack_144;
  float *pfStack_140;
  float **local_13c;
  float *local_138;
  float *local_134;
  int local_118;
  float local_114;
  float local_110;
  float local_10c;
  float *local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4 [4];
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [12];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar13 = 4;
    do {
      local_134 = (float *)0x546767;
      FUN_004042a0();
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    local_134 = local_f4;
    pfVar11 = (float *)&DAT_00701550;
    pfVar15 = local_f4;
    for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pfVar15 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar15 = pfVar15 + 1;
    }
    local_138 = (float *)0x54678a;
    local_134 = (float *)FUN_005f1c30();
    local_138 = local_f4;
    local_13c = (float **)0x54679e;
    FUN_005adc90();
    local_104 = *(float *)(param_1 + 0x14);
    local_100 = *(float *)(param_1 + 0x18);
    local_fc = *(float *)(param_1 + 0x1c);
    local_f8 = *(undefined4 *)(param_1 + 0x20);
    local_134 = &local_104;
    local_138 = (float *)0x5467c9;
    iVar13 = FUN_005b4670();
    if (iVar13 != 0) {
      *(undefined4 *)(param_1 + 0x2844) = 1;
    }
    local_134 = (float *)0x5467de;
    FUN_005adfb0();
  }
  if (*(int *)(param_1 + 0x2480) != 0) {
    return 0;
  }
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0xce4) = 1;
  if (1 < DAT_00695b44) {
    if ((*(int *)(param_1 + 0x299c) == 1) && (*(int *)(param_1 + 0x5350) != 0)) {
      local_134 = (float *)0x546833;
      iVar13 = FUN_00556370();
      if (iVar13 == 0) {
        iVar13 = *(int *)(*(int *)(param_1 + 0x5350) + 0x2638);
        if (iVar13 == 1) {
          uVar10 = 2;
        }
        else if ((iVar13 == 3) && (*(int *)(param_1 + 0x3b4) == 0)) {
          uVar10 = 1;
        }
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 4;
    }
  }
  local_138 = *(float **)(&DAT_006d1154 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  local_13c = (float **)0x54688c;
  local_134 = (float *)uVar10;
  FUN_005e10c0();
  if (*(int *)(param_1 + 0x243c) == 5) {
    if (*(int *)(param_1 + 0x5354) != 0) {
      local_134 = (float *)0x5468a9;
      FUN_00561340();
    }
    local_134 = (float *)param_3;
    local_138 = (float *)param_2;
    local_13c = (float **)0x5468b9;
    uVar10 = FUN_005f8f30();
    return uVar10;
  }
  *(undefined4 *)(*(int *)(param_1 + -0xe0) + 0x54) = *(undefined4 *)(param_1 + 0x4e9c);
  local_134 = (float *)0x5468e0;
  FUN_00546420();
  if ((*(int *)(param_1 + 0x74) != 0) && (local_118 = 0, 0 < *(int *)(param_1 + 0x27a8))) {
    puVar8 = (undefined4 *)(param_1 + 0x24a4);
    local_108 = (float *)(param_1 + 0x2848);
    do {
      local_138 = local_f4;
      local_134 = (float *)local_108[-0x62];
      local_13c = (float **)0x546926;
      puVar5 = (undefined4 *)FUN_005ab5d0();
      puVar14 = puVar8;
      for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar14 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
      }
      if (local_118 < 2) {
        local_138 = (float *)local_c0;
        local_134 = (float *)((float)(int)*(char *)(param_1 + 0x26b4) * _DAT_00673380 *
                             (float)_DAT_0064e4b8);
        local_13c = (float **)0x546966;
        local_13c = (float **)FUN_005ab7d0();
        puStack_144 = local_90;
        aiStack_150[2] = 0x546975;
        pfStack_140 = (float *)puVar8;
        puVar5 = (undefined4 *)FUN_005ab130();
        puVar14 = puVar8;
        for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar14 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      iVar13 = (*(int *)(param_1 + 0x27a4) * 0x1f + local_118) * 0x30;
      puVar8[9] = *(undefined4 *)(&DAT_006d1184 + iVar13);
      puVar8[10] = *(undefined4 *)(&DAT_006d1188 + iVar13);
      puVar8[0xb] = *(undefined4 *)(&DAT_006d118c + iVar13);
      pbVar1 = (byte *)(param_1 + 0x26b5 + local_118);
      local_118 = local_118 + 1;
      pfVar11 = local_108 + 1;
      puVar8[0xb] = (float)puVar8[0xb] - (float)*pbVar1 * *local_108 * (float)_DAT_0064db98;
      puVar8 = puVar8 + 0xc;
      local_108 = pfVar11;
    } while (local_118 < *(int *)(param_1 + 0x27a8));
  }
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x27a8)) {
    piVar16 = (int *)(param_1 + 0x2484);
    iVar9 = param_1 + 0x24a4;
    do {
      local_13c = (float **)*piVar16;
      if (local_13c != (float **)0x0) {
        local_138 = (float *)0x0;
        pfStack_140 = (float *)0x546a24;
        local_134 = (float *)iVar9;
        FUN_005e1060();
      }
      iVar13 = iVar13 + 1;
      piVar16 = piVar16 + 1;
      iVar9 = iVar9 + 0x30;
    } while (iVar13 < *(int *)(param_1 + 0x27a8));
  }
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x27ac)) {
    puVar8 = (undefined4 *)(param_1 + 0x5170);
    do {
      local_134 = (float *)*puVar8;
      local_138 = *(float **)(&DAT_006d10bc + (iVar13 + *(int *)(param_1 + 0x27a4) * 0x174) * 4);
      local_13c = (float **)0x546a74;
      FUN_005e10c0();
      iVar13 = iVar13 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x27ac));
  }
  bVar17 = *(int *)(param_1 + 0x5254) == 0;
  if (bVar17) {
    local_138 = *(float **)(param_1 + 0x4f08);
  }
  else {
    local_138 = *(float **)(param_1 + 0x4f08);
  }
  local_134 = (float *)(uint)!bVar17;
  local_13c = (float **)0x546aa8;
  FUN_005e10c0();
  local_138 = *(float **)(param_1 + 0x4e48);
  local_13c = (float **)local_90;
  local_134 = (float *)(&DAT_006d12e0 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  pfStack_140 = (float *)0x546ad9;
  local_138 = (float *)FUN_005ab6d0();
  local_13c = *(float ***)(param_1 + 0x4e44);
  pfStack_140 = local_f4;
  puStack_144 = (undefined1 *)0x546aee;
  local_13c = (float **)FUN_005ab5d0();
  pfStack_140 = (float *)local_c0;
  puStack_144 = (undefined1 *)0x546afc;
  local_138 = (float *)FUN_005ab130();
  local_13c = (float **)local_60;
  pfStack_140 = (float *)0x546b0d;
  FUN_005ab130();
  pfStack_140 = (float *)local_60;
  puStack_144 = (undefined1 *)0x0;
  aiStack_150[2] = *(int *)(&DAT_006d1074 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  aiStack_150[1] = 0x546b36;
  FUN_005e1060();
  if (*(int *)(param_1 + 0x4f18) == 0) {
    local_134 = (float *)0x0;
    local_138 = *(float **)(&DAT_006d1478 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    local_13c = (float **)0x546ce4;
    FUN_005e10c0();
    local_13c = (float **)0x0;
    pfStack_140 = *(float **)(&DAT_006d147c + *(int *)(param_1 + 0x27a4) * 0x5d0);
    puStack_144 = (undefined1 *)0x546d05;
    FUN_005e10c0();
  }
  else {
    local_134 = (float *)0x1;
    local_138 = *(float **)(&DAT_006d1478 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    local_13c = (float **)0x546b68;
    FUN_005e10c0();
    local_134 = (float *)0x546b82;
    local_134 = (float *)__ftol();
    if (local_134 == (float *)0x7) {
      local_134 = (float *)0x1;
    }
    local_138 = *(float **)(&DAT_006d147c + *(int *)(param_1 + 0x27a4) * 0x5d0);
    local_13c = (float **)0x546bac;
    FUN_005e10c0();
    iVar13 = *(int *)(param_1 + 0x27a4) * 0x5d0;
    local_13c = *(float ***)(&DAT_006d14cc + iVar13);
    local_138 = *(float **)(&DAT_006d14d0 + iVar13);
    local_134 = *(float **)(&DAT_006d14d4 + iVar13);
    pfStack_140 = (float *)local_90;
    puStack_144 = (undefined1 *)0x546be4;
    local_134 = (float *)FUN_005ab330();
    local_13c = (float **)local_c0;
    local_138 = (float *)(*(float *)(param_1 + 0x4f14) + *(float *)(param_1 + 0x4f14));
    pfStack_140 = (float *)0x546bfe;
    local_138 = (float *)FUN_005ab7d0();
    local_13c = (float **)local_f4;
    pfStack_140 = (float *)0x546c0c;
    FUN_005ab130();
    pfStack_140 = local_f4;
    puStack_144 = (undefined1 *)0x0;
    aiStack_150[2] = *(int *)(&DAT_006d1470 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    aiStack_150[1] = 0x546c32;
    FUN_005e1060();
    iVar13 = *(int *)(param_1 + 0x27a4) * 0x5d0;
    local_13c = *(float ***)(&DAT_006d14d8 + iVar13);
    local_138 = *(float **)(&DAT_006d14dc + iVar13);
    local_134 = *(float **)(&DAT_006d14e0 + iVar13);
    pfStack_140 = (float *)local_90;
    puStack_144 = (undefined1 *)0x546c6d;
    local_134 = (float *)FUN_005ab330();
    local_138 = (float *)(*(float *)(param_1 + 0x4f14) + *(float *)(param_1 + 0x4f14));
    local_13c = (float **)local_30;
    pfStack_140 = (float *)0x546c8a;
    local_138 = (float *)FUN_005ab7d0();
    local_13c = (float **)local_c0;
    pfStack_140 = (float *)0x546c98;
    FUN_005ab130();
    pfStack_140 = (float *)local_c0;
    puStack_144 = (undefined1 *)0x0;
    aiStack_150[2] = *(int *)(&DAT_006d1474 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    aiStack_150[1] = 0x546cbe;
    FUN_005e1060();
  }
  iVar13 = *(int *)(param_1 + 0x27a4);
  if (((iVar13 < DAT_006cd294) || (DAT_006cd298 <= iVar13)) ||
     (local_134 = *(float **)(param_1 + 0x4f8c), local_134 == (float *)DAT_0068a8f0)) {
    if (((iVar13 < DAT_006cd29c) || (DAT_006cd2a0 <= iVar13)) ||
       ((*(int *)(param_1 + 0x5350) != 0 && (*(int *)(*(int *)(param_1 + 0x5350) + 0x2778) != 2))))
    {
      local_134 = (float *)0x0;
      local_138 = *(float **)(&DAT_006d1480 + iVar13 * 0x5d0);
      local_13c = (float **)0x546d9c;
      FUN_005e10c0();
    }
  }
  else {
    local_138 = (float *)0x546d38;
    iVar13 = FUN_0043f920();
    local_138 = (float *)(iVar13 + 1);
    local_13c = *(float ***)(&DAT_006d1480 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    pfStack_140 = (float *)0x546d59;
    FUN_005e10c0();
  }
  local_138 = (float *)param_2;
  local_13c = (float **)0x546daf;
  local_134 = (float *)param_3;
  local_c4 = FUN_00590420();
  if (DAT_00695b44 == 3) {
    if (*(int *)(param_1 + 0x5350) == 0) goto LAB_005477cf;
    local_118 = 0;
    iVar13 = *(int *)(param_1 + 0x27ac);
    pfVar11 = (float *)(*(int *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x2020) * 0x30 + 0x8c0 +
                       *(int *)(DAT_006ee15c + 0x1d0));
    pfVar15 = local_f4;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar15 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar15 = pfVar15 + 1;
    }
    if (0 < iVar13) {
      local_108 = (float *)0x0;
      do {
        pfVar11 = (float *)((int)local_108 + *(int *)(param_1 + 0x5350) + 0x2a80);
        local_110 = local_f4[1] * *pfVar11 + local_e4 * pfVar11[1] + local_d8 * pfVar11[2] +
                    local_cc;
        local_10c = local_f4[2] * *pfVar11 + local_e0 * pfVar11[1] + local_d4 * pfVar11[2] +
                    local_c8;
        if (_DAT_0064b240 < local_110) {
          uVar10 = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
          local_134 = (float *)0x546ee8;
          iVar13 = __ftol();
          local_134 = (float *)0x546f12;
          iVar9 = __ftol();
          local_134 = (float *)0x0;
          local_138 = (float *)0x0;
          local_13c = (float **)(iVar9 + 4);
          puStack_144 = (undefined1 *)(iVar9 + -4);
          aiStack_150[0] = 0x546f28;
          aiStack_150[1] = uVar10;
          aiStack_150[2] = iVar13;
          pfStack_140 = (float *)iVar13;
          FUN_005b6a50();
          aiStack_150[0] = 0;
          FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar13 + -4,iVar9,
                       iVar13 + 4,iVar9,0);
          FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),
                       (undefined4 *)(iVar13 + -3),iVar9 + -3,iVar13 + 3,iVar9 + 3,4,0);
          local_134 = (float *)0x0;
          local_138 = (float *)0x4;
          aiStack_150[1] = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
          aiStack_150[0] = 0x546fa5;
          aiStack_150[2] = iVar13 + 3;
          puStack_144 = (undefined1 *)(iVar9 + -3);
          pfStack_140 = (float *)(iVar13 + -3);
          local_13c = (float **)(iVar9 + 3);
          FUN_005b6a50();
        }
        local_118 = local_118 + 1;
        local_108 = local_108 + 3;
      } while (local_118 < *(int *)(param_1 + 0x27ac));
      goto LAB_00546fce;
    }
  }
  else {
LAB_00546fce:
    if (DAT_00695b44 < 2) goto LAB_005477cf;
  }
  if (*(int *)(param_1 + 0x5350) != 0) {
    iVar13 = *(int *)(DAT_006ee15c + 0x1d0);
    iVar9 = *(int *)(param_1 + 0x27a4);
    pfVar11 = (float *)(*(int *)(iVar13 + 0x2020) * 0x30 + 0x8c0 + iVar13);
    pfVar15 = local_f4;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar15 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar15 = pfVar15 + 1;
    }
    if ((DAT_006cd298 <= iVar9) && (iVar9 < DAT_006cd29c)) {
      pfVar11 = (float *)(&DAT_00696f98 + iVar9 * 0x25c);
      fVar2 = *pfVar11 * *(float *)(param_1 + 0x1b4) +
              *(float *)(param_1 + 0x1cc) * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1c0) * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1d8);
      fVar4 = *(float *)(param_1 + 0x1d0) * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1b8) * *pfVar11 +
              *(float *)(param_1 + 0x1c4) * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1dc);
      fVar3 = *(float *)(param_1 + 0x1d4) * (float)(&DAT_00696fa0)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1bc) * *pfVar11 +
              *(float *)(param_1 + 0x1c8) * (float)(&DAT_00696f9c)[iVar9 * 0x25c] +
              *(float *)(param_1 + 0x1e0);
      local_114 = fVar2 * *(float *)(param_1 + 0xf4) +
                  fVar4 * *(float *)(param_1 + 0x100) + fVar3 * *(float *)(param_1 + 0x10c) +
                  *(float *)(param_1 + 0x118);
      local_110 = fVar4 * *(float *)(param_1 + 0x104) +
                  fVar3 * *(float *)(param_1 + 0x110) + fVar2 * *(float *)(param_1 + 0xf8) +
                  *(float *)(param_1 + 0x11c);
      fVar2 = fVar4 * *(float *)(param_1 + 0x108) +
              fVar3 * *(float *)(param_1 + 0x114) + fVar2 * *(float *)(param_1 + 0xfc) +
              *(float *)(param_1 + 0x120);
      local_104 = local_f4[3] * local_110 + local_dc * fVar2 + local_f4[0] * local_114 + local_d0;
      local_100 = local_f4[1] * local_114 + local_e4 * local_110 + local_d8 * fVar2 + local_cc;
      if (_DAT_0064b240 < local_100) {
        uVar10 = *(undefined4 *)(iVar13 + 0x79c);
        local_134 = (float *)0x5471d6;
        iVar13 = __ftol();
        local_134 = (float *)0x5471fe;
        iVar9 = __ftol();
        local_134 = (float *)0x0;
        local_138 = (float *)0x5;
        local_13c = (float **)(iVar9 + 4);
        puStack_144 = (undefined1 *)(iVar9 + -4);
        aiStack_150[0] = 0x547214;
        aiStack_150[1] = uVar10;
        aiStack_150[2] = iVar13;
        pfStack_140 = (float *)iVar13;
        FUN_005b6a50();
        aiStack_150[0] = 0;
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar13 + -4,iVar9,
                     iVar13 + 4,iVar9,5);
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),
                     (undefined4 *)(iVar13 + -3),iVar9 + -3,iVar13 + 3,iVar9 + 3,4,0);
        local_134 = (float *)0x0;
        local_138 = (float *)0x4;
        aiStack_150[1] = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
        aiStack_150[0] = 0x54728f;
        aiStack_150[2] = iVar13 + 3;
        puStack_144 = (undefined1 *)(iVar9 + -3);
        pfStack_140 = (float *)(iVar13 + -3);
        local_13c = (float **)(iVar9 + 3);
        FUN_005b6a50();
      }
    }
    iVar13 = *(int *)(param_1 + 0x27a4);
    if ((DAT_006cd29c <= iVar13) && (iVar13 < DAT_006cd2a0)) {
      pfVar11 = (float *)(&DAT_00696fa4 + iVar13 * 0x25c);
      fVar2 = *pfVar11 * *(float *)(param_1 + 0x1b4) +
              *(float *)(param_1 + 0x1cc) * (float)(&DAT_00696fac)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1c0) * (float)(&DAT_00696fa8)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1d8);
      fVar4 = *(float *)(param_1 + 0x1d0) * (float)(&DAT_00696fac)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1b8) * *pfVar11 +
              *(float *)(param_1 + 0x1c4) * (float)(&DAT_00696fa8)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1dc);
      fVar3 = *(float *)(param_1 + 0x1d4) * (float)(&DAT_00696fac)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1bc) * *pfVar11 +
              *(float *)(param_1 + 0x1c8) * (float)(&DAT_00696fa8)[iVar13 * 0x25c] +
              *(float *)(param_1 + 0x1e0);
      local_114 = fVar2 * *(float *)(param_1 + 0xf4) +
                  fVar4 * *(float *)(param_1 + 0x100) + fVar3 * *(float *)(param_1 + 0x10c) +
                  *(float *)(param_1 + 0x118);
      local_110 = fVar4 * *(float *)(param_1 + 0x104) +
                  fVar3 * *(float *)(param_1 + 0x110) + fVar2 * *(float *)(param_1 + 0xf8) +
                  *(float *)(param_1 + 0x11c);
      fVar2 = fVar4 * *(float *)(param_1 + 0x108) +
              fVar3 * *(float *)(param_1 + 0x114) + fVar2 * *(float *)(param_1 + 0xfc) +
              *(float *)(param_1 + 0x120);
      local_104 = local_110 * local_f4[3] + fVar2 * local_dc + local_114 * local_f4[0] + local_d0;
      local_100 = local_f4[1] * local_114 + local_110 * local_e4 + fVar2 * local_d8 + local_cc;
      if (_DAT_0064b240 < local_100) {
        uVar10 = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
        local_134 = (float *)0x547467;
        iVar13 = __ftol();
        local_134 = (float *)0x54748f;
        iVar9 = __ftol();
        local_134 = (float *)0x0;
        local_138 = (float *)0x6;
        local_13c = (float **)(iVar9 + 4);
        puStack_144 = (undefined1 *)(iVar9 + -4);
        aiStack_150[0] = 0x5474a5;
        aiStack_150[1] = uVar10;
        aiStack_150[2] = iVar13;
        pfStack_140 = (float *)iVar13;
        FUN_005b6a50();
        aiStack_150[0] = 0;
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar13 + -4,iVar9,
                     iVar13 + 4,iVar9,6);
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),
                     (undefined4 *)(iVar13 + -3),iVar9 + -3,iVar13 + 3,iVar9 + 3,7,0);
        local_134 = (float *)0x0;
        local_138 = (float *)0x7;
        aiStack_150[1] = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
        aiStack_150[0] = 0x547521;
        aiStack_150[2] = iVar13 + 3;
        puStack_144 = (undefined1 *)(iVar9 + -3);
        pfStack_140 = (float *)(iVar13 + -3);
        local_13c = (float **)(iVar9 + 3);
        FUN_005b6a50();
      }
    }
    local_c0[0] = 0xffffffff;
    local_c0[1] = 0xffffffff;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[6] = 0;
    local_c0[7] = 0xffffffff;
    local_134 = (float *)0x54756c;
    iVar13 = FUN_0057d5d0();
    puStack_144 = *(undefined1 **)(iVar13 + 0xc);
    local_138 = (float *)local_c0;
    local_134 = (float *)0x0;
    local_13c = &local_108;
    pfStack_140 = (float *)(param_1 + 0x118);
    aiStack_150[2] = 0x547587;
    FUN_00532a70();
    if (local_108 != (float *)0x0) {
      puVar8 = local_c0;
      piVar16 = aiStack_150;
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        piVar16 = piVar16 + 1;
      }
      FUN_00439660(&local_114);
      local_100 = local_f4[1] * local_114 + local_110 * local_e4 + local_10c * local_d8 + local_cc;
      local_fc = local_f4[2] * local_114 + local_110 * local_e0 + local_10c * local_d4 + local_c8;
      if (_DAT_0064b240 < local_100) {
        uVar10 = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
        local_134 = (float *)0x54767b;
        iVar9 = __ftol();
        local_134 = (float *)0x5476a5;
        iVar7 = __ftol();
        local_134 = (float *)0x5476ec;
        iVar6 = __ftol();
        iVar12 = iVar7 - iVar6;
        local_134 = (float *)0x0;
        iVar13 = iVar6 + iVar9;
        local_138 = (float *)0x6;
        iVar9 = iVar9 - iVar6;
        aiStack_150[0] = 0x547709;
        aiStack_150[1] = uVar10;
        aiStack_150[2] = iVar9;
        puStack_144 = (undefined1 *)iVar12;
        pfStack_140 = (float *)iVar13;
        local_13c = (float **)iVar12;
        FUN_005b6a50();
        iVar6 = iVar6 + iVar7;
        aiStack_150[0] = 0;
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9,iVar6,iVar13,
                     iVar6,6);
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9,iVar12,iVar9,
                     iVar6,6,0);
        local_134 = (float *)0x0;
        local_138 = (float *)0x6;
        aiStack_150[1] = *(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c);
        aiStack_150[0] = 0x547781;
        aiStack_150[2] = iVar13;
        puStack_144 = (undefined1 *)iVar12;
        pfStack_140 = (float *)iVar13;
        local_13c = (float **)iVar6;
        FUN_005b6a50();
        aiStack_150[0] = 0;
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar9,iVar12,iVar13,
                     iVar6,7);
        FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar13,iVar12,iVar9,
                     iVar6,7,0);
      }
    }
  }
LAB_005477cf:
  *(undefined4 *)(param_1 + 0xce4) = 0;
  return local_c4;
}

