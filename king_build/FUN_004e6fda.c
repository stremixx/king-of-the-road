
int FUN_004e6fda(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    puVar2 = &DAT_00701550;
    puVar3 = param_5;
    for (iVar1 = 0xc; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
    }
    param_5[0x13] = *param_3;
    param_5[0x14] = param_3[1];
    param_5[0x15] = param_3[2];
    param_5[0x16] = *param_4;
    param_5[0x17] = param_4[1];
    param_5[0x18] = param_4[2];
    param_5[0x1d] = 0;
    param_5[0x1a] = 0;
    *param_5 = param_2;
    param_5[0x19] = 0;
    iVar1 = (**(code **)(*param_1 + 0x34))(6,param_5);
    if (iVar1 != 0) {
      FUN_004e4f28(param_5);
    }
  }
  return iVar1;
}

