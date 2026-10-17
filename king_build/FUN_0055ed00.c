
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0055ed00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float afStack_160 [4];
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float *pfStack_134;
  undefined8 local_130;
  undefined8 local_128;
  float *local_120;
  float *local_11c;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float *local_d8;
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
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98 [4];
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [12];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  local_11c = (float *)param_2;
  local_120 = (float *)param_1;
  local_128 = (double)CONCAT44(0x55ed1c,(undefined4)local_128);
  iVar7 = FUN_0055e710();
  if (iVar7 != 0) {
    return 0;
  }
  local_11c = (float *)param_1;
  local_120 = (float *)0x55ed34;
  FUN_0055e3c0();
  local_11c = (float *)param_2;
  local_120 = (float *)0x55ed3c;
  FUN_00557f60();
  iVar7 = *(int *)(param_1 + 0x28b4);
  pfVar8 = (float *)(param_1 + 0x2c4);
  pfVar11 = local_ec;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar3 = local_ec[1] * (float)(&DAT_00696f98)[iVar7 * 0x25c] +
          local_dc * (float)(&DAT_00696f9c)[iVar7 * 0x25c] +
          local_d0 * (float)(&DAT_00696fa0)[iVar7 * 0x25c] + local_c4;
  local_f0 = local_ec[2] * (float)(&DAT_00696f98)[iVar7 * 0x25c] +
             (float)local_d8 * (float)(&DAT_00696f9c)[iVar7 * 0x25c] +
             local_cc * (float)(&DAT_00696fa0)[iVar7 * 0x25c] + local_c0;
  fVar4 = local_ec[0] * (float)(&DAT_00696f98)[iVar7 * 0x25c] +
          local_ec[3] * (float)(&DAT_00696f9c)[iVar7 * 0x25c] +
          local_d4 * (float)(&DAT_00696fa0)[iVar7 * 0x25c] + local_c8;
  pfVar8 = (float *)(param_2 + 0x2c4);
  pfVar11 = local_ec;
  local_a8 = local_f0;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar11 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar2 = *(float *)(&DAT_00696fc8 + iVar7 * 0x970);
  iVar7 = *(int *)(param_2 + 0x28b4);
  local_fc = DAT_00701580 * fVar2;
  local_f8 = DAT_00701584 * fVar2;
  fVar5 = local_fc + (float)(&DAT_00696fa4)[iVar7 * 0x25c];
  fVar6 = local_f8 + (float)(&DAT_00696fa8)[iVar7 * 0x25c];
  fVar2 = fVar2 * DAT_00701588 + (float)(&DAT_00696fac)[iVar7 * 0x25c];
  local_11c = (float *)local_68;
  local_bc = local_ec[0] * fVar5 + fVar6 * local_ec[3] + fVar2 * local_d4 + local_c8;
  local_b8 = local_ec[1] * fVar5 + fVar6 * local_dc + fVar2 * local_d0 + local_c4;
  local_b4 = local_ec[2] * fVar5 + fVar6 * (float)local_d8 + fVar2 * local_cc + local_c0;
  local_120 = (float *)0x55eec6;
  local_b0 = fVar4;
  local_ac = fVar3;
  FUN_0057d570();
  local_11c = local_98;
  local_120 = (float *)0x55eed6;
  FUN_0057d570();
  if (local_78 < (float)_DAT_0064a798) {
    local_fc = local_98[0] * DAT_00701580 + local_80 * DAT_00701588 + local_98[3] * DAT_00701584;
    local_f8 = local_98[1] * DAT_00701580 + local_7c * DAT_00701588 + local_88 * DAT_00701584;
    local_11c = (float *)0x55ef58;
    fVar12 = (float10)FUN_0061e4b0();
    local_11c = &local_c4;
    local_120 = &local_cc;
    local_128 = (double)CONCAT44(&local_d4,&local_dc);
    local_f0 = (float)fVar12;
    local_130 = (double)CONCAT44(local_ec + 2,local_ec);
    pfVar8 = local_98;
    pfVar11 = afStack_160;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    }
    FUN_005de000();
    local_11c = (float *)0x0;
    local_120 = (float *)0x0;
    local_128 = (double)local_f0;
    fVar12 = (float10)fpatan((float10)local_fc,(float10)local_f8);
    local_130 = (double)-fVar12;
    pfStack_134 = local_d8;
    fStack_138 = local_dc;
    fStack_13c = local_ec[3];
    fStack_140 = local_ec[2];
    fStack_144 = local_ec[1];
    puStack_14c = local_38;
    fStack_148 = local_ec[0];
    uStack_150 = 0x55efe0;
    pfVar8 = (float *)FUN_005da010();
    pfVar11 = local_98;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    }
    local_11c = local_98;
    local_120 = (float *)0x55f003;
    local_120 = (float *)FUN_0057d5d0();
    local_128 = (double)CONCAT44(0x55f00b,(undefined4)local_128);
    FUN_0054bf90();
  }
  if (param_3 != 0) {
    local_11c = (float *)local_68;
    local_120 = &local_b0;
    local_128._4_4_ = &local_fc;
    local_128._0_4_ = 0x55f02d;
    FUN_0043f690();
    local_128 = (double)CONCAT44(local_128._4_4_,local_98);
    local_130 = (double)CONCAT44(&local_bc,&local_a4);
    pfStack_134 = (float *)0x55f047;
    FUN_0043f690();
    local_120 = (float *)(local_f8 - local_a0);
    local_11c = (float *)(local_f4 - local_9c);
    local_128 = (double)CONCAT44(local_fc - local_a4,local_38);
    local_130 = (double)CONCAT44(0x55f09a,(undefined4)local_130);
    uVar9 = FUN_005ab330();
    pfStack_134 = local_ec;
    local_130 = (double)CONCAT44(uVar9,local_98);
    fStack_138 = 7.892355e-39;
    FUN_005ab130();
    local_11c = &local_c8;
    local_120 = (float *)local_74;
    piVar1 = (int *)(param_2 + 0x10);
    local_128 = (double)CONCAT44(0x55f0c7,(undefined4)local_128);
    uVar9 = FUN_0057d5d0();
    local_128 = (double)CONCAT44(uVar9,0x55f0cd);
    iVar7 = FUN_004e5437();
    if (iVar7 == 0) {
      local_11c = (float *)0x55f0dd;
      iVar7 = FUN_0057d5d0();
      local_11c = (float *)0x1;
      local_120 = (float *)0x55f0e8;
      (**(code **)(*piVar1 + 0x1c))();
    }
    local_11c = local_ec;
    local_128 = (double)CONCAT44(0x55f0f5,(undefined4)local_128);
    local_120 = (float *)iVar7;
    FUN_0054bf90();
    local_11c = (float *)0x0;
    local_120 = (float *)&DAT_007015b0;
    local_128 = (double)CONCAT44(0x55f106,(undefined4)local_128);
    (**(code **)(*piVar1 + 0x94))();
    local_128 = 3.62920070304113e-317;
    local_130 = (double)CONCAT44(0x55f117,(undefined4)local_130);
    (**(code **)(*piVar1 + 0x90))();
  }
  local_11c = (float *)0x3;
  local_120 = (float *)0x55f127;
  FUN_004fc1a0();
  local_11c = (float *)0x3;
  local_120 = (float *)0x55f134;
  FUN_004fc1a0();
  *(undefined2 *)(*(int *)(param_2 + 0x5460) + 0x2704) =
       *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x2704);
  *(undefined2 *)(*(int *)(param_2 + 0x5460) + 0x2706) =
       *(undefined2 *)(*(int *)(param_1 + 0x5460) + 0x2706);
  return 1;
}

