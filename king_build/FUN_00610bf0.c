
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00610bf0(int param_1,uint *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [12];
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  fVar1 = (float)*param_2 * *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xb0);
  fVar2 = (float)param_2[1] * *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xbc);
  local_114 = fVar1 * *(float *)(param_1 + 0x54) + fVar2 * *(float *)(param_1 + 0x50);
  fVar7 = (float10)FUN_0060b120((fVar2 * *(float *)(param_1 + 0x54) -
                                fVar1 * *(float *)(param_1 + 0x50)) / *(float *)(param_1 + 0x3c) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x44));
  local_110 = (float)fVar7;
  fVar7 = (float10)FUN_0060b0a0(local_114 / *(float *)(param_1 + 0x38) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x40));
  local_fc = (float)(fVar7 * (float10)local_110);
  local_110 = fVar1 * *(float *)(param_1 + 0x54) + fVar2 * *(float *)(param_1 + 0x50);
  local_10c = fVar2 * *(float *)(param_1 + 0x54) - fVar1 * *(float *)(param_1 + 0x50);
  fVar7 = (float10)FUN_0060b120(local_10c / *(float *)(param_1 + 0x3c) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x44));
  local_114 = (float)fVar7;
  fVar7 = (float10)FUN_0060b120(local_110 / *(float *)(param_1 + 0x38) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x40));
  local_114 = (float)(fVar7 * (float10)local_114 * (float10)*(float *)(param_1 + 0x48));
  fVar7 = (float10)FUN_0060b0a0(local_10c / *(float *)(param_1 + 0x3c) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x44));
  local_10c = (float)fVar7;
  fVar7 = (float10)FUN_0060b0a0(local_110 / *(float *)(param_1 + 0x38) +
                                (float)*(uint *)(param_1 + 0x28) / *(float *)(param_1 + 0x40));
  fVar7 = fVar7 * (float10)local_10c * (float10)*(float *)(param_1 + 0x48);
  local_108 = (float)-((float10)local_114 * (float10)*(float *)(param_1 + 0x54) +
                      fVar7 * (float10)*(float *)(param_1 + 0x50));
  local_104 = (float)-((float10)local_114 * (float10)*(float *)(param_1 + 0x50) -
                      fVar7 * (float10)*(float *)(param_1 + 0x54));
  local_100 = *(float *)(param_1 + 0x58);
  fVar7 = (float10)FUN_004bff80(&local_108);
  local_114 = (float)SQRT(fVar7);
  FUN_004bff50(&local_120,&local_108,local_114);
  DAT_00724dd8 = local_120;
  DAT_00724ddc = local_11c;
  _DAT_00724de0 = local_118;
  local_110 = ((float)*param_2 - *(float *)(param_1 + 0x98)) / *(float *)(param_1 + 100);
  local_114 = ((float)param_2[1] - *(float *)(param_1 + 0x9c)) / *(float *)(param_1 + 0x68);
  fVar11 = local_110 / _DAT_006520a8;
  local_f4 = local_114 / _DAT_006520ac;
  FUN_0041ce10(fVar1,fVar2,local_fc * *(float *)(param_1 + 0x48));
  FUN_0041ce10(DAT_00724dd8,DAT_00724ddc,_DAT_00724de0 * _DAT_0064b2e8);
  pfVar3 = (float *)FUN_005aaad0(local_e4,&local_108);
  local_108 = *pfVar3;
  local_104 = pfVar3[1];
  local_100 = pfVar3[2];
  uVar4 = FUN_0041ce10(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc));
  uVar4 = FUN_004bde20(&local_d8,uVar4);
  pfVar3 = (float *)FUN_005aaad0(&local_f0,uVar4);
  local_120 = *pfVar3;
  local_11c = pfVar3[1];
  local_118 = pfVar3[2];
  fVar7 = (float10)FUN_004e1080(&local_108,&local_120,&local_120);
  uVar4 = FUN_004bdd80(local_e4,&local_108,0x40000000,(float)fVar7);
  uVar4 = FUN_004bdd80(&local_d8,uVar4);
  pfVar3 = (float *)FUN_004bde20(&local_f0,uVar4);
  local_120 = *pfVar3;
  local_11c = pfVar3[1];
  local_118 = pfVar3[2];
  fVar9 = _DAT_0064f3d0;
  if ((((float)_DAT_0064a738 <= ABS(local_118)) &&
      (fVar9 = _DAT_0064b240, local_118 <= _DAT_0064b240)) &&
     (fVar9 = local_118, local_118 < _DAT_0064b928)) {
    fVar9 = _DAT_0064b928;
  }
  if (_DAT_0064b928 <= local_120) {
    if (_DAT_0064b240 < local_120) {
      local_120 = 1.0;
    }
  }
  else {
    local_120 = -1.0;
  }
  local_f8 = (local_120 * _DAT_0065210c) / ABS(fVar9) + _DAT_0064b248;
  local_10c = (local_11c * _DAT_0065210c) / ABS(fVar9) + _DAT_0064b248;
  if ((_DAT_006520b4 < local_fc) && (iVar5 = FUN_00612940(), iVar5 != 0)) {
    local_120 = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x50) +
                *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x54);
    local_118 = 0.0;
    local_100 = 0.0;
    local_58 = 0;
    local_70 = 0;
    local_11c = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x54) -
                *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x50);
    local_c4 = 0;
    local_40 = 0;
    local_60 = fVar1 - _DAT_0064b240;
    local_ac = 0;
    local_64 = 0;
    local_94 = 0;
    local_78 = fVar1 + _DAT_0064b240;
    local_34 = 0;
    local_7c = 0;
    local_4c = 0;
    local_cc = fVar1 + _DAT_0064b3fc;
    local_b8 = 0;
    local_48 = fVar1 - _DAT_0064b3fc;
    local_b4 = fVar1 + _DAT_0064c2e8;
    local_6c = fVar1 - _DAT_0064c2e8;
    local_9c = fVar1 + _DAT_0064b3f8;
    local_3c = fVar1 - _DAT_0064b3f8;
    local_84 = fVar1 - _DAT_0064b310;
    local_54 = fVar1 + _DAT_0064b310;
    local_c0 = fVar1 + _DAT_0064b2ec;
    local_a8 = fVar1 - _DAT_0064b2ec;
    local_90 = fVar1 + _DAT_0064c340;
    local_a0 = 0;
    local_f0 = fVar1 - _DAT_0064c340;
    local_88 = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_d8 = fVar1 + _DAT_0064b480;
    local_108 = fVar1;
    local_104 = fVar2;
    local_ec = fVar2;
    local_d4 = fVar2;
    local_c8 = fVar2;
    local_bc = fVar2;
    local_b0 = fVar2;
    local_a4 = fVar2;
    local_98 = fVar2;
    local_8c = fVar2;
    local_80 = fVar2;
    local_74 = fVar2;
    local_68 = fVar2;
    local_5c = fVar2;
    local_50 = fVar2;
    local_44 = fVar2;
    local_38 = fVar2;
    FUN_0041ce10(fVar1 - _DAT_0064b480,fVar2,0);
    FUN_00612570(&local_108,&local_120);
    FUN_00612570(&local_60,&local_120);
    FUN_00612570(&local_78,&local_120);
    FUN_00612570(&local_cc,&local_120);
    FUN_00612570(&local_48,&local_120);
    FUN_00612570(&local_b4,&local_120);
    FUN_00612570(&local_6c,&local_120);
    FUN_00612570(&local_9c,&local_120);
    FUN_00612570(&local_3c,&local_120);
    FUN_00612570(&local_84,&local_120);
    FUN_00612570(&local_54,&local_120);
    FUN_00612570(&local_c0,&local_120);
    FUN_00612570(&local_a8,&local_120);
    FUN_00612570(&local_90,&local_120);
    FUN_00612570(&local_f0,&local_120);
    FUN_00612570(&local_d8,&local_120);
    FUN_00612570(local_e4,&local_120);
  }
  puVar8 = &DAT_00724dd8;
  fVar9 = local_110;
  fVar10 = local_114;
  fVar12 = local_f4;
  fVar13 = local_f8;
  fVar14 = local_10c;
  uVar4 = FUN_0041ce10(fVar1,fVar2,local_fc * *(float *)(param_1 + 0x48));
  puVar8 = (undefined4 *)FUN_00610b90(uVar4,puVar8,fVar9,fVar10,fVar11,fVar12,fVar13,fVar14);
  puVar6 = (undefined4 *)((param_3 & 0xffff) * 0x30 + *(int *)(param_1 + 0x7c));
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}

