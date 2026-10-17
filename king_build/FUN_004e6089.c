
uint FUN_004e6089(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_00701550;
  puVar4 = param_6;
  for (iVar2 = 0xc; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  param_6[0x13] = *param_4;
  param_6[0x14] = param_4[1];
  param_6[0x15] = param_4[2];
  param_6[0x16] = *param_5;
  param_6[0x17] = param_5[1];
  param_6[0x18] = param_5[2];
  *param_6 = param_3;
  param_6[0x1d] = 0;
  param_6[0x1a] = 0;
  param_6[0x1e] = param_1;
  uVar1 = FUN_004e58e9(param_2,6,param_6);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

