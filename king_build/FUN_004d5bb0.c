
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004d5bb0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 auStack_124 [4];
  undefined4 uStack_114;
  int iStack_110;
  int *piStack_10c;
  int iStack_108;
  int *apiStack_104 [4];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 *puStack_d4;
  uint *puStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined4 *local_c4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  uint local_8c;
  double local_88;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [32];
  undefined1 local_38 [52];
  
  local_c4 = (undefined4 *)param_1;
  piStack_c8 = (int *)0x4d5bd4;
  iVar1 = FUN_005e4980();
  if (iVar1 == 0) {
    return (float10)_DAT_0064ba38;
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    return (float10)_DAT_0064ba38;
  }
  if (*(int *)(iVar1 + 0x5460) == 0) {
    return (float10)_DAT_0064ba38;
  }
  local_b0 = *(int *)(iVar1 + 0x509c);
  if (local_b0 == DAT_0068a8f0) {
    return (float10)_DAT_0064ba38;
  }
  local_c4 = (undefined4 *)(iVar1 + 0x50dc);
  local_8c = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_9c = 0xbff00000;
  piStack_c8 = (int *)0x4d5c59;
  local_ac = iVar1;
  fVar7 = (float10)FUN_005aabc0();
  iVar1 = *(int *)(iVar1 + 0x5460);
  local_c4 = &local_6c;
  local_a8 = *(undefined4 *)(iVar1 + 0x40b0);
  local_a4 = *(undefined4 *)(iVar1 + 0x40b4);
  piStack_c8 = &local_60;
  local_68 = (double)fVar7;
  puStack_d4 = &local_80;
  puStack_d0 = (uint *)0x0;
  uStack_dc._4_4_ = &local_b0;
  uStack_dc._0_4_ = 0x4d5c97;
  puStack_cc = puStack_d4;
  FUN_0041d3f0();
  uStack_dc._4_4_ = (int *)local_38;
  uStack_dc._0_4_ = 0x4d5ca7;
  puVar2 = (undefined4 *)FUN_0057d570();
  ppiVar5 = apiStack_104;
  for (iStack_108 = 0xc; iStack_108 != 0; iStack_108 = iStack_108 + -1) {
    *ppiVar5 = (int *)*puVar2;
    puVar2 = puVar2 + 1;
    ppiVar5 = ppiVar5 + 1;
  }
  piStack_10c = &local_b0;
  iStack_110 = 0x4d5cc2;
  FUN_0041d3f0();
  piStack_10c = (int *)local_58;
  iStack_110 = 0x4d5ccf;
  puVar2 = (undefined4 *)FUN_00437600();
  puVar6 = auStack_124;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  fVar7 = (float10)FUN_004cd7a0();
  local_88 = (double)fVar7;
  local_98 = 0;
  local_94 = 0x403e0000;
  local_c4 = (undefined4 *)local_b0;
  piStack_c8 = (int *)0x4d5d06;
  uVar3 = FUN_0043f700();
  if ((uVar3 & 0x8000000) != 0) {
    return (float10)_DAT_0064a668;
  }
  local_c4 = local_7c;
  piStack_c8 = (int *)local_80;
  puStack_cc = (undefined4 *)0x4d5d2e;
  iVar4 = FUN_004d4580();
  local_c4 = (undefined4 *)(float)local_88;
  piStack_10c = (int *)(iVar4 << 1);
  apiStack_104[3] = *(int **)(iVar1 + 0x40a8);
  uStack_f4 = *(undefined4 *)(iVar1 + 0x40ac);
  piStack_c8 = &local_90;
  puStack_cc = &local_70;
  puStack_d0 = &local_8c;
  uStack_dc._4_4_ = *(int **)(iVar1 + 0x4078);
  puStack_d4 = &local_a0;
  uStack_dc._0_4_ = *(undefined4 *)(iVar1 + 0x4074);
  uStack_e0 = local_68._4_4_;
  uStack_e4 = (undefined4)local_68;
  uStack_e8 = local_a4;
  uStack_ec = local_a8;
  uStack_f0 = local_6c;
  apiStack_104[2] = (int *)local_5c;
  apiStack_104[1] = (int *)local_60;
  apiStack_104[0] = local_7c;
  iStack_108 = local_80;
  iStack_110 = local_ac;
  uStack_114 = 0x4d5dc0;
  local_90 = (int)piStack_10c;
  local_78 = apiStack_104[3];
  uStack_74 = uStack_f4;
  FUN_004d5720();
  local_c4 = (undefined4 *)local_b0;
  piStack_c8 = (int *)0x4d5dd2;
  uVar3 = FUN_0043f700();
  if ((uVar3 & 0x4000) == 0) {
    if (((_DAT_0064a668 < (double)CONCAT44(uStack_9c,local_a0)) &&
        ((double)CONCAT44(uStack_9c,local_a0) < _DAT_0064c0b0)) && (*(int *)(iVar1 + 0x4078) != 0))
    {
      local_98 = local_a0;
      local_94 = uStack_9c;
    }
    if ((local_8c & 8) != 0) {
      local_a8 = 0;
      local_a4 = 0x40220000;
    }
  }
  local_ac = local_90 + 1;
  local_c4 = (undefined4 *)local_a4;
  piStack_c8 = (int *)local_a8;
  puStack_cc = (undefined4 *)0x403e0000;
  puStack_d0 = (uint *)0x0;
  puStack_d4 = (undefined4 *)0x0;
  local_88 = (double)local_ac * (double)CONCAT44(uStack_74,local_78) * _DAT_0064a6d0 + local_88;
  apiStack_104[3] = *(int **)(iVar1 + 0x4078);
  uStack_e0 = 0x3ff00000;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = local_94;
  uStack_f4 = local_98;
  apiStack_104[2] = (int *)local_98;
  apiStack_104[1] = &local_b0;
  apiStack_104[0] = (int *)0x4d5e92;
  uStack_dc = local_88;
  FUN_0041d3f0();
  apiStack_104[1] = (int *)0x4d5e97;
  fVar7 = (float10)FUN_004d4660();
  return fVar7;
}

