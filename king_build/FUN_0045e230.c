
void FUN_0045e230(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (0x200 < (int)(param_2 - param_1 & 0xffffffe0U)) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      uVar1 = FUN_00465d30(param_1,((param_2 - param_1 >> 5) - (param_2 - param_1 >> 0x1f) >> 1) *
                                   0x20 + param_1,param_2 + -0x20,param_5,param_5);
      FUN_00458ab0(uVar1);
      iVar2 = FUN_00465d90(param_1,param_2);
      FUN_0045e230(iVar2,param_2,0,param_4,param_5);
      param_2 = iVar2;
      if ((int)(iVar2 - param_1 & 0xffffffe0U) < 0x201) {
        return;
      }
    }
    FUN_0046bdc0(param_1,param_2,param_5,0,0);
    uVar3 = param_2 - param_1;
    while (0x20 < (int)(uVar3 & 0xffffffe0)) {
      FUN_0046cee0(param_1,param_2,0,param_5);
      uVar3 = (param_2 + -0x20) - param_1;
      param_2 = param_2 + -0x20;
    }
  }
  return;
}

