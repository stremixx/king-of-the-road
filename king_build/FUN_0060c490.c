
void __fastcall FUN_0060c490(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = param_1[7];
  *param_1 = &PTR_FUN_00651f38;
  if (iVar1 != 0) {
    FUN_004843e0();
    FUN_00631d5c(iVar1);
    param_1[7] = 0;
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    FUN_004843e0();
    FUN_00631d5c(iVar1);
    param_1[8] = 0;
  }
  if (param_1[3] != 0) {
    uVar4 = 0;
    if (*(short *)(param_1 + 9) != 0) {
      do {
        iVar1 = *(int *)(param_1[3] + uVar4 * 4);
        if (iVar1 != 0) {
          FUN_00631d5c(iVar1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_1 + 9));
    }
    FUN_0061c888(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    uVar4 = 0;
    if (param_1[0xc] != 0) {
      do {
        piVar2 = *(int **)(param_1[2] + uVar4 * 4);
        if (piVar2 != (int *)0x0) {
          piVar3 = (int *)piVar2[2];
          if (piVar3 != (int *)0x0) {
            if ((int *)*piVar3 == piVar2) {
              *piVar3 = 0;
            }
            else if ((int *)piVar3[1] == piVar2) {
              piVar3[1] = 0;
            }
            else {
              FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                           s_C__Nek_VRAPPLVS_marine_bintree_h_00683978,0x23,s_Mar_19_2002_006714f8);
            }
          }
          if (*piVar2 != 0) {
            FUN_0060c5c0(1);
          }
          if (piVar2[1] != 0) {
            FUN_0060c5c0(1);
          }
          FUN_00631d5c(piVar2);
          *(undefined4 *)(param_1[2] + uVar4 * 4) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[0xc]);
    }
    if (param_1[2] != 0) {
      FUN_00631d5c(param_1[2]);
      param_1[2] = 0;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xc] = 0;
  return;
}

