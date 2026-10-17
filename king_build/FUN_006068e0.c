
void __thiscall FUN_006068e0(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  fVar3 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *(float *)(param_1 + 0x10) = *param_3 / fVar3;
  *(float *)(param_1 + 0x14) = fVar1 / fVar3;
  *(float *)(param_1 + 0x18) = fVar2 / fVar3;
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  *(undefined4 *)(param_1 + 0x20) = param_4[1];
  *(undefined4 *)(param_1 + 0x24) = param_4[2];
  return;
}

