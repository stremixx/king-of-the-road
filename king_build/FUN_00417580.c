
void FUN_00417580(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0068bec0 != DAT_0068bec4) {
    piVar3 = DAT_0068bec0;
    do {
      if (param_1 + 8 == *piVar3 + 8) {
        if (piVar3 + 1 != DAT_0068bec4) {
          FUN_0046b1d0(piVar3 + 1,DAT_0068bec4,piVar3,param_1,0);
        }
        DAT_0068bec4 = DAT_0068bec4 + -1;
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_0068bec4);
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffbfff;
  if (*(int *)(param_1 + 100) == 5) {
    *(undefined4 *)(param_1 + 100) = 0;
    iVar5 = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar4 = FUN_0047c830(iVar1,iVar1,iVar5,iVar5,0);
    iVar2 = *(int *)(param_1 + 0x1c);
    for (; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
      FUN_004030a0(iVar4);
    }
    iVar5 = (int)((ulonglong)((longlong)(iVar1 - iVar5) * -0x2aaaaaab) >> 0x20);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + ((iVar5 >> 1) - (iVar5 >> 0x1f)) * 0xc;
    *(undefined1 *)(param_1 + 0x368) = 1;
    FUN_00478120();
  }
  FUN_004772b0(param_1);
  *(undefined1 *)(param_1 + 0x368) = 1;
  return;
}

