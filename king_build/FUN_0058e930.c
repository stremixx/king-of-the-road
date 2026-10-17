
void __thiscall FUN_0058e930(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) & 0xfffffffe;
    return;
  }
  if (param_2 == 2) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) & 0xfffffffd;
    return;
  }
  if (param_2 == 4) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) & 0xfffffffb;
    return;
  }
  if (param_2 == 8) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) & 0xfffffff7;
  }
  return;
}

