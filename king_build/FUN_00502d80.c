
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00502d80(int param_1,float param_2,float param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = (int)param_3;
  iVar5 = (int)param_2;
  *(undefined4 *)(param_1 + 0xee8 + (int)param_3 * 4) = 0;
  iVar2 = param_1 + (int)param_3 * 0xc;
  *(undefined4 *)(iVar2 + 0xf08) = DAT_007015b0;
  *(undefined4 *)(iVar2 + 0xf0c) = DAT_007015b4;
  *(undefined4 *)(iVar2 + 0xf10) = DAT_007015b8;
  piVar1 = (int *)((int)param_2 + 100);
  if (*piVar1 == 0) {
    return;
  }
  param_2 = *(float *)(param_1 + 0x1964 + (int)param_3 * 4);
  if (_DAT_0064b440 < param_2) {
    param_2 = 10.0;
  }
  if (param_4 == 0) {
    param_4 = *(int *)(*piVar1 + 4);
  }
  switch(param_4) {
  case 1:
  case 8:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    fVar9 = (float10)FUN_00506bb0(*(undefined4 *)(param_1 + 0x1984 + (int)param_3 * 4),
                                  *(undefined4 *)(param_1 + 0x2690 + (int)param_3 * 4));
    fVar9 = fVar9 * (float10)*(float *)(param_1 + 0xd20 + (int)param_3 * 4);
    goto LAB_005030d8;
  case 2:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    fVar3 = *(float *)(param_1 + 0x1984 + (int)param_3 * 4);
    param_3 = (fVar3 / (fVar3 + _DAT_0064b440)) * *(float *)(param_1 + 0x2690 + (int)param_3 * 4) *
              *(float *)(param_1 + 0xd20 + (int)param_3 * 4);
    fVar9 = (float10)FUN_004e1fd9();
    fVar9 = (fVar9 * (float10)param_3 * (float10)_DAT_0064caa0) /
            (float10)*(float *)(param_1 + 0x2640) + (float10)_DAT_0064a590;
    break;
  case 3:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    param_3 = (param_2 + _DAT_0064b310) *
              *(float *)(param_1 + 0x2690 + (int)param_3 * 4) *
              *(float *)(param_1 + 0xd20 + (int)param_3 * 4) * _DAT_0064b8f8;
    fVar9 = (float10)FUN_004e1fd9();
    fVar9 = (fVar9 * (float10)param_3 * (float10)_DAT_0064caa0) /
            (float10)*(float *)(param_1 + 0x2640);
    break;
  case 4:
  case 7:
  case 9:
    fVar9 = (float10)_DAT_0064b254;
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) == 0) {
      fVar3 = (*(float *)(param_1 + 0x1984 + (int)param_3 * 4) /
              (*(float *)(param_1 + 0x1984 + (int)param_3 * 4) + _DAT_0064b31c)) *
              *(float *)(param_1 + 0x2690 + (int)param_3 * 4);
      if (fVar3 <= *(float *)(param_1 + 0x2670 + (int)param_3 * 4)) {
        fVar3 = fVar3 * *(float *)(param_1 + 0xd20 + (int)param_3 * 4);
      }
      else {
        fVar3 = *(float *)(param_1 + 0xd20 + (int)param_3 * 4) *
                *(float *)(param_1 + 0x2670 + (int)param_3 * 4);
      }
      fVar9 = (float10)FUN_004e1fd9();
      fVar9 = (fVar9 * (float10)fVar3 * (float10)_DAT_0064caa0) /
              (float10)*(float *)(param_1 + 0x2640) + (float10)_DAT_0064a590;
      if ((float10)param_2 <= fVar9) {
        fVar9 = (float10)param_2 / fVar9;
        fVar9 = fVar9 * fVar9 * (float10)fVar3;
      }
      else {
        fVar9 = (float10)fVar3;
      }
    }
    iVar4 = *(int *)(iVar5 + 100);
    fVar7 = (float10)_DAT_0064b248;
    if ((8 < (uint)(*(int *)(iVar4 + 8) << 2)) && (iVar4 = *(int *)(iVar4 + 0xc), iVar4 != 0)) {
      fVar7 = ((float10)*(float *)(iVar4 + 8) - (float10)*(float *)(iVar5 + 0x3c)) *
              (float10)_DAT_0064a6d0;
    }
    fVar8 = (float10)*(float *)(param_1 + 0x1984 + (int)param_3 * 4);
    *(float *)(param_1 + 0xee8 + (int)param_3 * 4) =
         (float)-(((fVar8 * fVar8) /
                  ((float10)*(float *)(param_1 + 0x1984 + (int)param_3 * 4) + (float10)_DAT_0064b31c
                  )) * (float10)*(float *)(param_1 + 0x34b4) * fVar7 * (float10)_DAT_0064a880 +
                 fVar9);
  default:
    goto switchD_00502e06_caseD_5;
  case 6:
  case 10:
  case 0xb:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    fVar3 = *(float *)(param_1 + 0x1984 + (int)param_3 * 4);
    param_3 = (fVar3 / (fVar3 + _DAT_0064b31c)) * *(float *)(param_1 + 0x2690 + (int)param_3 * 4) *
              *(float *)(param_1 + 0xd20 + (int)param_3 * 4);
    fVar9 = (float10)FUN_004e1fd9();
    fVar9 = (fVar9 * (float10)param_3 * (float10)_DAT_0064caa0) /
            (float10)*(float *)(param_1 + 0x2640) + (float10)_DAT_0064a590;
    break;
  case 0xc:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    goto LAB_005030c2;
  case 0xd:
    if (*(short *)(param_1 + 0x19a4 + (int)param_3 * 2) != 0) goto switchD_00502e06_caseD_5;
    if ((*(int *)(param_1 + 0x26c0 + (int)param_3 * 4) == 0) &&
       (*(int *)(param_1 + ((int)param_3 * 5 + 0xf37) * 4) !=
        *(int *)(param_1 + 0x3ce0 + (int)param_3 * 0x14))) {
      *(undefined4 *)(param_1 + 0x3c84) = 1;
      *(undefined4 *)(param_1 + 0x26c0 + (int)param_3 * 4) = 1;
      fVar9 = (float10)FUN_004e2035();
      *(float *)(param_1 + 0x26e0 + (int)param_3 * 4) =
           (float)(fVar9 - (float10)_DAT_006733bc *
                           (float10)*(float *)(param_1 + (int)param_3 * 0x14 + 0x3ce8));
    }
