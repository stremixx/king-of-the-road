
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005960d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_150 [12];
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  fVar4 = (float10)FUN_004e2035();
  fVar4 = (float10)fsin((fVar4 - (float10)*(float *)(param_1 + 0xe0)) * (float10)_DAT_0064b318);
  fVar5 = (float10)FUN_004e1fd9();
  fVar4 = (float10)FUN_004e3a69((float)(ABS((float10)(double)fVar4) * (float10)(double)fVar4 *
                                        (float10)_DAT_0064fa98 * fVar5 +
                                       (float10)*(float *)(param_1 + 0xe8)),s_getCirclePos_0067d0dc)
  ;
  *(float *)(param_1 + 0xe8) = (float)fVar4;
  uVar1 = FUN_005ab330(local_c0,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x7c));
  uVar1 = FUN_005ab7d0(local_120,*(undefined4 *)(param_1 + 0xe8),uVar1);
  uVar1 = FUN_005ab330(local_60,0,0xc1200000,0x40555555,uVar1);
  fVar4 = (float10)fpatan((float10)_DAT_0064fa90,(float10)1);
  uVar1 = FUN_005ab5d0(local_f0,(float)-fVar4,uVar1);
  uVar1 = FUN_005ab130(local_90,uVar1);
  uVar1 = FUN_005ab130(local_30,uVar1);
  FUN_005ab130(local_150,uVar1);
  puVar3 = local_150;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

