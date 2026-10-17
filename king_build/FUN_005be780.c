
undefined4 __thiscall FUN_005be780(int *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x18))(param_2,param_3);
  if ((iVar2 == 0) && (((iVar2 = param_1[0x51], iVar2 == 0 || (iVar2 == 2)) || (iVar2 == 1)))) {
    param_1[0x51] = -1;
    if (param_1[0x49] != 0) {
      *(undefined4 *)(param_1[0x49] + 0x11c) = 0;
    }
    if (param_1 == DAT_00701e84) {
      FUN_005bcc40();
    }
  }
  param_2 = param_2 - param_1[0xb];
  param_3 = param_3 - param_1[0xc];
  if (param_1[0x51] != 1) goto LAB_005be8f3;
  FUN_005d2730();
  if (param_1[0x52] == 1) {
    iVar2 = param_1[0x4e] / 2;
    if (param_2 < param_1[0x4c] + iVar2) {
      *(undefined2 *)param_1[0x4b] = 0;
    }
    else {
      if (param_2 <= param_1[0x4d] + iVar2) goto LAB_005be8cf;
LAB_005be83f:
      *(short *)param_1[0x4b] = (short)param_1[0x4a];
    }
  }
  else {
    iVar2 = param_1[0x4e] / 2;
    if (param_3 < param_1[0x4c] + iVar2) {
      *(undefined2 *)param_1[0x4b] = 0;
    }
    else {
      if (param_1[0x4d] + iVar2 < param_3) goto LAB_005be83f;
LAB_005be8cf:
      uVar1 = __ftol();
      *(undefined2 *)param_1[0x4b] = uVar1;
    }
  }
  if ((code *)param_1[0x53] != (code *)0x0) {
    (*(code *)param_1[0x53])(param_1[0x54]);
  }
LAB_005be8f3:
  if (param_1[0x51] == -1) {
    piVar3 = (int *)FUN_005bdc50(param_2,param_3);
    FUN_005bd250(piVar3);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x24))(param_2,param_3);
      return uVar4;
    }
  }
  return 1;
}

