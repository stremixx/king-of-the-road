
void __thiscall FUN_0060bfc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = (int *)param_2[10];
  if (param_2 != *(undefined4 **)(param_1 + 0x34)) goto LAB_0060c01a;
  piVar2 = *(int **)(param_1 + 0x24);
  if (*piVar2 == 0) {
LAB_0060bff2:
    if (piVar2[1] == 0) {
LAB_0060c009:
      if (param_2[1] != 0) {
        iVar5 = param_2[1] + -4;
        goto LAB_0060c017;
      }
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = param_2 + 1;
      }
      if (puVar4 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_0060c009;
    }
    iVar5 = 0;
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = param_2 + 1;
    }
    if (puVar4 != *(undefined4 **)(*piVar2 + 8)) goto LAB_0060bff2;
    iVar5 = piVar2[1];
  }
LAB_0060c017:
  *(int *)(param_1 + 0x34) = iVar5;
LAB_0060c01a:
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_2);
  iVar5 = param_2[0xf];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x3c) == param_2) {
      *(undefined4 *)(iVar5 + 0x3c) = 0;
    }
    else if (*(undefined4 **)(iVar5 + 0x40) == param_2) {
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x44) = 0;
    }
  }
  iVar5 = param_2[0x11];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x40) == param_2) {
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3c) = 0;
    }
  }
  iVar5 = param_2[0x10];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x44) == param_2) {
      *(undefined4 *)(iVar5 + 0x44) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3c) = 0;
    }
  }
  piVar2 = (int *)param_2[0x12];
  if (piVar2 != (int *)0x0) {
    if (piVar2 == *(int **)(param_1 + 0x38)) {
      piVar3 = *(int **)(param_1 + 0x20);
      if ((*piVar3 == 0) || (piVar2 != *(int **)(*piVar3 + 4))) {
        if ((piVar3[1] == 0) || (piVar2 != *(int **)(piVar3[1] + 4))) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = piVar3[1];
      }
      *(int *)(param_1 + 0x38) = iVar5;
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    *(undefined4 *)(*(int *)(*(int *)piVar2[2] + 0xc) + 0x48) = 0;
    *(undefined4 *)(*(int *)(*(int *)(piVar2[2] + 4) + 0xc) + 0x48) = 0;
    if ((int *)piVar2[3] != (int *)0x0) {
      *(undefined4 *)(*(int *)(*(int *)piVar2[3] + 0xc) + 0x48) = 0;
      *(undefined4 *)(*(int *)(*(int *)(piVar2[3] + 4) + 0xc) + 0x48) = 0;
    }
    FUN_00612db0(piVar2);
    iVar5 = param_2[0x12];
    if (iVar5 != 0) {
      FUN_00609040();
      FUN_00631d5c(iVar5);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  piVar2 = (int *)piVar1[2];
  if (piVar2 == (int *)0x0) {
    FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_terrain_grd_cpp_006849f4,0x127,s_Mar_19_2002_006714f8);
    return;
  }
  if (piVar1 != (int *)0x0) {
    if ((int *)*piVar2 == piVar1) {
      *piVar2 = 0;
    }
    else if ((int *)piVar2[1] == piVar1) {
      piVar2[1] = 0;
    }
    else {
      FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_btr_h_006839bc,0x23,s_Mar_19_2002_006714f8);
    }
    if (*piVar1 != 0) {
      FUN_0060b460(1);
    }
    if (piVar1[1] != 0) {
      FUN_0060b460(1);
    }
    FUN_00631d5c(piVar1);
  }
  return;
}

