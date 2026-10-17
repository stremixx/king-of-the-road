
void __thiscall FUN_00609880(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (param_2 == *(undefined4 **)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (*piVar2 == 0) {
LAB_006098b2:
      if (piVar2[1] == 0) {
LAB_006098c9:
        if (param_2[1] != 0) {
          iVar8 = param_2[1] + -4;
          goto LAB_006098d7;
        }
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = param_2 + 1;
        }
        if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_006098c9;
      }
      iVar8 = 0;
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_2 + 1;
      }
      if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_006098b2;
      iVar8 = piVar2[1];
    }
LAB_006098d7:
    *(int *)(param_1 + 0x34) = iVar8;
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_2);
  if (param_3 != *(undefined4 **)(param_1 + 0x34)) goto LAB_00609938;
  piVar2 = *(int **)(param_1 + 0x24);
  if (*piVar2 == 0) {
LAB_00609910:
    if (piVar2[1] == 0) {
LAB_00609927:
      if (param_3[1] != 0) {
        iVar8 = param_3[1] + -4;
        goto LAB_00609935;
      }
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = param_3 + 1;
      }
      if (puVar6 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00609927;
    }
    iVar8 = 0;
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = param_3 + 1;
    }
    if (puVar6 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00609910;
    iVar8 = piVar2[1];
  }
LAB_00609935:
  *(int *)(param_1 + 0x34) = iVar8;
LAB_00609938:
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_3);
  iVar5 = FUN_00607bf0(param_2[6],param_2[4],param_3[4],param_2[9] + -1);
  *(undefined4 *)(iVar5 + 0x3c) = param_2[0x11];
  *(undefined4 *)(iVar5 + 0x40) = param_2[0xf];
  *(undefined4 *)(iVar5 + 0x44) = param_3[0xf];
  iVar8 = param_2[0xf];
  if (iVar8 != 0) {
    if (*(undefined4 **)(iVar8 + 0x3c) == param_2) {
      *(int *)(iVar8 + 0x3c) = iVar5;
    }
    else if (*(undefined4 **)(iVar8 + 0x44) == param_2) {
      *(int *)(iVar8 + 0x44) = iVar5;
    }
    else {
      *(int *)(iVar8 + 0x40) = iVar5;
    }
  }
  iVar8 = param_3[0xf];
  if (iVar8 != 0) {
    if (*(undefined4 **)(iVar8 + 0x3c) == param_3) {
      *(int *)(iVar8 + 0x3c) = iVar5;
    }
    else if (*(undefined4 **)(iVar8 + 0x44) == param_3) {
      *(int *)(iVar8 + 0x44) = iVar5;
    }
    else {
      *(int *)(iVar8 + 0x40) = iVar5;
    }
  }
  iVar8 = param_2[0x11];
  if (iVar8 != 0) {
    if (*(undefined4 **)(iVar8 + 0x3c) == param_2) {
      *(int *)(iVar8 + 0x3c) = iVar5;
    }
    else {
      *(int *)(iVar8 + 0x40) = iVar5;
    }
  }
  iVar8 = param_3[0x10];
  if (iVar8 != 0) {
    if (*(undefined4 **)(iVar8 + 0x3c) == param_3) {
      *(int *)(iVar8 + 0x3c) = iVar5;
    }
    else {
      *(int *)(iVar8 + 0x44) = iVar5;
    }
  }
  *param_4 = iVar5;
  puVar3 = (ushort *)param_2[5];
  uVar1 = *puVar3;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
  iVar8 = (uint)uVar1 * 0x10;
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4 + iVar8);
  if (piVar2 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x2c);
    if (((int *)*piVar4 == piVar2) && ((int *)piVar4[1] == piVar2)) {
      if (piVar4 == piVar2) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else {
        *piVar4 = (int)piVar4;
        (*(undefined4 **)(param_1 + 0x2c))[1] = **(undefined4 **)(param_1 + 0x2c);
      }
    }
    else {
      if (piVar4 == piVar2) {
        *(int *)(param_1 + 0x2c) = *piVar2;
      }
      FUN_00609b00(piVar2);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 4 + iVar8);
    if (iVar5 != 0) {
      FUN_0060e890();
      FUN_00631d5c(iVar5);
    }
  }
  if (uVar1 != *(ushort *)(param_1 + 0x28)) {
    puVar6 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x28) * 0x10 + *(int *)(param_1 + 0xc));
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar8);
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar1 * 0x28);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    **(ushort **)(*(int *)(param_1 + 0xc) + iVar8) = uVar1;
    iVar8 = iVar8 + *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(iVar8 + 4);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x10) = iVar8;
    }
  }
  if (puVar3 != (ushort *)0x0) {
    FUN_00631d5c(puVar3);
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
  }
  return;
}

