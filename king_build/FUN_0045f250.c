
void FUN_0045f250(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  float10 fVar11;
  int *apiStack_f0 [4];
  int **ppiStack_e0;
  int *piStack_dc;
  int *apiStack_d8 [6];
  int *local_b0;
  int *local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined4 local_98 [6];
  undefined4 local_80 [8];
  int local_60 [6];
  int local_48 [6];
  undefined1 local_30 [24];
  int local_18 [6];
  
  if (param_1 != param_2) {
    iVar7 = 0;
    uVar6 = (int)param_2 - (int)param_1;
    for (iVar2 = (int)uVar6 >> 2; iVar2 != 1; iVar2 = iVar2 >> 1) {
      iVar7 = iVar7 + 1;
    }
    local_b0 = param_2;
    local_a8 = (double)(CONCAT44(local_a8._4_4_,uVar6) & 0xfffffffffffffffc);
    piVar4 = (int *)(iVar7 * 2);
    if (0x40 < (int)(uVar6 & 0xfffffffc)) {
LAB_0045f2a8:
      piVar3 = local_b0;
      if (piVar4 != (int *)0x0) goto code_r0x0045f2b0;
      piStack_dc = (int *)0x0;
      apiStack_f0[2] = param_1;
      puVar8 = (undefined4 *)&stack0x0000000c;
      ppiVar10 = apiStack_f0 + 6;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppiVar10 = (int *)*puVar8;
        puVar8 = puVar8 + 1;
        ppiVar10 = ppiVar10 + 1;
      }
      apiStack_f0[1] = (undefined4 *)0x45f362;
      apiStack_f0[3] = piVar3;
      ppiStack_e0 = (int **)piVar3;
      FUN_0046aa10();
LAB_0045f365:
      if (0x40 < (int)(int *)local_a8) {
        piVar4 = param_1 + 0x10;
        local_a8 = (double)CONCAT44(local_a8._4_4_,piVar4);
        if ((param_1 != piVar4) && (piVar3 = param_1 + 1, piVar3 != piVar4)) {
          local_ac = param_1 + 2;
          do {
            local_b0 = (int *)*piVar3;
            puVar8 = (undefined4 *)&stack0x0000000c;
            puVar9 = local_98;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            apiStack_d8[5] = (int *)*param_1;
            apiStack_d8[4] = (int *)0x45f3bc;
            FUN_004042b0();
            apiStack_d8[5] = local_b0;
            apiStack_d8[4] = (int *)0x45f3ce;
            FUN_004042b0();
            apiStack_d8[5] = &local_a0;
            apiStack_d8[4] = &local_9c;
            apiStack_d8[3] = (int *)0x45f3e1;
            cVar1 = FUN_0045f5e0();
            if (cVar1 == '\0') {
              puVar8 = local_98;
              ppiVar10 = apiStack_f0 + 6;
              for (piStack_dc = (int *)0x6; piStack_dc != (int *)0x0;
                  piStack_dc = (int *)((int)piStack_dc + -1)) {
                *ppiVar10 = (int *)*puVar8;
                puVar8 = puVar8 + 1;
                ppiVar10 = ppiVar10 + 1;
              }
              ppiStack_e0 = &local_b0;
              apiStack_f0[3] = (int *)0x45f419;
              FUN_0041d3f0();
              apiStack_f0[3] = (int *)0x45f41f;
              ppiStack_e0 = (int **)piVar3;
              FUN_0046bf10();
            }
            else {
              apiStack_d8[5] = local_ac;
              apiStack_d8[3] = param_1;
              apiStack_d8[2] = (int *)0x45f3f1;
              apiStack_d8[4] = piVar3;
              FUN_00468c60();
              *param_1 = (int)local_b0;
            }
            piVar3 = piVar3 + 1;
            local_ac = local_ac + 1;
            piVar4 = (int *)local_a8;
          } while (piVar3 != (int *)local_a8);
        }
        if (piVar4 == param_2) {
          return;
        }
        do {
          puVar8 = (undefined4 *)&stack0x0000000c;
          ppiVar10 = apiStack_f0 + 6;
          for (piStack_dc = (int *)0x6; piStack_dc != (int *)0x0;
              piStack_dc = (int *)((int)piStack_dc + -1)) {
            *ppiVar10 = (int *)*puVar8;
            puVar8 = puVar8 + 1;
            ppiVar10 = ppiVar10 + 1;
          }
          apiStack_f0[3] = (int *)0x45f469;
          ppiStack_e0 = (int **)piVar4;
          FUN_0041d3f0();
          apiStack_f0[3] = (int *)0x45f46f;
          ppiStack_e0 = (int **)piVar4;
          FUN_0046bf10();
          piVar4 = piVar4 + 1;
        } while (piVar4 != param_2);
        return;
      }
    }
    piVar4 = param_1 + 1;
    if (piVar4 != param_2) {
      local_b0 = param_1 + 2;
      do {
        apiStack_d8[5] = (int *)*param_1;
        puVar8 = (undefined4 *)&stack0x0000000c;
        puVar9 = local_98;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        local_ac = (int *)*piVar4;
        apiStack_d8[4] = (int *)0x45f4cd;
        FUN_004042b0();
        apiStack_d8[5] = local_ac;
        apiStack_d8[4] = (int *)0x45f4df;
        FUN_004042b0();
        puVar8 = (undefined4 *)(local_9c + 0x28);
        puVar9 = local_80;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = (undefined4 *)(local_a0 + 0x28);
        ppiVar10 = apiStack_f0 + 4;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppiVar10 = (int *)*puVar8;
          puVar8 = puVar8 + 1;
          ppiVar10 = ppiVar10 + 1;
        }
        apiStack_f0[3] = (int *)local_30;
        apiStack_f0[2] = (int *)0x45f511;
        apiStack_f0[2] = (int *)FUN_00435cd0();
        apiStack_f0[1] = local_98;
        apiStack_f0[0] = local_18;
        uVar5 = FUN_0045be30();
        fVar11 = (float10)FUN_004577a0(uVar5);
        local_a8 = (double)fVar11;
        puVar8 = local_80;
        ppiVar10 = apiStack_f0 + 4;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *ppiVar10 = (int *)*puVar8;
          puVar8 = puVar8 + 1;
          ppiVar10 = ppiVar10 + 1;
        }
        apiStack_f0[3] = local_60;
        apiStack_f0[2] = (int *)0x45f54b;
        apiStack_f0[2] = (int *)FUN_00435cd0();
        apiStack_f0[1] = local_98;
        apiStack_f0[0] = local_48;
        uVar5 = FUN_0045be30();
        fVar11 = (float10)FUN_004577a0(uVar5);
        if (fVar11 <= (float10)local_a8) {
          puVar8 = local_98;
          ppiVar10 = apiStack_f0 + 6;
          for (piStack_dc = (int *)0x6; piStack_dc != (int *)0x0;
              piStack_dc = (int *)((int)piStack_dc + -1)) {
            *ppiVar10 = (int *)*puVar8;
            puVar8 = puVar8 + 1;
            ppiVar10 = ppiVar10 + 1;
          }
          ppiStack_e0 = &local_ac;
          apiStack_f0[3] = (int *)0x45f5a6;
          FUN_0041d3f0();
          apiStack_f0[3] = (int *)0x45f5ac;
          ppiStack_e0 = (int **)piVar4;
          FUN_0046bf10();
        }
        else {
          apiStack_d8[5] = local_b0;
          apiStack_d8[3] = param_1;
          apiStack_d8[2] = (int *)0x45f57e;
          apiStack_d8[4] = piVar4;
          FUN_00468c60();
          *param_1 = (int)local_ac;
        }
        piVar4 = piVar4 + 1;
        local_b0 = local_b0 + 1;
      } while (piVar4 != param_2);
    }
  }
  return;
