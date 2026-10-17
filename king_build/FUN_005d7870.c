
void FUN_005d7870(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if (param_3 == -1) {
    param_3 = DAT_0071f7f0;
  }
  DAT_0071f800 = param_2;
  DAT_0071f7fc = param_1;
  if (param_4 == 0xffffffff) {
    if (DAT_0071f84c == 0) {
      param_4 = 0;
    }
    else if (DAT_0071f84c == 1) {
      param_4 = 0x200;
    }
    else if (DAT_0071f84c == 2) {
      param_4 = 0x600;
    }
  }
  uVar1 = (uint)((param_4 & 0x200) != 0);
  if ((param_4 & 0x400) != 0) {
    uVar1 = 2;
  }
  DAT_0071f7f0 = param_3;
  DAT_0071f7f4 = param_3;
  if ((DAT_0071f84c != uVar1) || (DAT_0071f850 != (param_4 >> 0xc & 1))) {
    FUN_005d7910();
    FUN_005d6c50(param_4);
  }
  return;
}

