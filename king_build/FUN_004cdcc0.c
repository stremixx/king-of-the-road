
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_004cdcc0(void)

{
  double *pdVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float **ppfVar7;
  float10 fVar8;
  float10 fVar9;
  double *in_stack_00000028;
  double *in_stack_0000002c;
  double *in_stack_00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  int in_stack_0000003c;
  float *apfStack_108 [7];
  float *pfStack_ec;
  double *pdStack_e8;
  float *pfStack_e4;
  float local_bc;
  float local_b8;
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
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  double local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [8];
  undefined4 local_28 [9];
  
  local_60 = _uStack00000034 * _DAT_0064a728;
  uStack_64 = uStack00000038;
  apfStack_108[1] = &local_b0;
  local_68 = uStack00000034;
  ppfVar7 = apfStack_108 + 2;
  puVar6 = (undefined4 *)register0x00000010;
  for (iVar4 = 8; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppfVar7 = (float *)*puVar6;
    ppfVar7 = ppfVar7 + 1;
  }
  apfStack_108[0] = (float *)0x4cdd09;
  FUN_00439400();
  iVar4 = in_stack_0000003c;
  if (in_stack_0000003c != 0) {
    local_b0 = -local_b0;
    local_ac = -local_ac;
    local_a8 = -local_a8;
    _uStack00000034 = -_uStack00000034;
    local_60 = -local_60;
  }
  local_98 = local_b0;
  local_94 = local_ac;
  pfStack_e4 = &local_98;
  pdStack_e8 = (double *)&local_74;
  local_90 = 0.0;
  pfStack_ec = (float *)0x4cdd90;
  pfVar2 = (float *)FUN_005aaad0();
  local_98 = *pfVar2;
  local_94 = pfVar2[1];
  pfStack_e4 = (float *)0x0;
  local_90 = pfVar2[2];
  pdStack_e8 = &local_60;
  ppfVar7 = apfStack_108;
  puVar6 = (undefined4 *)register0x00000010;
  for (iVar5 = 8; puVar6 = puVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*puVar6;
    ppfVar7 = ppfVar7 + 1;
  }
  FUN_0041d3f0(&stack0x00000024);
  FUN_0043bff0(local_48,iVar5);
  puVar6 = local_48;
  ppfVar7 = apfStack_108 + 2;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*puVar6;
    puVar6 = puVar6 + 1;
    ppfVar7 = ppfVar7 + 1;
  }
  apfStack_108[1] = &local_bc;
  apfStack_108[0] = (float *)0x4cddf6;
  FUN_00439400();
  if (iVar4 != 0) {
    local_bc = -local_bc;
    local_b8 = -local_b8;
    local_b4 = -local_b4;
  }
  local_a4 = local_bc;
  local_a0 = local_b8;
  pfStack_e4 = &local_a4;
  pdStack_e8 = (double *)&local_74;
  local_9c = 0.0;
  pfStack_ec = (float *)0x4cde62;
  pfVar2 = (float *)FUN_005aaad0();
  local_a4 = *pfVar2;
  pdStack_e8 = (double *)&stack0x00000034;
  local_a0 = pfVar2[1];
  pfStack_e4 = (float *)0x0;
  local_9c = pfVar2[2];
  ppfVar7 = apfStack_108;
  puVar6 = (undefined4 *)register0x00000010;
  for (iVar5 = 8; puVar6 = puVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*puVar6;
    ppfVar7 = ppfVar7 + 1;
  }
  FUN_0041d3f0(&stack0x00000024);
  FUN_0043bff0(local_28,iVar5);
  puVar6 = local_28;
  ppfVar7 = apfStack_108 + 2;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppfVar7 = (float *)*puVar6;
    puVar6 = puVar6 + 1;
    ppfVar7 = ppfVar7 + 1;
  }
  _uStack00000034 = ABS(_uStack00000034);
  apfStack_108[1] = &local_80;
  apfStack_108[0] = (float *)0x4cdeef;
  FUN_00439400();
  if (iVar4 != 0) {
    local_80 = -local_80;
    local_7c = -local_7c;
    local_78 = -local_78;
    local_74 = local_80;
    local_70 = local_7c;
    local_6c = local_78;
  }
  local_8c = local_80;
  local_88 = local_7c;
  pfStack_e4 = &local_8c;
  pdStack_e8 = (double *)&local_74;
  local_84 = 0.0;
  pfStack_ec = (float *)0x4cdf5b;
  pfVar2 = (float *)FUN_005aaad0();
  local_8c = *pfVar2;
  local_88 = pfVar2[1];
  local_84 = pfVar2[2];
  pfStack_e4 = (float *)0x4ce002;
  fVar8 = (float10)FUN_0061d420();
  pdVar1 = in_stack_00000028;
  if (DAT_00701590 * (local_b4 * local_ac - local_b8 * local_a8) +
      DAT_00701594 * (local_bc * local_a8 - local_b4 * local_b0) +
      (local_b8 * local_b0 - local_ac * local_bc) * DAT_00701598 < (float)_DAT_0064a668) {
    fVar8 = -fVar8;
  }
  fVar9 = (float10)_DAT_0064a7b0 / (float10)(double)CONCAT44(uStack_64,local_68);
  pfStack_e4 = &local_bc;
  pdStack_e8 = (double *)&local_74;
  *in_stack_00000028 = (double)(fVar9 * fVar8);
  pfStack_ec = (float *)0x4ce08b;
  FUN_005aaad0();
  pfStack_ec = &local_b0;
  apfStack_108[6] = (float *)local_54;
  apfStack_108[5] = (float *)0x4ce09f;
  FUN_005aaad0();
  pfStack_e4 = (float *)0x4ce0ad;
  fVar8 = (float10)FUN_0061e4b0();
  *in_stack_0000002c = (double)(fVar8 * (float10)(double)fVar9);
  *in_stack_00000030 = (double)CONCAT44(uStack_64,local_68) - _uStack00000034;
  bVar3 = _DAT_0064ba40 < ABS(*pdVar1);
  if ((double)CONCAT44(uStack_64,local_68) * _DAT_0064a6d0 < _uStack00000034) {
    bVar3 = bVar3 | 4;
  }
  return bVar3;
}

