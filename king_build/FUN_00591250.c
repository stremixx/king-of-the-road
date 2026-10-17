
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00591250(float *param_1,float *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00590ef0(param_1,param_3,param_4,param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_00590ef0(param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      FUN_004e5c4e(&local_c,(undefined4 *)(param_4 + 0x34),param_4 + 0x40,param_1,param_2);
      *(undefined4 *)(param_4 + 0x34) = local_c;
      *(undefined4 *)(param_4 + 0x38) = local_8;
      *(undefined4 *)(param_4 + 0x3c) = local_4;
      return iVar1;
    }
  }
  else {
    *(float *)(param_4 + 0x34) = *param_1;
    *(float *)(param_4 + 0x38) = param_1[1];
    *(float *)(param_4 + 0x3c) = param_1[2];
    if ((*param_2 - *param_1) * *(float *)(param_4 + 0x40) +
        (param_2[1] - param_1[1]) * *(float *)(param_4 + 0x44) +
        (param_2[2] - param_1[2]) * *(float *)(param_4 + 0x48) < _DAT_0064b254) {
      return iVar1;
    }
  }
  return 0;
}

