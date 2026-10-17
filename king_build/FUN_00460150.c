
void FUN_00460150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  float10 fVar16;
  float10 fVar17;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_7c;
  uint local_74;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    puVar12 = param_1;
    if (param_1 != param_2) {
      while (puVar12 = puVar12 + 1, puVar12 != param_2) {
        piVar2 = (int *)*puVar12;
        puVar11 = (undefined4 *)&stack0x0000000c;
        pdVar13 = &local_50;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pdVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          pdVar13 = (double *)((int)pdVar13 + 4);
        }
        piVar3 = (int *)*param_1;
        local_98._4_4_ = (double *)local_38;
        local_90 = (double)CONCAT44(&local_50,*piVar2 + 0x38);
        local_98._0_4_ = 0x460386;
        uVar8 = FUN_0045be30();
        local_98 = (double)CONCAT44(local_98._4_4_,uVar8);
        local_a0 = (double)CONCAT44(0x46038c,(undefined4)local_a0);
        fVar16 = (float10)FUN_004577a0();
        local_a0 = (double)CONCAT44(&local_50,*piVar3 + 0x38);
        uVar8 = FUN_0045be30(local_20);
        fVar17 = (float10)FUN_004577a0(uVar8);
        if (fVar17 <= (float10)(double)fVar16) {
          pdVar13 = &local_50;
          pdVar15 = &local_68;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)pdVar15 = *(undefined4 *)pdVar13;
            pdVar13 = (double *)((int)pdVar13 + 4);
            pdVar15 = (double *)((int)pdVar15 + 4);
          }
          local_90 = (double)CONCAT44(puVar12[-1],piVar2);
          local_98 = (double)CONCAT44(0x4603fe,(undefined4)local_98);
          cVar7 = FUN_004600a0();
          puVar10 = puVar12 + -1;
          puVar11 = puVar12;
          while (puVar1 = puVar10, cVar7 != '\0') {
            *puVar11 = *puVar1;
            local_90 = (double)CONCAT44(puVar1[-1],piVar2);
            local_98 = (double)CONCAT44(0x460419,(undefined4)local_98);
            cVar7 = FUN_004600a0();
            puVar10 = puVar1 + -1;
            puVar11 = puVar1;
          }
          *puVar11 = piVar2;
        }
        else {
          local_90 = (double)(ulonglong)local_74;
          local_98 = (double)CONCAT44(puVar12 + 1,puVar12);
          local_a0 = (double)CONCAT44(param_1,0x4603d2);
          FUN_00468c90();
          *param_1 = piVar2;
        }
      }
    }
  }
  else {
    puVar12 = param_1 + 0x10;
    if ((param_1 != puVar12) && (puVar11 = param_1 + 1, puVar11 != puVar12)) {
      local_7c = param_1 + 2;
      do {
        local_98._4_4_ = &local_68;
        puVar10 = (undefined4 *)&stack0x0000000c;
        pdVar13 = &local_50;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pdVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          pdVar13 = (double *)((int)pdVar13 + 4);
        }
        piVar2 = (int *)*puVar11;
        piVar3 = (int *)*param_1;
        local_90 = (double)CONCAT44(&local_50,*piVar2 + 0x38);
        local_98._0_4_ = 0x4601c3;
        uVar8 = FUN_0045be30();
        local_98 = (double)CONCAT44(local_98._4_4_,uVar8);
        local_a0 = (double)CONCAT44(0x4601c9,(undefined4)local_a0);
        fVar16 = (float10)FUN_004577a0();
        local_a0 = (double)CONCAT44(&local_50,*piVar3 + 0x38);
        uVar8 = FUN_0045be30(local_38);
        fVar17 = (float10)FUN_004577a0(uVar8);
        if (fVar17 <= (float10)(double)fVar16) {
          pdVar13 = &local_50;
          puVar14 = &local_a0;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)puVar14 = *(undefined4 *)pdVar13;
            pdVar13 = (double *)((int)pdVar13 + 4);
            puVar14 = (undefined8 *)((int)puVar14 + 4);
          }
          FUN_0046aee0(puVar11,piVar2);
        }
        else {
          iVar9 = (int)puVar11 - (int)param_1 >> 2;
          if (0 < iVar9) {
            puVar10 = local_7c;
            do {
              puVar1 = (undefined4 *)((int)puVar11 + (-4 - (int)local_7c) + (int)puVar10);
              puVar10 = puVar10 + -1;
              iVar9 = iVar9 + -1;
              *puVar10 = *puVar1;
            } while (iVar9 != 0);
          }
          *param_1 = piVar2;
        }
        puVar11 = puVar11 + 1;
        local_7c = local_7c + 1;
      } while (puVar11 != puVar12);
    }
    if (puVar12 != param_2) {
      do {
        piVar2 = (int *)*puVar12;
        puVar11 = (undefined4 *)&stack0x0000000c;
        pdVar13 = &local_50;
        for (iVar9 = 6; puVar10 = puVar12, iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pdVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          pdVar13 = (double *)((int)pdVar13 + 4);
        }
        while( true ) {
          puVar11 = puVar10 + -1;
          piVar3 = (int *)*puVar11;
          iVar9 = *piVar2;
          local_90 = *(double *)(iVar9 + 0x48) - local_40;
          local_98 = *(double *)(iVar9 + 0x40) - local_48;
          local_a0 = *(double *)(iVar9 + 0x38) - local_50;
          FUN_00405ea0();
          dVar5 = local_68 * local_68;
          dVar6 = local_60 * local_60;
          dVar4 = local_58 * local_58;
          local_98._4_4_ = (double *)local_38;
          local_90 = (double)CONCAT44(&local_50,*piVar3 + 0x38);
          local_98._0_4_ = 0x4602f8;
          uVar8 = FUN_0045be30();
          local_98 = (double)CONCAT44(local_98._4_4_,uVar8);
          local_a0 = (double)CONCAT44(0x4602fe,(undefined4)local_a0);
          fVar16 = (float10)FUN_004577a0();
          if (fVar16 <= (float10)SQRT(dVar4 + dVar6 + dVar5)) break;
          *puVar10 = *puVar11;
          puVar10 = puVar11;
        }
        puVar12 = puVar12 + 1;
        *puVar10 = piVar2;
      } while (puVar12 != param_2);
      return;
    }
  }
  return;
}

