
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058afc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) | 9;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined4 *)(param_1 + 0x188) = 2;
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0xe04) = 0;
  *(undefined4 *)(param_1 + 0xf88) = 3;
  *(undefined4 *)(param_1 + 0xf8c) = 0;
  *(undefined4 *)(param_1 + 0xf90) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x140c) = 0;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0;
  iVar6 = 0x14;
  *(undefined4 *)(param_1 + 0x460) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x464) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x468) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x3c4) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x3c8) = DAT_007015b4;
  *(undefined4 *)(param_1 + 0x3cc) = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x3d0) = DAT_007015b0;
  *(undefined4 *)(param_1 + 0x3d4) = DAT_007015b4;
  uVar3 = DAT_007015b8;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = uVar3;
  *(undefined4 *)(param_1 + 0x590) = param_2;
  *(undefined4 *)(param_1 + 0x594) = param_3;
  puVar5 = (undefined4 *)(param_1 + 0x1498);
  pfVar4 = (float *)(param_1 + 0x1528);
  do {
    puVar5[-0x14] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    fVar1 = DAT_00701594 * _DAT_0064f7f4;
    fVar2 = DAT_00701598 * _DAT_0064f7f4;
    pfVar4[-3] = DAT_00701590 * _DAT_0064f7f4;
    pfVar4[-2] = fVar1;
    pfVar4[-1] = fVar2;
    iVar6 = iVar6 + -1;
    *pfVar4 = DAT_00701590;
    pfVar4[1] = DAT_00701594;
    pfVar4[2] = DAT_00701598;
    pfVar4[0xb] = 0.0;
    pfVar4[9] = 0.0;
    pfVar4 = pfVar4 + 0x34;
  } while (iVar6 != 0);
  fVar1 = *(float *)(param_1 + 400) * _DAT_0064b248;
  *(float *)(param_1 + 0xccc) = fVar1;
  *(float *)(param_1 + 0xcd0) = fVar1;
  *(float *)(param_1 + 0xcd4) = fVar1;
  FUN_0058b190();
  return;
}