code_r0x0045f2b0:
  puVar8 = (undefined4 *)&stack0x0000000c;
  ppiVar10 = apiStack_f0 + 6;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar10 = (int *)*puVar8;
    puVar8 = puVar8 + 1;
    ppiVar10 = ppiVar10 + 1;
  }
  local_ac = (int *)((int)piVar4 + -1);
  puVar8 = (undefined4 *)&stack0x0000000c;
  ppiVar10 = apiStack_f0;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar10 = (int *)*puVar8;
    puVar8 = puVar8 + 1;
    ppiVar10 = ppiVar10 + 1;
  }
  ppiStack_e0 = (int **)FUN_00468d10(param_1,param_1 + (((int)piVar3 - (int)param_1 >> 2) -
                                                        ((int)piVar3 - (int)param_1 >> 0x1f) >> 1),
                                     piVar3 + -1);
  apiStack_f0[3] = (int *)0x45f300;
  FUN_0041d3f0();
  apiStack_f0[3] = param_1;
  apiStack_f0[2] = (int *)0x45f307;
  ppiStack_e0 = (int **)piVar3;
  piVar3 = (int *)FUN_00469150();
  piStack_dc = local_ac;
  ppiStack_e0 = (int **)0x0;
  apiStack_f0[3] = local_b0;
  puVar8 = (undefined4 *)&stack0x0000000c;
  ppiVar10 = apiStack_f0 + 6;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar10 = (int *)*puVar8;
    puVar8 = puVar8 + 1;
    ppiVar10 = ppiVar10 + 1;
  }
  apiStack_f0[1] = (undefined4 *)0x45f32e;
  apiStack_f0[2] = piVar3;
  FUN_00465e20();
  piVar4 = local_ac;
  local_b0 = piVar3;
  if ((int)((int)piVar3 - (int)param_1 & 0xfffffffcU) < 0x41) goto LAB_0045f365;
  goto LAB_0045f2a8;
}

