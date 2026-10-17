
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d49f0(int param_1,double param_2,int param_3,int param_4,double param_5,double param_6,
                 double *param_7,double *param_8,float param_9)

{
  float fVar1;
  double dVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  double *extraout_ECX;
  undefined4 *puVar10;
  double *pdVar11;
  undefined4 *puVar12;
  float **ppfVar13;
  float10 fVar14;
  float *pfVar15;
  float *apfStack_2e8 [4];
  double *pdStack_2d8;
  float *pfStack_2d4;
  float *apfStack_2d0 [8];
  double *pdStack_2b0;
  float *local_2ac;
  undefined4 local_298;
  float local_294;
  float local_290;
  float local_28c;
  double local_288;
  undefined8 local_280;
  double local_278;
  float local_270;
  float local_26c;
  float local_268;
  uint local_264;
  double local_260;
  float local_258;
  float local_254;
  float local_250;
  int local_24c;
  double local_248;
  double local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  double local_188;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  double local_138;
  undefined4 local_130 [8];
  double local_110 [4];
  undefined4 local_f0 [8];
  undefined1 local_d0 [12];
  float local_c4 [3];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  float local_a0 [3];
  float local_94 [3];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [36];
  
  local_2ac = *(float **)(param_1 + 0x509c);
  local_264 = 0;
  pdStack_2b0 = local_110;
  local_140 = (double)(float)(&DAT_00696d1c)[*(int *)(param_1 + 0x28b4) * 0x25c];
  local_210 = *(float *)(param_1 + 0x50b0) * *(float *)(param_1 + 0x5234) +
              *(float *)(param_1 + 0x50bc) * *(float *)(param_1 + 0x5238) +
              *(float *)(param_1 + 0x50a4) * *(float *)(param_1 + 0x5230);
  local_20c = *(float *)(param_1 + 0x50b4) * *(float *)(param_1 + 0x5234) +
              *(float *)(param_1 + 0x50c0) * *(float *)(param_1 + 0x5238) +
              *(float *)(param_1 + 0x50a8) * *(float *)(param_1 + 0x5230);
  local_1ac = *(float *)(param_1 + 0x5230) * *(float *)(param_1 + 0x50a0) +
              *(float *)(param_1 + 0x50ac) * *(float *)(param_1 + 0x5234) +
              *(float *)(param_1 + 0x50b8) * *(float *)(param_1 + 0x5238) +
              *(float *)(param_1 + 0x50c4);
  local_1a8 = local_210 + *(float *)(param_1 + 0x50c8);
  local_1a4 = local_20c + *(float *)(param_1 + 0x50cc);
  apfStack_2d0[7] = (float *)0x4d4b03;
  local_298 = local_2ac;
  puVar4 = (undefined4 *)FUN_00437600();
  apfStack_2d0[1] = &local_194;
  ppfVar13 = apfStack_2e8 + 8;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppfVar13 = (float *)*puVar4;
    puVar4 = puVar4 + 1;
    ppfVar13 = ppfVar13 + 1;
  }
  apfStack_2d0[0] = (float *)0x4d4b1e;
  apfStack_2d0[0] = (float *)FUN_00439400();
  pfStack_2d4 = &local_270;
  pdStack_2d8 = (double *)0x4d4b29;
  FUN_005aaad0();
  local_208 = *(float *)(param_1 + 0x50dc);
  local_204 = *(float *)(param_1 + 0x50e0);
  local_200 = *(float *)(param_1 + 0x50e4);
  if (param_3 != 0) {
    local_270 = -local_270;
    local_26c = -local_26c;
    local_268 = -local_268;
    local_258 = local_270;
    local_254 = local_26c;
    local_250 = local_268;
  }
  local_1e8 = 0;
  uStack_1e4 = 0x408f4000;
  local_2ac = (float *)0x4d4ba9;
  iVar9 = FUN_005410a0();
  do {
    if (iVar9 == 0) {
      return local_264;
    }
    local_2ac = (float *)0x4d4bc4;
    local_24c = iVar9;
    iVar5 = FUN_00541090();
    if (iVar5 != param_1) {
      local_188 = (double)(float)(&DAT_00696d1c)[*(int *)(iVar5 + 0x28b4) * 0x25c];
      local_138 = (double)(float)(&DAT_00696d18)[*(int *)(iVar5 + 0x28b4) * 0x25c];
      local_260 = (local_188 + local_140) * _DAT_0064a6d0;
      local_160 = *(float *)(iVar5 + 0x50a4) * *(float *)(iVar5 + 0x5230) +
                  *(float *)(iVar5 + 0x50b0) * *(float *)(iVar5 + 0x5234) +
                  *(float *)(iVar5 + 0x50bc) * *(float *)(iVar5 + 0x5238);
      local_15c = *(float *)(iVar5 + 0x50a8) * *(float *)(iVar5 + 0x5230) +
                  *(float *)(iVar5 + 0x50b4) * *(float *)(iVar5 + 0x5234) +
                  *(float *)(iVar5 + 0x50c0) * *(float *)(iVar5 + 0x5238);
      local_258 = *(float *)(iVar5 + 0x50a0) * *(float *)(iVar5 + 0x5230) +
                  *(float *)(iVar5 + 0x50ac) * *(float *)(iVar5 + 0x5234) +
                  *(float *)(iVar5 + 0x50b8) * *(float *)(iVar5 + 0x5238) +
                  *(float *)(iVar5 + 0x50c4);
      local_254 = local_160 + *(float *)(iVar5 + 0x50c8);
      local_250 = local_15c + *(float *)(iVar5 + 0x50cc);
      local_22c = local_258 - local_1ac;
      local_228 = local_254 - local_1a8;
      local_2ac = &local_22c;
      local_224 = local_250 - local_1a4;
      pdStack_2b0 = (double *)0x4d4d64;
      local_1fc = local_258;
      local_1f8 = local_254;
      local_1f4 = local_250;
      local_1dc = local_22c;
      local_1d8 = local_228;
      local_1d4 = local_224;
      fVar14 = (float10)FUN_005aabc0();
      local_280 = (double)fVar14;
      if ((ABS(local_224) / (float)fVar14 <= (float)_DAT_0064a830) && (local_280 <= _DAT_0064a718))
      {
        local_220 = *(float *)(iVar5 + 0x50dc);
        local_1d0 = local_220 - local_208;
        local_21c = *(float *)(iVar5 + 0x50e0);
        local_1cc = local_21c - local_204;
        local_218 = *(float *)(iVar5 + 0x50e4);
        local_1c8 = local_218 - local_200;
        local_2ac = &local_14c;
        pdStack_2b0 = (double *)0x4d4e3b;
        local_14c = local_1d0;
        local_148 = local_1cc;
        local_144 = local_1c8;
        fVar14 = (float10)FUN_005aabc0();
        local_240 = (double)fVar14;
        if ((local_218 - local_200) * local_268 +
            local_26c * (local_21c - local_204) + local_270 * (local_220 - local_208) <
            (float)_DAT_0064a668) {
          local_240 = -local_240;
        }
        local_2ac = (float *)local_298;
        pdStack_2b0 = (double *)0x4d4ea7;
        cVar3 = FUN_004cfc30();
        if (cVar3 == '\0') {
          local_2ac = &local_258;
          apfStack_2d0[7] = (float *)&local_298;
          apfStack_2d0[6] = (float *)0x4d4ec0;
          pdStack_2b0 = extraout_ECX;
          FUN_0041d3f0();
          apfStack_2d0[7] = (float *)local_88;
          apfStack_2d0[6] = (float *)0x4d4ecd;
          puVar4 = (undefined4 *)FUN_0043d8a0();
          puVar10 = local_130;
          for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar10 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        else {
          local_248 = 30.0;
          do {
            pdStack_2b0 = &local_288;
            local_2ac = (float *)0x0;
            apfStack_2d0[6] = (float *)&local_298;
            local_288 = -local_248;
            apfStack_2d0[5] = (float *)0x4d4f13;
            FUN_0041d3f0();
            apfStack_2d0[6] = (float *)local_48;
            apfStack_2d0[5] = (float *)0x4d4f20;
            puVar4 = (undefined4 *)FUN_00437600();
            ppfVar13 = apfStack_2e8 + 6;
            for (pfStack_2d4 = (float *)0x8; pfStack_2d4 != (float *)0x0;
                pfStack_2d4 = (float *)((int)pfStack_2d4 + -1)) {
              *ppfVar13 = (float *)*puVar4;
              puVar4 = puVar4 + 1;
              ppfVar13 = ppfVar13 + 1;
            }
            pdStack_2d8 = (double *)&local_298;
            apfStack_2e8[3] = (float *)0x4d4f3b;
            FUN_0041d3f0();
            pdStack_2d8 = local_110;
            apfStack_2e8[3] = (float *)0x4d4f48;
            FUN_0043bff0();
            pdStack_2b0 = &local_288;
            local_288 = local_248;
            local_2ac = (float *)0x0;
            apfStack_2d0[7] = (float *)local_248._0_4_;
            apfStack_2d0[6] = (float *)&local_298;
            apfStack_2d0[5] = (float *)0x4d4f75;
            FUN_0041d3f0();
            apfStack_2d0[6] = (float *)local_68;
            apfStack_2d0[5] = (float *)0x4d4f82;
            puVar4 = (undefined4 *)FUN_00437600();
            ppfVar13 = apfStack_2e8 + 6;
            for (pfStack_2d4 = (float *)0x8; pfStack_2d4 != (float *)0x0;
                pfStack_2d4 = (float *)((int)pfStack_2d4 + -1)) {
              *ppfVar13 = (float *)*puVar4;
              puVar4 = puVar4 + 1;
              ppfVar13 = ppfVar13 + 1;
            }
            pdStack_2d8 = (double *)&local_298;
            apfStack_2e8[3] = (float *)0x4d4f9d;
            FUN_0041d3f0();
            pdStack_2d8 = (double *)local_f0;
            apfStack_2e8[3] = (float *)0x4d4faa;
            FUN_0043bff0();
            puVar4 = local_f0;
            ppfVar13 = apfStack_2e8 + 8;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *ppfVar13 = (float *)*puVar4;
              puVar4 = puVar4 + 1;
              ppfVar13 = ppfVar13 + 1;
            }
            pdVar11 = local_110;
            ppfVar13 = apfStack_2e8;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *ppfVar13 = (float *)*(undefined4 *)pdVar11;
              pdVar11 = (double *)((int)pdVar11 + 4);
              ppfVar13 = ppfVar13 + 1;
            }
            pfVar7 = &local_258;
            pfVar15 = pfVar7;
            FUN_0041d3f0(&local_298);
            puVar4 = (undefined4 *)FUN_0043d9f0(local_28,pfVar7,pfVar15);
            puVar10 = puVar4;
            puVar12 = local_130;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            }
            ppfVar13 = apfStack_2e8 + 8;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *ppfVar13 = (float *)*puVar4;
              puVar4 = puVar4 + 1;
              ppfVar13 = ppfVar13 + 1;
            }
            apfStack_2d0[1] = (float *)local_ac;
            apfStack_2d0[0] = (float *)0x4d501d;
            uVar6 = FUN_00439660();
            apfStack_2d0[1] = local_a0;
            local_278 = (double)CONCAT44(local_278._4_4_,uVar6);
            puVar4 = local_f0;
            ppfVar13 = apfStack_2e8 + 8;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *ppfVar13 = (float *)*puVar4;
              puVar4 = puVar4 + 1;
              ppfVar13 = ppfVar13 + 1;
            }
            apfStack_2d0[0] = (float *)0x4d5041;
            pfVar7 = (float *)FUN_00439660();
            local_1b8 = *pfVar7 - *local_278._0_4_;
            local_1b4 = pfVar7[1] - local_278._0_4_[1];
            local_1b0 = pfVar7[2] - local_278._0_4_[2];
            apfStack_2d0[0] = &local_158;
            pfStack_2d4 = (float *)0x4d50a1;
            local_158 = local_1b8;
            local_154 = local_1b4;
            local_150 = local_1b0;
            fVar14 = (float10)FUN_005aabc0();
            if ((float10)_DAT_0064b240 <= fVar14) {
              puVar4 = local_130;
              ppfVar13 = apfStack_2e8 + 8;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                *ppfVar13 = (float *)*puVar4;
                puVar4 = puVar4 + 1;
                ppfVar13 = ppfVar13 + 1;
              }
              apfStack_2d0[1] = (float *)local_d0;
              apfStack_2d0[0] = (float *)0x4d50d5;
              uVar6 = FUN_00439660();
              apfStack_2d0[1] = local_c4;
              local_278 = (double)CONCAT44(local_278._4_4_,uVar6);
              pdVar11 = local_110;
              ppfVar13 = apfStack_2e8 + 8;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                *ppfVar13 = (float *)*(undefined4 *)pdVar11;
                pdVar11 = (double *)((int)pdVar11 + 4);
                ppfVar13 = ppfVar13 + 1;
              }
              apfStack_2d0[0] = (float *)0x4d50f9;
              pfVar7 = (float *)FUN_00439660();
              local_1a0 = *pfVar7 - *local_278._0_4_;
              local_19c = pfVar7[1] - local_278._0_4_[1];
              local_198 = pfVar7[2] - local_278._0_4_[2];
              apfStack_2d0[0] = &local_17c;
              pfStack_2d4 = (float *)0x4d5159;
              local_17c = local_1a0;
              local_178 = local_19c;
              local_174 = local_198;
              FUN_005aabc0();
            }
            local_248 = local_248 + _DAT_0064c0b0;
          } while (local_248 < _DAT_0064a718);
        }
        puVar4 = local_130;
        ppfVar13 = apfStack_2e8 + 8;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppfVar13 = (float *)*puVar4;
          puVar4 = puVar4 + 1;
          ppfVar13 = ppfVar13 + 1;
        }
        apfStack_2d0[1] = (float *)local_b8;
        apfStack_2d0[0] = (float *)0x4d519d;
        apfStack_2d0[0] = (float *)FUN_00439400();
        pfStack_2d4 = &local_294;
        pdStack_2d8 = (double *)0x4d51a8;
        FUN_005aaad0();
        if (local_28c * local_268 + local_290 * local_26c + local_294 * local_270 <
            (float)_DAT_0064a668) {
          local_294 = -local_294;
          local_290 = -local_290;
          local_28c = -local_28c;
          local_1c4 = local_294;
          local_1c0 = local_290;
          local_1bc = local_28c;
        }
        apfStack_2d0[1] = local_94;
        puVar4 = local_130;
        ppfVar13 = apfStack_2e8 + 8;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppfVar13 = (float *)*puVar4;
          puVar4 = puVar4 + 1;
          ppfVar13 = ppfVar13 + 1;
        }
        apfStack_2d0[0] = (float *)0x4d523c;
        pfVar7 = (float *)FUN_00439660();
        local_238 = local_258 - *pfVar7;
        local_234 = local_254 - pfVar7[1];
        local_230 = local_250 - pfVar7[2];
        fVar1 = local_238 * local_294 + local_234 * local_290;
        local_170 = local_294 * fVar1;
        local_16c = local_290 * fVar1;
        local_214 = local_238 - local_170;
        local_210 = local_234 - local_16c;
        apfStack_2d0[0] = &local_194;
        local_20c = -(fVar1 * local_28c);
        pfStack_2d4 = (float *)0x4d5305;
        local_194 = local_214;
        local_190 = local_210;
        local_18c = local_20c;
        fVar14 = (float10)FUN_005aabc0();
        local_278 = (double)fVar14;
        if ((float)_DAT_0064a668 <
            DAT_00701590 * -(local_234 * local_28c) +
            DAT_00701594 * local_28c * local_238 +
            (local_234 * local_294 - local_290 * local_238) * DAT_00701598) {
          local_278 = -local_278;
        }
        local_288 = local_240 * local_240 * _DAT_0064a5a8 + local_260 + _DAT_0064a770;
        if (((_DAT_0064a668 < local_278) && (local_278 < param_5)) && (param_4 != 0)) {
          local_2ac = &local_220;
          pdStack_2b0 = (double *)0x4d53c3;
          fVar14 = (float10)FUN_005aabc0();
          local_1f0 = (double)fVar14;
          if ((((float10)_DAT_0064a6c0 < fVar14) &&
              (local_280 < (double)CONCAT44(uStack_1e4,local_1e8))) &&
             ((local_260 < local_280 &&
              ((float)_DAT_0064a668 <
               local_228 * local_26c + local_268 * local_224 + local_22c * local_270)))) {
            local_1e8 = (undefined4)local_280;
            uStack_1e4 = local_280._4_4_;
            if (local_288 <= local_280) {
              if (local_280 < local_288 + _DAT_0064a6e0) {
                *param_7 = local_1f0;
              }
            }
            else {
              *param_7 = local_1f0 - _DAT_0064a770;
            }
            if (*param_7 < _DAT_0064a668) {
              *(undefined4 *)param_7 = 0;
              *(undefined4 *)((int)param_7 + 4) = 0x40140000;
            }
          }
        }
        dVar2 = _DAT_0064a668;
        if (local_240 < _DAT_0064a668) {
          dVar2 = local_240 + local_240;
        }
        local_260 = -local_260;
        if (dVar2 < local_260) {
          dVar2 = local_260;
        }
        iVar9 = local_24c;
        if ((dVar2 <= (double)local_228 * (double)local_26c +
                      (double)local_268 * (double)local_224 + (double)local_22c * (double)local_270)
           && ((local_240 <= _DAT_0064a660 || (param_2 <= _DAT_0064a778)))) {
          if (_DAT_0064b254 < param_9) {
LAB_004d558a:
            local_288 = local_288 + _DAT_0064a928;
          }
          else if (param_2 < _DAT_0064a778) {
            local_2ac = &local_220;
            pdStack_2b0 = (double *)0x4d557a;
            fVar14 = (float10)FUN_005aabc0();
            if ((float10)_DAT_0064c2e8 < fVar14) goto LAB_004d558a;
          }
          iVar9 = local_24c;
          if (local_280 <= local_288) {
            local_260 = param_6 * _DAT_0064a6d0;
            local_278 = local_278 / local_260 + _DAT_0064a7b0;
            local_2ac = (float *)0x4d568f;
            iVar5 = __ftol();
            local_2ac = (float *)0x4d569a;
            iVar8 = __ftol();
            iVar9 = local_24c;
            if ((-1 < iVar8) && (iVar5 < 9)) {
              if (local_280 < *param_8) {
                *(undefined4 *)param_8 = (undefined4)local_280;
                *(undefined4 *)((int)param_8 + 4) = local_280._4_4_;
              }
              if (8 < iVar8) {
                iVar8 = 8;
              }
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              for (; iVar5 <= iVar8; iVar5 = iVar5 + 1) {
                local_264 = local_264 | 1 << ((byte)iVar5 & 0x1f);
              }
            }
          }
        }
      }
    }
    if (*(int *)(iVar9 + 8) == 0) {
      return local_264;
    }
    iVar9 = *(int *)(iVar9 + 8) + -4;
  } while( true );
}

