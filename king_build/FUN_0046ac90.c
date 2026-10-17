
void FUN_0046ac90(undefined4 *param_1,undefined4 *param_2,double param_3,double param_4,
                 double param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  double *pdVar10;
  float10 fVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  int local_94;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20 [28];
  
  uVar6 = (int)param_2 - (int)param_1;
  do {
    if ((int)(uVar6 & 0xfffffffc) < 5) {
      return;
    }
    piVar2 = (int *)param_2[-1];
    puVar1 = param_2 + -1;
    iVar4 = (int)param_2 + (-4 - (int)param_1) >> 2;
    iVar7 = 2;
    *puVar1 = *param_1;
    local_94 = 0;
    if (2 < iVar4) {
      do {
        piVar3 = (int *)param_1[iVar7 + -1];
        iVar8 = *(int *)param_1[iVar7];
        FUN_00405ea0(*(double *)(iVar8 + 0x38) - param_3,*(double *)(iVar8 + 0x40) - param_4,
                     *(double *)(iVar8 + 0x48) - param_5);
        iVar8 = *piVar3;
        FUN_00405ea0(*(double *)(iVar8 + 0x38) - param_3,*(double *)(iVar8 + 0x40) - param_4,
                     *(double *)(iVar8 + 0x48) - param_5);
        iVar8 = iVar7;
        if (SQRT(local_70 * local_70 + local_78 * local_78 + local_80 * local_80) <
            SQRT(local_38 * local_38 + local_28 * local_28 + local_30 * local_30)) {
          iVar8 = iVar7 + -1;
        }
        iVar7 = iVar8 * 2 + 2;
        param_1[local_94] = param_1[iVar8];
        local_94 = iVar8;
      } while (iVar7 < iVar4);
    }
    if (iVar7 == iVar4) {
      param_1[local_94] = param_1[iVar7 + -1];
      local_94 = iVar7 + -1;
    }
    puVar9 = &param_3;
    pdVar10 = &local_50;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar10 = *(undefined4 *)puVar9;
      puVar9 = (undefined8 *)((int)puVar9 + 4);
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    while (0 < local_94) {
      iVar4 = (local_94 + -1) / 2;
      iVar7 = *(int *)param_1[iVar4];
      FUN_00405ea0(*(double *)(iVar7 + 0x38) - local_50,*(double *)(iVar7 + 0x40) - local_48,
                   *(double *)(iVar7 + 0x48) - local_40);
      puVar12 = local_20;
      uVar13 = CONCAT44(&local_50,*piVar2 + 0x38);
      uVar5 = FUN_0045be30();
      fVar11 = (float10)FUN_004577a0(uVar5,puVar12,uVar13);
      if (fVar11 <= (float10)SQRT(local_58 * local_58 + local_60 * local_60 + local_68 * local_68))
      break;
      param_1[local_94] = param_1[iVar4];
      local_94 = iVar4;
    }
    uVar6 = (int)puVar1 - (int)param_1;
    param_1[local_94] = piVar2;
    param_2 = puVar1;
  } while( true );
}

