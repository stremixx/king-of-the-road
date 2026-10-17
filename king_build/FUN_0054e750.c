
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0054e750(int param_1)

{
  double dVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float **ppfVar14;
  float fVar15;
  float10 fVar16;
  float *apfStack_204 [5];
  float *pfStack_1f0;
  int *piStack_1ec;
  float *pfStack_1e8;
  float *pfStack_1e4;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  int local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  int local_130;
  uint local_12c;
  int local_128;
  float local_124;
  int local_120 [18];
  undefined4 local_d8;
  undefined4 uStack_d4;
  char *local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  char *local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [12];
  float local_74 [3];
  float local_68 [12];
  undefined1 local_38 [36];
  float local_14 [4];
  
  *(undefined4 *)(param_1 + 0x5078) = 0;
  if ((*(int *)(param_1 + 0x507c) != 0) ||
     (*(float *)(param_1 + 0x5088) <
      (float)*(double *)(DAT_006ee15c + 0xb98) - *(float *)(param_1 + 0x5084))) {
    *(undefined4 *)(param_1 + 0x5074) = 0;
    *(undefined4 *)(param_1 + 0x5094) = 0;
    *(undefined4 *)(param_1 + 0x5098) = 0;
  }
  local_130 = 0;
  local_1b0 = 0;
  if (*(int *)(param_1 + 0x4c4) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x390) == 0) {
    return 0;
  }
  if (1 < *(int *)(DAT_006cdbcc + 0x514)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    return 0;
  }
  pfStack_1e4 = *(float **)(param_1 + 0x414);
  pfStack_1e8 = (float *)0x54e7f6;
  iVar8 = FUN_0057c0a0();
  if (iVar8 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x507c) != 0) &&
     ((float)*(double *)(DAT_006ee15c + 0xb98) - *(float *)(param_1 + 0x5084) <
      *(float *)(param_1 + 0x5088))) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x507c) = 0;
  *(undefined4 *)(param_1 + 0x5088) = 0x41200000;
  local_1ac = *(float *)(iVar8 + 0x1c4);
  pfStack_1e4 = &local_1ac;
  local_188 = DAT_00701580 * *(float *)(param_1 + 0x234) +
              DAT_00701584 * *(float *)(param_1 + 0x240) +
              DAT_00701588 * *(float *)(param_1 + 0x24c);
  local_1a8 = *(float *)(iVar8 + 0x1c8);
  local_1a4 = *(float *)(iVar8 + 0x1cc);
  local_184 = DAT_00701580 * *(float *)(param_1 + 0x238) +
              DAT_00701584 * *(float *)(param_1 + 0x244) +
              DAT_00701588 * *(float *)(param_1 + 0x250);
  local_180 = DAT_00701580 * *(float *)(param_1 + 0x23c) +
              DAT_00701584 * *(float *)(param_1 + 0x248) +
              DAT_00701588 * *(float *)(param_1 + 0x254);
  pfStack_1e8 = (float *)0x54e8ee;
  local_144 = (float)iVar8;
  fVar16 = (float10)FUN_005aabc0();
  local_124 = (float)fVar16;
  pfStack_1e4 = (float *)local_38;
  pfStack_1e8 = (float *)0x54e907;
  FUN_0057d650();
  local_194 = *(float *)(iVar8 + 0x1a0);
  local_1c0 = local_194 - local_1ac;
  local_190 = *(float *)(iVar8 + 0x1a4);
  local_1bc = local_190 - local_1a8;
  local_18c = *(float *)(iVar8 + 0x1a8);
  local_1b8 = local_18c - local_1a4;
  pfStack_1e4 = &local_1c0;
  pfStack_1e8 = (float *)0x54e97d;
  local_15c = local_1c0;
  local_158 = local_1bc;
  local_154 = local_1b8;
  fVar16 = (float10)FUN_005aabc0();
  if ((float10)_DAT_0064b2e8 < fVar16) {
    return 0;
  }
  if (fVar16 < (float10)_DAT_0064b3fc) {
    return 0;
  }
  local_1b8 = *(float *)(param_1 + 0x1dc) - local_1a4;
  if ((float)_DAT_0064a668 <
      (local_1ac + *(float *)(param_1 + 0x1d4)) * (*(float *)(param_1 + 0x1d4) - local_1ac) +
      (*(float *)(param_1 + 0x1d8) - local_1a8) * (local_1a8 + *(float *)(param_1 + 0x1d8)) +
      local_1b8 * (local_1a4 + *(float *)(param_1 + 0x1dc))) {
    local_130 = 6;
  }
  pfStack_1e4 = *(float **)(param_1 + 0x414);
  pfStack_1e8 = (float *)0x54ea18;
  local_148 = FUN_0053eeb0();
  iVar8 = local_1b0;
  if (local_148 != 0) {
    local_120[0] = -1;
    local_120[1] = 0xffffffff;
    local_120[7] = 0xffffffff;
    local_120[8] = -1;
    local_120[9] = 0xffffffff;
    local_120[0xf] = 0xffffffff;
    pfStack_1e8 = (float *)local_120;
    pfStack_1e4 = (float *)0x0;
    piStack_1ec = &local_160;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    local_120[5] = 0;
    local_120[6] = 0;
    local_120[10] = 0;
    local_120[0xb] = 0;
    local_120[0xc] = 0;
    local_120[0xd] = 0;
    local_120[0xe] = 0;
    local_160 = 0;
    apfStack_204[4] = *(float **)(*(int *)(param_1 + 0x334) + 0xc);
    local_150 = 0.0;
    local_128 = 0;
    apfStack_204[3] = (float *)0x54eadb;
    pfStack_1f0 = (float *)(param_1 + 600);
    FUN_00532a70();
    iVar8 = local_1b0;
    if (local_160 != 0) {
      pfStack_1e8 = (float *)(local_120 + 8);
      pfStack_1e4 = (float *)0x0;
      piStack_1ec = &local_160;
      pfStack_1f0 = local_14;
      apfStack_204[4] = *(float **)(*(int *)(local_148 + 0x334) + 0xc);
      apfStack_204[3] = (float *)0x54eb1c;
      FUN_00532a70();
      iVar8 = local_1b0;
      if (local_160 != 0) {
        ppfVar14 = apfStack_204;
        piVar9 = local_120;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        apfStack_204[0] = local_68;
        piVar9 = (int *)FUN_00445c60();
        ppfVar14 = apfStack_204;
        piVar13 = local_120;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
        apfStack_204[0] = local_68;
        piVar9 = local_120 + 8;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        piVar9 = (int *)FUN_00445c60();
        piVar13 = local_120 + 8;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
        local_bc = 0xffffffff;
        local_b8 = 0xffffffff;
        local_8c = 0xffffffff;
        local_88 = 0xffffffff;
        pfStack_1e4 = (float *)(local_120 + 0x10);
        local_120[0x10] = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        local_d0 = s_UNDEFINED_MODULE_0066c638;
        local_c8 = 0;
        local_c4 = 0;
        local_b0[0] = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = s_UNDEFINED_MODULE_0066c638;
        local_98 = 0;
        local_94 = 0;
        piVar9 = local_120;
        ppfVar14 = apfStack_204;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
          ppfVar14 = ppfVar14 + 1;
        }
        local_cc = s_UNDEFINED_ROOM_0066c628;
        local_9c = s_UNDEFINED_ROOM_0066c628;
        FUN_00438e50();
        pfStack_1e4 = (float *)local_b0;
        piVar9 = local_120 + 8;
        ppfVar14 = apfStack_204;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
          ppfVar14 = ppfVar14 + 1;
        }
        FUN_00438e50();
        local_12c = (uint)(1 < local_c0);
        ppfVar14 = apfStack_204;
        local_134 = (float)((float10)(double)CONCAT44(uStack_d4,local_d8) * (float10)_DAT_0064a6d0);
        apfStack_204[0] = &local_194;
        piVar9 = local_120;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        FUN_00439660();
        ppfVar14 = apfStack_204;
        piVar9 = local_120;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        apfStack_204[0] = &local_1c0;
        uVar10 = FUN_00439400();
        FUN_005aaad0(&local_1a0,uVar10);
        local_1c0 = local_19c * DAT_00701598 - local_198 * DAT_00701594;
        local_1bc = local_198 * DAT_00701590 - local_1a0 * DAT_00701598;
        local_1b8 = local_1a0 * DAT_00701594 - local_19c * DAT_00701590;
        FUN_005aaad0(&local_15c,&local_1c0);
        local_140 = local_194 - *(float *)(param_1 + 600);
        ppfVar14 = apfStack_204;
        local_13c = local_190 - *(float *)(param_1 + 0x25c);
        apfStack_204[0] = local_74;
        local_138 = local_18c - *(float *)(param_1 + 0x260);
        piVar9 = local_120 + 8;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        FUN_00439660();
        ppfVar14 = apfStack_204;
        apfStack_204[0] = &local_1c0;
        piVar9 = local_120 + 8;
        for (iVar8 = 8; ppfVar14 = (float **)((int)ppfVar14 + 4), iVar8 != 0; iVar8 = iVar8 + -1) {
          *ppfVar14 = (float *)*piVar9;
          piVar9 = piVar9 + 1;
        }
        uVar10 = FUN_00439400();
        FUN_005aaad0(local_80,uVar10);
        if (local_19c * local_184 + local_198 * local_180 + local_1a0 * local_188 <
            (float)_DAT_0064a668) {
          local_15c = -local_15c;
          local_158 = -local_158;
          local_154 = -local_154;
        }
        pfStack_1e4 = (float *)local_120;
        pfStack_1e8 = (float *)0x54ee5f;
        iVar8 = FUN_00532c40();
        local_17c = local_1a0;
        local_178 = local_19c;
        local_174 = local_198;
        if (local_1a0 * (local_13c * DAT_00701598 - local_138 * DAT_00701594) +
            local_19c * (local_138 * DAT_00701590 - local_140 * DAT_00701598) +
            (local_140 * DAT_00701594 - local_13c * DAT_00701590) * local_198 < (float)_DAT_0064a668
           ) {
          local_17c = -local_1a0;
          local_178 = -local_19c;
          local_174 = -local_198;
        }
        local_1b4 = local_134 + _DAT_006785f4;
        local_170 = 0.0;
        local_16c = 0.0;
        local_168 = 0.0;
        local_164 = local_1b4 + _DAT_0064b240;
        local_14c = -local_164;
        fVar15 = local_150;
        do {
          pfStack_1e4 = &local_170;
          pfStack_1e8 = (float *)0x54ef7d;
          iVar11 = FUN_0058c870();
          if (fVar15 != 0.0) break;
          if (iVar11 == 0) {
            local_170 = DAT_007015b0;
            local_16c = DAT_007015b4;
            local_168 = DAT_007015b8;
          }
          local_1bc = local_170 * *(float *)(param_1 + 0x238) +
                      local_16c * *(float *)(param_1 + 0x244) +
                      local_168 * *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x25c);
          local_1b8 = local_170 * *(float *)(param_1 + 0x23c) +
                      local_16c * *(float *)(param_1 + 0x248) +
                      local_168 * *(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x260);
          fVar6 = local_15c *
                  (local_194 -
                  (local_170 * *(float *)(param_1 + 0x234) +
                   local_16c * *(float *)(param_1 + 0x240) + local_168 * *(float *)(param_1 + 0x24c)
                  + *(float *)(param_1 + 600))) + (local_190 - local_1bc) * local_158;
          if (fVar6 < local_164) {
            local_164 = fVar6;
          }
          if (local_14c < fVar6) {
            local_14c = fVar6;
          }
          if (iVar8 == 0) {
            if ((-local_1b4 < fVar6) && (fVar6 < local_1b4)) {
LAB_0054f0c4:
              fVar15 = 1.4013e-45;
            }
          }
          else if ((fVar6 < _DAT_006785f4) && (-local_1b4 < fVar6)) goto LAB_0054f0c4;
        } while (iVar11 != 0);
        iVar8 = *(int *)(DAT_0068be98 + local_120[8] * 4);
        iVar11 = *(int *)(DAT_0068be98 + local_120[0] * 4);
        sVar2 = *(short *)(*(int *)(iVar11 + 0x74) + 0x10);
        sVar3 = *(short *)(*(int *)(iVar11 + 0x70) + 0x10);
        sVar4 = *(short *)(*(int *)(iVar8 + 0x70) + 0x10);
        sVar5 = *(short *)(*(int *)(iVar8 + 0x74) + 0x10);
        if ((sVar3 == sVar4) && (sVar2 == sVar5)) {
          iVar11 = 1;
        }
        else if ((sVar3 != sVar5) || (iVar11 = 1, sVar2 != sVar4)) {
          iVar11 = local_128;
        }
        if (((local_120[0x10] & 0x30U) != 0) || ((local_b0[0] & 0x30) != 0)) {
          iVar11 = 0;
        }
        iVar8 = local_1b0;
        if ((fVar15 != 0.0) && (iVar11 != 0)) {
          local_1cc = local_188;
          local_1c8 = local_184;
          local_1c4 = local_180;
          pfStack_1e8 = (float *)0x54f17e;
          pfStack_1e4 = (float *)(param_1 + 0x1d4);
          fVar16 = (float10)FUN_005aabc0();
          local_1b4 = (float)fVar16;
          pfStack_1e8 = &local_140;
          piStack_1ec = (int *)0x54f18f;
          fVar16 = (float10)FUN_005aabc0();
          local_150 = (float)fVar16;
          if (_DAT_0064b254 < local_1b4) {
            local_1cc = *(float *)(param_1 + 0x1d4) / local_1b4;
            local_1c8 = *(float *)(param_1 + 0x1d8) / local_1b4;
            local_1c4 = *(float *)(param_1 + 0x1dc) / local_1b4;
            local_1c0 = local_1cc;
            local_1bc = local_1c8;
            local_1b8 = local_1c4;
          }
          fVar15 = local_178 * local_184 + local_174 * local_180 + local_17c * local_188;
          if (local_1b4 <= _DAT_0064b240) {
            if (fVar15 <= (float)_DAT_0064a668) {
              iVar8 = 4;
              goto LAB_0054f52d;
            }
            if (fVar15 <= (float)_DAT_0064a888) {
              iVar8 = 4;
              goto LAB_0054f52d;
            }
            pfStack_1e4 = (float *)0x54f375;
            iVar8 = __ftol();
            if (1 < iVar8 + 1) {
              iVar8 = 0;
              piVar9 = (int *)(param_1 + 0xdc4);
              do {
                pfStack_1e4 = (float *)*piVar9;
                if (pfStack_1e4 == (float *)0x0) {
LAB_0054f4c5:
                  if ((iVar8 < 6) && (*(int *)(param_1 + 0xdc4 + iVar8 * 4) != 0)) {
                    local_1b0 = 0;
                    iVar8 = local_1b0;
                    goto LAB_0054f4e1;
                  }
                  break;
                }
                pfStack_1e8 = (float *)0x54f397;
                iVar11 = FUN_0053eee0();
                pfStack_1e4 = local_68;
                pfStack_1e8 = (float *)0x54f3ab;
                iVar12 = FUN_0057d570();
                fVar15 = *(float *)(iVar12 + 0x24);
                local_17c = *(float *)(param_1 + 0x228) - fVar15;
                fVar6 = *(float *)(iVar12 + 0x28);
                local_178 = *(float *)(param_1 + 0x22c) - fVar6;
                fVar7 = *(float *)(iVar12 + 0x2c);
                local_174 = *(float *)(param_1 + 0x230) - fVar7;
                if ((iVar11 != param_1) && ((float)piVar9[6] < _DAT_0064c7a8)) {
                  iVar11 = *piVar9;
                  local_1c0 = *(float *)(iVar11 + 0x1c4);
                  local_1bc = *(float *)(iVar11 + 0x1c8);
                  local_1b8 = *(float *)(iVar11 + 0x1cc);
                  if ((ABS(fVar15 * *(float *)(param_1 + 0x294) +
                           fVar7 * *(float *)(param_1 + 0x2ac) + fVar6 * *(float *)(param_1 + 0x2a0)
                           + *(float *)(param_1 + 0x2b8)) <
                       fVar15 * *(float *)(param_1 + 0x298) +
                       fVar7 * *(float *)(param_1 + 0x2b0) + fVar6 * *(float *)(param_1 + 0x2a4) +
                       *(float *)(param_1 + 700)) &&
                     ((float)_DAT_0064a668 <
                      local_1c0 * local_17c + local_178 * local_1bc + local_174 * local_1b8))
                  goto LAB_0054f4c5;
                }
                iVar8 = iVar8 + 1;
                piVar9 = piVar9 + 1;
              } while (iVar8 < 6);
              local_1b0 = 4;
              iVar8 = 4;
              goto LAB_0054f52d;
            }
            iVar8 = 0;
          }
          else {
            if (((fVar15 <= (float)_DAT_0064a668) && ((float)_DAT_0064a658 < local_150)) &&
               (local_12c == 0)) {
              iVar8 = 1;
              goto LAB_0054f52d;
            }
            if (local_1cc * local_188 + local_1c8 * local_184 + local_1c4 * local_180 <
                (float)_DAT_0064a698) {
              iVar8 = 3;
              goto LAB_0054f52d;
            }
            if (fVar15 <= (float)_DAT_0064a888) {
              iVar8 = 2;
              goto LAB_0054f52d;
            }
            if (local_1cc * local_17c + local_1c4 * local_174 + local_1c8 * local_178 <=
                (float)_DAT_0064a888) {
              iVar8 = 2;
              goto LAB_0054f52d;
            }
            iVar8 = local_1b0;
            if (((local_12c == 0) && ((float)_DAT_0064c0e0 < local_14c)) &&
               (local_164 < _DAT_0064b254)) {
              iVar8 = 5;
              goto LAB_0054f52d;
            }
          }
        }
      }
    }
  }
