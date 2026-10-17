
void __thiscall FUN_004f76b0(int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  
  pfVar1 = (float *)(param_1 + 0x2340);
  *pfVar1 = param_2;
  *(float *)(param_1 + 0x2344) = param_3;
  *(float *)(param_1 + 0x2348) = param_4;
  param_2 = *pfVar1 * *(float *)(param_1 + 0x2304) +
            *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0x2344) +
            *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0x2348);
  param_3 = *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0x2344) +
            *(float *)(param_1 + 0x2308) * *pfVar1 +
            *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0x2348);
  param_4 = *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0x2344) +
            *(float *)(param_1 + 0x230c) * *pfVar1 +
            *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0x2348);
  *(float *)(param_1 + 0x234c) = param_2;
  *(float *)(param_1 + 0x2350) = param_3;
  *(float *)(param_1 + 0x2354) = param_4;
  puVar2 = (undefined4 *)FUN_004e29c2(&param_2,(float *)(param_1 + 0x234c),param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x2358) = *puVar2;
  *(undefined4 *)(param_1 + 0x235c) = puVar2[1];
  *(undefined4 *)(param_1 + 0x2360) = puVar2[2];
  return;
}

