
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void __fastcall FUN_006192e0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  float fVar8;
  undefined8 uVar9;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108;
  float local_104;
  int local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  int local_f0;
  uint local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  iVar3 = param_1[1];
  local_84 = (float)*(double *)(iVar3 + 0xb58);
  local_80 = (float)*(double *)(iVar3 + 0xb60);
  pfVar1 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(iVar3 + 0xb70));
  local_c0 = DAT_00701580 * *pfVar1 + DAT_00701584 * pfVar1[3] + DAT_00701588 * pfVar1[6] +
             pfVar1[9];
  local_bc = DAT_00701580 * pfVar1[1] + DAT_00701584 * pfVar1[4] + DAT_00701588 * pfVar1[7] +
             pfVar1[10];
  local_e4 = local_bc * _DAT_006522a8 * _DAT_0064b324 + local_80;
  FUN_0061e749((double)((local_c0 * _DAT_006522a8 * _DAT_0064b324 + local_84) /
                       *(float *)(*param_1 + 0x38)));
  iVar2 = __ftol();
  FUN_0061e749((double)(local_e4 / *(float *)(*param_1 + 0x3c)));
  local_c4 = __ftol();
  local_118 = 0.0;
  local_114 = 0.0;
  local_110 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_94 = 0.0;
  local_10c = 1.0;
  local_ec = 0;
  pfVar1 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(param_1[1] + 0xb70));
  local_dc = DAT_00701580 * *pfVar1 + DAT_00701584 * pfVar1[3] + DAT_00701588 * pfVar1[6] +
             pfVar1[9];
  local_d8 = DAT_00701580 * pfVar1[1] + DAT_00701584 * pfVar1[4] + DAT_00701588 * pfVar1[7] +
             pfVar1[10];
  local_d4 = DAT_00701580 * pfVar1[2] + DAT_00701584 * pfVar1[5] + DAT_00701588 * pfVar1[8] +
             pfVar1[0xb];
  local_fc = local_d4 * DAT_00701594 - local_d8 * DAT_00701598;
  local_f8 = local_dc * DAT_00701598 - local_d4 * DAT_00701590;
  local_f4 = local_d8 * DAT_00701590 - local_dc * DAT_00701594;
  local_a8 = local_fc;
  local_a4 = local_f8;
  local_a0 = local_f4;
  FUN_00618f00();
  iVar3 = *param_1;
  local_100 = 0;
  if (0 < *(int *)(iVar3 + 0x30)) {
    do {
      local_108 = iVar2;
      iVar4 = 0;
      iVar2 = local_c4;
      if (0 < *(int *)(iVar3 + 0x34)) {
        do {
          local_f0 = iVar2;
          iVar3 = FUN_006166e0(local_108,iVar2,&local_9c,&local_10c,&local_ec);
          if (iVar3 != 0) {
            iVar3 = *param_1;
            local_f4 = 0.0;
            local_118 = (float)local_108 * *(float *)(iVar3 + 0x38) - _DAT_006522a8 * _DAT_0064b248;
            local_110 = 0.0;
            local_114 = (float)local_f0 * *(float *)(iVar3 + 0x3c) - _DAT_006522ac * _DAT_0064b248;
            local_8c = local_98 * _DAT_00652344;
            local_104 = *(float *)(iVar3 + 0x38);
            local_88 = local_94 * _DAT_00652344;
            local_d0 = local_9c * _DAT_00652344 * local_104;
            local_cc = local_8c * local_104;
            local_c8 = local_88 * local_104;
            local_fc = local_118;
            local_f8 = local_114;
            local_78 = local_d0;
            local_74 = local_cc;
            local_70 = local_c8;
            FUN_005aae00(&local_e8,&local_78);
            iVar3 = FUN_006162d0();
            if (iVar3 != 0) {
              fVar7 = (float10)FUN_00615f10(local_118,local_114);
              local_110 = (float)fVar7;
              if (fVar7 < (float10)_DAT_006522b8) {
                local_68 = local_d8 * _DAT_0064b248;
                local_64 = local_d4 * _DAT_0064b248;
                local_118 = local_118 - local_dc * _DAT_0064b248;
                local_114 = local_114 - local_68;
                local_110 = local_110 - local_64;
                local_b4 = local_118;
                local_b0 = local_114;
                local_ac = local_110;
                FUN_00618ea0(&local_118,&local_a8,_DAT_00684cc8 * local_10c,0x3f800000,local_ec & 1)
                ;
              }
            }
          }
          iVar4 = iVar4 + 1;
          local_f0 = iVar2 + 1;
          iVar2 = local_f0;
        } while (iVar4 < *(int *)(*param_1 + 0x34));
      }
      iVar3 = *param_1;
      local_100 = local_100 + 1;
      local_108 = local_108 + 1;
      iVar2 = local_108;
    } while (local_100 < *(int *)(iVar3 + 0x30));
  }
  FUN_004843e0();
  FUN_00618f00();
  FUN_00618f00();
  FUN_00618f00();
  FUN_00618f00();
  local_e4 = local_bc * _DAT_006522b0 * _DAT_0064b324 + local_80;
  FUN_0061e749((double)((local_c0 * _DAT_006522b0 * _DAT_0064b324 + local_84) /
                       *(float *)(*param_1 + 0x48)));
  local_100 = __ftol();
  FUN_0061e749((double)(local_e4 / *(float *)(*param_1 + 0x4c)));
  local_c4 = __ftol();
  uVar5 = 0;
  if (param_1[0xc] != 0) {
    piVar6 = param_1 + 2;
    do {
      if (*piVar6 == 0) {
        FUN_00619060();
      }
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      uVar5 = uVar5 + 1;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
    } while (uVar5 < (uint)param_1[0xc]);
  }
  iVar3 = *param_1;
  param_1[0xc] = 0;
  local_f0 = 0;
  if (0 < *(int *)(iVar3 + 0x40)) {
    local_108 = local_100;
    do {
      iVar4 = 0;
      iVar2 = local_c4;
      if (0 < *(int *)(iVar3 + 0x44)) {
        do {
          local_100 = iVar2;
          iVar3 = FUN_006166e0(local_108,iVar2,&local_9c,&local_10c,&local_ec);
          if (iVar3 != 0) {
            iVar3 = *param_1;
            local_b8 = 0;
            local_118 = (float)local_108 * *(float *)(iVar3 + 0x48) - _DAT_006522b0 * _DAT_0064b248;
            local_110 = 0.0;
            local_114 = (float)local_100 * *(float *)(iVar3 + 0x4c) - _DAT_006522b4 * _DAT_0064b248;
            local_68 = local_98 * _DAT_00652344;
            local_104 = *(float *)(iVar3 + 0x48);
            local_64 = local_94 * _DAT_00652344;
            local_b4 = local_9c * _DAT_00652344 * local_104;
            local_b0 = local_68 * local_104;
            local_ac = local_64 * local_104;
            local_c0 = local_118;
            local_bc = local_114;
            local_78 = local_b4;
            local_74 = local_b0;
            local_70 = local_ac;
            FUN_005aae00(local_3c,&local_78);
            iVar3 = FUN_006162d0();
            if (iVar3 != 0) {
              fVar7 = (float10)FUN_00615f10(local_118,local_114);
              local_110 = (float)fVar7;
              if ((float10)_DAT_006522b8 < fVar7) {
                FUN_00614a10(local_118,local_114,&local_e8);
                if ((_DAT_0064b250 <= local_e8) || (_DAT_0064b250 <= local_e4)) {
                  if (_DAT_00727798 < local_110) {
                    fVar8 = _DAT_00684cd0 * local_10c;
                    uVar9 = 0x33f800000;
                    goto LAB_00619bef;
                  }
                }
                else {
                  local_44 = local_d8 * _DAT_0064b300;
                  local_40 = local_d4 * _DAT_0064b300;
                  local_118 = local_118 - local_dc * _DAT_0064b300;
                  local_114 = local_114 - local_44;
                  local_110 = local_110 - local_40;
                  local_fc = local_118;
                  local_f8 = local_114;
                  local_f4 = local_110;
                  if (_DAT_00727798 < local_110) {
                    if (local_110 <= _DAT_00727768) {
                      if ((local_ec & 1) == 0) {
                        fVar8 = _DAT_00684cdc * local_10c;
                        uVar9 = 0x63f800000;
                      }
                      else {
                        fVar8 = _DAT_00684cd8 * local_10c;
                        uVar9 = 0x53f800000;
                      }
                    }
                    else {
                      switch(local_ec) {
                      case 0x619abb:
                    /* WARNING: This code block may not be properly labeled as switch case */
                        fVar8 = _DAT_00684cd8 * local_10c;
                        uVar9 = 0x53f800000;
                        break;
                      default:
                        goto switchD_00619ab4_default;
                      }
                    }
LAB_00619bef:
                    FUN_00618ea0(&local_118,&local_a8,fVar8,uVar9);
                    if ((((ABS(local_84 - local_118) < (float)_DAT_0064a928) &&
                         (ABS(local_80 - local_114) < (float)_DAT_0064a928)) && (param_1[0xc] != 10)
                        ) && (param_1[param_1[0xc] + 2] != 0)) {
                      if (*(int *)(param_1[param_1[0xc] + 2] + 0x2c) == 0) {
                        FUN_00619210();
                      }
                      *(byte *)(param_1[param_1[0xc] + 2] + 0x28) =
                           *(byte *)(param_1[param_1[0xc] + 2] + 0x28) & 0xfe;
                      *(undefined4 *)(param_1[param_1[0xc] + 2] + 0x34) = 0x32;
                      **(undefined4 **)(param_1[param_1[0xc] + 2] + 0x3c) = 0x41200000;
                      local_50 = DAT_00701594 * _DAT_0064b340;
                      local_4c = DAT_00701598 * _DAT_0064b340;
                      pfVar1 = *(float **)(param_1[param_1[0xc] + 2] + 0x48);
                      local_d0 = DAT_00701590 * _DAT_0064b340 + local_118;
                      local_cc = local_50 + local_114;
                      local_c8 = local_4c + local_110;
                      *pfVar1 = local_d0;
                      pfVar1[1] = local_cc;
                      pfVar1[2] = local_c8;
                      local_5c = DAT_00701594 * _DAT_0064b314;
                      local_58 = DAT_00701598 * _DAT_0064b314;
                      iVar3 = *(int *)(param_1[param_1[0xc] + 2] + 0x48);
                      local_90 = DAT_00701590 * _DAT_0064b314 + local_118;
                      local_8c = local_5c + local_114;
                      local_88 = local_58 + local_110;
                      *(float *)(iVar3 + 0xc) = local_90;
                      *(float *)(iVar3 + 0x10) = local_8c;
                      *(float *)(iVar3 + 0x14) = local_88;
                      param_1[0xc] = param_1[0xc] + 1;
                    }
                  }
                }
              }
            }
          }
switchD_00619ab4_default:
          iVar4 = iVar4 + 1;
          local_100 = iVar2 + 1;
          iVar2 = local_100;
        } while (iVar4 < *(int *)(*param_1 + 0x44));
      }
      iVar3 = *param_1;
      local_f0 = local_f0 + 1;
      local_108 = local_108 + 1;
    } while (local_f0 < *(int *)(iVar3 + 0x40));
  }
  FUN_004843e0();
  FUN_004843e0();
  FUN_004843e0();
  FUN_004843e0();
  return;
}