LAB_0054f4e1:
  if ((local_130 == 6) &&
     ((local_124 <= _DAT_0064b310 ||
      ((float)_DAT_0064a668 <= local_1a8 * local_184 + local_1a4 * local_180 + local_1ac * local_188
      )))) {
    iVar8 = 6;
  }
LAB_0054f52d:
  fVar15 = local_144;
  local_1c0 = *(float *)((int)local_144 + 0x1a0) - local_1ac;
  local_1bc = *(float *)((int)local_144 + 0x1a4) - local_1a8;
  pfStack_1e4 = &local_1c0;
  local_1b8 = *(float *)((int)local_144 + 0x1a8) - local_1a4;
  pfStack_1e8 = (float *)0x54f598;
  local_194 = local_1c0;
  local_190 = local_1bc;
  local_18c = local_1b8;
  fVar16 = (float10)FUN_005aabc0();
  if (fVar16 < (float10)_DAT_0064c2e8) {
    if (local_148 == 0) {
      return 0;
    }
    return local_148 + 0x10;
  }
  local_144 = (float)SQRT((fVar16 - (float10)_DAT_0064c2e8) *
                          (float10)*(float *)((int)fVar15 + 0xcc4) * (float10)_DAT_0064e760);
  if (iVar8 == 0) {
    pfStack_1e4 = (float *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x507c) = 1;
    pfStack_1e8 = (float *)0x54f60a;
    fVar16 = (float10)FUN_005aabc0();
    *(float *)(param_1 + 0x5088) = (float)(fVar16 * (float10)_DAT_0064b8f4 + (float10)_DAT_0064b440)
    ;
  }
  else {
    *(undefined4 *)(param_1 + 0x507c) = 0;
  }
  iVar11 = local_148;
  dVar1 = *(double *)(DAT_006ee15c + 0xb98);
  *(int *)(param_1 + 0x5074) = iVar8;
  *(int *)(param_1 + 0x5078) = iVar8;
  *(float *)(param_1 + 0x5094) = local_144;
  *(float *)(param_1 + 0x5084) = (float)dVar1;
  if (local_148 == 0) {
    *(undefined4 *)(param_1 + 0x5098) = 0;
    return 0;
  }
  pfStack_1e4 = *(float **)(param_1 + 0x414);
  pfStack_1e8 = (float *)0x54f661;
  uVar10 = FUN_00588ad0();
  *(undefined4 *)(param_1 + 0x5098) = uVar10;
  return iVar11 + 0x10;
}

