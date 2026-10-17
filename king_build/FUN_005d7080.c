
void FUN_005d7080(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iStack_a4;
  int iStack_a0;
  int aiStack_9c [4];
  int local_8c [2];
  undefined4 auStack_84 [33];
  
  if (DAT_0071f808 != 0) {
    iVar1 = (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c);
    if (iVar1 == 0) {
      DAT_0071f808 = 0;
    }
    else if (DAT_0071f808 != 0) {
      return;
    }
  }
  (**(code **)(*param_7 + 0x38))(param_7,local_8c);
  if ((aiStack_9c[2] & 0x10000000U) == 0) {
    puVar3 = auStack_84;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iStack_a4 = param_1;
    aiStack_9c[0] = param_1 + param_3;
    iStack_a0 = param_2;
    aiStack_9c[1] = param_2 + param_4;
    auStack_84[0] = 100;
    auStack_84[2] = 0xcc0020;
    iVar1 = (**(code **)(*DAT_0071f85c + 0x14))
                      (DAT_0071f85c,&iStack_a4,param_7,&stack0xffffff4c,0x1020000,auStack_84);
  }
  else {
    iVar1 = (**(code **)(*DAT_0071f85c + 0x1c))
                      (DAT_0071f85c,param_1,param_2,param_7,&stack0xffffff4c,0x10);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_005d42c0(iVar1,0,0);
    FUN_005d2250(uVar2);
  }
  if ((DAT_0071f850 == 0) && (DAT_0071f818 == 0)) {
    piVar4 = aiStack_9c;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    aiStack_9c[0] = 0x7c;
    aiStack_9c[1] = 0x7ff9ee;
    iVar1 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,aiStack_9c,1,0);
    if (iVar1 == 0) {
      DAT_0071f808 = local_8c[0];
    }
  }
  return;
}

