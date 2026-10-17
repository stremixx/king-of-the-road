
uint __thiscall FUN_00603c90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_2 != 0) &&
     (uVar1 = *(int *)(param_2 + 4) + *(int *)(param_2 + 0xc), uVar1 <= *(uint *)(param_1 + 0x10)))
  {
    iVar2 = (uVar1 + 1 & 0xfffffffe) + *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

