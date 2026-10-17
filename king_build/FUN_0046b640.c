
void FUN_0046b640(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
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
  undefined1 *puStack_a0;
  int iStack_9c;
  double local_98;
  double local_90;
  double local_88;
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
    puVar7 = (undefined4 *)(*(int *)(param_1 + (int)puVar6 * 4) + 0x28);
    ppuVar9 = &puStack_a0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar9 = (undefined1 *)*puVar7;
      puVar7 = puVar7 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_38);
    local_88 = param_7 - pdVar4[2];
    local_90 = param_6 - pdVar4[1];
    local_98 = param_5 - *pdVar4;
    iStack_9c = 0x46b6af;
    FUN_00405ea0();
    puVar7 = (undefined4 *)(*(int *)(param_1 + -4 + (int)puVar6 * 4) + 0x28);
    ppuVar9 = &puStack_a0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar9 = (undefined1 *)*puVar7;
      puVar7 = puVar7 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
    pdVar4 = (double *)FUN_00435cd0(local_20);
    if (SQRT(local_68 * local_68 + local_58 * local_58 + local_60 * local_60) <
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
  pdVar4 = &local_98;
  for (iStack_9c = 6; iStack_9c != 0; iStack_9c = iStack_9c + -1) {
    *(undefined4 *)pdVar4 = *(undefined4 *)puVar8;
    puVar8 = (undefined8 *)((int)puVar8 + 4);
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  puStack_a0 = (undefined1 *)&param_4;
  FUN_0041d3f0();
  puStack_a0 = puVar3;
  FUN_0046cc90(param_1,param_2);
  return;
}

