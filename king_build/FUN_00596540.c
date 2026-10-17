
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00596540(int param_1,undefined4 *param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0 [12];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  pfVar1 = (float *)FUN_005aba00(local_90,param_3);
  FUN_005aabf0(*(float *)(param_1 + 0x74) * *pfVar1 +
               pfVar1[3] * *(float *)(param_1 + 0x78) + pfVar1[6] * *(float *)(param_1 + 0x7c) +
               pfVar1[9],
               pfVar1[4] * *(float *)(param_1 + 0x78) +
               pfVar1[7] * *(float *)(param_1 + 0x7c) + pfVar1[1] * *(float *)(param_1 + 0x74) +
               pfVar1[10],
               pfVar1[5] * *(float *)(param_1 + 0x78) +
               pfVar1[8] * *(float *)(param_1 + 0x7c) + pfVar1[2] * *(float *)(param_1 + 0x74) +
               pfVar1[0xb],&local_c4,&local_d0);
  local_cc = local_d0 - (float)_DAT_0064c9f0;
  local_c8 = local_c4 - (float)_DAT_0064c9f0;
  uVar2 = FUN_005ab7d0(local_90,local_c8,param_3);
  uVar2 = FUN_005ab5d0(local_60,-local_cc,uVar2);
  uVar2 = FUN_005ab130(local_30,uVar2);
  FUN_005ab130(local_c0,uVar2);
  puVar4 = local_c0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

