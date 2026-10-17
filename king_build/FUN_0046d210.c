
void FUN_0046d210(int param_1,int param_2,int param_3,undefined4 param_4,double param_5,
                 double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined4 local_84;
  int local_70;
  int local_6c;
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar6 = (param_2 + -1) / 2;
    local_84 = param_4;
    uStack_88 = 0x46d245;
    FUN_004042b0();
    local_84 = *(undefined4 *)(param_1 + iVar6 * 4);
    uStack_88 = 0x46d259;
    FUN_004042b0();
    puVar7 = (undefined4 *)(local_70 + 0x28);
    puVar8 = auStack_a0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_38);
    dVar1 = *pdVar4;
    dVar2 = pdVar4[1];
    puVar7 = (undefined4 *)(local_6c + 0x28);
    puVar8 = auStack_a0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    dVar3 = pdVar4[2];
    pdVar4 = (double *)FUN_00435cd0(local_20);
    if (SQRT((param_7 - pdVar4[2]) * (param_7 - pdVar4[2]) +
             (param_6 - pdVar4[1]) * (param_6 - pdVar4[1]) +
             (param_5 - *pdVar4) * (param_5 - *pdVar4)) <=
        SQRT((param_5 - dVar1) * (param_5 - dVar1) +
             (param_7 - dVar3) * (param_7 - dVar3) + (param_6 - dVar2) * (param_6 - dVar2))) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    param_2 = iVar6;
  } while (param_3 < iVar6);
  *(undefined4 *)(param_1 + param_2 * 4) = param_4;
  return;
}

