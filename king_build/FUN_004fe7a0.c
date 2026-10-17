
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004fe7a0(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  short *psVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [12];
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x2780) != 0) {
    *(undefined4 *)(param_1 + 0x2780) = 0;
    return 0;
  }
  if ((DAT_006733d8 == 0) || (*(int *)(param_1 + 0x2638) < 2)) {
    FUN_004fd500();
    *(undefined4 *)(param_1 + 0x2630) = 0;
    return 0;
  }
  if (*(int *)(param_1 + 0x2630) == 0) {
    iVar1 = FUN_004f50a0();
    *(int *)(param_1 + 0x262c) = iVar1;
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 != 0) {
      FUN_004f6c00(1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2630) < 1) {
      FUN_004facf0(1);
      FUN_004f60e0();
      *(undefined4 *)(param_1 + 0x2630) = 0;
      return 0;
    }
    if (*(int *)(param_1 + 0x262c) == 0) {
      *(undefined4 *)(param_1 + 0x33b8) = DAT_007015b0;
      *(undefined4 *)(param_1 + 0x33bc) = DAT_007015b4;
      *(undefined4 *)(param_1 + 0x33c0) = DAT_007015b8;
      FUN_004fc290(local_60);
      puVar3 = local_60;
      puVar5 = (undefined4 *)(param_1 + 0x10);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      pfVar2 = (float *)FUN_005aba00(local_30,(undefined4 *)(param_1 + 0x10));
      pfVar6 = (float *)(param_1 + 0x900);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar6 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_78 = *(float *)(param_1 + 0x900) * *(float *)(param_1 + 0x4c) +
                 *(float *)(param_1 + 0x918) * *(float *)(param_1 + 0x54) +
                 *(float *)(param_1 + 0x90c) * *(float *)(param_1 + 0x50);
      local_74 = *(float *)(param_1 + 0x904) * *(float *)(param_1 + 0x4c) +
                 *(float *)(param_1 + 0x91c) * *(float *)(param_1 + 0x54) +
                 *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x50);
      local_70 = *(float *)(param_1 + 0x908) * *(float *)(param_1 + 0x4c) +
                 *(float *)(param_1 + 0x920) * *(float *)(param_1 + 0x54) +
                 *(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x50);
      puVar3 = (undefined4 *)FUN_004e29c2(local_6c,&local_78,param_1 + 0x1f48);
      *(undefined4 *)(param_1 + 0x58) = *puVar3;
      *(undefined4 *)(param_1 + 0x5c) = puVar3[1];
      *(undefined4 *)(param_1 + 0x60) = puVar3[2];
      FUN_004eed00();
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xdd4)) {
        pfVar2 = (float *)(param_1 + 0xd20);
        psVar4 = (short *)(param_1 + 0x19a4);
        do {
          if (*psVar4 == 0) {
            *pfVar2 = pfVar2[0x64c] * *(float *)(param_1 + 0x2640) * _DAT_0064b440;
          }
          else {
            *pfVar2 = 0.0;
          }
          iVar1 = iVar1 + 1;
          psVar4 = psVar4 + 1;
          pfVar2 = pfVar2 + 1;
        } while (iVar1 < *(int *)(param_1 + 0xdd4));
      }
      *(undefined4 *)(param_1 + 0x2630) = 0;
      FUN_004f60e0();
      *(undefined4 *)(param_1 + 0x2630) = 0;
      return 0;
    }
    iVar1 = FUN_004fc130();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2630) = 0xffffffff;
      return -1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x2630) + 1;
  *(int *)(param_1 + 0x2630) = iVar1;
  return iVar1;
}

