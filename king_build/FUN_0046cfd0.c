
void FUN_0046cfd0(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
                 double param_5,double param_6,double param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  double *pdVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puStack_a8;
  int iStack_a4;
  double local_a0;
  double local_98;
  undefined8 local_90;
  int local_7c;
  int local_78;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  puVar3 = param_2;
  puVar1 = param_2;
  while( true ) {
    iVar2 = (int)puVar1 * 2;
    puVar6 = (undefined1 *)(iVar2 + 2);
    if ((int)param_3 <= (int)puVar6) break;
    local_90 = (double)CONCAT44(*(undefined4 *)(param_1 + -4 + (int)puVar6 * 4),0x46d007);
    FUN_004042b0();
    local_90 = (double)CONCAT44(*(undefined4 *)(param_1 + (int)puVar6 * 4),0x46d018);
    FUN_004042b0();
    puVar7 = (undefined4 *)(local_7c + 0x28);
    ppuVar9 = &puStack_a8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar9 = (undefined1 *)*puVar7;
      puVar7 = puVar7 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_38);
    local_90 = param_7 - pdVar4[2];
    local_98 = param_6 - pdVar4[1];
    local_a0 = param_5 - *pdVar4;
    iStack_a4 = 0x46d063;
    FUN_00405ea0();
    puVar7 = (undefined4 *)(local_78 + 0x28);
    ppuVar9 = &puStack_a8;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar9 = (undefined1 *)*puVar7;
      puVar7 = puVar7 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_20);
    if (SQRT(local_58 * local_58 + local_60 * local_60 + local_68 * local_68) <
        SQRT((param_7 - pdVar4[2]) * (param_7 - pdVar4[2]) +
             (param_6 - pdVar4[1]) * (param_6 - pdVar4[1]) +
             (param_5 - *pdVar4) * (param_5 - *pdVar4))) {
      puVar6 = (undefined1 *)(iVar2 + 1);
    }
    *(undefined4 *)(param_1 + (int)puVar1 * 4) = *(undefined4 *)(param_1 + (int)puVar6 * 4);
    puVar1 = puVar6;
  }
  param_2 = puVar1;
  if (puVar6 == param_3) {
    param_2 = (undefined1 *)(iVar2 + 1);
    *(undefined4 *)(param_1 + (int)puVar1 * 4) = *(undefined4 *)(param_1 + (int)param_2 * 4);
  }
  puVar8 = &param_5;
  pdVar4 = &local_a0;
  for (iStack_a4 = 6; iStack_a4 != 0; iStack_a4 = iStack_a4 + -1) {
    *(undefined4 *)pdVar4 = *(undefined4 *)puVar8;
    puVar8 = (undefined8 *)((int)puVar8 + 4);
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  puStack_a8 = (undefined1 *)&param_4;
  FUN_0041d3f0();
  puStack_a8 = puVar3;
  FUN_0046d210(param_1,param_2);
  return;
}

