
void FUN_004772b0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x60) & 0xffffff7f;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60) | 0x80;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_1 + 0xb0) == DAT_0068a8f0) {
    uVar1 = *(uint *)(param_1 + 0x60) & 0xfffff7ff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60) | 0x800;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xa4)) {
    uVar1 = *(uint *)(param_1 + 0x60) & 0xffffefff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60) | 0x1000;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  iVar2 = FUN_00477850(param_1 + 8);
  if ((((iVar2 == 0) && (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c))) ||
      (*(int *)(param_1 + 0x204) == 0)) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0x204) + 0x10) + 0x80) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x60) & 0xffffdfff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60) | 0x2000;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  if ((*(int *)(param_1 + 0x5c) == 1) && ((*(byte *)(*(int *)(param_1 + 0x204) + 0x28) & 1) != 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2000000;
    return;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfdffffff;
  return;
}

