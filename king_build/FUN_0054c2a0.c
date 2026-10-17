
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054c2a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float fStack_128;
  undefined1 auStack_124 [8];
  undefined1 local_11c [4];
  undefined1 auStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c [13];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  int *piStack_b4;
  undefined4 local_ac;
  undefined4 local_9c;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [40];
  
  if (*(int *)(param_1 + 0x2aa8) != 0) {
    FUN_005eebf0();
    fVar1 = *(float *)(param_1 + 0x240);
    fVar2 = *(float *)(param_1 + 0xd8c);
    fVar3 = *(float *)(param_1 + 0x24c);
    fVar4 = *(float *)(param_1 + 0xd90);
    fVar5 = *(float *)(param_1 + 0xd88);
    fVar6 = *(float *)(param_1 + 0x234);
    puVar11 = &DAT_00701550;
    puVar12 = local_10c;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    local_c4 = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + *(float *)(param_1 + 600);
    local_c0 = *(float *)(param_1 + 0x250) * *(float *)(param_1 + 0xd90) +
               *(float *)(param_1 + 0x244) * *(float *)(param_1 + 0xd8c) +
               *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0xd88) +
               *(float *)(param_1 + 0x25c);
    local_bc = *(float *)(param_1 + 0x254) * *(float *)(param_1 + 0xd90) +
               *(float *)(param_1 + 0x248) * *(float *)(param_1 + 0xd8c) +
               *(float *)(param_1 + 0x23c) * *(float *)(param_1 + 0xd88) +
               *(float *)(param_1 + 0x260);
    local_140 = DAT_00701580 * *(float *)(param_1 + 0x204) +
                DAT_00701584 * *(float *)(param_1 + 0x210) +
                DAT_00701588 * *(float *)(param_1 + 0x21c);
    local_13c = DAT_00701580 * *(float *)(param_1 + 0x208) +
                DAT_00701584 * *(float *)(param_1 + 0x214) +
                DAT_00701588 * *(float *)(param_1 + 0x220);
    local_138 = DAT_00701580 * *(float *)(param_1 + 0x20c) +
                DAT_00701584 * *(float *)(param_1 + 0x218) +
                DAT_00701588 * *(float *)(param_1 + 0x224);
    FUN_0041ce10(*(float *)(param_1 + 0xd88) * *(float *)(param_1 + 0x204) +
                 *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0xd8c) +
                 *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0xd90) +
                 *(float *)(param_1 + 0x228),
                 *(float *)(param_1 + 0x208) * *(float *)(param_1 + 0xd88) +
                 *(float *)(param_1 + 0x214) * *(float *)(param_1 + 0xd8c) +
                 *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0xd90) +
                 *(float *)(param_1 + 0x22c),
                 *(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0xd88) +
                 *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0xd8c) +
                 *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0xd90) +
                 *(float *)(param_1 + 0x230));
    FUN_005aae00(local_11c,&local_134);
    FUN_0041ce10(*(float *)(param_1 + 0x228) - *(float *)(param_1 + 600),
                 *(float *)(param_1 + 0x22c) - *(float *)(param_1 + 0x25c),
                 *(float *)(param_1 + 0x230) - *(float *)(param_1 + 0x260));
    if (local_134 * local_140 + local_130 * local_13c + local_12c * local_138 <=
        (float)_DAT_0064a668) {
      FUN_0041ce10(local_140,local_13c,local_138);
      local_140 = local_134;
      local_13c = local_130;
      local_138 = local_12c;
      FUN_005aae40(local_11c,&local_140);
    }
    else {
      FUN_0041ce10(local_140,local_13c,local_138);
      local_140 = local_134;
      local_13c = local_130;
      local_138 = local_12c;
      FUN_005aae00(local_11c,&local_140);
    }
    local_110 = *(undefined4 *)(param_1 + 0xce4);
    local_9c = 0;
    local_ac = 0;
    uVar7 = (**(code **)(**(int **)(param_1 + 0x2aa8) + 0x34))(7,&local_110);
    FUN_004e4f28(auStack_118);
    if ((((uVar7 & 1) != 0) && (piStack_b4 != (int *)0x0)) &&
       ((*(int *)(param_1 + 0x2aac) != 1 || (*piStack_b4 == 0x4d)))) {
      FUN_0061c369(auStack_28,s_K_HFLAG__03d_00679214,piStack_b4[1]);
      FUN_0061c369(auStack_48,s_K_FLAG__03d_00679208,piStack_b4[1]);
      iVar10 = FUN_005ee8e0(0,auStack_28);
      iVar8 = FUN_005ee8e0(0,auStack_48);
      if (iVar10 != 0) {
        FUN_004e409c(iVar10,1);
        if (iVar8 != 0) {
          FUN_0041ce10(-fStack_d8,-fStack_d4,-fStack_d0);
          local_130 = local_13c;
          local_12c = local_138;
          fStack_128 = local_134;
          fVar13 = (float10)FUN_004e1080(&local_130,&DAT_00701580);
          if ((float10)_DAT_0064e750 < fVar13) {
            FUN_004e409c(iVar8,1);
            return;
          }
          fVar13 = (float10)FUN_004e1080(&local_130,&DAT_007015a0);
          if ((float10)_DAT_0064e750 < fVar13) {
            FUN_004e409c(iVar8,2);
            return;
          }
          uVar9 = FUN_004cb2c0(auStack_124,&DAT_00701580);
          fVar13 = (float10)FUN_004e1080(&local_130,uVar9);
          if ((float10)_DAT_0064e750 < fVar13) {
            FUN_004e409c(iVar8,3);
            return;
          }
          uVar9 = FUN_004cb2c0(auStack_124,&DAT_007015a0);
          fVar13 = (float10)FUN_004e1080(&local_130,uVar9);
          if ((float10)_DAT_0064e750 < fVar13) {
            FUN_004e409c(iVar8,4);
          }
        }
      }
    }
  }
  return;
}

