
undefined4 FUN_004208e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_20 [8];
  
  if (((*(uint *)(param_1 + 0x58) >> 2 & 1) == 0) &&
     (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + -0xc);
    piVar3 = (int *)(param_1 + 0x20);
    piVar4 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if (local_20[1] != iVar1) {
      return 0;
    }
  }
  return 1;
}

