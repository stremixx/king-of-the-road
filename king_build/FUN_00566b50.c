
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00566b50(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  undefined8 local_1dc;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined1 auStack_16c [24];
  undefined1 auStack_154 [12];
  undefined1 local_148 [36];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 uStack_e0;
  int local_d4;
  undefined1 auStack_88 [28];
  undefined1 local_6c [32];
  undefined1 auStack_4c [16];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646a8e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005eebf0();
  local_1a0 = (float)FUN_004e6d06(param_1,param_4,0,param_2,param_3,local_148);
  iVar8 = 0;
  fVar7 = (float)((uint)local_1a0 & 1);
  local_1bc = fVar7;
  if ((fVar7 == 0.0) || (local_d4 == 0)) goto LAB_0056714a;
  iVar8 = FUN_0053eeb0(local_d4);
  if (iVar8 == 0) goto LAB_0056714a;
  iVar3 = FUN_0053ee80(iVar8);
  if (iVar3 == 0) goto LAB_0056714a;
  local_1c8 = param_3[2] - param_2[2];
  local_1cc = param_3[1] - param_2[1];
  local_1d0 = *param_3 - *param_2;
  local_1b8 = local_1d0;
  local_1b4 = local_1cc;
  local_1b0 = local_1c8;
  FUN_005aaad0(&local_184,&local_1d0);
  iVar3 = _rand();
  fVar7 = (float)(16000 - iVar3) * _DAT_0067a1ec * (float)_DAT_0064ed20;
  local_1ac = SQRT(*(float *)(iVar8 + 0xcd4) * _DAT_0064ed1c) * param_5;
  local_1d4 = (local_17c * _DAT_0067a1e8 + fVar7 * DAT_00701598) * local_1ac;
  local_1a8 = (local_180 * _DAT_0067a1e8 + fVar7 * DAT_00701594) * local_1ac;
  local_1ac = (_DAT_0067a1e8 * local_184 + fVar7 * DAT_00701590) * local_1ac;
  fVar7 = *(float *)(iVar8 + 0xcd4);
  local_1dc._0_4_ = local_1d4 / fVar7;
  local_1c0 = local_1a8 / fVar7;
  piVar6 = (int *)(iVar8 + 0x10);
  local_1c8 = *(float *)(iVar8 + 0x1b8) + (float)local_1dc;
  local_1cc = *(float *)(iVar8 + 0x1b4) + local_1c0;
  local_1d0 = *(float *)(iVar8 + 0x1b0) + local_1ac / fVar7;
  local_1c4 = local_1d4;
  local_1a4 = local_1d4;
  local_178 = local_1d0;
  local_174 = local_1cc;
  local_170 = local_1c8;
  local_1dc._4_4_ = local_1a8;
  iVar3 = FUN_0057d570(local_3c);
  fVar7 = local_10c - *(float *)(iVar3 + 0x2c);
  fVar2 = local_110 - *(float *)(iVar3 + 0x28);
  fVar1 = local_114 - *(float *)(iVar3 + 0x24);
  local_1c4 = DAT_0067a1f0;
  local_1c8 = local_1a8 * fVar1 - fVar2 * local_1ac;
  local_1dc = (double)CONCAT44(local_1dc._4_4_,local_1c8);
  local_1c0 = fVar7 * local_1ac - local_1a4 * fVar1;
  local_1c8 = local_1c8 * DAT_0067a1f0;
  local_1cc = local_1c0 * DAT_0067a1f0;
  local_1d0 = (local_1a4 * fVar2 - local_1a8 * fVar7) * DAT_0067a1f0;
  local_19c = local_1d0;
  local_198 = local_1cc;
  local_194 = local_1c8;
  (**(code **)(*piVar6 + 0x90))(&local_178,0);
  local_1d4 = *(float *)(iVar8 + 0x1cc);
  local_1d0 = *(float *)(iVar8 + 0x1d0);
  local_1dc._4_4_ = (float)*(undefined4 *)(iVar8 + 0x1c8);
  FUN_005aae00(&stack0xfffffe1c,(int)&local_1dc + 4);
  (**(code **)(*piVar6 + 0x98))(&local_1a4,0);
  local_1a0 = *(float *)(iVar8 + 0x1b0);
  local_19c = *(float *)(iVar8 + 0x1b4);
  local_198 = *(float *)(iVar8 + 0x1b8);
  pfVar4 = (float *)FUN_0057d5a0(auStack_4c);
  local_1d0 = fStack_124 * pfVar4[1] + fStack_11c * pfVar4[7] + fStack_120 * pfVar4[4] + pfVar4[10];
  FUN_0041ce10(fStack_124 * *pfVar4 + fStack_11c * pfVar4[6] + fStack_120 * pfVar4[3] + pfVar4[9],
               local_1d0,
               fStack_124 * pfVar4[2] + fStack_11c * pfVar4[8] + fStack_120 * pfVar4[5] +
               pfVar4[0xb]);
  FUN_0041ce10(local_1c0 * *(float *)(iVar8 + 0x1c0) - *(float *)(iVar8 + 0x1c4) * local_1c4,
               *(float *)(iVar8 + 0x1c4) * local_1c8 - local_1c0 * *(float *)(iVar8 + 0x1bc),
               *(float *)(iVar8 + 0x1bc) * local_1c4 - *(float *)(iVar8 + 0x1c0) * local_1c8);
  uVar5 = FUN_0057d570(auStack_4c);
  uVar5 = FUN_004cb300(auStack_88,&stack0xfffffe14,uVar5);
  FUN_005aae00(&local_170,uVar5);
  FUN_0054e6c0(&fStack_124,&local_1a0);
  fVar9 = (float10)FUN_004eae60();
  FUN_005aad10(&local_170,(float)(fVar9 * (float10)_DAT_0064ed18));
  (**(code **)(*piVar6 + 0xa4))(&fStack_124,&local_1bc);
  iVar3 = _rand();
  local_1dc = (double)CONCAT44(local_1dc._4_4_,iVar3);
  fVar7 = (float)iVar3 * _DAT_0064b244;
  fVar9 = (float10)FUN_00554c10();
  if ((fVar9 <= (float10)_DAT_0064c328) || (local_1b4 <= ABS(local_1b4))) {
LAB_005670c8:
    local_1dc = (double)fVar7;
    fVar9 = (float10)FUN_004eae60();
    if ((float10)_DAT_0064a660 -
        (fVar9 * (float10)param_5 * (float10)_DAT_0064c658) /
        ((float10)param_5 + (float10)_DAT_0064c0e0) < (float10)local_1dc) goto LAB_00567104;
  }
  else {
    local_1dc = (double)fVar7;
    fVar9 = (float10)FUN_004eae60();
    if ((float10)local_1dc <=
        (float10)_DAT_0064a660 -
        (fVar9 * (float10)param_5 * (float10)_DAT_0064a830) /
        ((float10)param_5 + (float10)_DAT_0064c0e0)) goto LAB_005670c8;
LAB_00567104:
    FUN_00549070();
  }
  *(undefined4 *)(iVar8 + 0x5490) = 1;
  *(float *)(iVar8 + 0x550c) = local_114;
  *(float *)(iVar8 + 0x5510) = local_110;
  *(undefined4 *)(iVar8 + 0x5540) = 0x3f800000;
  *(float *)(iVar8 + 0x5514) = local_10c;
  fVar7 = local_1bc;
LAB_0056714a:
  FUN_005db3f0(local_6c);
  if (DAT_006cdbd8 == 0) {
    fVar1 = (float)_DAT_0064a660;
  }
  else {
    fVar1 = (float)(int)*(short *)(DAT_006cdbd8 + 0x182) * (float)_DAT_0064a590;
  }
  local_1bc = fVar1;
  if (fVar7 != 0.0) {
    FUN_0043f690(auStack_154,&local_114,local_6c);
    FUN_004e4a41(DAT_006f1ba8,0x40000000,fVar1,auStack_154);
    if (iVar8 == 0) {
      uVar5 = uStack_e0;
      if (((uint)local_1a0 & 2) == 0) {
        uVar5 = param_1;
      }
      local_1a0 = (float)FUN_00631d33(0xc0);
      uStack_4 = 0;
      if (local_1a0 == 0.0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_005a45f0(DAT_006ee15c,uVar5,local_114,local_110,local_10c,0,0x3fe00000,
                                     s_bulletDust_0067a540,&DAT_0068c120,3,0x9999999a,0x3fb99999);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar6 + 0x18))(1);
    }
  }
  FUN_0043f690(auStack_16c,param_2,local_6c);
  FUN_004e4a41(DAT_006f1ba4,0x40400000,fVar1,auStack_16c);
  ExceptionList = pvStack_c;
  return;
}

