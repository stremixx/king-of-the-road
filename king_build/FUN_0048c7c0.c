
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0048c7c0(undefined4 *param_1,double *param_2,double *param_3,double *param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10
            ,int param_11)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_148;
  undefined4 uStack_144;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20 [3];
  
  puVar14 = param_1;
  pdVar9 = &local_e8;
  for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)pdVar9 = *puVar14;
    puVar14 = puVar14 + 1;
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  FUN_0048cec0();
  if (*(double *)(param_1 + 6) + *param_3 <
      SQRT(local_e8 * local_e8 + local_e0 * local_e0 + local_d8 * local_d8)) {
    return 0;
  }
  if ((param_11 < param_8) ||
     ((param_11 == param_8 &&
      ((double)CONCAT44(param_10,param_9) < (double)CONCAT44(param_7,param_6))))) {
    uVar8 = FUN_0048c7c0(param_2,param_3,param_4,param_5,param_9,param_10,param_11,param_6,param_7,
                         param_8);
    return uVar8;
  }
  iVar12 = param_1[8];
  iVar13 = (param_8 * 3 + 3) * 8;
  iVar15 = param_8 * 0x18;
  local_16c = 0;
  FUN_00405ea0(*(double *)(iVar12 + iVar13) - *(double *)(iVar15 + iVar12),
               *(double *)(iVar12 + 8 + iVar13) - *(double *)(iVar15 + 8 + iVar12),
               *(double *)(iVar12 + 0x10 + iVar13) - *(double *)(iVar15 + 0x10 + iVar12));
  FUN_00405ea0(local_100 * (double)CONCAT44(param_7,param_6),
               local_f8 * (double)CONCAT44(param_7,param_6),
               local_f0 * (double)CONCAT44(param_7,param_6));
  pdVar9 = (double *)(iVar15 + param_1[8]);
  FUN_00405ea0(*pdVar9 + (double)CONCAT44(uStack_114,local_118),pdVar9[1] + local_110,
               pdVar9[2] + local_108);
  FUN_00405ea0(*param_2 - local_130,param_2[1] - local_128,param_2[2] - local_120);
  iVar12 = iVar13;
  dVar7 = (double)CONCAT44(uStack_144,local_148) * (double)CONCAT44(uStack_144,local_148) +
          local_138 * local_138 + local_140 * local_140;
  for (iVar11 = param_8; iVar11 <= param_11; iVar11 = iVar11 + 1) {
    if (iVar11 == param_11) {
      iVar2 = param_1[8];
      iVar3 = param_11 * 3 + 3;
      pdVar9 = (double *)(iVar2 + iVar3 * 8);
      iVar16 = param_11 * 0x18;
      FUN_00405ea0(*pdVar9 - *(double *)(iVar16 + iVar2),pdVar9[1] - *(double *)(iVar16 + 8 + iVar2)
                   ,*(double *)(iVar2 + 0x10 + iVar3 * 8) - *(double *)(iVar16 + 0x10 + iVar2));
      FUN_00405ea0(local_38 * (double)CONCAT44(param_10,param_9),
                   local_30 * (double)CONCAT44(param_10,param_9),
                   local_28 * (double)CONCAT44(param_10,param_9));
      pdVar9 = (double *)(iVar16 + param_1[8]);
      FUN_00405ea0(*pdVar9 + local_50,pdVar9[1] + local_48,pdVar9[2] + local_40);
      pdVar9 = local_20;
    }
    else {
      pdVar9 = (double *)(iVar12 + param_1[8]);
    }
    FUN_00405ea0(*param_2 - *pdVar9,param_2[1] - pdVar9[1],param_2[2] - pdVar9[2]);
    iVar3 = param_1[8];
    dVar4 = local_108 * local_108 +
            local_110 * local_110 +
            (double)CONCAT44(uStack_114,local_118) * (double)CONCAT44(uStack_114,local_118);
    if (iVar11 == param_8) {
      FUN_00405ea0(*(double *)(iVar3 + iVar13) - *(double *)(iVar15 + iVar3),
                   *(double *)(iVar3 + 8 + iVar13) - *(double *)(iVar15 + 8 + iVar3),
                   *(double *)(iVar3 + 0x10 + iVar13) - *(double *)(iVar15 + 0x10 + iVar3));
      FUN_00405ea0(local_98 * (double)CONCAT44(param_7,param_6),
                   local_90 * (double)CONCAT44(param_7,param_6),
                   local_88 * (double)CONCAT44(param_7,param_6));
      pdVar9 = (double *)(iVar15 + param_1[8]);
      FUN_00405ea0(*pdVar9 + local_c8,pdVar9[1] + local_c0,pdVar9[2] + local_b8);
      pdVar9 = &local_e8;
    }
    else {
      pdVar9 = (double *)(iVar12 + -0x18 + iVar3);
    }
    if (iVar11 == param_11) {
      iVar16 = param_1[8];
      iVar2 = param_11 * 3 + 3;
      iVar3 = iVar16 + iVar2 * 8;
      pdVar1 = (double *)(iVar16 + param_11 * 0x18);
      local_60 = *(double *)(iVar3 + 8) - pdVar1[1];
      local_58 = *(double *)(iVar3 + 0x10) - pdVar1[2];
      local_a8 = local_60 * (double)CONCAT44(param_10,param_9);
      local_a0 = local_58 * (double)CONCAT44(param_10,param_9);
      local_80 = *pdVar1 + (*(double *)(iVar16 + iVar2 * 8) - *(double *)(iVar16 + param_11 * 0x18))
                           * (double)CONCAT44(param_10,param_9);
      local_78 = pdVar1[1] + local_a8;
      pdVar10 = &local_80;
      local_70 = pdVar1[2] + local_a0;
    }
    else {
      pdVar10 = (double *)(iVar12 + param_1[8]);
    }
    FUN_00405ea0(*pdVar10 - *pdVar9,pdVar10[1] - pdVar9[1],pdVar10[2] - pdVar9[2]);
    dVar5 = local_130 * local_130 + local_120 * local_120 + local_128 * local_128;
    local_158 = SUB84(dVar4,0);
    uStack_154 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar4 < dVar5 + dVar7) {
      if (dVar7 < dVar5 + dVar4) {
        dVar6 = local_130 * (double)CONCAT44(uStack_144,local_148) +
                local_128 * local_140 + local_120 * local_138;
        dVar6 = (dVar6 * dVar6) / dVar5;
        dVar7 = dVar7 - dVar6;
        if (dVar7 < *param_3) {
          *param_3 = dVar7;
          *param_5 = iVar11;
          local_16c = 1;
          *param_4 = SQRT(dVar6 / dVar5);
        }
      }
      else if (dVar4 < *param_3) {
        local_16c = 1;
        *(undefined4 *)param_3 = local_158;
        *(undefined4 *)((int)param_3 + 4) = uStack_154;
        *param_5 = iVar11;
        *(undefined4 *)param_4 = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x3ff00000;
      }
    }
    else if (dVar7 < *param_3) {
      local_168 = SUB84(dVar7,0);
      uStack_164 = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)param_3 = local_168;
      *(undefined4 *)((int)param_3 + 4) = uStack_164;
      *param_5 = iVar11;
      local_16c = 1;
      *(undefined4 *)param_4 = 0;
      *(undefined4 *)((int)param_4 + 4) = 0;
    }
    iVar12 = iVar12 + 0x18;
    dVar7 = dVar4;
    local_138 = local_108;
    local_140 = local_110;
    uStack_144 = uStack_114;
    local_148 = local_118;
  }
  iVar12 = *param_5;
  if (iVar12 == param_8) {
    if (iVar12 == param_11) {
      *param_4 = ((double)CONCAT44(param_10,param_9) - (double)CONCAT44(param_7,param_6)) * *param_4
                 + (double)CONCAT44(param_7,param_6);
      return local_16c;
    }
    if (iVar12 == param_8) {
      *param_4 = (_DAT_0064a660 - (double)CONCAT44(param_7,param_6)) * *param_4 +
                 (double)CONCAT44(param_7,param_6);
      return local_16c;
    }
  }
  if (iVar12 == param_11) {
    *param_4 = (double)CONCAT44(param_10,param_9) * *param_4;
  }
  return local_16c;
}

