
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005ad7f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if ((DAT_00701d68 & 1) == 0) {
    DAT_00701d68 = DAT_00701d68 | 1;
    iVar4 = 4;
    do {
      FUN_004042a0();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = &DAT_00701550;
    puVar5 = &DAT_00701928;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0061c439(&DAT_005adc50);
  }
  if ((DAT_00701d68 & 2) == 0) {
    DAT_00701d68 = DAT_00701d68 | 2;
    iVar4 = 4;
    do {
      FUN_004042a0();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = &DAT_00701550;
    puVar5 = &DAT_007018f8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0061c439(&DAT_005adc40);
  }
  puVar3 = param_2;
  puVar5 = (undefined4 *)(param_1 + 0x1070);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005abba0(param_1 + 0x10a0,(undefined4 *)(param_1 + 0x1070));
  *(undefined4 *)(param_1 + 0x2020) = 0;
  *(undefined4 *)(param_1 + 0x2024) = 0;
  *(undefined4 *)(param_1 + 0x2028) = 0;
  *(undefined4 *)(param_1 + 0x202c) = 0;
  if (DAT_0071f868 == (int *)0x0) {
    fVar6 = (float10)_DAT_0064a660 / (float10)*(double *)(param_1 + 0x2110);
    uVar2 = FUN_005ab580(&local_100,(float)fVar6,(float)fVar6,(float)fVar6);
    param_3 = (undefined4 *)FUN_005ab130(local_90,param_3,uVar2);
  }
  puVar3 = &DAT_007018f8;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)FUN_005ab130(local_90,param_2,&DAT_007018f8);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2020) * 0x30 + 0x8f0 + param_1);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_005ab130(local_90,param_2,&DAT_007018f8);
  FUN_005abba0(&DAT_00701928,uVar2);
  FUN_005abd10(*(int *)(param_1 + 0x2020) * 0x30 + 0xcb0 + param_1,&DAT_00701928);
  *(int *)(param_1 + 0x2020) = *(int *)(param_1 + 0x2020) + 1;
  puVar3 = &DAT_007018f8;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2024) * 0x30 + 0x10d0 + param_1);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(int *)(param_1 + 0x2024) = *(int *)(param_1 + 0x2024) + 1;
  puVar3 = &DAT_00701550;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1490 + param_1);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(int *)(param_1 + 0x202c) = *(int *)(param_1 + 0x202c) + 1;
  *(undefined4 *)(param_1 + 0x7b0 + *(int *)(param_1 + 0x2028) * 4) =
       *(undefined4 *)(param_1 + 0x7a0);
  *(undefined4 *)(param_1 + 0x800 + *(int *)(param_1 + 0x2028) * 4) =
       *(undefined4 *)(param_1 + 0x7a4);
  *(undefined4 *)(param_1 + 0x850 + *(int *)(param_1 + 0x2028) * 4) =
       *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x8a0 + *(int *)(param_1 + 0x2028) * 4) =
       *(undefined4 *)(param_1 + 0x7ac);
  *(float *)(param_1 + 0x6d8) =
       (float)(((float10)*(double *)(param_1 + 0x2148) + (float10)*(double *)(param_1 + 0x2148)) /
              ((float10)(*(int *)(param_1 + 0x7a8) >> 0x13) * (float10)DAT_007018f8));
  dVar1 = (double)*(int *)(param_1 + 0x2108) * _DAT_0064a590;
  *(double *)(param_1 + 0x2150) = dVar1;
  if (_DAT_0064a660 < dVar1) {
    *(undefined4 *)(param_1 + 0x2150) = 0;
    *(undefined4 *)(param_1 + 0x2154) = 0x3ff00000;
  }
  if (*(double *)(param_1 + 0x2150) < _DAT_0064a668) {
    *(undefined4 *)(param_1 + 0x2150) = 0;
    *(undefined4 *)(param_1 + 0x2154) = 0;
  }
  *(int *)(param_1 + 0x2028) = *(int *)(param_1 + 0x2028) + 1;
  DAT_0067dec8 = DAT_0067dec8 + 1;
  *(int *)(param_1 + 0x20fc) = DAT_0067dec8;
  FUN_005ad5b0();
  if (DAT_0071f864 != 0) {
    uVar2 = FUN_005ab580(local_90,0x3f800000,0x3f800000,0xbf800000);
    uVar2 = FUN_005ab5d0(local_30,0xbfc90fda,uVar2);
    uVar2 = FUN_005ab130(local_60,param_2,uVar2);
    FUN_005ab130(&local_100,uVar2);
    local_cc = local_fc;
    local_c8 = local_f8;
    local_d0 = local_100;
    local_bc = local_f0;
    local_b8 = local_ec;
    local_c0 = local_f4;
    local_ac = local_e4;
    local_a8 = local_e0;
    local_b0 = local_e8;
    local_9c = local_d8;
    local_98 = local_d4;
    local_c4 = 0;
    local_b4 = 0;
    local_a4 = 0;
    local_a0 = local_dc;
    local_94 = 0x3f800000;
    (**(code **)(*DAT_0071f868 + 0x2c))(DAT_0071f868,2,&local_d0);
  }
  return;
}

