
uint __thiscall FUN_00603cc0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_3 + 0xc) + iVar1;
    uVar3 = *(uint *)(param_3 + 4);
  }
  uVar2 = uVar3;
  if (3 < uVar3) {
    while (**(int **)(param_1 + 0xc) != *param_2) {
      uVar2 = uVar2 - 2;
      *(int *)(param_1 + 0xc) = (int)*(int **)(param_1 + 0xc) + 2;
      if (uVar2 < 4) {
        return uVar2 & 0xffffff00;
      }
    }
    iVar4 = *(int *)(param_1 + 0xc);
    uVar3 = uVar2 - 8;
    *(uint **)(param_1 + 0xc) = (uint *)(iVar4 + 4);
    uVar5 = *(uint *)(iVar4 + 4);
    *(int **)(param_1 + 0xc) = (int *)(iVar4 + 8);
    if (*param_2 == 0x46464952) {
      if (*(int *)(iVar4 + 8) != param_2[2]) {
        return uVar3 & 0xffffff00;
      }
      uVar3 = uVar2 - 0xc;
      *(int *)(param_1 + 0xc) = iVar4 + 0xc;
      uVar5 = uVar5 - 4;
    }
    if (uVar3 < uVar5) {
      return uVar3 & 0xffffff00;
    }
    if (3 < uVar3) {
      iVar4 = *(int *)(param_1 + 0xc);
      param_2[1] = uVar5;
      iVar4 = iVar4 - iVar1;
      param_2[3] = iVar4;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

