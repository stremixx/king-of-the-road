
void FUN_0045bb50(int ***param_1,int ***param_2)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int *piVar8;
  int ****ppppiVar9;
  undefined8 *puVar10;
  float10 fVar11;
  int ***pppiStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int **local_b4;
  int **local_b0;
  int *local_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  int local_88 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    if ((param_1 != param_2) && (pppiVar5 = param_1 + 1, pppiVar5 != param_2)) {
      local_b4 = (int **)(param_1 + 2);
      do {
        local_b0 = *pppiVar5;
        puVar6 = (undefined4 *)&stack0x0000000c;
        pdVar2 = &local_a0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pdVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          pdVar2 = (double *)((int)pdVar2 + 4);
        }
        ppiVar7 = local_b0 + 10;
        ppppiVar9 = &pppiStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppppiVar9 = (int ***)*ppiVar7;
          ppiVar7 = ppiVar7 + 1;
          ppppiVar9 = ppppiVar9 + 1;
        }
        pdVar2 = (double *)FUN_00435cd0(local_38);
        local_c8 = local_90 - pdVar2[2];
        local_d0 = local_98 - pdVar2[1];
        local_d8 = local_a0 - *pdVar2;
        iStack_dc = 0x45bd53;
        FUN_00405ea0();
        ppiVar7 = *param_1 + 10;
        piVar8 = local_88;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = (int)*ppiVar7;
          ppiVar7 = ppiVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        local_c8 = (double)CONCAT44(local_68,0x45bd70);
        fVar11 = (float10)FUN_004577a0();
        local_a8 = (double)fVar11;
        piVar8 = local_88;
        ppppiVar9 = &pppiStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppppiVar9 = (int ***)*piVar8;
          piVar8 = piVar8 + 1;
          ppppiVar9 = ppppiVar9 + 1;
        }
        uVar1 = FUN_00435cd0(local_50);
        uVar1 = FUN_0045be30(local_20,&local_a0,uVar1);
        fVar11 = (float10)FUN_004577a0(uVar1);
        if (fVar11 <= (float10)local_a8) {
          pdVar2 = &local_a0;
          puVar10 = &local_d8;
          for (iStack_dc = 6; iStack_dc != 0; iStack_dc = iStack_dc + -1) {
            *(undefined4 *)puVar10 = *(undefined4 *)pdVar2;
            pdVar2 = (double *)((int)pdVar2 + 4);
            puVar10 = (undefined8 *)((int)puVar10 + 4);
          }
          pppiStack_e0 = &local_b0;
          FUN_0041d3f0();
          pppiStack_e0 = pppiVar5;
          FUN_00469b30();
        }
        else {
          iVar3 = (int)pppiVar5 - (int)param_1 >> 2;
          if (0 < iVar3) {
            pppiVar4 = (int ***)local_b4;
            do {
              piVar8 = (int *)((int)pppiVar5 + (-4 - (int)local_b4) + (int)pppiVar4);
              pppiVar4 = pppiVar4 + -1;
              iVar3 = iVar3 + -1;
              *pppiVar4 = (int **)*piVar8;
            } while (iVar3 != 0);
          }
          *param_1 = local_b0;
        }
        pppiVar5 = pppiVar5 + 1;
        local_b4 = local_b4 + 1;
      } while (pppiVar5 != param_2);
    }
  }
  else {
    local_b0 = (int **)(param_1 + 0x10);
    if ((param_1 != (int ***)local_b0) && (pppiVar5 = param_1 + 1, pppiVar5 != (int ***)local_b0)) {
      local_b4 = (int **)(param_1 + 2);
      do {
        local_ac = (int *)*pppiVar5;
        puVar6 = (undefined4 *)&stack0x0000000c;
        pdVar2 = &local_a0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pdVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          pdVar2 = (double *)((int)pdVar2 + 4);
        }
        ppiVar7 = *param_1 + 10;
        piVar8 = local_88;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = (int)*ppiVar7;
          ppiVar7 = ppiVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        ppiVar7 = (int **)(local_ac + 10);
        ppppiVar9 = &pppiStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppppiVar9 = (int ***)*ppiVar7;
          ppiVar7 = ppiVar7 + 1;
          ppppiVar9 = ppppiVar9 + 1;
        }
        uVar1 = FUN_00435cd0(local_68);
        uVar1 = FUN_0045be30(local_20,&local_a0,uVar1);
        fVar11 = (float10)FUN_004577a0(uVar1);
        local_a8 = (double)fVar11;
        piVar8 = local_88;
        ppppiVar9 = &pppiStack_e0;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppppiVar9 = (int ***)*piVar8;
          piVar8 = piVar8 + 1;
          ppppiVar9 = ppppiVar9 + 1;
        }
        uVar1 = FUN_00435cd0(local_50);
        uVar1 = FUN_0045be30(local_38,&local_a0,uVar1);
        fVar11 = (float10)FUN_004577a0(uVar1);
        if (fVar11 <= (float10)local_a8) {
          pdVar2 = &local_a0;
          puVar10 = &local_d8;
          for (iStack_dc = 6; iStack_dc != 0; iStack_dc = iStack_dc + -1) {
            *(undefined4 *)puVar10 = *(undefined4 *)pdVar2;
            pdVar2 = (double *)((int)pdVar2 + 4);
            puVar10 = (undefined8 *)((int)puVar10 + 4);
          }
          pppiStack_e0 = (int ***)&local_ac;
          FUN_0041d3f0();
          pppiStack_e0 = pppiVar5;
          FUN_00469b30();
        }
        else {
          local_c8 = (double)ZEXT48(local_b0);
          local_d0 = (double)CONCAT44(local_b4,pppiVar5);
          local_d8 = (double)CONCAT44(param_1,0x45bc4e);
          FUN_00468c90();
          *param_1 = (int **)local_ac;
        }
        pppiVar5 = pppiVar5 + 1;
        local_b4 = local_b4 + 1;
      } while (pppiVar5 != (int ***)local_b0);
    }
    pppiVar5 = (int ***)local_b0;
    if ((int ***)local_b0 != param_2) {
      do {
        puVar6 = (undefined4 *)&stack0x0000000c;
        puVar10 = &local_d8;
        for (iStack_dc = 6; iStack_dc != 0; iStack_dc = iStack_dc + -1) {
          *(undefined4 *)puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = (undefined8 *)((int)puVar10 + 4);
        }
        pppiStack_e0 = pppiVar5;
        FUN_0041d3f0();
        pppiStack_e0 = pppiVar5;
        FUN_00469b30();
        pppiVar5 = pppiVar5 + 1;
      } while (pppiVar5 != param_2);
      return;
    }
  }
  return;
}

