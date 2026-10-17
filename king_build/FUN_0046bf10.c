
void FUN_0046bf10(undefined4 *param_1,undefined4 param_2,double param_3,double param_4,
                 double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined4 local_84;
  int local_70;
  int local_6c;
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  while( true ) {
    puVar6 = param_1 + -1;
    local_84 = *puVar6;
    uStack_88 = 0x46bf32;
    FUN_004042b0();
    local_84 = param_2;
    uStack_88 = 0x46bf43;
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
    if (SQRT((param_3 - *pdVar4) * (param_3 - *pdVar4) +
             (param_5 - pdVar4[2]) * (param_5 - pdVar4[2]) +
             (param_4 - pdVar4[1]) * (param_4 - pdVar4[1])) <=
        SQRT((param_3 - dVar1) * (param_3 - dVar1) +
             (param_5 - dVar3) * (param_5 - dVar3) + (param_4 - dVar2) * (param_4 - dVar2))) break;
    *param_1 = *puVar6;
    param_1 = puVar6;
  }
  *param_1 = param_2;
  return;
}

