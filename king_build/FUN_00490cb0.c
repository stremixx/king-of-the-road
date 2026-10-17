
undefined4 FUN_00490cb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = (param_3 + 3U & 0xfffffffc) + param_2;
  iVar1 = FUN_0061db0f(param_1);
  if (param_2 != iVar1) {
    FUN_0061dd53(param_1,param_2,0);
  }
  return 0;
}

