
int __thiscall FUN_005e9680(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if ((*param_1 & 1) == 0) {
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (bVar2 != 0);
    iVar3 = ~uVar4 - 1;
    if (param_3 < (int)(~uVar4 - 1)) {
      iVar3 = param_3;
    }
    iVar3 = *(int *)(param_1 + 0x18) * iVar3;
  }
  else {
    iVar5 = 0;
    iVar3 = 0;
    if (*param_2 != 0) {
      while ((iVar5 < param_3 && (*param_2 != 10))) {
        uVar4 = (uint)*param_2;
        if (((int)uVar4 < *(int *)(param_1 + 4)) || (*(int *)(param_1 + 8) < (int)uVar4)) {
          uVar4 = *(uint *)(param_1 + 0x18);
        }
        else {
          uVar4 = (uint)*(byte *)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + uVar4);
        }
        iVar3 = iVar3 + uVar4;
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 1;
        if (*pbVar1 == 0) {
          return iVar3;
        }
      }
    }
  }
  return iVar3;
}

