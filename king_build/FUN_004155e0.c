
uint __thiscall FUN_004155e0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(int *)(param_1 + 0xdc) + 1U) % 0x37;
  uVar2 = (*(int *)(param_1 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_1 + 0xdc) = uVar1;
  *(uint *)(param_1 + 0xe0) = uVar2;
  *(int *)(param_1 + uVar1 * 4) = *(int *)(param_1 + uVar1 * 4) - *(int *)(param_1 + uVar2 * 4);
  return *(uint *)(param_1 + *(int *)(param_1 + 0xdc) * 4) % param_2;
}

