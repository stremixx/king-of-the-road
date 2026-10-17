
void __thiscall FUN_005aea00(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x203c) != 0) && (*(int *)(param_1 + 0x79c) != 0)) {
    if (((*(byte *)(*(int *)(param_1 + 0x2044) + 0x20 + *(short *)(param_2 + 0x30) * 0x7c) & 1) != 0
        ) && ((*(short *)(param_2 + 0x32) < 0 ||
              (*(int *)(param_1 + 0x2108) < (int)*(short *)(param_2 + 0x32))))) {
      FUN_005b19a0(param_2);
      return;
    }
    FUN_005b2000(param_2);
  }
  return;
}

