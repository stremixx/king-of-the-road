
void __thiscall FUN_00606240(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 == *(undefined4 **)(param_1 + 0x28)) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*piVar2 == 0) {
LAB_0060626d:
      if (piVar2[1] == 0) {
LAB_00606284:
        if (param_2[1] != 0) {
          iVar3 = param_2[1] + -4;
          goto LAB_00606292;
        }
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = param_2 + 1;
        }
        if (puVar5 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00606284;
      }
      iVar3 = 0;
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = param_2 + 1;
      }
      if (puVar5 != *(undefined4 **)(*piVar2 + 8)) goto LAB_0060626d;
      iVar3 = piVar2[1];
    }
LAB_00606292:
    *(int *)(param_1 + 0x28) = iVar3;
  }
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_2);
  if (param_3 != *(undefined4 **)(param_1 + 0x28)) goto LAB_006062f3;
  piVar2 = *(int **)(param_1 + 0x20);
  if (*piVar2 == 0) {
LAB_006062cb:
    if (piVar2[1] == 0) {
LAB_006062e2:
      if (param_3[1] != 0) {
        iVar3 = param_3[1] + -4;
        goto LAB_006062f0;
      }
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = param_3 + 1;
      }
      if (puVar5 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_006062e2;
    }
    iVar3 = 0;
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = param_3 + 1;
    }
    if (puVar5 != *(undefined4 **)(*piVar2 + 8)) goto LAB_006062cb;
    iVar3 = piVar2[1];
  }
LAB_006062f0:
  *(int *)(param_1 + 0x28) = iVar3;
LAB_006062f3:
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  FUN_0060ed70(param_3);
  iVar4 = FUN_006059f0(param_2[6],param_2[4],param_3[4],param_2[9] + -1);
  *(undefined4 *)(iVar4 + 0x2c) = param_2[0xd];
  *(undefined4 *)(iVar4 + 0x30) = param_2[0xb];
  *(undefined4 *)(iVar4 + 0x34) = param_3[0xb];
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
  iVar3 = param_2[0xd];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_2) {
      *(int *)(iVar3 + 0x2c) = iVar4;
    }
    else {
      *(int *)(iVar3 + 0x30) = iVar4;
    }
  }
  iVar3 = param_3[0xc];
  if (iVar3 != 0) {
    if (*(undefined4 **)(iVar3 + 0x2c) == param_3) {
      *(int *)(iVar3 + 0x2c) = iVar4;
    }
    else {
      *(int *)(iVar3 + 0x34) = iVar4;
    }
  }
  *param_4 = iVar4;
  iVar3 = param_2[5];
  uVar1 = *(ushort *)(iVar3 + 8);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
  if (uVar1 != *(ushort *)(param_1 + 0x24)) {
    *(undefined4 *)((uint)uVar1 * 4 + *(int *)(param_1 + 0xc)) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4);
    *(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + (uint)uVar1 * 4) + 8) = uVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4) = 0;
  if (iVar3 != 0) {
    FUN_00631d5c(iVar3);
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
  }
  return;
}

