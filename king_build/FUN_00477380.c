
void FUN_00477380(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1fc) + 0x28);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfdffffff;
  return;
}

