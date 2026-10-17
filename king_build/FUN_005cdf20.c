
void __thiscall FUN_005cdf20(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      uVar1 = *(uint *)(param_3 + (iVar5 % param_2) * 4);
      iVar2 = __ftol();
      uVar3 = __ftol();
      uVar4 = __ftol();
      *(uint *)(*(int *)(param_1 + 0x28) + iVar5 * 4) =
           (iVar2 << 8 | uVar3) << 8 | uVar4 | uVar1 & 0xff000000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  return;
}

