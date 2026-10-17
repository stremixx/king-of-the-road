
undefined4 FUN_004e53b2(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
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
    param_4[0x1d] = 0;
    *param_4 = 0;
    param_4[0x1a] = 0;
    uVar1 = (**(code **)(*param_1 + 0x34))(0,param_4);
  }
  return uVar1;
}

