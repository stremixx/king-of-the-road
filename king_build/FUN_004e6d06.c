
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e6d06(int *param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  uint local_8;
  
  if (param_1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    pfVar2 = (float *)&DAT_00701550;
    pfVar3 = param_6;
    for (iVar1 = 0xc; pfVar3 = pfVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
    }
    param_6[0x13] = *param_4;
    param_6[0x14] = param_4[1];
    param_6[0x15] = param_4[2];
    param_6[0x16] = *param_5;
    param_6[0x17] = param_5[1];
    param_6[0x18] = param_5[2];
    param_6[0x1e] = param_2;
    param_6[0x1d] = 0.0;
    param_6[0x1a] = 0.0;
    *param_6 = param_3;
    param_6[0x19] = 0.0;
    param_6[0x1a] = 0.0;
    if (param_3 <= (float)_DAT_0064a668) {
      local_8 = (**(code **)(*param_1 + 0x34))(4,param_6);
    }
    else {
      local_8 = (**(code **)(*param_1 + 0x34))(6,param_6);
    }
    if ((local_8 & 1) != 0) {
      FUN_004e4f28(param_6);
    }
  }
  return local_8;
}

