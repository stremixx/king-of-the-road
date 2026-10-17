
void __fastcall FUN_0060b270(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  *param_1 = &PTR_FUN_00651f2c;
  while ((piVar1 = (int *)param_1[8], *piVar1 != 0 || (piVar1[1] != 0))) {
    piVar5 = (int *)*piVar1;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)piVar1[1];
    }
    if (piVar5 == (int *)param_1[0xe]) {
      if ((*piVar1 == 0) || (piVar5 != *(int **)(*piVar1 + 4))) {
        if ((piVar1[1] == 0) || (piVar5 != *(int **)(piVar1[1] + 4))) {
          iVar2 = *piVar5;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = piVar1[1];
      }
      param_1[0xe] = iVar2;
    }
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
    *(undefined4 *)(*(int *)(*(int *)piVar5[2] + 0xc) + 0x48) = 0;
    *(undefined4 *)(*(int *)(*(int *)(piVar5[2] + 4) + 0xc) + 0x48) = 0;
    if ((int *)piVar5[3] != (int *)0x0) {
      *(undefined4 *)(*(int *)(*(int *)piVar5[3] + 0xc) + 0x48) = 0;
      *(undefined4 *)(*(int *)(*(int *)(piVar5[3] + 4) + 0xc) + 0x48) = 0;
    }
    FUN_00612db0(piVar5);
    if (piVar5 != (int *)0x0) {
      FUN_00609040();
      FUN_00631d5c(piVar5);
    }
  }
  do {
    piVar1 = (int *)param_1[9];
    if ((*piVar1 == 0) && (piVar1[1] == 0)) {
      if (param_1[3] != 0) {
        FUN_0061c888(param_1[3]);
        param_1[3] = 0;
      }
      if (param_1[2] != 0) {
        uVar4 = 0;
        if (param_1[0xf] != 0) {
          do {
            piVar1 = *(int **)(param_1[2] + uVar4 * 4);
            if (piVar1 != (int *)0x0) {
              piVar5 = (int *)piVar1[2];
              if (piVar5 != (int *)0x0) {
                if ((int *)*piVar5 == piVar1) {
                  *piVar5 = 0;
                }
                else if ((int *)piVar5[1] == piVar1) {
                  piVar5[1] = 0;
                }
                else {
                  FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                               s_C__Nek_VRAPPLVS_terrain_btr_h_006839bc,0x23,s_Mar_19_2002_006714f8)
                  ;
                }
              }
              if (*piVar1 != 0) {
                FUN_0060b460(1);
              }
              if (piVar1[1] != 0) {
                FUN_0060b460(1);
              }
              FUN_00631d5c(piVar1);
              *(undefined4 *)(param_1[2] + uVar4 * 4) = 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)param_1[0xf]);
        }
        if (param_1[2] != 0) {
          FUN_00631d5c(param_1[2]);
          param_1[2] = 0;
        }
      }
      *(undefined2 *)((int)param_1 + 0x2a) = 0;
      *(undefined2 *)(param_1 + 10) = 0;
      param_1[0xf] = 0;
      return;
    }
    puVar6 = (undefined4 *)*piVar1;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)piVar1[1];
    }
    if (puVar6 == (undefined4 *)param_1[0xd]) {
      if (*piVar1 == 0) {
LAB_0060b35a:
        if (piVar1[1] == 0) {
LAB_0060b371:
          if (puVar6[1] != 0) {
            iVar2 = puVar6[1] + -4;
            goto LAB_0060b37f;
          }
        }
        else {
          if (puVar6 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = puVar6 + 1;
          }
          if (puVar3 != *(undefined4 **)(piVar1[1] + 8)) goto LAB_0060b371;
        }
        iVar2 = 0;
      }
      else {
        if (puVar6 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = puVar6 + 1;
        }
        if (puVar3 != *(undefined4 **)(*piVar1 + 8)) goto LAB_0060b35a;
        iVar2 = piVar1[1];
      }
LAB_0060b37f:
      param_1[0xd] = iVar2;
    }
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    FUN_0060ed70(puVar6);
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  } while( true );
}

