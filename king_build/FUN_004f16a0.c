
void __thiscall FUN_004f16a0(int param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(param_1 + 0x4c);
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0x50) = param_2[1];
  *(float *)(param_1 + 0x54) = param_2[2];
  local_18 = *pfVar1 * *(float *)(param_1 + 0x900) +
             *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x54);
  local_14 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x904) * *pfVar1 +
             *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x54);
  local_10 = *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x50) +
             *(float *)(param_1 + 0x908) * *pfVar1 +
             *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x54);
  puVar2 = (undefined4 *)FUN_004e29c2(local_c,&local_18,param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x58) = *puVar2;
  *(undefined4 *)(param_1 + 0x5c) = puVar2[1];
  *(undefined4 *)(param_1 + 0x60) = puVar2[2];
  FUN_004843e0();
  FUN_004f0060();
  return;
}

