
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00611c90(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = param_3[1];
  *(undefined4 *)(param_1 + 0x18) = param_3[2];
  *(float *)(param_1 + 0x90) = (*param_2 - *(float *)(param_1 + 0xb0)) / *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0x94) =
       (param_2[1] - *(float *)(param_1 + 0xbc)) / *(float *)(param_1 + 0xc4);
  if ((float)*(uint *)(param_1 + 0x2c) < *(float *)(param_1 + 0x90)) {
    *(float *)(param_1 + 0x90) = (float)*(uint *)(param_1 + 0x2c);
  }
  if ((float)*(uint *)(param_1 + 0x30) < *(float *)(param_1 + 0x94)) {
    *(float *)(param_1 + 0x94) = (float)*(uint *)(param_1 + 0x30);
  }
  if (*(float *)(param_1 + 0x90) < _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(float *)(param_1 + 0x94) < _DAT_0064b254) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x98);
  if ((*(float *)(param_1 + 0xc0) * _DAT_00652124 < fVar1) ||
     (fVar1 < *(float *)(param_1 + 0xc0) * _DAT_00652120)) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x90);
  }
  fVar1 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x9c);
  if (*(float *)(param_1 + 0xc4) * _DAT_00652124 < fVar1) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
  }
  else if (fVar1 < *(float *)(param_1 + 0xc0) * _DAT_00652120) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
    return;
  }
  return;
}

