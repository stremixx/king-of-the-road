
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0055e190(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float *pfVar1;
  float unaff_retaddr;
  
  pfVar1 = param_4;
  param_4 = (float *)(*param_4 * _DAT_0064b248);
  (**(code **)(*param_1 + 0xa0))(param_2,param_3,&param_4);
  *pfVar1 = unaff_retaddr + unaff_retaddr;
  return;
}

