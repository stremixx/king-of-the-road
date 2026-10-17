
void __thiscall FUN_004f7780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)(param_1 + 0x234c);
  *(undefined4 *)(param_1 + 0x2358) = param_2;
  *(undefined4 *)(param_1 + 0x235c) = param_3;
  *(undefined4 *)(param_1 + 0x2360) = param_4;
  pfVar2 = (float *)FUN_004e2984(&param_2,(undefined4 *)(param_1 + 0x2358),param_1 + 0x1f48);
  *pfVar1 = *pfVar2;
  *(float *)(param_1 + 0x2350) = pfVar2[1];
  *(float *)(param_1 + 0x2354) = pfVar2[2];
  *(float *)(param_1 + 0x2340) =
       *pfVar1 * *(float *)(param_1 + 0x22a4) +
       *(float *)(param_1 + 0x22bc) * *(float *)(param_1 + 0x2354) +
       *(float *)(param_1 + 0x22b0) * *(float *)(param_1 + 0x2350);
  *(float *)(param_1 + 0x2344) =
       *(float *)(param_1 + 0x22c0) * *(float *)(param_1 + 0x2354) +
       *(float *)(param_1 + 0x22a8) * *pfVar1 +
       *(float *)(param_1 + 0x22b4) * *(float *)(param_1 + 0x2350);
  *(float *)(param_1 + 0x2348) =
       *(float *)(param_1 + 0x22c4) * *(float *)(param_1 + 0x2354) +
       *(float *)(param_1 + 0x22ac) * *pfVar1 +
       *(float *)(param_1 + 0x22b8) * *(float *)(param_1 + 0x2350);
  return;
}

