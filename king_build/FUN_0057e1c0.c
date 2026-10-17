
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057e1c0(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float fStack00000054;
  float fStack00000058;
  int in_stack_00000188;
  undefined4 in_stack_0000018c;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000194;
  undefined4 in_stack_00000198;
  undefined4 in_stack_0000019c;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a4;
  undefined4 in_stack_000001a8;
  float in_stack_000001ac;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b4;
  int in_stack_000001b8;
  undefined4 in_stack_000001bc;
  undefined4 in_stack_000001c0;
  undefined4 in_stack_000001c4;
  undefined4 in_stack_000001c8;
  undefined4 in_stack_000001cc;
  undefined4 in_stack_000001d0;
  undefined4 in_stack_000001d4;
  undefined4 in_stack_000001d8;
  float in_stack_000001dc;
  float in_stack_000001e0;
  float in_stack_000001e4;
  float in_stack_000001e8;
  float in_stack_000001ec;
  float in_stack_000001f0;
  float in_stack_000001f4;
  float local_8;
  
  FUN_0061d4f0();
  piVar19 = param_1 + 0x319;
  piVar20 = &stack0x000001b8;
  for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
    *piVar20 = *piVar19;
    piVar19 = piVar19 + 1;
    piVar20 = piVar20 + 1;
  }
  piVar19 = param_3 + 0x319;
  piVar20 = &stack0x00000188;
  for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
    *piVar20 = *piVar19;
    piVar19 = piVar19 + 1;
    piVar20 = piVar20 + 1;
  }
  FUN_005aba00();
  FUN_005aba00();
  fVar11 = *(float *)(param_2 + 0x34) - in_stack_000001dc;
  fVar12 = *(float *)(param_2 + 0x38) - in_stack_000001e0;
  fVar13 = *(float *)(param_2 + 0x3c) - in_stack_000001e4;
  local_8 = *(float *)(param_2 + 0x34) - in_stack_000001ac;
  fVar1 = *(float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x44);
  fVar3 = (float)param_1[0x331];
  fVar4 = *(float *)(param_2 + 0x48);
  fVar5 = (float)param_3[0x331];
  FUN_005aabc0();
  FUN_005aabc0();
  fVar6 = (float)param_1[0x68];
  fVar7 = (float)param_1[0x6b];
  fVar8 = (float)param_3[0x68];
  fStack00000054 = (float)param_3[0x69];
  fVar9 = (float)param_3[0x6b];
  fStack00000058 = (float)param_3[0x6a];
  fVar17 = (float)param_1[0x6a] * (float)param_1[0x6a] +
           fVar6 * fVar6 + (float)param_1[0x69] * (float)param_1[0x69];
  fVar14 = fVar8 * fVar8 + fStack00000054 * fStack00000054 + fStack00000058 * fStack00000058;
  fVar15 = fVar7 * fVar7 +
           (float)param_1[0x6c] * (float)param_1[0x6c] + (float)param_1[0x6d] * (float)param_1[0x6d]
  ;
  fVar16 = fVar9 * fVar9 +
           (float)param_3[0x6c] * (float)param_3[0x6c] + (float)param_3[0x6d] * (float)param_3[0x6d]
  ;
  if (_DAT_0064ca64 < fVar17) {
    local_8 = (fVar6 / SQRT(fVar17)) * _DAT_0064b438;
  }
  if (_DAT_0064ca64 < fVar14) {
    fVar14 = SQRT(fVar14);
    local_8 = (fVar8 / fVar14) * _DAT_0064b438;
    fStack00000054 = (fStack00000054 / fVar14) * _DAT_0064b438;
    fStack00000058 = (fStack00000058 / fVar14) * _DAT_0064b438;
  }
  if (_DAT_0064e720 < fVar15) {
    local_8 = (fVar7 / SQRT(fVar15)) * _DAT_0064b440;
  }
  if (_DAT_0064e720 < fVar16) {
    local_8 = (fVar9 / SQRT(fVar16)) * _DAT_0064b440;
  }
  FUN_004e20b1();
  FUN_004e20b1();
  FUN_004e20b1();
  FUN_004e20b1();
  FUN_0041ce10();
  FUN_0041ce10();
  if ((float)_DAT_0064a668 < fVar12 * fVar2 + fVar13 * fVar4 + fVar11 * fVar1) {
    FUN_005aad10();
  }
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  in_stack_000001f4 = local_8;
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  in_stack_000001e8 = local_8;
  in_stack_000001ec = fStack00000054 * fVar5;
  in_stack_000001f0 = fStack00000058 * fVar5;
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  FUN_0041ce10();
  fVar21 = (float10)FUN_005aabc0();
  fVar22 = (float10)FUN_005aabc0();
  FUN_0041ce10();
  FUN_005aabc0();
  FUN_0041ce10();
  FUN_005aabc0();
  FUN_004e2a00();
  FUN_005ab130();
  FUN_004e2a00();
  FUN_005ab130();
  if ((float)_DAT_0064a648 < (float)fVar21) {
    FUN_005aad50();
    FUN_0041ce10();
    FUN_004cb300();
  }
  if ((float)_DAT_0064a648 < (float)fVar22) {
    FUN_005aad50();
    FUN_004cb300();
    FUN_004e1080();
    FUN_004cb300();
    FUN_004e1080();
  }
  FUN_004bdd80();
  FUN_004bddd0();
  FUN_004cb2c0();
  FUN_004bdd80();
  FUN_004bddd0();
  FUN_004bdd80();
  FUN_004bddd0();
  FUN_004bddd0();
  FUN_004cb300();
  FUN_004bdd80();
  FUN_004bddd0();
  FUN_004bddd0();
  FUN_004cb300();
  FUN_005aae00();
  FUN_005aae00();
  FUN_004e2984();
  fVar23 = (float10)FUN_004e1080();
  fVar24 = (float10)FUN_004e1080();
  fVar21 = (float10)_DAT_0064a6d0;
  FUN_004e2984();
  fVar25 = (float10)FUN_004e1080();
  fVar26 = (float10)FUN_004e1080();
  fVar22 = (float10)_DAT_0064a6d0;
  FUN_004e2984();
  fVar27 = (float10)FUN_004e1080();
  fVar28 = (float10)FUN_004e1080();
  fVar10 = (float10)_DAT_0064a6d0;
  fVar1 = (float)((fVar26 * (float10)fVar5 + (float10)(double)fVar25) * fVar22) +
          (float)((fVar24 * (float10)fVar3 + (float10)(double)fVar23) * fVar21);
  FUN_004e2984();
  fVar21 = (float10)FUN_004e1080();
  fVar22 = (float10)FUN_004e1080();
  if (((float)_DAT_0064a668 < fVar1) &&
     ((float)_DAT_0064c908 <
      (float)(((fVar22 * (float10)fVar5 + (float10)(double)fVar21) * (float10)_DAT_0064a6d0 +
              (float10)(float)((fVar28 * (float10)fVar3 + (float10)(double)fVar27) * fVar10)) /
             (float10)fVar1))) {
    FUN_005aad10();
    FUN_005aad10();
    FUN_005aad10();
    FUN_005aad10();
  }
  FUN_004e71df();
  FUN_004e71df();
  iVar18 = FUN_004e2140();
  if ((((iVar18 != 0) || (iVar18 = FUN_004e2140(), iVar18 != 0)) ||
      (iVar18 = FUN_004e2140(), iVar18 != 0)) || (iVar18 = FUN_004e2140(), iVar18 != 0)) {
    FUN_0061c369();
    FUN_0061c369();
    FUN_0061c369();
    FUN_0061c369();
    FUN_004e1e9c();
  }
  (**(code **)(*param_1 + 0x90))();
  (**(code **)(*param_1 + 0x94))();
  (**(code **)(*param_3 + 0x90))();
  (**(code **)(*param_3 + 0x94))();
  return;
}

