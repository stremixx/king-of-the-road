
undefined4 __thiscall FUN_00580ef0(int param_1,undefined4 param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(param_1 + 0x1d0) * *(float *)(param_1 + 0x284) +
            *(float *)(param_1 + 0x29c) * *(float *)(param_1 + 0x1d8) +
            *(float *)(param_1 + 0x290) * *(float *)(param_1 + 0x1d4);
  local_8 = *(float *)(param_1 + 0x2a0) * *(float *)(param_1 + 0x1d8) +
            *(float *)(param_1 + 0x288) * *(float *)(param_1 + 0x1d0) +
            *(float *)(param_1 + 0x294) * *(float *)(param_1 + 0x1d4);
  local_4 = *(float *)(param_1 + 0x2a4) * *(float *)(param_1 + 0x1d8) +
            *(float *)(param_1 + 0x28c) * *(float *)(param_1 + 0x1d0) +
            *(float *)(param_1 + 0x298) * *(float *)(param_1 + 0x1d4);
  FUN_004e29c2(param_2,&local_c,param_1 + 0x194);
  return param_2;
}

