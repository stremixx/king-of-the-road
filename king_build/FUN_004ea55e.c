
void __thiscall FUN_004ea55e(float *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  char *_Str;
  float10 fVar2;
  int local_18;
  int local_14;
  float local_10;
  
  fVar1 = (float)*(double *)(DAT_00696424 + 0xb98);
  local_18 = -1;
  local_14 = 0;
  local_10 = fVar1;
  while( true ) {
    if ((int)param_1[7] <= local_14) {
      if (local_18 == -1) {
        _Str = (char *)FUN_00631d33();
        fVar2 = (float10)FUN_004e2035();
        FUN_0061c369(_Str,s_Filter__1_addval___f___s_number__006732a8,(double)param_2,param_3,
                     param_1[7],(double)*param_1,*(undefined4 *)(DAT_00696424 + 0xb90),
                     *(undefined4 *)(DAT_00696424 + 0xb94),(double)fVar1,(double)fVar2);
        for (local_14 = 0; local_14 < (int)param_1[7] / 2; local_14 = local_14 + 1) {
          _strlen(_Str);
          FUN_0061c369();
          _strlen(_Str);
          FUN_0061c369();
        }
        if (((uint)param_1[7] & 1) != 0) {
          _strlen(_Str);
          FUN_0061c369();
        }
        FUN_004e1e9c();
      }
      else {
        *(float *)((int)param_1[2] + local_18 * 4) = fVar1;
        *(float *)((int)param_1[3] + local_18 * 4) = param_2;
      }
      return;
    }
    if (fVar1 == *(float *)((int)param_1[2] + local_14 * 4)) break;
    if (*(float *)((int)param_1[2] + local_14 * 4) < fVar1 - *param_1) {
      *(float *)((int)param_1[2] + local_14 * 4) = fVar1;
      *(float *)((int)param_1[3] + local_14 * 4) = param_2;
      return;
    }
    if (*(float *)((int)param_1[2] + local_14 * 4) < local_10) {
      local_10 = *(float *)((int)param_1[2] + local_14 * 4);
      local_18 = local_14;
    }
    local_14 = local_14 + 1;
  }
  *(float *)((int)param_1[3] + local_14 * 4) = param_2;
  return;
}

