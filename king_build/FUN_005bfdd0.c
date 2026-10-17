
void FUN_005bfdd0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    iVar3 = (int)*(short *)(param_1 + 0x14c);
    iVar4 = *(int *)(param_1 + 0x128);
    iVar2 = iVar4;
    if (iVar3 < 1) {
      *(int *)(param_1 + 0x150) = iVar4;
    }
    else {
      for (; ((iVar2 != 0 && (*(int *)(iVar2 + 8) != 0)) && (0 < iVar3)); iVar3 = iVar3 + -1) {
        iVar2 = *(int *)(iVar2 + 8);
      }
      *(int *)(param_1 + 0x150) = iVar2;
    }
    iVar3 = *(int *)(param_1 + 0x150);
    bVar1 = false;
    if (iVar4 != iVar3) {
      do {
        if (iVar4 == *(int *)(param_1 + 300)) {
          bVar1 = true;
        }
        iVar4 = *(int *)(iVar4 + 8);
      } while (iVar4 != iVar3);
      if (bVar1) {
        *(int *)(param_1 + 300) = iVar3;
      }
    }
    bVar1 = false;
    iVar3 = 0;
    if (iVar4 != 0) {
      do {
        iVar2 = FUN_005bfda0();
        if (iVar2 <= iVar3) break;
        if (iVar4 == *(int *)(param_1 + 300)) {
          bVar1 = true;
        }
        iVar4 = *(int *)(iVar4 + 8);
        iVar3 = iVar3 + 1;
      } while (iVar4 != 0);
      if ((!bVar1) && (iVar4 != 0)) {
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar4 + 4);
      }
    }
  }
  return;
}

