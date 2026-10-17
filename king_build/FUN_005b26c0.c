
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b26c0(int param_1,byte *param_2,float param_3,float param_4,float param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float10 fVar15;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  byte *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  undefined1 local_6c [12];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  uVar14 = 0;
  local_f0 = 0.0;
  local_ec = 0.0;
  local_e8 = 0.0;
  local_e4 = 0.0;
  local_e0 = 0.0;
  local_dc = 0.0;
  if ((*(int *)(param_1 + 0x79c) != 0) && (iVar6 = thunk_FUN_005b5b70(), iVar6 != 0)) {
    local_c0 = 0;
    iVar6 = *(int *)(param_2 + 0x24);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x2044) + *(short *)(param_2 + 0x20) * 0x7c;
    }
    local_a0 = 1.0;
    if ((*(byte *)(iVar6 + 0x20) & 0x20) != 0) {
      local_a0 = _DAT_0064b240 - *(float *)(iVar6 + 0x58);
    }
    local_c4 = iVar6;
    if ((DAT_00701968 & 1) == 0) {
      DAT_00701968 = DAT_00701968 | 1;
      FUN_0061c439(&DAT_005b3040);
    }
    if (DAT_0071f868 == (int *)0x0) {
      FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
      if (param_4 <= _DAT_0064b240) {
        return;
      }
      if ((float)*(double *)(param_1 + 0x2118) <= param_4) {
        return;
      }
      local_d4 = DAT_00701590 * *(float *)(param_1 + 0x1070) +
                 DAT_00701594 * *(float *)(param_1 + 0x107c) +
                 DAT_00701598 * *(float *)(param_1 + 0x1088);
      local_d0 = DAT_00701590 * *(float *)(param_1 + 0x1074) +
                 DAT_00701594 * *(float *)(param_1 + 0x1080) +
                 DAT_00701598 * *(float *)(param_1 + 0x108c);
      local_cc = DAT_00701590 * *(float *)(param_1 + 0x1078) +
                 DAT_00701594 * *(float *)(param_1 + 0x1084) +
                 DAT_00701598 * *(float *)(param_1 + 0x1090);
      local_bc = local_cc * DAT_00701584 - local_d0 * DAT_00701588;
      local_b8 = local_d4 * DAT_00701588 - local_cc * DAT_00701580;
      local_b4 = local_d0 * DAT_00701580 - local_d4 * DAT_00701584;
      local_b0 = local_bc;
      local_ac = local_b8;
      local_a8 = local_b4;
      pfVar9 = (float *)FUN_005aaad0(&local_9c,&local_bc);
      local_f0 = *pfVar9;
      local_ec = pfVar9[1];
      local_e8 = pfVar9[2];
    }
    else {
      iVar7 = *(int *)(param_1 + 0x2020) * 0x30;
      iVar10 = iVar7 + 0x8c0 + param_1;
      fVar2 = param_4 * *(float *)(iVar10 + 0x10) +
              param_3 * *(float *)(iVar7 + 0x8c4 + param_1) +
              param_5 * *(float *)(iVar7 + 0x8dc + param_1) + *(float *)(iVar10 + 0x28);
      if (fVar2 <= _DAT_0064b240) {
        return;
      }
      if ((float)*(double *)(param_1 + 0x2118) <= fVar2) {
        return;
      }
      local_cc = DAT_00701598;
      local_d0 = DAT_00701594;
      local_d4 = DAT_00701590;
      uVar8 = FUN_005ab130(local_60,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1,
                           param_1 + 0x1070);
      pfVar9 = (float *)FUN_005aba00(local_30,uVar8);
      local_e4 = DAT_00701580 * *pfVar9 + DAT_00701584 * pfVar9[3] + DAT_00701588 * pfVar9[6];
      local_e0 = DAT_00701580 * pfVar9[1] + DAT_00701584 * pfVar9[4] + DAT_00701588 * pfVar9[7];
      local_dc = DAT_00701580 * pfVar9[2] + DAT_00701584 * pfVar9[5] + DAT_00701588 * pfVar9[8];
      pfVar9 = (float *)FUN_005aaad0(&local_9c,&local_e4);
      local_e4 = *pfVar9;
      local_e0 = pfVar9[1];
      local_dc = pfVar9[2];
      local_f0 = local_e0 * local_cc - local_dc * local_d0;
      local_ec = local_dc * local_d4 - local_e4 * local_cc;
      local_e8 = local_e4 * local_d0 - local_e0 * local_d4;
      fVar15 = (float10)FUN_005aabc0(&local_f0);
      if ((float10)_DAT_0064a738 <= fVar15) {
        pfVar9 = (float *)FUN_005aaad0(&local_9c,&local_f0);
        local_f0 = *pfVar9;
        local_ec = pfVar9[1];
        local_e8 = pfVar9[2];
      }
      else {
        local_f0 = DAT_007015a0;
        local_ec = DAT_007015a4;
        local_e8 = DAT_007015a8;
      }
      if ((param_2[1] & 1) != 0) {
        local_bc = local_ec * local_dc - local_e0 * local_e8;
        local_b8 = local_e4 * local_e8 - local_dc * local_f0;
        local_b4 = local_e0 * local_f0 - local_ec * local_e4;
        pfVar9 = (float *)FUN_005aaad0(&local_9c,&local_bc);
        local_d4 = *pfVar9;
        local_d0 = pfVar9[1];
        local_cc = pfVar9[2];
      }
    }
    iVar10 = thunk_FUN_005b5b70();
    local_a4 = (byte *)(iVar10 + (*(int *)(iVar6 + 0x28) + 8) * 3);
    uVar12 = (uint)*(ushort *)(param_2 + 4);
    uVar11 = local_c0;
    if (uVar12 != 0) {
      local_d8 = (float *)&DAT_007019fc;
      do {
        if (DAT_0071f868 == (int *)0x0) {
          uVar11 = uVar14;
          if (DAT_007229e8 != 0) {
            uVar11 = (uVar12 - uVar14) - 1;
          }
          iVar6 = param_1 + uVar11 * 0xc;
          *(float *)(param_1 + (uVar11 * 3 + 0x132) * 4) =
               (local_f0 * *(float *)(*(int *)(param_2 + 0x10) + uVar14 * 4) +
               local_d4 * *(float *)(*(int *)(param_2 + 0x14) + uVar14 * 4)) *
               *(float *)(*(int *)(param_1 + 0x2024) * 0x30 + 0x10a0 + param_1) + param_3;
          *(float *)(iVar6 + 0x4cc) =
               local_d0 * *(float *)(*(int *)(param_2 + 0x14) + uVar14 * 4) + param_4;
          *(float *)(iVar6 + 0x4d0) =
               (local_e8 * *(float *)(*(int *)(param_2 + 0x10) + uVar14 * 4) +
               local_cc * *(float *)(*(int *)(param_2 + 0x14) + uVar14 * 4)) *
               *(float *)(*(int *)(param_1 + 0x2024) * 0x30 + 0x10c0 + param_1) + param_5;
          if ((*param_2 & 2) != 0) {
            *(undefined4 *)(param_1 + 0x5d0 + uVar11 * 4) =
                 *(undefined4 *)(*(int *)(param_2 + 8) + uVar14 * 4);
            *(undefined4 *)(param_1 + 0x628 + uVar11 * 4) =
                 *(undefined4 *)(*(int *)(param_2 + 0xc) + uVar14 * 4);
          }
          *(uint *)(param_1 + 0x6dc + uVar11 * 4) = uVar11;
        }
        else {
          fVar2 = *(float *)(*(int *)(param_2 + 0x14) + uVar14 * 4);
          local_90 = fVar2 * local_d4;
          local_8c = fVar2 * local_d0;
          fVar3 = *(float *)(*(int *)(param_2 + 0x10) + uVar14 * 4);
          local_78 = fVar3 * local_f0;
          local_74 = local_ec * fVar3;
          local_84 = local_78 + param_3;
          local_80 = local_74 + param_4;
          fVar4 = local_84 + local_90;
          fVar5 = local_8c + local_80;
          fVar2 = fVar2 * local_cc + fVar3 * local_e8 + param_5;
          local_b0 = fVar4;
          local_ac = fVar5;
          local_a8 = fVar2;
          if (*(int *)(param_2 + 0x18) != 0) {
            local_b4 = *(float *)(*(int *)(param_2 + 0x18) + uVar14 * 4);
            local_bc = local_b4 * local_e4;
            local_b8 = local_e0 * local_b4;
            local_b4 = local_dc * local_b4;
            local_9c = local_bc;
            local_98 = local_b8;
            local_94 = local_b4;
            FUN_005aae00(local_6c,&local_9c);
          }
          local_d8[-1] = fVar4;
          *local_d8 = fVar5;
          local_d8[1] = fVar2;
          if ((*param_2 & 2) != 0) {
            local_d8[5] = *(float *)(*(int *)(param_2 + 8) + uVar14 * 4);
            local_d8[6] = *(float *)(*(int *)(param_2 + 0xc) + uVar14 * 4);
          }
          if ((*(uint *)(iVar6 + 0x20) & 1) == 0) {
            iVar10 = thunk_FUN_005b5b70();
            pbVar1 = (byte *)(iVar10 + 0x18 + *(int *)(iVar6 + 0x28) * 3);
            local_d8[3] = (float)((uint)pbVar1[2] * 0xff | (uint)pbVar1[1] * 0xff00 |
                                  (uint)*pbVar1 * -0x10000 | 0xff000000);
          }
          else if ((*(uint *)(iVar6 + 0x20) & 0x1000) == 0) {
            iVar6 = __ftol();
            local_d8[3] = (float)(iVar6 << 0x18 | 0xffffff);
          }
          else {
            local_c8 = (uint)*local_a4;
            uVar11 = __ftol();
            iVar6 = __ftol();
            local_c8 = (uint)local_a4[1];
            uVar12 = __ftol();
            local_c8 = (uint)local_a4[2];
            uVar13 = __ftol();
            local_d8[3] = (float)(((uVar11 | iVar6 << 8) << 8 | uVar12) << 8 | uVar13);
          }
          uVar11 = uVar14 + 1;
          local_d8[4] = -1.7014118e+38;
        }
        uVar14 = uVar14 + 1;
        uVar12 = (uint)*(ushort *)(param_2 + 4);
        local_d8 = local_d8 + 8;
        iVar6 = local_c4;
      } while ((int)uVar14 < (int)uVar12);
    }
    *(uint *)(param_1 + 0x78c) = uVar14;
    if (DAT_0071f864 == 0) {
      if ((*(byte *)(local_c4 + 0x20) & 1) == 0) {
        uVar14 = local_c0 & 0xff;
      }
      else {
        uVar14 = 0x20;
      }
      if ((uVar14 & 0x20) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = -(uint)(*(int *)(*(int *)(local_c4 + 0x4c) + 8) != 0) & 0x23;
      }
      if ((uVar14 & 0x20) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_c4 + 0x4c);
        if ((*(byte *)(iVar6 + 0x34) & 0x10) != 0) {
          local_c0 = (uint)*(ushort *)(iVar6 + 0x14);
          FUN_005b30b0(local_c4,uVar14 | 0x100,0,
                       ((float)local_c0 * *(float *)(param_1 + 0x6d8)) /
                       (param_4 * *(float *)(param_2 + 0x1c)),iVar6);
          return;
        }
      }
      FUN_005b30b0(local_c4,uVar14,0,0,iVar6);
      return;
    }
    iVar6 = thunk_FUN_005b5b70();
    if (iVar6 != 0) {
      FUN_005b06d0(local_c4,0,0,0);
      (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,6,0x1e2,&DAT_007019f8,uVar11,0);
      return;
    }
  }
  return;
}

