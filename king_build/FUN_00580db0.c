
void __thiscall FUN_00580db0(int param_1,float *param_2,undefined1 *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [12];
  undefined1 local_12c [300];
  
  pfVar1 = (float *)(param_1 + 0x1b8);
  puVar2 = (undefined4 *)(param_1 + 0x1ac);
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0x1bc) = param_2[1];
  *(float *)(param_1 + 0x1c0) = param_2[2];
  local_144 = *(float *)(param_1 + 0x254) * *pfVar1 +
              *(float *)(param_1 + 0x260) * *(float *)(param_1 + 0x1bc) +
              *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x1c0);
  local_140 = *(float *)(param_1 + 600) * *pfVar1 +
              *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x1bc) +
              *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x1c0);
  local_13c = *(float *)(param_1 + 0x25c) * *pfVar1 +
              *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x1bc) +
              *(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x1c0);
  puVar3 = (undefined4 *)FUN_004e29c2(local_138,&local_144,param_1 + 0x194);
  *puVar2 = *puVar3;
  *(undefined4 *)(param_1 + 0x1b0) = puVar3[1];
  *(undefined4 *)(param_1 + 0x1b4) = puVar3[2];
  if (param_3 == (undefined1 *)0x0) {
    puVar4 = &DAT_0068c120;
    param_3 = &DAT_0068c120;
  }
  else {
    puVar4 = &DAT_0066b4e4;
  }
  FUN_0061c369(local_12c,s__MovingItem__set_wMP_n_s_0067c4d4,param_3,puVar4);
  FUN_004e20b1(puVar2,local_12c,0x42480000);
  *(undefined4 *)(param_1 + 0xcf0) = *puVar2;
  *(undefined4 *)(param_1 + 0xcf4) = *(undefined4 *)(param_1 + 0x1b0);
  *(float *)(param_1 + 0xcfc) = *pfVar1;
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_1 + 0x1c0);
  return;
}

