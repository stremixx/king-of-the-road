
void __thiscall
FUN_00609b20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6,int *param_7)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == *(undefined4 **)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (*piVar2 == 0) {
LAB_00609b52:
      if (piVar2[1] == 0) {
LAB_00609b69:
        if (param_2[1] != 0) {
          iVar10 = param_2[1] + -4;
          goto LAB_00609b77;
        }
      }
      else {
        if (param_2 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = param_2 + 1;
        }
        if (puVar7 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00609b69;
      }
      iVar10 = 0;
    }
    else {
      if (param_2 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = param_2 + 1;
      }
      if (puVar7 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00609b52;
      iVar10 = piVar2[1];
    }
LAB_00609b77:
    *(int *)(param_1 + 0x34) = iVar10;
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_2);
  if (param_3 == *(undefined4 **)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (*piVar2 == 0) {
LAB_00609bb0:
      if (piVar2[1] == 0) {
LAB_00609bc7:
        if (param_3[1] != 0) {
          iVar10 = param_3[1] + -4;
          goto LAB_00609bd5;
        }
      }
      else {
        if (param_3 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = param_3 + 1;
        }
        if (puVar7 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00609bc7;
      }
      iVar10 = 0;
    }
    else {
      if (param_3 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = param_3 + 1;
      }
      if (puVar7 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00609bb0;
      iVar10 = piVar2[1];
    }
LAB_00609bd5:
    *(int *)(param_1 + 0x34) = iVar10;
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_3);
  if (param_4 == *(undefined4 **)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x24);
    if (*piVar2 == 0) {
LAB_00609c0e:
      if (piVar2[1] == 0) {
LAB_00609c25:
        if (param_4[1] != 0) {
          iVar10 = param_4[1] + -4;
          goto LAB_00609c33;
        }
      }
      else {
        if (param_4 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = param_4 + 1;
        }
        if (puVar7 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00609c25;
      }
      iVar10 = 0;
    }
    else {
      if (param_4 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = param_4 + 1;
      }
      if (puVar7 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00609c0e;
      iVar10 = piVar2[1];
    }
LAB_00609c33:
    *(int *)(param_1 + 0x34) = iVar10;
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_4);
  if (param_5 != *(undefined4 **)(param_1 + 0x34)) goto LAB_00609c94;
  piVar2 = *(int **)(param_1 + 0x24);
  if (*piVar2 == 0) {
LAB_00609c6c:
    if (piVar2[1] == 0) {
LAB_00609c83:
      if (param_5[1] != 0) {
        iVar10 = param_5[1] + -4;
        goto LAB_00609c91;
      }
    }
    else {
      if (param_5 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = param_5 + 1;
      }
      if (puVar7 != *(undefined4 **)(piVar2[1] + 8)) goto LAB_00609c83;
    }
    iVar10 = 0;
  }
  else {
    if (param_5 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = param_5 + 1;
    }
    if (puVar7 != *(undefined4 **)(*piVar2 + 8)) goto LAB_00609c6c;
    iVar10 = piVar2[1];
  }
LAB_00609c91:
  *(int *)(param_1 + 0x34) = iVar10;
LAB_00609c94:
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + -1;
  FUN_0060ed70(param_5);
  iVar5 = FUN_00607bf0(param_2[6],param_2[4],param_3[4],param_2[9] + -1);
  iVar6 = FUN_00607bf0(param_4[6],param_4[4],param_5[4],param_2[9] + -1);
  iVar10 = param_2[0xf];
  if (iVar10 != 0) {
    if (*(undefined4 **)(iVar10 + 0x3c) == param_2) {
      *(int *)(iVar10 + 0x3c) = iVar5;
    }
    else if (*(undefined4 **)(iVar10 + 0x44) == param_2) {
      *(int *)(iVar10 + 0x44) = iVar5;
    }
    else {
      *(int *)(iVar10 + 0x40) = iVar5;
    }
  }
  iVar10 = param_3[0xf];
  if (iVar10 != 0) {
    if (*(undefined4 **)(iVar10 + 0x3c) == param_3) {
      *(int *)(iVar10 + 0x3c) = iVar5;
    }
    else if (*(undefined4 **)(iVar10 + 0x44) == param_3) {
      *(int *)(iVar10 + 0x44) = iVar5;
    }
    else {
      *(int *)(iVar10 + 0x40) = iVar5;
    }
  }
  iVar10 = param_4[0xf];
  if (iVar10 != 0) {
    if (*(undefined4 **)(iVar10 + 0x3c) == param_4) {
      *(int *)(iVar10 + 0x3c) = iVar6;
    }
    else if (*(undefined4 **)(iVar10 + 0x44) == param_4) {
      *(int *)(iVar10 + 0x44) = iVar6;
    }
    else {
      *(int *)(iVar10 + 0x40) = iVar6;
    }
  }
  iVar10 = param_5[0xf];
  if (iVar10 != 0) {
    if (*(undefined4 **)(iVar10 + 0x3c) == param_5) {
      *(int *)(iVar10 + 0x3c) = iVar6;
    }
    else if (*(undefined4 **)(iVar10 + 0x44) == param_5) {
      *(int *)(iVar10 + 0x44) = iVar6;
    }
    else {
      *(int *)(iVar10 + 0x40) = iVar6;
    }
  }
  *(int *)(iVar5 + 0x3c) = iVar6;
  *(undefined4 *)(iVar5 + 0x44) = param_3[0xf];
  *(undefined4 *)(iVar5 + 0x40) = param_2[0xf];
  *(undefined4 *)(iVar6 + 0x40) = param_4[0xf];
  *(undefined4 *)(iVar6 + 0x44) = param_5[0xf];
  *(int *)(iVar6 + 0x3c) = iVar5;
  puVar3 = (ushort *)param_2[5];
  uVar1 = *puVar3;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
  iVar10 = (uint)uVar1 * 0x10;
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4 + iVar10);
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
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 4 + iVar10);
    if (iVar9 != 0) {
      FUN_0060e890();
      FUN_00631d5c(iVar9);
    }
  }
  if (uVar1 != *(ushort *)(param_1 + 0x28)) {
    puVar7 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x28) * 0x10 + *(int *)(param_1 + 0xc));
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar10);
    *puVar8 = *puVar7;
    puVar8[1] = puVar7[1];
    puVar8[2] = puVar7[2];
    puVar8[3] = puVar7[3];
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)uVar1 * 0x28);
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    **(ushort **)(*(int *)(param_1 + 0xc) + iVar10) = uVar1;
    iVar10 = iVar10 + *(int *)(param_1 + 0xc);
    iVar9 = *(int *)(iVar10 + 4);
    if (iVar9 != 0) {
      *(int *)(iVar9 + 0x10) = iVar10;
    }
  }
  if (puVar3 != (ushort *)0x0) {
    FUN_00631d5c(puVar3);
  }
  *param_6 = iVar5;
  *param_7 = iVar6;
  if (param_3 != (undefined4 *)0x0) {
    (**(code **)*param_3)(1);
  }
  if (param_4 != (undefined4 *)0x0) {
    (**(code **)*param_4)(1);
  }
  if (param_5 != (undefined4 *)0x0) {
    (**(code **)*param_5)(1);
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  return;
}

