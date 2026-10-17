
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0053f190(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *param_1 = DAT_0068a8f0;
  iVar5 = 4;
  do {
    FUN_004042a0();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar4 = &DAT_00701550;
  puVar6 = param_1 + 1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x45] = 0;
  param_1[0x2a] = 0;
  fVar1 = -DAT_00701598;
  fVar2 = -DAT_00701594 * _DAT_0064c980;
  param_1[0x16] = -DAT_00701590 * _DAT_0064c980;
  fVar1 = fVar1 * _DAT_0064c980;
  param_1[0x17] = fVar2;
  param_1[0x18] = fVar1;
  puVar4 = &DAT_00701550;
  puVar6 = param_1 + 1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x10] = DAT_007015b0;
  param_1[0x11] = DAT_007015b4;
  param_1[0x12] = DAT_007015b8;
  param_1[0x13] = DAT_007015b0;
  param_1[0x14] = DAT_007015b4;
  param_1[0x15] = DAT_007015b8;
  param_1[0xd] = DAT_007015b0;
  param_1[0xe] = DAT_007015b4;
  param_1[0xf] = DAT_007015b8;
  param_1[0x19] = 0;
  puVar4 = param_1 + 0x22;
  iVar5 = 8;
  do {
    puVar4[-8] = 0;
    *puVar4 = 0;
    puVar4[0x17] = 0;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = DAT_007015b0;
  param_1[0x2e] = DAT_007015b4;
  param_1[0x2f] = DAT_007015b8;
  param_1[0x30] = DAT_007015b0;
  param_1[0x31] = DAT_007015b4;
  param_1[0x32] = DAT_007015b8;
  param_1[0x33] = DAT_007015b0;
  param_1[0x34] = DAT_007015b4;
  param_1[0x35] = DAT_007015b8;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x148;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x36] = 0;
  param_1[0x4b] = 1;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x48] = 0;
  param_1[0x4e] = 0xfffffc18;
  uVar3 = DAT_0068a8f0;
  param_1[0x4f] = 0;
  param_1[0x49] = 0;
  *param_1 = uVar3;
  return param_1;
}

