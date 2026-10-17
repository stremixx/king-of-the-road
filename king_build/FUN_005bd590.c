
void __thiscall FUN_005bd590(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x20) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x120);
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x30);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = FUN_005d2730();
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x120);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + iVar4;
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + iVar4;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + iVar1;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + iVar1;
    *(int *)(iVar2 + 0x38) = *(int *)(param_1 + 0x3c) + iVar3;
    iVar4 = iVar4 + (*(int *)(iVar2 + 0x34) - *(int *)(iVar2 + 0x2c)) + param_2;
    iVar2 = FUN_005d2730();
  }
  FUN_005bd330();
  return;
}

