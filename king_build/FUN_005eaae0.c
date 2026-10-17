
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005eaae0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_e0;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0 [12];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  puVar3 = local_c0 + 2;
  iVar5 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar3 = &DAT_00701550;
  puVar6 = local_c0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_005f1c30(local_c0);
  puVar3 = (undefined4 *)FUN_005aba00(local_60,local_c0);
  puVar6 = local_c0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((DAT_00701dec & 0x100) != 0) {
    fVar7 = (float10)*(double *)(param_2 + 0x2130) * (float10)_DAT_0064a6d0;
    local_e0 = (float)*(double *)(param_2 + 0x2138);
    if (*(int *)(param_2 + 0x210c) == 0) {
      local_e0 = -local_e0;
      fVar7 = -fVar7;
    }
    uVar4 = FUN_005ab7d0(local_60,local_e0);
    uVar4 = FUN_005ab330(local_30,(float)fVar7,0,0,uVar4);
    uVar4 = FUN_005ab130(local_90,uVar4);
    FUN_005ab2f0(uVar4);
  }
  FUN_005b5dc0(&local_d0);
  fVar1 = (float)_DAT_0064a660;
  fVar2 = 1.0;
  if (local_d0 < 0) {
    fVar2 = (float)local_c8 / (float)(local_c8 - local_d0);
  }
  if (local_cc < 0) {
    fVar1 = (float)local_c4 / (float)(local_c4 - local_cc);
  }
  uVar4 = FUN_005ab580(local_90,(float)(int)(((-(uint)(*(int *)(param_1 + 100) != 0) & 0xfffffffe) +
                                             1) * 2) / (*(float *)(param_1 + 0x58) * fVar2),
                       0x3f800000,(float)_DAT_0064a650 / (fVar1 * *(float *)(param_1 + 0x54)));
  FUN_005ad7f0(local_c0,uVar4);
  return;
}

