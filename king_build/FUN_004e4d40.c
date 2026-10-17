
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004e4d40(int *param_1,float param_2,float *param_3,float *param_4,float param_5,float *param_6)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    pfVar3 = (float *)&DAT_00701550;
    pfVar4 = param_6;
    for (iVar2 = 0xc; pfVar4 = pfVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    param_6[0x13] = *param_3;
    param_6[0x14] = param_3[1];
    param_6[0x15] = param_3[2];
    param_6[0x16] = *param_4;
    param_6[0x17] = param_4[1];
    param_6[0x18] = param_4[2];
    param_6[0x1e] = param_2;
    param_6[0x1d] = 0.0;
    param_6[0x1a] = 0.0;
    *param_6 = param_5;
    param_6[0x19] = 0.0;
    if (param_5 <= (float)_DAT_0064a668) {
      uVar1 = (**(code **)(*param_1 + 0x34))(4,param_6);
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x34))(6,param_6);
    }
  }
  return uVar1;
}

