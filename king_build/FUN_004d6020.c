
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d6020(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  double in_stack_00000034;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar6 = (float10)thunk_FUN_004f27e0();
  fVar7 = (float10)thunk_FUN_004feee0();
  *(undefined4 *)(param_1 + 10000) = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0;
  pfVar4 = (float *)(param_1 + 0x10);
  pfVar5 = local_38;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  dVar11 = (double)((DAT_00701590 * local_38[0] +
                    DAT_00701594 * local_38[3] + DAT_00701598 * local_20) * DAT_00701590 +
                   DAT_00701594 *
                   (DAT_00701590 * local_38[1] + DAT_00701594 * local_28 + DAT_00701598 * local_1c)
                   + (local_38[2] * DAT_00701590 + local_24 * DAT_00701594 + local_18 * DAT_00701598
                     ) * DAT_00701598);
  fVar8 = (float10)FUN_004fee60(*(undefined4 *)(param_1 + 0x40b0),*(undefined4 *)(param_1 + 0x40b4))
  ;
  uVar14 = *(undefined4 *)(param_1 + 0x4074);
  uVar13 = *(undefined4 *)(param_1 + 0x40bc);
  uVar12 = *(undefined4 *)(param_1 + 0x40b8);
  dVar15 = (double)fVar8;
  uVar9 = *(undefined4 *)(param_1 + 0x4078);
  uVar10 = in_stack_00000024;
  FUN_0041d3f0(*(int *)(param_1 + 0x40c0) + 0x509c);
  fVar8 = (float10)FUN_004d4660(in_stack_00000024,uVar9,uVar10,in_stack_00000028,in_stack_0000002c,
                                in_stack_00000030,dVar11,uVar12,uVar13,uVar14,dVar15);
  if (fVar8 < (float10)_DAT_0064a5a8) {
    *(undefined4 *)(param_1 + 10000) = 0x3f800000;
    return;
  }
  if (fVar8 < (float10)*(float *)(param_1 + 0x332c)) {
    fVar7 = ((float10)*(float *)(param_1 + 0x332c) - fVar8) * (float10)_DAT_0064a830;
    if ((float10)_DAT_0064a660 < fVar7) {
      fVar7 = (float10)_DAT_0064a660;
    }
    *(float *)(param_1 + 10000) = (float)(fVar7 * (float10)(double)fVar6);
    return;
  }
  if ((float10)*(float *)(param_1 + 0x332c) < fVar8 * (float10)_DAT_0064b948) {
    fVar1 = (float)((fVar8 - (float10)*(float *)(param_1 + 0x332c)) * (float10)_DAT_0064a830 *
                   (float10)(double)fVar7);
    bVar2 = *(float *)(param_1 + 0x332c) < _DAT_0064b440;
    *(float *)(param_1 + 0x270c) = fVar1;
    if ((bVar2) && (_DAT_0064c338 < in_stack_00000034)) {
      *(undefined4 *)(param_1 + 0x270c) = 0x3f800000;
      return;
    }
    if (((((*(int *)(param_1 + 0x346c) != 0) || (*(int *)(param_1 + 0x3470) != 0)) ||
         (*(int *)(param_1 + 0x3474) != 0)) || (*(int *)(param_1 + 0x3478) != 0)) &&
       (((float)_DAT_0064a5a8 < ABS(*(float *)(param_1 + 0x271c)) && ((float)_DAT_0064a5a8 < fVar1))
       )) {
      *(undefined4 *)(param_1 + 0x270c) = 0x3dcccccd;
      return;
    }
  }
  return;
}

