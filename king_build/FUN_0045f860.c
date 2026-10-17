
void FUN_0045f860(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (0x40 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      uVar1 = FUN_00466050(param_1,param_1 + ((param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f)
                                             >> 1) * 4,param_2 + -4,param_5,param_5);
      FUN_0041d3f0(uVar1);
      iVar2 = FUN_00466100(param_1,param_2);
      FUN_0045f860(iVar2,param_2,0,param_4,param_5);
      param_2 = iVar2;
      if ((int)(iVar2 - param_1 & 0xfffffffcU) < 0x41) {
        return;
      }
    }
    FUN_0046c030(param_1,param_2,param_5,0,0);
    uVar3 = param_2 - param_1;
    while (4 < (int)(uVar3 & 0xfffffffc)) {
      FUN_0046c110(param_1,param_2,param_5);
      uVar3 = (param_2 + -4) - param_1;
      param_2 = param_2 + -4;
    }
  }
  return;
}

