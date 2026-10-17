
uint __thiscall FUN_005e9650(byte *param_1,byte param_2)

{
  if ((param_2 != 0x20) && ((*param_1 & 1) != 0)) {
    return (uint)*(byte *)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + (uint)param_2);
  }
  return *(uint *)(param_1 + 0x18);
}

