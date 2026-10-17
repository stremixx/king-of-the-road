
void FUN_005d7240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_005d72d0(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  if (iVar1 != 0) {
    switch(param_3) {
    case 1:
      *param_5 = 1;
      return;
    case 2:
      *param_5 = 3 - (uint)(DAT_0071f80c != 0);
      return;
    case 3:
    case 4:
      *param_5 = 6;
      return;
    default:
      *param_5 = 0;
      return;
    }
  }
  return;
}

