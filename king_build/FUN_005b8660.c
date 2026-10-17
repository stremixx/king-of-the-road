
void FUN_005b8660(ushort *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x1c) & 1) != 0)) {
    if (((*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) &&
        (((param_3 < (int)(uint)param_1[1] && (param_2 < (int)(uint)*param_1)) && (-1 < param_3))))
       && (-1 < param_2)) {
      pbVar1 = (byte *)((uint)param_1[3] * param_3 +
                        *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
                        (uint)param_1[2] * param_2 + 1);
      *pbVar1 = *pbVar1 | 0xf0;
    }
  }
  return;
}

