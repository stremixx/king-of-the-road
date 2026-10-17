
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004daea0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_BlowProcessTank_00671c74);
  puVar2 = param_1 + 0x24;
  local_4 = 0;
  iVar3 = 0xe;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0xc;
  puVar2 = param_1 + 0x5c;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0xc;
  puVar2 = param_1 + 0x80;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *param_1 = &PTR_FUN_0064c4b8;
  param_1[0xa9] = param_2;
  FUN_005d2c20(param_1);
  param_1[0xa8] = 0;
  param_1[0xaa] = param_3;
  param_1[0xab] = param_4;
  param_1[0x24] = 0xbf800000;
  param_1[0x25] = 0xc1100000;
  param_1[0x26] = 0x3fd9999a;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = 0xc1000000;
  param_1[0x29] = 0x40000000;
  param_1[0x2a] = 0x3fb9999a;
  param_1[0x2b] = 0xc0d33333;
  param_1[0x2c] = 0x3fa66666;
  param_1[0x2d] = 0xbfb9999a;
  param_1[0x2e] = 0xc0600000;
  param_1[0x2f] = 0x3fa66666;
  param_1[0x30] = 0x3fb9999a;
  param_1[0x31] = 0xc0466666;
  param_1[0x32] = 0x3fa66666;
  param_1[0x33] = 0xbfb9999a;
  param_1[0x34] = 0;
  param_1[0x35] = 0x3fa66666;
  param_1[0x36] = 0;
  param_1[0x37] = 0xc00ccccd;
  param_1[0x38] = 0x40400000;
  param_1[0x39] = 0x3fb9999a;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3fa66666;
  param_1[0x3c] = 0xbfb9999a;
  param_1[0x3d] = 0xbf800000;
  param_1[0x3e] = 0x3fa66666;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3fe66666;
  param_1[0x41] = 0x40400000;
  param_1[0x42] = 0xbfb9999a;
  param_1[0x43] = 0xc0400000;
  param_1[0x44] = 0x3fa66666;
  param_1[0x45] = 0x3fb9999a;
  param_1[0x46] = 0xc0a00000;
  param_1[0x47] = 0x3fa66666;
  param_1[0x48] = 0xbfb9999a;
  param_1[0x49] = 0xc0c00000;
  param_1[0x4a] = 0x3fa66666;
  param_1[0x4b] = 0xbf800000;
  param_1[0x4c] = 0xc1000000;
  param_1[0x4d] = 0x3fb33333;
  param_1[0x4e] = 0x3f800000;
  param_1[0x4f] = 0xc1080000;
  param_1[0x50] = 0x3fd9999a;
  param_1[0x5c] = 0xbfb9999a;
  param_1[0x5d] = 0xc0d33333;
  param_1[0x5e] = 0x3f800000;
  param_1[0x5f] = 0xbfb9999a;
  param_1[0x60] = 0xc0c33333;
  param_1[0x61] = 0x3f800000;
  param_1[0x62] = 0xbfb9999a;
  param_1[99] = 0xc0b33333;
  param_1[100] = 0x3f800000;
  param_1[0x65] = 0xbfb9999a;
  param_1[0x66] = 0xc0a33333;
  param_1[0x67] = 0x3f800000;
  param_1[0x68] = 0xbfb9999a;
  param_1[0x69] = 0xc0933333;
  param_1[0x6a] = 0x3f800000;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0x3fe66666;
  param_1[0x6d] = 0x40400000;
  param_1[0x6e] = 0x3fb9999a;
  param_1[0x6f] = 0xc0d33333;
  param_1[0x70] = 0x3f800000;
  param_1[0x71] = 0x3fb9999a;
  param_1[0x72] = 0xc0c33333;
  param_1[0x73] = 0x3f800000;
  param_1[0x74] = 0x3fb9999a;
  param_1[0x75] = 0xc0b33333;
  param_1[0x76] = 0x3f800000;
  param_1[0x77] = 0x3fb9999a;
  param_1[0x78] = 0xc0a33333;
  param_1[0x79] = 0x3f800000;
  param_1[0x7a] = 0x3fb9999a;
  param_1[0x7b] = 0xc0933333;
  param_1[0x7c] = 0x3f800000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0xc00ccccd;
  param_1[0x7f] = 0x40400000;
  param_1[0x80] = 0xbf800000;
  param_1[0x81] = 0;
  param_1[0x82] = 0x40800000;
  param_1[0x83] = 0xbf800000;
  param_1[0x84] = 0;
  param_1[0x85] = 0x40800000;
  param_1[0x86] = 0xbf800000;
  param_1[0x87] = 0;
  param_1[0x88] = 0x40800000;
  param_1[0x89] = 0xbf800000;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0x40800000;
  param_1[0x8c] = 0xbf800000;
  param_1[0x8d] = 0;
  param_1[0xa4] = 0x40400000;
  param_1[0x8e] = 0x40800000;
  param_1[0xa5] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0x40a00000;
  param_1[0x92] = 0x3f800000;
  param_1[0x93] = 0;
  param_1[0x94] = 0x40800000;
  param_1[0x95] = 0x3f800000;
  param_1[0x96] = 0;
  param_1[0x97] = 0x40800000;
  param_1[0x98] = 0x3f800000;
  param_1[0x99] = 0;
  param_1[0x9a] = 0x40800000;
  param_1[0x9b] = 0x3f800000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0x40800000;
  param_1[0x9e] = 0x3f800000;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0x40800000;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0x40a00000;
  uVar5 = 0;
  puVar2 = param_1 + 0x4e;
  do {
    puVar2[-0x46] = 0;
    *puVar2 = 0;
    iVar3 = _rand();
    fVar1 = (float)iVar3 * _DAT_0064b244;
    iVar3 = _rand();
    uVar6 = uVar5 + 1;
    puVar2[-0x38] =
         (float)uVar5 * _DAT_0064b340 + ((float)iVar3 * _DAT_0064b244 - fVar1) * _DAT_0064c4b4;
    uVar5 = uVar6;
    puVar2 = puVar2 + 1;
  } while (uVar6 < 0xe);
  param_1[0xa6] = 0;
  pfVar4 = (float *)(param_1 + 0x16);
  iVar3 = 0xe;
  do {
    if (*pfVar4 <= (float)param_1[0xa6]) {
      fVar1 = (float)param_1[0xa6];
    }
    else {
      fVar1 = *pfVar4;
    }
    param_1[0xa6] = fVar1;
    pfVar4 = pfVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0xa7] = fVar1 + _DAT_0064b3fc;
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}

