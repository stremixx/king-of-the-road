
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00619f60(int param_1,int *param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  undefined4 *local_140;
  undefined4 *local_13c;
  int iStack_134;
  uint uStack_130;
  uint local_12c;
  uint uStack_128;
  undefined4 *puStack_118;
  uint uStack_114;
  int iStack_110;
  uint local_fc;
  int local_f0;
  int local_ec;
  int local_e8;
  float local_e0;
  float local_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [40];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064991a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar15 = __ftol();
  iVar16 = __ftol();
  uVar27 = iVar16 * iVar15;
  piVar17 = (int *)FUN_00631d33(0x9d0c);
  local_4 = 0;
  if (piVar17 == (int *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x70);
    iVar25 = *(int *)(param_1 + 0x6c);
    *piVar17 = (int)&PTR_LAB_00652398;
    piVar17[0xc] = 0;
    piVar17[0xb] = 0;
    piVar17[10] = 0;
    piVar18 = (int *)FUN_0041ce10(0,0,0);
    piVar17[1] = *piVar18;
    piVar17[2] = piVar18[1];
    piVar17[3] = piVar18[2];
    piVar18 = (int *)FUN_0041ce10(0,0,0);
    piVar17[4] = *piVar18;
    piVar17[5] = piVar18[1];
    piVar17[6] = piVar18[2];
    piVar18 = (int *)FUN_0041ce10(0,0,0);
    piVar17[7] = *piVar18;
    piVar17[8] = piVar18[1];
    iVar28 = piVar18[2];
    *piVar17 = (int)&PTR_FUN_0065237c;
    piVar17[9] = iVar28;
    piVar17[0x2741] = iVar25;
    piVar17[0x2742] = iVar3;
    piVar17[0x1a] = 0;
    piVar17[0x19] = 0;
    piVar17[0x2740] = 0;
    piVar17[0x272d] = 1;
  }
  fVar7 = param_3 / (float)(uint)(iVar15 << 8);
  piVar17[0x272e] = (int)param_3;
  piVar17[0x272f] = (int)param_4;
  local_4 = 0xffffffff;
  piVar17[0x2730] = *param_2;
  piVar17[0x2731] = param_2[1];
  piVar17[0x2736] = (int)fVar7;
  fVar8 = param_4 / (float)(uint)(iVar16 << 8);
  param_3 = param_3 * _DAT_0064b248;
  piVar17[0x2732] = (int)((float)piVar17[0x2730] - param_3);
  piVar17[0x2733] = (int)(param_3 + (float)piVar17[0x2730]);
  param_4 = param_4 * _DAT_0064b248;
  piVar17[0x2734] = (int)(param_4 + (float)piVar17[0x2731]);
  piVar17[0x2735] = (int)((float)piVar17[0x2731] - param_4);
  piVar17[0x2737] = (int)fVar8;
  fVar9 = _DAT_0064b254;
  local_dc = _DAT_0064b254;
  local_e0 = _DAT_0064b254;
  piVar17[0x2738] = (int)(fVar7 * _DAT_0064b248);
  fVar8 = fVar8 * _DAT_0064b248;
  piVar17[0x2739] = (int)fVar9;
  piVar17[0x273a] = (int)fVar9;
  FUN_0041ce10(0,fVar8,0);
  piVar17[0x273b] = local_f0;
  piVar17[0x273c] = local_ec;
  piVar17[0x273d] = local_e8;
  piVar17[0xd] = 0x41c00000;
  piVar17[0xe] = 0x41c00000;
  (**(code **)(*piVar17 + 8))(iVar15 << 8,iVar16 << 8);
  *(int **)(param_1 + 4) = piVar17;
  uVar26 = uVar27;
  uVar19 = FUN_00606980(uVar27);
  FUN_0060bbe0(uVar19,uVar26);
  uVar26 = uVar27;
  uVar19 = FUN_00606980(uVar27);
  FUN_0060bcb0(uVar19,uVar26);
  uVar26 = 0;
  if (uVar27 != 0) {
    do {
      puVar20 = (undefined4 *)FUN_00631d33(0x14);
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = (undefined4 *)0x0;
      }
      else {
        puVar20[2] = 0;
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar20[3] = 0;
      }
      *(undefined4 **)(*(int *)(param_1 + 8) + uVar26 * 4) = puVar20;
      if (puVar20 == (undefined4 *)0x0) {
        ExceptionList = pvStack_14;
        return 0;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < uVar27);
  }
  puVar20 = _malloc(0);
  puVar21 = _malloc(iStack_134 * 4);
  if ((puVar20 == (undefined4 *)0x0) || (puVar21 == (undefined4 *)0x0)) {
    FUN_0060a190(0x88762714,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_tgreed_c_00684d64,0x29,s_Mar_19_2002_006714f8);
  }
  uStack_130 = 0;
  local_13c = puVar20;
  do {
    local_12c = 0;
    local_140 = local_13c;
    do {
      local_dc = (float)(local_12c << 8);
      local_e0 = (float)(uStack_130 << 8);
      puVar22 = (undefined4 *)FUN_00608330(auStack_3c,&local_e0);
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
      for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar23 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar23 = puVar23 + 1;
      }
      uVar19 = FUN_0061af60(&local_e0,*(undefined2 *)(param_1 + 0x28));
      *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
      *local_140 = uVar19;
      local_140 = local_140 + uStack_128 + 1;
      local_12c = local_12c + 1;
    } while (local_12c <= uStack_114);
    local_13c = local_13c + 1;
    uStack_130 = uStack_130 + 1;
  } while (uStack_130 <= uStack_128);
  iVar15 = 0;
  uStack_130 = 1;
  if (uStack_128 != 0) {
    local_140 = (undefined4 *)(uStack_128 * 4 + 8);
    do {
      local_fc = 1;
      if (uStack_114 != 0) {
        uStack_d8 = uStack_130 & 1;
        puStack_118 = puVar21 + iVar15;
        iVar15 = iVar15 + uStack_114 * 2;
        puVar22 = local_140;
        do {
          if ((local_fc & 1) == uStack_d8) {
            puVar23 = (undefined4 *)((int)puVar22 + -4 + (int)puVar20);
            uVar19 = FUN_00607bf0(*(undefined4 *)
                                   ((int)puVar22 + uStack_128 * -4 + -4 + (int)puVar20),
                                  *(undefined4 *)
                                   ((int)puVar22 + uStack_128 * -4 + -8 + (int)puVar20),*puVar23,0);
            *puStack_118 = uVar19;
            uVar19 = FUN_00607bf0(*puVar23,*(undefined4 *)((int)puVar22 + (int)puVar20),
                                  *(undefined4 *)
                                   ((int)puVar22 + uStack_128 * -4 + -4 + (int)puVar20),0);
            puStack_118[1] = uVar19;
          }
          else {
            puVar4 = *(ushort **)((int)puVar22 + uStack_128 * -4 + -8 + (int)puVar20);
            puVar5 = *(ushort **)((int)puVar22 + uStack_128 * -4 + -4 + (int)puVar20);
            puVar6 = *(ushort **)((int)puVar22 + (int)puVar20);
            puVar23 = (undefined4 *)FUN_00631d33(0x4c);
            pvStack_c = (void *)0x1;
            if (puVar23 == (undefined4 *)0x0) {
              puVar23 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar23 + 1;
              puVar23[2] = puVar1;
              *puVar1 = puVar1;
              FUN_00608110();
              *puVar23 = &PTR_FUN_00651ef0;
              puVar23[0x11] = 0;
              puVar23[0x10] = 0;
              puVar23[0xf] = 0;
              puVar23[0x12] = 0;
              puVar23[0xe] = 0;
            }
            pvStack_c = (void *)0xffffffff;
            if (puVar23 == (undefined4 *)0x0) {
              puVar23 = (undefined4 *)0x0;
            }
            else {
              puVar23[4] = puVar6;
              puVar23[5] = puVar5;
              puVar23[6] = puVar4;
              puVar23[9] = 0;
              iVar16 = *(int *)(param_1 + 0xc);
              iVar25 = (uint)*puVar6 * 0x10 + iVar16;
              uStack_94 = 0;
              iVar28 = (uint)*puVar5 * 0x10 + iVar16;
              iVar16 = (uint)*puVar4 * 0x10 + iVar16;
              puVar24 = (uint *)(iVar16 + 8);
              iStack_98 = *(int *)(iVar25 + 8) + *puVar24;
              uVar19 = __ftol();
              uStack_7c = 0;
              iStack_80 = *(int *)(iVar16 + 0xc) + *(int *)(iVar25 + 0xc);
              uStack_c4 = __ftol();
              iVar3 = *(int *)(param_1 + 4);
              uStack_50 = *(uint *)(iVar25 + 8);
              uStack_4c = 0;
              uStack_68 = *(uint *)(iVar25 + 0xc);
              uStack_64 = 0;
              uStack_b4 = 0;
              uStack_b8 = *(uint *)(iVar28 + 8);
              uStack_74 = 0;
              uStack_78 = *(uint *)(iVar28 + 0xc);
              fVar7 = (float)uStack_50 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              uStack_a4 = 0;
              uStack_a8 = *puVar24;
              fVar8 = (float)uStack_68 * *(float *)(iVar3 + 0x9cdc) + *(float *)(iVar3 + 0x9cd4);
              fVar9 = (float)uStack_b8 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              fVar10 = (float)uStack_78 * *(float *)(iVar3 + 0x9cdc) + *(float *)(iVar3 + 0x9cd4);
              uStack_6c = 0;
              uStack_70 = *(uint *)(iVar16 + 0xc);
              fVar11 = (float)uStack_a8 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              fVar12 = (float)uStack_70 * *(float *)(iVar3 + 0x9cdc) + *(float *)(iVar3 + 0x9cd4);
              fVar13 = (fVar11 + fVar9 + fVar7) * _DAT_0064b8f4;
              fVar14 = (fVar12 + fVar10 + fVar8) * _DAT_0064b8f4;
              fVar8 = fVar8 - fVar14;
              fVar7 = fVar7 - fVar13;
              fVar8 = fVar8 * fVar8 + fVar7 * fVar7;
              fVar10 = fVar10 - fVar14;
              fVar9 = fVar9 - fVar13;
              fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
              if (fVar8 <= fVar7) {
                fVar8 = fVar7;
              }
              fVar12 = fVar12 - fVar14;
              fVar11 = fVar11 - fVar13;
              fVar7 = fVar12 * fVar12 + fVar11 * fVar11;
              if (fVar8 <= fVar7) {
                fVar8 = fVar7;
              }
              puVar23[0xb] = fVar13;
              puVar23[0xc] = fVar14;
              puVar23[0xd] = SQRT(fVar8);
              uStack_c8 = uVar19;
              fVar29 = (float10)FUN_00614960(*(undefined4 *)(iVar25 + 8),
                                             *(undefined4 *)(iVar25 + 0xc));
              fVar30 = (float10)FUN_0061b350(puVar24);
              fVar32 = (float10)_DAT_0064b248;
              fVar31 = (float10)FUN_0061b350(&uStack_c8);
              fVar31 = (float10)(float)((fVar30 + (float10)(float)fVar29) * fVar32) - fVar31;
              if (fVar31 < (float10)_DAT_0064b254) {
                fVar31 = -fVar31;
              }
              puVar23[8] = (float)fVar31;
              *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
              fVar32 = (float10)FUN_0061b0d0(puVar23 + 3);
              puVar23[7] = (float)fVar32;
              FUN_00612a00(puVar23);
            }
            *puStack_118 = puVar23;
            puVar4 = *(ushort **)((int)puVar22 + -4 + (int)puVar20);
            puVar5 = *(ushort **)((int)puVar22 + (int)puVar20);
            puVar6 = *(ushort **)((int)puVar22 + uStack_128 * -4 + -8 + (int)puVar20);
            puVar23 = (undefined4 *)FUN_00631d33(0x4c);
            pvStack_c = (void *)0x2;
            if (puVar23 == (undefined4 *)0x0) {
              puVar23 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar23 + 1;
              puVar23[2] = puVar1;
              *puVar1 = puVar1;
              FUN_00608110();
              *puVar23 = &PTR_FUN_00651ef0;
              puVar23[0x11] = 0;
              puVar23[0x10] = 0;
              puVar23[0xf] = 0;
              puVar23[0x12] = 0;
              puVar23[0xe] = 0;
            }
            pvStack_c = (void *)0xffffffff;
            if (puVar23 == (undefined4 *)0x0) {
              puStack_118[1] = 0;
            }
            else {
              puVar23[4] = puVar6;
              puVar23[5] = puVar4;
              puVar23[6] = puVar5;
              puVar23[9] = 0;
              iVar16 = *(int *)(param_1 + 0xc);
              uStack_5c = 0;
              iVar25 = (uint)*puVar4 * 0x10 + iVar16;
              iVar28 = (uint)*puVar6 * 0x10 + iVar16;
              iVar16 = (uint)*puVar5 * 0x10 + iVar16;
              iStack_60 = *(int *)(iVar28 + 0xc) + *(int *)(iVar16 + 0xc);
              uVar19 = __ftol();
              puVar24 = (uint *)(iVar28 + 8);
              uStack_84 = 0;
              puVar2 = (uint *)(iVar16 + 8);
              iStack_88 = *puVar2 + *puVar24;
              uStack_48 = __ftol();
              iVar3 = *(int *)(param_1 + 4);
              uStack_58 = *puVar24;
              uStack_54 = 0;
              uStack_c0 = *(uint *)(iVar28 + 0xc);
              uStack_bc = 0;
              uStack_b0 = *(uint *)(iVar25 + 8);
              uStack_ac = 0;
              uStack_a0 = *(uint *)(iVar25 + 0xc);
              fVar11 = (float)uStack_58 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              uStack_9c = 0;
              uStack_90 = *puVar2;
              fVar13 = (float)uStack_c0 * *(float *)(iVar3 + 0x9cdc) + *(float *)(iVar3 + 0x9cd4);
              fVar7 = (float)uStack_b0 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              fVar8 = (float)uStack_a0 * *(float *)(iVar3 + 0x9cdc) + *(float *)(iVar3 + 0x9cd4);
              uStack_8c = 0;
              fVar9 = (float)uStack_90 * *(float *)(iVar3 + 0x9cd8) + *(float *)(iVar3 + 0x9cc8);
              fVar10 = (float)*(uint *)(iVar16 + 0xc) * *(float *)(iVar3 + 0x9cdc) +
                       *(float *)(iVar3 + 0x9cd4);
              fVar12 = (fVar9 + fVar7 + fVar11) * _DAT_0064b8f4;
              fVar14 = (fVar10 + fVar8 + fVar13) * _DAT_0064b8f4;
              fVar13 = fVar13 - fVar14;
              fVar11 = fVar11 - fVar12;
              fVar11 = fVar13 * fVar13 + fVar11 * fVar11;
              fVar8 = fVar8 - fVar14;
              fVar7 = fVar7 - fVar12;
              fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
              if (fVar11 <= fVar7) {
                fVar11 = fVar7;
              }
              fVar10 = fVar10 - fVar14;
              fVar9 = fVar9 - fVar12;
              fVar7 = fVar10 * fVar10 + fVar9 * fVar9;
              if (fVar11 <= fVar7) {
                fVar11 = fVar7;
              }
              uStack_44 = uVar19;
              FUN_0041ce10(fVar12,fVar14,SQRT(fVar11));
              puVar23[0xb] = uStack_d4;
              puVar23[0xc] = uStack_d0;
              puVar23[0xd] = local_cc;
              fVar29 = (float10)FUN_0061b350(puVar24);
              fVar30 = (float10)FUN_0061b350(puVar2);
              fVar32 = (float10)_DAT_0064b248;
              fVar31 = (float10)FUN_0061b350(&uStack_48);
              fVar31 = (float10)(float)((fVar30 + (float10)(float)fVar29) * fVar32) - fVar31;
              if (fVar31 < (float10)_DAT_0064b254) {
                fVar31 = -fVar31;
              }
              puVar23[8] = (float)fVar31;
              *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
              fVar32 = (float10)FUN_0061b0d0(puVar23 + 3);
              puVar23[7] = (float)fVar32;
              FUN_00612a00(puVar23);
              puStack_118[1] = puVar23;
            }
          }
          puStack_118 = puStack_118 + 2;
          local_fc = local_fc + 1;
          puVar22 = (undefined4 *)((int)puVar22 + (uStack_128 + 1) * 4);
        } while (local_fc <= uStack_114);
      }
      uStack_130 = uStack_130 + 1;
      local_140 = (undefined4 *)((int)local_140 + 4);
    } while (uStack_130 <= uStack_128);
  }
  iVar15 = 0;
  iStack_110 = 0;
  uStack_130 = 1;
  if (uStack_128 != 0) {
    do {
      uVar27 = 1;
      if (uStack_114 != 0) {
        piVar17 = puVar21 + iVar15 + 1;
        local_140 = puVar21 + iVar15 + uStack_114 * 2;
        do {
          if (((uVar27 ^ uStack_130) & 1) == 0) {
            if (uVar27 == 1) {
              iVar15 = 0;
            }
            else {
              iVar15 = piVar17[-2];
            }
            *(int *)(piVar17[-1] + 0x40) = iVar15;
            *(int *)(piVar17[-1] + 0x3c) = *piVar17;
            if (uStack_130 == 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined4 *)
                        ((-4 - (int)puVar21) + uStack_114 * -8 + (int)piVar17 + (int)puVar21);
            }
            *(undefined4 *)(piVar17[-1] + 0x44) = uVar19;
            if (uVar27 == uStack_114) {
              iVar15 = 0;
            }
            else {
              iVar15 = piVar17[1];
            }
            *(int *)(*piVar17 + 0x40) = iVar15;
            *(int *)(*piVar17 + 0x3c) = piVar17[-1];
            if (uStack_130 == uStack_128) {
              iVar15 = 0;
            }
            else {
              iVar15 = puVar21[iStack_110 + uStack_114 * 2 + 1];
            }
          }
          else {
            if (uStack_130 == uStack_128) {
              uVar19 = 0;
            }
            else {
              uVar19 = *local_140;
            }
            *(undefined4 *)(piVar17[-1] + 0x40) = uVar19;
            *(int *)(piVar17[-1] + 0x3c) = *piVar17;
            if (uVar27 == 1) {
              iVar15 = 0;
            }
            else {
              iVar15 = piVar17[-2];
            }
            *(int *)(piVar17[-1] + 0x44) = iVar15;
            if (uStack_130 == 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined4 *)
                        ((int)piVar17 + (-4 - (int)puVar21) + uStack_114 * -8 + 4 + (int)puVar21);
            }
            *(undefined4 *)(*piVar17 + 0x40) = uVar19;
            *(int *)(*piVar17 + 0x3c) = piVar17[-1];
            if (uVar27 == uStack_114) {
              iVar15 = 0;
            }
            else {
              iVar15 = piVar17[1];
            }
          }
          iVar16 = *piVar17;
          piVar17 = piVar17 + 2;
          *(int *)(iVar16 + 0x44) = iVar15;
          iVar15 = iStack_110 + 2;
          local_140 = local_140 + 2;
          uVar27 = uVar27 + 1;
          iStack_110 = iVar15;
        } while (uVar27 <= uStack_114);
      }
      uStack_130 = uStack_130 + 1;
    } while (uStack_130 <= uStack_128);
  }
  if (iVar15 != 0) {
    uVar27 = iVar15 + 1U >> 1;
    puVar22 = puVar21;
    do {
      FUN_00606a10(*puVar22,puVar22[1]);
      puVar22 = puVar22 + 2;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  FUN_0060bfc0(*(undefined4 *)(*(int *)**(undefined4 **)(param_1 + 8) + 0xc));
  FUN_0060bfc0(*(undefined4 *)(*(int *)(**(int **)(param_1 + 8) + 4) + 0xc));
  FUN_0060bfc0(*(undefined4 *)(**(int **)(*(int *)(param_1 + 8) + 0x20) + 0xc));
  FUN_0060bfc0(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x20) + 4) + 0xc));
  iVar15 = **(int **)(param_1 + 0x24);
  if (iVar15 != 0) goto LAB_0061ae37;
  iVar15 = (*(int **)(param_1 + 0x24))[1];
  while (iVar15 != 0) {
LAB_0061ae37:
    if ((*(int *)(iVar15 + 0x40) != 0) && (*(int *)(*(int *)(iVar15 + 0x40) + 0x44) != iVar15)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_tgreed_c_00684d64,0x84,s_Mar_19_2002_006714f8);
    }
    if ((*(int *)(iVar15 + 0x44) != 0) && (*(int *)(*(int *)(iVar15 + 0x44) + 0x40) != iVar15)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_tgreed_c_00684d64,0x88,s_Mar_19_2002_006714f8);
    }
    if ((*(int *)(iVar15 + 0x3c) == 0) || (*(int *)(*(int *)(iVar15 + 0x3c) + 0x3c) != iVar15)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_tgreed_c_00684d64,0x8c,s_Mar_19_2002_006714f8);
    }
    piVar17 = *(int **)(param_1 + 0x24);
    if ((*piVar17 == 0) || (iVar15 + 4 != *(int *)(*piVar17 + 8))) {
      if (((piVar17[1] != 0) && (iVar15 + 4 == *(int *)(piVar17[1] + 8))) ||
         (*(int *)(iVar15 + 4) == 0)) break;
      iVar15 = *(int *)(iVar15 + 4) + -4;
    }
    else {
      iVar15 = piVar17[1];
    }
  }
  FUN_006143a0(param_1 + 0x44,param_1 + 0x50,param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  FUN_0060bd70();
  FUN_0061c888(puVar20);
  FUN_0061c888(puVar21);
  ExceptionList = pvStack_14;
  return 1;
}

