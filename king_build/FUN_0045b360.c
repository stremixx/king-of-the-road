
int FUN_0045b360(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = -(param_2 - param_1 >> 0x1f);
  if (0x10 < (param_2 - param_1) / 0xc) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      uVar2 = FUN_00464020(param_1);
      FUN_0044dd30(uVar2);
      iVar1 = FUN_004640a0(param_1,param_2);
      FUN_0045b360(iVar1,param_2,0,param_4,param_5);
      param_2 = iVar1;
      if ((iVar1 - param_1) / 0xc < 0x11) {
        return -(iVar1 - param_1 >> 0x1f);
      }
    }
    FUN_0046b2c0(param_1);
    iVar3 = param_2 - param_1;
    iVar1 = iVar3 * 0x2aaaaaab;
    while (1 < iVar3 / 0xc) {
      param_2 = param_2 + -0xc;
      FUN_0046b580();
      iVar3 = param_2 - param_1;
      iVar1 = -(iVar3 >> 0x1f);
    }
  }
  return iVar1;
}

