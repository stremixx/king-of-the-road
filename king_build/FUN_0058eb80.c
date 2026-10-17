
undefined4 __thiscall FUN_0058eb80(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x140c)) {
    pfVar1 = (float *)(param_1 + 0xf98);
    do {
      if (-pfVar1[2] <
          *pfVar1 * (*(float *)(param_1 + 0x270) * param_2[2] +
                     *(float *)(param_1 + 600) * *param_2 + *(float *)(param_1 + 0x264) * param_2[1]
                    + *(float *)(param_1 + 0x27c)) +
          pfVar1[1] *
          (*(float *)(param_1 + 0x274) * param_2[2] +
           *(float *)(param_1 + 0x25c) * *param_2 + *(float *)(param_1 + 0x268) * param_2[1] +
          *(float *)(param_1 + 0x280)) +
          pfVar1[-1] *
          (*(float *)(param_1 + 0x254) * *param_2 +
           *(float *)(param_1 + 0x26c) * param_2[2] + *(float *)(param_1 + 0x260) * param_2[1] +
          *(float *)(param_1 + 0x278))) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 7;
    } while (iVar2 < *(int *)(param_1 + 0x140c));
  }
  return 1;
}

