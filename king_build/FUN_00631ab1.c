
void __thiscall FUN_00631ab1(int param_1,int param_2,int param_3)

{
  void *_Dst;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    _Dst = (void *)FUN_00631d33(param_2 << 2);
    *(void **)(param_1 + 4) = _Dst;
    _memset(_Dst,0,param_2 << 2);
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

