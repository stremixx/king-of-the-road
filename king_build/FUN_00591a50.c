
undefined4 FUN_00591a50(int param_1,float *param_2,undefined4 param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*param_2 * *(float *)(param_1 + 0xd6c) +
           param_2[6] * *(float *)(param_1 + 0xd74) + param_2[3] * *(float *)(param_1 + 0xd70) +
          param_2[9]) -
          (*(float *)(param_4 + 0xd6c) * *param_5 +
           param_5[3] * *(float *)(param_4 + 0xd70) + param_5[6] * *(float *)(param_4 + 0xd74) +
          param_5[9]);
  fVar2 = (param_2[1] * *(float *)(param_1 + 0xd6c) +
           param_2[7] * *(float *)(param_1 + 0xd74) + param_2[4] * *(float *)(param_1 + 0xd70) +
          param_2[10]) -
          (param_5[4] * *(float *)(param_4 + 0xd70) +
           param_5[7] * *(float *)(param_4 + 0xd74) + param_5[1] * *(float *)(param_4 + 0xd6c) +
          param_5[10]);
  fVar3 = (param_2[2] * *(float *)(param_1 + 0xd6c) +
           param_2[8] * *(float *)(param_1 + 0xd74) + param_2[5] * *(float *)(param_1 + 0xd70) +
          param_2[0xb]) -
          (param_5[5] * *(float *)(param_4 + 0xd70) +
           param_5[8] * *(float *)(param_4 + 0xd74) + param_5[2] * *(float *)(param_4 + 0xd6c) +
          param_5[0xb]);
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar2 = *(float *)(param_1 + 0xcc8) + *(float *)(param_4 + 0xcc8);
  if ((fVar1 <= fVar2 * fVar2) &&
     (fVar2 = *(float *)(param_1 + 0xcd0) + *(float *)(param_4 + 0xcd0), fVar1 < fVar2 * fVar2)) {
    return 1;
  }
  return 0;
}

