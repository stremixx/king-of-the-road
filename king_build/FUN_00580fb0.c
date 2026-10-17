
void FUN_00580fb0(int param_1,int param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [36];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c = *(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24);
  local_38 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28);
  local_34 = *(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c);
  *param_4 = local_3c;
  param_4[1] = local_38;
  param_4[2] = local_34;
  FUN_005ab130(local_30,param_1,param_3);
  local_c = DAT_007015b0;
  local_8 = DAT_007015b4;
  local_4 = DAT_007015b8;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  FUN_004e2844(local_30,&local_3c,&local_38,&local_34,param_5 + 2,param_5,param_5 + 1);
  *param_5 = -*param_5;
  return;
}

