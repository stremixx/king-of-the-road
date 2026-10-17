
void __thiscall
FUN_005bdf70(int param_1,short param_2,short *param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  *(undefined4 *)(param_1 + 0x14c) = param_4;
  *(undefined4 *)(param_1 + 0x150) = param_5;
  *(short *)(param_1 + 0x128) = param_2;
  *(short **)(param_1 + 300) = param_3;
  *(undefined4 *)(param_1 + 0x140) = param_9;
  if (param_2 < *param_3) {
    *param_3 = param_2;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (*(int *)(param_1 + 0x148) == 1) {
    pcVar7 = *(char **)(param_1 + 0xc);
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x13c) = 1;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(iVar1 + 0x14) + 1;
      param_7 = param_7 + 1 + *(int *)(iVar1 + 0x14);
      cVar4 = *pcVar7;
      if (cVar4 != '\0') {
        do {
          if (cVar4 == '\n') {
            *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(iVar1 + 0x14);
            param_7 = param_7 + *(int *)(iVar1 + 0x14);
          }
          cVar4 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        *(int *)(param_1 + 0x38) = param_7;
        *(int *)(param_1 + 0x34) = param_6;
        goto LAB_005be054;
      }
    }
    *(int *)(param_1 + 0x38) = param_7;
    *(int *)(param_1 + 0x34) = param_6;
  }
  else {
    *(int *)(param_1 + 0x34) = param_7;
    *(int *)(param_1 + 0x38) = param_6;
  }
LAB_005be054:
  iVar5 = *(int *)(param_1 + 0x3c);
  iVar2 = (param_7 - (iVar5 * 2 + 2)) - *(int *)(param_1 + 0x40);
  iVar1 = param_1 + 0x44;
  *(int *)(param_1 + 0x138) = iVar2;
  *(int *)(param_1 + 0x130) = iVar2 + iVar5 + 2 + param_8;
  iVar3 = *(int *)(param_1 + 0x120);
  *(int *)(param_1 + 0x134) = (param_6 - (iVar2 * 2 + 2)) - iVar5;
  FUN_005bcc50(iVar1);
  iVar5 = param_1 + 0x68;
  FUN_005bcc50(iVar5);
  FUN_005bcc50(param_1 + 0x8c);
  FUN_005bcc50(param_1 + 0xb0);
  *(int *)(iVar3 + 0x2c) = *(int *)(param_1 + 0x3c) + 1;
  iVar2 = *(int *)(param_1 + 0x40) + 1 + *(int *)(param_1 + 0x3c);
  *(int *)(iVar3 + 0x30) = iVar2;
  *(int *)(iVar3 + 0x38) = iVar2 + *(int *)(param_1 + 0x138);
  *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x2c) + *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x148) == 1) {
    *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + param_8;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + param_8;
    param_8 = iVar2;
  }
  else {
    *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + iVar2;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + iVar2;
  }
  *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + param_8;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + param_8;
  iVar3 = FUN_005d2730();
  FUN_005bcc50(iVar1);
  FUN_005bcc50(iVar5);
  FUN_005bcc50(param_1 + 0x8c);
  FUN_005bcc50(param_1 + 0xb0);
  iVar6 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(iVar3 + 0x2c) = iVar6;
  iVar2 = *(int *)(param_1 + 0x40) + 1 + *(int *)(param_1 + 0x3c);
  *(int *)(iVar3 + 0x30) = iVar2;
  *(int *)(iVar3 + 0x38) = iVar2 + *(int *)(param_1 + 0x138);
  *(int *)(iVar3 + 0x34) = iVar6 + *(int *)(param_1 + 0x138);
  if (*(short *)(param_1 + 0x128) != 0) {
    if (*(int *)(param_1 + 0x148) == 1) {
      iVar2 = *(int *)(param_1 + 0x140);
      iVar6 = __ftol();
      *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + iVar6;
      *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + iVar6;
    }
    else {
      iVar2 = __ftol();
      iVar6 = *(int *)(param_1 + 0x140);
      *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + iVar6;
      *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + iVar6;
    }
    *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + iVar2;
    *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + iVar2;
  }
  iVar2 = FUN_005d2730();
  FUN_005bcc50(iVar1);
  FUN_005bcc50(iVar5);
  FUN_005bcc50(param_1 + 0x8c);
  FUN_005bcc50(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(iVar2 + 0x2c) = iVar5;
  iVar1 = *(int *)(param_1 + 0x40) + 1 + *(int *)(param_1 + 0x3c);
  *(int *)(iVar2 + 0x30) = iVar1;
  *(int *)(iVar2 + 0x38) = iVar1 + *(int *)(param_1 + 0x138);
  *(int *)(iVar2 + 0x34) = iVar5 + *(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x148) != 1) {
    iVar1 = *(int *)(param_1 + 0x140);
    iVar5 = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x3c)) + *(int *)(param_1 + 0x134);
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + iVar1;
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + iVar1;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + iVar5;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + iVar5;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x140);
  iVar5 = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x3c)) + *(int *)(param_1 + 0x134);
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + iVar5;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + iVar5;
  *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + iVar1;
  *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + iVar1;
  return;
}

