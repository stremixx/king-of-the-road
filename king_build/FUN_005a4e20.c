
void FUN_005a4e20(ushort *param_1,int param_2,int param_3,int param_4)

{
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x1c) & 1) != 0)) {
    if (((*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) &&
        (((param_3 < (int)(uint)param_1[1] && (param_2 < (int)(uint)*param_1)) && (-1 < param_3))))
       && (-1 < param_2)) {
      *(undefined2 *)
       ((uint)param_1[3] * param_3 +
       *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) + (uint)param_1[2] * param_2) = 0x8888;
    }
  }
  return;
}

