
undefined4 __thiscall FUN_005a3df0(int *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_1[0x56] < 0) || (iVar3 = FUN_005e4980(param_1[0x56]), iVar3 == 0)) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      if (-1 < param_1[0x56]) {
        FUN_005e4ad0(param_3,iVar3,0);
      }
      (**(code **)(*param_1 + 0x1c))(0);
      return 0;
    }
    if (-1 < param_1[0x56]) {
      pbVar6 = *(byte **)(*(int *)(iVar3 + 0xc) + 0xfb0);
      pbVar4 = *(byte **)(param_2[9] + 0x3c);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_005a3e81:
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005a3e86;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_005a3e81;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_005a3e86:
      if (iVar5 != 0) {
        FUN_005e4ad0(*(byte **)(param_2[9] + 0x3c),iVar3,0);
      }
    }
  }
  if (param_1 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x40);
    return uVar2;
  }
  uVar2 = (**(code **)(*param_2 + 0x1c))(0);
  return uVar2;
}

