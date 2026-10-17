
undefined4 __thiscall
FUN_0048cef0(undefined4 *param_1,double *param_2,double *param_3,double *param_4,uint *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined4 local_88;
  undefined8 local_80;
  double local_70;
  double local_68;
  double local_60;
  double local_28;
  double local_20;
  double local_18;
  
  puVar12 = param_1;
  pdVar13 = &local_28;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pdVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    pdVar13 = (double *)((int)pdVar13 + 4);
  }
  FUN_0048cec0();
  if (SQRT(local_28 * local_28 + local_18 * local_18 + local_20 * local_20) <=
      *(double *)(param_1 + 6) + *param_3) {
    pdVar13 = (double *)param_1[8];
    local_88 = 0;
    FUN_00405ea0(*param_2 - *pdVar13,param_2[1] - pdVar13[1],param_2[2] - pdVar13[2]);
    iVar10 = (int)(param_1[9] - param_1[8]) >> 0x1f;
    uVar11 = 0;
    if ((int)(param_1[9] - param_1[8]) / 0x18 + iVar10 + -1 != iVar10) {
      iVar10 = 0x18;
      local_80 = local_70 * local_70 + local_60 * local_60 + local_68 * local_68;
      do {
        iVar1 = param_1[8];
        dVar2 = *param_2 - *(double *)(iVar10 + iVar1);
        dVar4 = param_2[1] - *(double *)(iVar10 + 8 + iVar1);
        dVar5 = param_2[2] - *(double *)(iVar10 + 0x10 + iVar1);
        dVar3 = dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4;
        dVar6 = *(double *)(iVar10 + iVar1) - *(double *)(iVar10 + -0x18 + iVar1);
        dVar9 = *(double *)(iVar10 + 8 + iVar1) - *(double *)(iVar10 + -0x10 + iVar1);
        dVar8 = *(double *)(iVar10 + 0x10 + iVar1) - *(double *)(iVar10 + -8 + iVar1);
        dVar7 = dVar6 * dVar6 + dVar8 * dVar8 + dVar9 * dVar9;
        if (dVar3 < dVar7 + local_80) {
          if (local_80 < dVar7 + dVar3) {
            dVar6 = dVar6 * local_70 + local_68 * dVar9 + dVar8 * local_60;
            dVar6 = (dVar6 * dVar6) / dVar7;
            local_80 = local_80 - dVar6;
            if (local_80 < *param_3) {
              *param_3 = local_80;
              local_88 = 1;
              *param_5 = uVar11;
              *param_4 = SQRT(dVar6 / dVar7);
            }
          }
          else if (dVar3 < *param_3) {
            local_88 = 1;
            *param_3 = dVar3;
            *param_5 = uVar11;
            *(undefined4 *)param_4 = 0;
            *(undefined4 *)((int)param_4 + 4) = 0x3ff00000;
          }
        }
        else if (local_80 < *param_3) {
          *(undefined4 *)param_3 = (undefined4)local_80;
          *(undefined4 *)((int)param_3 + 4) = local_80._4_4_;
          local_88 = 1;
          *param_5 = uVar11;
          *(undefined4 *)param_4 = 0;
          *(undefined4 *)((int)param_4 + 4) = 0;
        }
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 0x18;
        local_80 = dVar3;
        local_70 = dVar2;
        local_68 = dVar4;
        local_60 = dVar5;
      } while (uVar11 < (int)(param_1[9] - param_1[8]) / 0x18 - 1U);
    }
    return local_88;
  }
  return 0;
}

