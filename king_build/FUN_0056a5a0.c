
void FUN_0056a5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_006f2390 != 0) {
    iVar1 = FUN_0056a6f0(param_1,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(DAT_006f2390 + 0x34) = param_3;
      *(undefined4 *)(DAT_006f2390 + 0x38) = param_4;
    }
  }
  return;
}

