
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bf7a0(int param_1,float param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  int local_118;
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
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = FUN_0057d570(local_30);
  fVar1 = *(float *)(iVar4 + 0x2c);
  puVar2 = *(undefined4 **)(param_1 + 0x80);
  puVar8 = (undefined4 *)0x0;
  while (puVar7 = puVar2, puVar7 != (undefined4 *)0x0) {
    local_130 = param_2 * (float)puVar7[5];
    local_12c = param_2 * (float)puVar7[6];
    puVar7[1] = param_2 * (float)puVar7[4] + (float)puVar7[1];
    puVar7[2] = local_130 + (float)puVar7[2];
    puVar7[3] = local_12c + (float)puVar7[3];
    puVar7[7] = (float)puVar7[7] - param_2 * *(float *)(param_1 + 0x10);
    if (((float)puVar7[3] <= fVar1 - *(float *)(param_1 + 0x38)) ||
       ((float)puVar7[7] <= _DAT_0064b254)) {
      puVar2 = (undefined4 *)*puVar7;
      *puVar7 = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 **)(param_1 + 0x7c) = puVar7;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = puVar2;
      }
      if (puVar7 == *(undefined4 **)(param_1 + 0x80)) {
        *(undefined4 **)(param_1 + 0x80) = puVar2;
      }
    }
    else {
      puVar7[6] = (float)puVar7[6] - param_2 * *(float *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      puVar2 = (undefined4 *)*puVar7;
      puVar8 = puVar7;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    local_f0 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 100);
    local_108 = 0.0;
    local_104 = 0.0;
    local_100 = 1.0;
    local_ec = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x68);
    local_e8 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x6c);
    FUN_004bdd80(&local_d8,&DAT_00701580,*(undefined4 *)(DAT_00701518 + 0x214));
    local_fc = local_d8;
    local_f8 = local_d4;
    local_f4 = local_d0;
    pfVar5 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(*(int *)(param_1 + 0x88) + 0xb70));
    local_134 = DAT_00701580 * *pfVar5 + DAT_00701584 * pfVar5[3] + DAT_00701588 * pfVar5[6] +
                pfVar5[9];
    local_130 = DAT_00701580 * pfVar5[1] + DAT_00701584 * pfVar5[4] + DAT_00701588 * pfVar5[7] +
                pfVar5[10];
    local_12c = DAT_00701580 * pfVar5[2] + DAT_00701584 * pfVar5[5] + DAT_00701588 * pfVar5[8] +
                pfVar5[0xb];
    local_114 = DAT_00701598 * local_130 - DAT_00701594 * local_12c;
    local_110 = DAT_00701590 * local_12c - DAT_00701598 * local_134;
    local_10c = DAT_00701594 * local_134 - DAT_00701590 * local_130;
    local_120 = local_130;
    local_11c = local_12c;
    fVar9 = (float10)FUN_004bff80(&local_134);
    FUN_004bff50(local_54,&local_134,(float)SQRT(fVar9));
    local_134 = local_114;
    local_130 = local_110;
    local_12c = local_10c;
    fVar9 = (float10)FUN_004bff80(&local_134);
    FUN_004bff50(local_3c,&local_134,(float)SQRT(fVar9));
    pfVar5 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(*(int *)(param_1 + 0x88) + 0xb70));
    FUN_0041ce10(*(float *)(param_1 + 0x44) * *pfVar5 +
                 pfVar5[6] * *(float *)(param_1 + 0x4c) + pfVar5[3] * *(float *)(param_1 + 0x48) +
                 pfVar5[9],
                 pfVar5[7] * *(float *)(param_1 + 0x4c) +
                 pfVar5[1] * *(float *)(param_1 + 0x44) + pfVar5[4] * *(float *)(param_1 + 0x48) +
                 pfVar5[10],
                 pfVar5[8] * *(float *)(param_1 + 0x4c) +
                 pfVar5[2] * *(float *)(param_1 + 0x44) + pfVar5[5] * *(float *)(param_1 + 0x48) +
                 pfVar5[0xb]);
    pfVar5 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(*(int *)(param_1 + 0x88) + 0xb70));
    FUN_0041ce10(*pfVar5 * *(float *)(param_1 + 0x50) +
                 pfVar5[6] * *(float *)(param_1 + 0x58) + pfVar5[3] * *(float *)(param_1 + 0x54) +
                 pfVar5[9],
                 pfVar5[7] * *(float *)(param_1 + 0x58) +
                 pfVar5[4] * *(float *)(param_1 + 0x54) + pfVar5[1] * *(float *)(param_1 + 0x50) +
                 pfVar5[10],
                 pfVar5[8] * *(float *)(param_1 + 0x58) +
                 pfVar5[5] * *(float *)(param_1 + 0x54) + pfVar5[2] * *(float *)(param_1 + 0x50) +
                 pfVar5[0xb]);
    local_124 = local_cc;
    local_120 = local_c8;
    local_11c = local_c4;
    local_114 = local_b4;
    local_110 = local_b0;
    local_10c = local_ac;
    local_128 = param_2;
    if (_DAT_0064b254 < param_2) {
      do {
        if (local_128 <= *(float *)(param_1 + 0x14)) {
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x78);
          *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - local_128;
          return;
        }
        fVar1 = *(float *)(param_1 + 0x14);
        FUN_0041ce10(fVar1 * local_f0,local_ec * fVar1,local_e8 * fVar1);
        FUN_0041ce10(local_134 / param_2,local_130 / param_2,local_12c / param_2);
        *(float *)(param_1 + 100) = local_e4 + *(float *)(param_1 + 100);
        *(float *)(param_1 + 0x68) = local_e0 + *(float *)(param_1 + 0x68);
        *(float *)(param_1 + 0x6c) = local_dc + *(float *)(param_1 + 0x6c);
        local_128 = local_128 - *(float *)(param_1 + 0x14);
        puVar2 = *(undefined4 **)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
        if ((puVar2 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)))
        {
          fVar1 = *(float *)(param_1 + 0x34);
          *(undefined4 *)(param_1 + 0x7c) = *puVar2;
          FUN_0041ce10(fVar1 * local_108,local_104 * fVar1,local_100 * fVar1);
          FUN_0041ce10(local_c0 + *(float *)(param_1 + 100),local_bc + *(float *)(param_1 + 0x68),
                       local_b8 + *(float *)(param_1 + 0x6c));
          puVar8 = puVar2 + 1;
          *puVar8 = local_a8;
          puVar2[2] = local_a4;
          puVar2[3] = local_a0;
          iVar4 = _rand();
          fVar1 = (_DAT_0064b240 - *(float *)(param_1 + 0x5c)) * (float)iVar4 * _DAT_0064b244 +
                  *(float *)(param_1 + 0x5c);
          local_118 = _rand();
          fVar3 = (_DAT_0064b240 - *(float *)(param_1 + 0x5c)) * (float)local_118 * _DAT_0064b244 +
                  *(float *)(param_1 + 0x5c);
          FUN_0041ce10(local_114 * fVar3,local_110 * fVar3,local_10c * fVar3);
          FUN_0041ce10(local_124 * fVar1,local_120 * fVar1,local_11c * fVar1);
          uVar6 = FUN_004bfef0(local_78,puVar8,local_90,local_84);
          puVar7 = (undefined4 *)FUN_004bfef0(local_6c,uVar6);
          *puVar8 = *puVar7;
          puVar2[2] = puVar7[1];
          uVar6 = puVar7[2];
          puVar2[7] = 0x3f800000;
          puVar2[3] = uVar6;
          fVar1 = *(float *)(param_1 + 0x20);
          FUN_0041ce10(fVar1 * local_fc,local_f8 * fVar1,local_f4 * fVar1);
          puVar10 = local_9c;
          pfVar5 = &local_108;
          local_118 = _rand();
          uVar6 = FUN_004bff20(local_60,((float)local_118 * _DAT_0064b47c + _DAT_0064b240) *
                                        *(float *)(param_1 + 0x18),pfVar5,puVar10);
          puVar8 = (undefined4 *)FUN_004bfef0(local_48,uVar6);
          puVar2[4] = *puVar8;
          puVar2[5] = puVar8[1];
          puVar2[6] = puVar8[2];
          *puVar2 = *(undefined4 *)(param_1 + 0x80);
          *(undefined4 **)(param_1 + 0x80) = puVar2;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
      } while (_DAT_0064b254 < local_128);
    }
  }
  return;
}

