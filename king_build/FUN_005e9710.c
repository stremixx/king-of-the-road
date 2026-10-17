
int __thiscall FUN_005e9710(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*param_1 & 1) != 0) {
    bVar1 = *param_2;
    iVar3 = 0;
    iVar4 = 0;
    if (bVar1 != 0) {
      do {
        if (bVar1 == 10) {
          if (iVar3 < iVar4) {
            iVar3 = iVar4;
          }
          iVar4 = 0;
        }
        else {
          uVar2 = (uint)bVar1;
          if (((int)uVar2 < *(int *)(param_1 + 4)) || (*(int *)(param_1 + 8) < (int)uVar2)) {
            iVar4 = iVar4 + *(int *)(param_1 + 0x18);
          }
          else {
            iVar4 = iVar4 + (uint)*(byte *)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) +
                                           uVar2);
          }
        }
        bVar1 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar1 != 0);
      if (iVar3 < iVar4) {
        return iVar4;
      }
    }
    return iVar3;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  return (~uVar2 - 1) * *(int *)(param_1 + 0x18);
}

