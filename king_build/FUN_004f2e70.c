
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2e70(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  undefined8 uVar9;
  char *pcVar11;
  double dVar10;
  int local_80;
  short *local_7c;
  char local_6c [104];
  
  fVar6 = (float10)FUN_004e1fd9();
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_0061d200();
  local_80 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_7c = (short *)(param_1 + 0x19a4);
    pfVar5 = (float *)(param_1 + 0xebc);
    pfVar3 = (float *)(param_1 + 0xaac);
    do {
      if (*local_7c == 0) {
        *pfVar5 = -(((pfVar3[0x37e] * pfVar3[-2] +
                     pfVar3[0x380] * *pfVar3 + pfVar3[-1] * pfVar3[0x37f]) / pfVar5[0x32e]) * fVar1)
        ;
        dVar10 = (double)pfVar5[0x32e];
        fVar7 = (float10)FUN_005aabc0();
        dVar8 = (double)fVar7;
        fVar7 = (float10)FUN_005aabc0();
        FUN_0061c369(local_6c,s__Car_V_run2_3_numtech__d_i__d_ve_006736ac,
                     *(undefined4 *)(param_1 + 0x8cc),local_80,(double)*(float *)(param_1 + 0xdc8),
                     (double)fVar7,dVar8,dVar10);
        fVar2 = *pfVar5;
        if (ABS(fVar2) <= (float)_DAT_0064c9b8) {
          pcVar11 = local_6c;
          goto LAB_004f2fd3;
        }
        *pfVar5 = 25.132742;
      }
      else {
        if ((pfVar5[0x33e] == 0.0) || (*(int *)(param_1 + 0x1c1c) == 1)) {
          fVar2 = (float)fVar6 * *pfVar5;
          pcVar11 = s__Car_V_run2_2_006736f4;
          *pfVar5 = fVar2;
LAB_004f2fd3:
          uVar9 = CONCAT44(pcVar11,fVar2);
        }
        else {
          fVar2 = (fVar1 * *(float *)(param_1 + 0x1c84)) /
                  *(float *)(param_1 + 0x1c44 + *(int *)(param_1 + 0x1c1c) * 4);
          *pfVar5 = fVar2;
          uVar9 = CONCAT44(s__Car_V_run2_1_00673704,fVar2);
        }
        fVar7 = (float10)FUN_004e3a69(uVar9);
        *pfVar5 = (float)fVar7;
      }
      local_7c = local_7c + 1;
      local_80 = local_80 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar3 = pfVar3 + 3;
    } while (local_80 < *(int *)(param_1 + 0xdd4));
  }
  FUN_004f2880();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    pfVar5 = (float *)(param_1 + 0xebc);
    do {
      if (pfVar5[0x2c6] != 0.0) {
        fVar2 = (float)(int)((-(uint)(*(int *)(param_1 + 0x1c1c) != 0) & 2) - 1) *
                (-ABS(*pfVar5) -
                (((*(float *)(param_1 + 0x1c84) * _DAT_0064b2ec) / *(float *)(param_1 + 0x1c88)) /
                pfVar5[0x32e]) * fVar1);
        *pfVar5 = fVar2;
        fVar6 = (float10)FUN_004e3a69(fVar2,s__Car_V_run2_4_0067369c);
        *pfVar5 = (float)fVar6;
      }
      fVar6 = (float10)FUN_004e3a69(*pfVar5,s__Car_V_run2_5_0067368c);
      *pfVar5 = (float)fVar6;
      fVar6 = (float10)FUN_004e3a69(pfVar5[-8],s__Car_V_run2_6_0067367c);
      pfVar5[-8] = (float)fVar6;
      fVar6 = (float10)FUN_004e3a69();
      pfVar5[-8] = (float)fVar6;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xdd4));
  }
  if (*(int *)(param_1 + 0x1abc) == 0) {
    FUN_004eaf60();
  }
  else {
    FUN_004eaf60();
    FUN_004eaf60();
    fVar6 = (float10)FUN_004eae60();
    if (fVar6 <= (float10)_DAT_0064b254) {
      FUN_004eaf20();
      return;
    }
  }
  return;
}