LAB_005030c2:
    fVar9 = (float10)*(float *)(param_1 + 0x2690 + (int)param_3 * 4) *
            (float10)*(float *)(param_1 + 0xd20 + (int)param_3 * 4) * SQRT((float10)param_2);
    goto LAB_005030d8;
  }
  if ((float10)param_2 <= fVar9) {
    fVar9 = ((float10)param_2 / fVar9) * ((float10)param_2 / fVar9) * (float10)param_3;
  }
  else {
    fVar9 = (float10)param_3;
  }
LAB_005030d8:
  *(float *)(param_1 + 0xee8 + iVar6 * 4) = (float)-fVar9;
switchD_00502e06_caseD_5:
  local_10 = *(float *)(param_1 + 0xee8 + iVar6 * 4);
  local_18 = local_10 * *(float *)(iVar2 + 0x1904);
  local_14 = local_10 * *(float *)(iVar2 + 0x1908);
  local_10 = local_10 * *(float *)(iVar2 + 0x190c);
  local_c = local_18;
  local_8 = local_14;
  local_4 = local_10;
  FUN_005aae00(&local_18,&local_c);
  iVar5 = *(int *)(param_1 + (iVar6 * 5 + 0xf37) * 4);
  if ((iVar5 != 0) && (_DAT_0064b254 < *(float *)(param_1 + 0x1b74 + iVar6 * 4))) {
    local_10 = ((float)iVar5 / (float)*(int *)(param_1 + 0x3ce0 + iVar6 * 0x14)) *
               ((*(float *)(param_1 + 0xd20 + iVar6 * 4) * *(float *)(param_1 + 0x1984 + iVar6 * 4)
                * _DAT_0064b310) / (*(float *)(param_1 + 0x1984 + iVar6 * 4) + _DAT_0064b310));
    local_18 = local_10 * *(float *)(iVar2 + 0x1904);
    local_14 = local_10 * *(float *)(iVar2 + 0x1908);
    local_10 = local_10 * *(float *)(iVar2 + 0x190c);
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    FUN_005aae40(&local_18,&local_c);
  }
  return;
}

