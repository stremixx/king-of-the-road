
void __thiscall
FUN_00606410(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6,int *param_7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_2 == *(undefined4 **)(param_1 + 0x28)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*piVar2 == 0) {
LAB_0060643e:
      if (piVar2[1] == 0) {
LAB_00606455:
        if (param_2[1] != 0) {
          iVar3 = param_2[1] + -4;
          goto LAB_00606463;
        }
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = param_2 + 1;
        }
        if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00606455;
      }
      iVar3 = 0;
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_2 + 1;
      }
      if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_0060643e;
      iVar3 = piVar2[1];
    }
LAB_00606463:
    *(int *)(param_1 + 0x28) = iVar3;
  }
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_2);
  if (param_3 == *(undefined4 **)(param_1 + 0x28)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*piVar2 == 0) {
LAB_0060649c:
      if (piVar2[1] == 0) {
LAB_006064b3:
        if (param_3[1] != 0) {
          iVar3 = param_3[1] + -4;
          goto LAB_006064c1;
        }
      }
      else {
        if (param_3 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = param_3 + 1;
        }
        if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_006064b3;
      }
      iVar3 = 0;
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_3 + 1;
      }
      if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_0060649c;
      iVar3 = piVar2[1];
    }
LAB_006064c1:
    *(int *)(param_1 + 0x28) = iVar3;
  }
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_3);
  if (param_4 == *(undefined4 **)(param_1 + 0x28)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*piVar2 == 0) {
LAB_006064fa:
      if (piVar2[1] == 0) {
LAB_00606511:
        if (param_4[1] != 0) {
          iVar3 = param_4[1] + -4;
          goto LAB_0060651f;
        }
      }
      else {
        if (param_4 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = param_4 + 1;
        }
        if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00606511;
      }
      iVar3 = 0;
    }
    else {
      if (param_4 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_4 + 1;
      }
      if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_006064fa;
      iVar3 = piVar2[1];
    }
LAB_0060651f:
    *(int *)(param_1 + 0x28) = iVar3;
  }
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_4);
  if (param_5 != *(undefined4 **)(param_1 + 0x28)) goto LAB_00606580;
  piVar2 = *(int **)(param_1 + 0x20);
  if (*piVar2 == 0) {
LAB_00606558:
    if (piVar2[1] == 0) {
LAB_0060656f:
      if (param_5[1] != 0) {
        iVar3 = param_5[1] + -4;
        goto LAB_0060657d;
      }
    }
    else {
      if (param_5 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_5 + 1;
      }
      if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_0060656f;
    }
    iVar3 = 0;
  }
  else {
    if (param_5 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = param_5 + 1;
    }
    if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00606558;
    iVar3 = piVar2[1];
  }
LAB_0060657d:
  *(int *)(param_1 + 0x28) = iVar3;
LAB_00606580:
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_5);
  iVar4 = FUN_006059f0(param_2[6],param_2[4],param_3[4],param_2[9] + -1);
  iVar5 = FUN_006059f0(param_4[6],param_4[4],param_5[4],param_2[9] + -1);
  iVar3 = param_2[0xb];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_2) {
      *(int *)(iVar3 + 0x2c) = iVar4;
    }
    else if (*(undefined4 **)(iVar3 + 0x34) == param_2) {
      *(int *)(iVar3 + 0x34) = iVar4;
    }
    else {
      *(int *)(iVar3 + 0x30) = iVar4;
    }
  }
  iVar3 = param_3[0xb];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_3) {
      *(int *)(iVar3 + 0x2c) = iVar4;
    }
    else if (*(undefined4 **)(iVar3 + 0x34) == param_3) {
      *(int *)(iVar3 + 0x34) = iVar4;
    }
    else {
      *(int *)(iVar3 + 0x30) = iVar4;
    }
  }
  iVar3 = param_4[0xb];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_4) {
      *(int *)(iVar3 + 0x2c) = iVar5;
    }
    else if (*(undefined4 **)(iVar3 + 0x34) == param_4) {
      *(int *)(iVar3 + 0x34) = iVar5;
    }
    else {
      *(int *)(iVar3 + 0x30) = iVar5;
    }
  }
  iVar3 = param_5[0xb];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_5) {
      *(int *)(iVar3 + 0x2c) = iVar5;
    }
    else if (*(undefined4 **)(iVar3 + 0x34) == param_5) {
      *(int *)(iVar3 + 0x34) = iVar5;
    }
    else {
      *(int *)(iVar3 + 0x30) = iVar5;
    }
  }
  *(int *)(iVar4 + 0x2c) = iVar5;
  *(undefined4 *)(iVar4 + 0x34) = param_3[0xb];
  *(undefined4 *)(iVar4 + 0x30) = param_2[0xb];
  *(undefined4 *)(iVar5 + 0x30) = param_4[0xb];
  *(undefined4 *)(iVar5 + 0x34) = param_5[0xb];
  *(int *)(iVar5 + 0x2c) = iVar4;
  iVar3 = param_2[5];
  uVar1 = *(ushort *)(iVar3 + 8);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
  if (uVar1 != *(ushort *)(param_1 + 0x24)) {
    *(undefined4 *)((uint)uVar1 * 4 + *(int *)(param_1 + 0xc)) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4);
    *(ushort *)(*(int *)((uint)uVar1 * 4 + *(int *)(param_1 + 0xc)) + 8) = uVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4) = 0;
  if (iVar3 != 0) {
    FUN_00631d5c(iVar3);
  }
  *param_6 = iVar4;
  *param_7 = iVar5;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
  }
  if (param_4 != (undefined4 *)0x0) {
    (**(code **)*param_4)(1);
  }
  if (param_5 != (undefined4 *)0x0) {
    (**(code **)*param_5)(1);
  }
  return;
}

