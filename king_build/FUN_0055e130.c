
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0055e130(int *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float unaff_retaddr;
  
  pfVar1 = param_3;
  param_3 = (float *)(*param_3 * _DAT_0064b248);
  (**(code **)(*param_1 + 0x98))(param_2,&param_3);
  *pfVar1 = unaff_retaddr + unaff_retaddr;
  return;
}

