
void __fastcall FUN_005df9a0(int param_1)

{
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_005f1800(param_1 + 0x28c,0);
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x58) = (float)*(double *)(param_1 + 0xbe8);
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x54) = (float)*(double *)(param_1 + 0xbf0);
    FUN_005dea80(param_1 + 0x28c);
    if (*(int *)(param_1 + 700) == 0) {
      FUN_005d8d70(*(int *)(param_1 + 0x1e8) + 0xc,*(int *)(param_1 + 0x1e8) + 0x2c);
    }
    else {
      *(int *)(*(int *)(param_1 + 0x1e8) + 0x4c) = *(int *)(param_1 + 700);
    }
  }
  *(float *)(param_1 + 0x238) = (float)*(double *)(param_1 + 0xb58);
  *(float *)(param_1 + 0x244) = (float)*(double *)(param_1 + 0xb58);
  *(float *)(param_1 + 0x23c) = (float)*(double *)(param_1 + 0xb60);
  *(float *)(param_1 + 0x248) = (float)*(double *)(param_1 + 0xb60);
  *(float *)(param_1 + 0x240) = (float)*(double *)(param_1 + 0xb68);
  *(float *)(param_1 + 0x24c) = (float)*(double *)(param_1 + 0xb68);
  return;
}

