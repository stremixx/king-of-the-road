
void FUN_0046a540(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  int local_28;
  double local_24;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  double local_8;
  
  if (param_3 <= (int)param_2 - (int)param_1 >> 2) {
    local_14 = param_3 * -4 + 8;
    piVar8 = param_1 + param_3;
    iVar7 = param_3 * -4;
    iVar4 = param_3 * -4 + 4;
    iVar10 = param_3;
    local_18 = (int)param_2 - (int)param_1;
    local_10 = iVar7;
    local_c = iVar4;
    do {
      if ((param_1 != piVar8) && (piVar11 = (int *)(iVar4 + (int)piVar8), piVar11 != piVar8)) {
        puVar9 = (undefined4 *)(local_14 + (int)piVar8);
        local_1c = piVar8;
        do {
          uVar3 = param_4;
          local_28 = *piVar11;
          fVar12 = (float10)FUN_00418960(&local_28,param_4);
          local_24 = (double)fVar12;
          fVar12 = (float10)FUN_00418960(param_1,uVar3);
          if (fVar12 <= (float10)local_24) {
            local_24 = (double)CONCAT44(local_24._4_4_,local_28);
            piVar8 = piVar11;
            piVar6 = puVar9 + -2;
            while( true ) {
              fVar12 = (float10)FUN_00418960(&local_24,param_4);
              local_8 = (double)fVar12;
              fVar12 = (float10)FUN_00418960(piVar6,param_4);
              if (fVar12 <= (float10)local_8) break;
              *piVar8 = *piVar6;
              piVar8 = piVar6;
              piVar6 = piVar6 + -1;
            }
            *piVar8 = local_24._0_4_;
            piVar8 = local_1c;
          }
          else {
            iVar4 = (int)piVar11 - (int)param_1 >> 2;
            if (0 < iVar4) {
              puVar5 = puVar9;
              do {
                puVar1 = (undefined4 *)((int)piVar11 + (-4 - (int)puVar9) + (int)puVar5);
                puVar5 = puVar5 + -1;
                iVar4 = iVar4 + -1;
                *puVar5 = *puVar1;
              } while (iVar4 != 0);
            }
            *param_1 = local_28;
          }
          piVar11 = piVar11 + 1;
          puVar9 = puVar9 + 1;
          iVar4 = local_c;
          iVar7 = local_10;
          iVar10 = param_3;
        } while (piVar11 != piVar8);
      }
      param_1 = param_1 + iVar10;
      piVar8 = piVar8 + iVar10;
      local_18 = local_18 + iVar7;
    } while (iVar10 <= local_18 >> 2);
  }
  if ((param_1 != param_2) && (piVar8 = param_1 + 1, piVar8 != param_2)) {
    piVar11 = param_1 + 2;
    do {
      uVar3 = param_4;
      param_3 = *piVar8;
      local_1c = piVar11;
      fVar12 = (float10)FUN_00418960(&param_3,param_4);
      local_8 = (double)fVar12;
      fVar12 = (float10)FUN_00418960(param_1,uVar3);
      if (fVar12 <= (float10)local_8) {
        local_18 = param_3;
        piVar6 = piVar8;
        piVar11 = piVar11 + -2;
        while( true ) {
          fVar12 = (float10)FUN_00418960(&local_18,uVar3);
          local_8 = (double)fVar12;
          fVar12 = (float10)FUN_00418960(piVar11,uVar3);
          if (fVar12 <= (float10)local_8) break;
          *piVar6 = *piVar11;
          piVar6 = piVar11;
          piVar11 = piVar11 + -1;
        }
        *piVar6 = local_18;
      }
      else {
        iVar4 = (int)piVar8 - (int)param_1 >> 2;
        if (0 < iVar4) {
          piVar6 = piVar11;
          do {
            piVar2 = (int *)((int)piVar8 + (-4 - (int)piVar11) + (int)piVar6);
            piVar6 = piVar6 + -1;
            iVar4 = iVar4 + -1;
            *piVar6 = *piVar2;
          } while (iVar4 != 0);
        }
        *param_1 = param_3;
        local_1c = piVar11;
      }
      piVar8 = piVar8 + 1;
      piVar11 = local_1c + 1;
    } while (piVar8 != param_2);
  }
  return;
}

