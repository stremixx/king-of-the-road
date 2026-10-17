
void __thiscall FUN_0060cc20(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_2[8];
  if (param_2 != *(undefined4 **)(param_1 + 0x28)) goto LAB_0060cc7a;
  piVar2 = *(int **)(param_1 + 0x20);
  if (*piVar2 == 0) {
LAB_0060cc52:
    if (piVar2[1] == 0) {
LAB_0060cc69:
      if (param_2[1] != 0) {
        iVar5 = param_2[1] + -4;
        goto LAB_0060cc77;
      }
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = param_2 + 1;
      }
      if (puVar4 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_0060cc69;
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
    if (puVar4 != *(undefined4 **)(*piVar2 + 8)) goto LAB_0060cc52;
    iVar5 = piVar2[1];
  }
LAB_0060cc77:
  *(int *)(param_1 + 0x28) = iVar5;
LAB_0060cc7a:
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_2);
  iVar5 = param_2[0xb];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x2c) == param_2) {
      *(undefined4 *)(iVar5 + 0x2c) = 0;
    }
    else if (*(undefined4 **)(iVar5 + 0x30) == param_2) {
      *(undefined4 *)(iVar5 + 0x30) = 0;
    }
    else {
      if (*(undefined4 **)(iVar5 + 0x34) != param_2) {
        FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,
                     s_this_>BaseNeighbor_>RightNeighbo_00684a9c,
                     s_C__Nek_VRAPPLVS_marine_triangle__00684ac8,0x3a,s_Mar_19_2002_006714f8);
      }
      *(undefined4 *)(param_2[0xb] + 0x34) = 0;
    }
  }
  iVar5 = param_2[0xd];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x30) == param_2) {
      *(undefined4 *)(iVar5 + 0x30) = 0;
    }
    else {
      if (*(undefined4 **)(iVar5 + 0x2c) != param_2) {
        FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,
                     s_this_>RightNeighbor_>BaseNeighbo_00684a70,
                     s_C__Nek_VRAPPLVS_marine_triangle__00684ac8,0x43,s_Mar_19_2002_006714f8);
      }
      *(undefined4 *)(param_2[0xd] + 0x2c) = 0;
    }
  }
  iVar5 = param_2[0xc];
  if (iVar5 != 0) {
    if (*(undefined4 **)(iVar5 + 0x34) == param_2) {
      *(undefined4 *)(iVar5 + 0x34) = 0;
    }
    else {
      if (*(undefined4 **)(iVar5 + 0x2c) != param_2) {
        FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,
                     s_this_>LeftNeighbor_>BaseNeighbor_00684a44,
                     s_C__Nek_VRAPPLVS_marine_triangle__00684ac8,0x4b,s_Mar_19_2002_006714f8);
      }
      *(undefined4 *)(param_2[0xc] + 0x2c) = 0;
    }
  }
  piVar2 = (int *)param_2[0xe];
  if (piVar2 != (int *)0x0) {
    if (piVar2 == *(int **)(param_1 + 0x2c)) {
      piVar3 = *(int **)(param_1 + 0x1c);
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
      *(int *)(param_1 + 0x2c) = iVar5;
    }
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + -1;
    *(undefined4 *)(*(int *)(*(int *)piVar2[2] + 0xc) + 0x38) = 0;
    *(undefined4 *)(*(int *)(*(int *)(piVar2[2] + 4) + 0xc) + 0x38) = 0;
    if ((int *)piVar2[3] != (int *)0x0) {
      *(undefined4 *)(*(int *)(*(int *)piVar2[3] + 0xc) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(piVar2[3] + 4) + 0xc) + 0x38) = 0;
    }
    FUN_00612db0(piVar2);
    iVar5 = param_2[0xe];
    if (iVar5 != 0) {
      FUN_00605e10();
      FUN_00631d5c(iVar5);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                 s_AC__Nek_VRAPPLVS_marine_Greed_cp_00684a1e + 2,0xd5,s_Mar_19_2002_006714f8);
    return;
  }
  if (iVar1 != 0) {
    FUN_00606090();
    FUN_00631d5c(iVar1);
  }
  return;
}

