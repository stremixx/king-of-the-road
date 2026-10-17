
void __thiscall FUN_0058e8e0(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) | 1;
    return;
  }
  if (param_2 == 2) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) | 2;
    return;
  }
  if (param_2 == 8) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) | 8;
  }
  return;
}

