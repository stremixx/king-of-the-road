
uint FUN_004e6354(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_00701550;
  puVar4 = param_4;
  for (iVar2 = 0xc; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  param_4[0x13] = *param_2;
  param_4[0x14] = param_2[1];
  param_4[0x15] = param_2[2];
  param_4[0x16] = *param_3;
  param_4[0x17] = param_3[1];
  param_4[0x18] = param_3[2];
  *param_4 = 0;
  param_4[0x1e] = 0;
  uVar1 = FUN_004e5ace(param_1,4,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

