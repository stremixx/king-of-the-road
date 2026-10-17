
void __thiscall FUN_00555b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x2580) != 0) {
    FUN_005560d0(param_2,param_3,param_4);
    fVar2 = *(float *)(param_1 + 0x2574) + *(float *)(param_1 + 0x2584) +
            *(float *)(param_1 + 0x256c);
    fVar3 = *(float *)(param_1 + 0x2574) + *(float *)(param_1 + 0x256c);
    fVar1 = *(float *)(param_1 + 0x2584);
    local_c = (*(float *)(param_1 + 0x2554) * fVar1 + *(float *)(param_1 + 0x2554) * fVar3) / fVar2;
    local_8 = (*(float *)(param_1 + 0x2558) * fVar3 + *(float *)(param_1 + 0x2558) * fVar1) / fVar2;
    local_4 = (fVar3 * *(float *)(param_1 + 0x255c) + fVar1 * *(float *)(param_1 + 0x255c)) / fVar2;
    FUN_00544d00(fVar2,&local_c);
  }
  return;
}

