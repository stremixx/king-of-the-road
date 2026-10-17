
undefined4 FUN_00415810(int param_1,uint param_2)

{
  return *(undefined4 *)
          (*(int *)(DAT_0068bb58 + param_1 * 0xc) +
          (param_2 %
          (uint)(*(int *)(DAT_0068bb58 + 4 + param_1 * 0xc) - *(int *)(DAT_0068bb58 + param_1 * 0xc)
                >> 2)) * 4);
}

