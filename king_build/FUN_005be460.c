
void __fastcall FUN_005be460(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x120);
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x138) * 2;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x138);
  (**(code **)(*piVar3 + 0x14))();
  if (*(int *)(param_1 + 0x148) == 1) {
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + piVar3[0xd];
  }
  else {
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + piVar3[0xe];
  }
  piVar3 = (int *)FUN_005d2730();
  (**(code **)(*piVar3 + 0x14))();
  if (*(int *)(param_1 + 0x148) == 1) {
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + (piVar3[0xb] - piVar3[0xd]);
    iVar4 = piVar3[0xd];
  }
  else {
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + (piVar3[0xb] - piVar3[0xe]);
    iVar4 = piVar3[0xe];
  }
  iVar1 = piVar3[0xb];
  piVar3 = (int *)FUN_005d2730();
  (**(code **)(*piVar3 + 0x14))();
  if (*(int *)(param_1 + 0x148) == 1) {
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + (piVar3[0xb] - piVar3[0xd]);
    iVar2 = *(int *)(param_1 + 0x140);
    iVar4 = (*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x3c)) + (iVar4 - iVar1);
    piVar3[0xd] = piVar3[0xd] + iVar4;
    piVar3[0xb] = piVar3[0xb] + iVar4;
    piVar3[0xc] = piVar3[0xc] + iVar2;
    piVar3[0xe] = piVar3[0xe] + iVar2;
    return;
  }
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + (piVar3[0xb] - piVar3[0xe]);
  iVar2 = *(int *)(param_1 + 0x140);
  iVar4 = (*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x3c)) + (iVar4 - iVar1);
  piVar3[0xb] = piVar3[0xb] + iVar2;
  piVar3[0xd] = piVar3[0xd] + iVar2;
  piVar3[0xc] = piVar3[0xc] + iVar4;
  piVar3[0xe] = piVar3[0xe] + iVar4;
  return;
}

