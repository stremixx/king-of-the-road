
void __thiscall FUN_004f79b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x2530) < *(int *)(param_1 + 0x2534)) {
    FUN_004f0840(param_2,param_3);
  }
  puVar1 = (undefined4 *)FUN_005ab130(local_30,param_3,param_1 + 0x2274);
  puVar4 = (undefined4 *)(param_1 + 0x22a4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  pfVar2 = (float *)FUN_005aba00(local_30,param_1 + 0x10);
  pfVar5 = (float *)(param_1 + 0x2304);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_3c = *(float *)(param_1 + 0x2340) * *(float *)(param_1 + 0x2304) +
             *(float *)(param_1 + 0x231c) * *(float *)(param_1 + 0x2348) +
             *(float *)(param_1 + 0x2310) * *(float *)(param_1 + 0x2344);
  local_38 = *(float *)(param_1 + 0x2320) * *(float *)(param_1 + 0x2348) +
             *(float *)(param_1 + 0x2308) * *(float *)(param_1 + 0x2340) +
             *(float *)(param_1 + 0x2314) * *(float *)(param_1 + 0x2344);
  *(float *)(param_1 + 0x234c) = local_3c;
  local_34 = *(float *)(param_1 + 0x2324) * *(float *)(param_1 + 0x2348) +
             *(float *)(param_1 + 0x230c) * *(float *)(param_1 + 0x2340) +
             *(float *)(param_1 + 0x2318) * *(float *)(param_1 + 0x2344);
  *(float *)(param_1 + 0x2350) = local_38;
  *(float *)(param_1 + 0x2354) = local_34;
  puVar1 = (undefined4 *)FUN_004e29c2(&local_3c,(float *)(param_1 + 0x234c),param_1 + 0x1f48);
  *(undefined4 *)(param_1 + 0x2358) = *puVar1;
  *(undefined4 *)(param_1 + 0x235c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x2360) = puVar1[2];
  return;
}

