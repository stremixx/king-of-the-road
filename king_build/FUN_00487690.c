
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487690(undefined4 param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  FUN_00485780(param_1,param_2,param_3,param_4);
  FUN_00485780(1,param_2,param_3,&local_8);
  if ((double)CONCAT44(uStack_4,local_8) * _DAT_0064a770 < *param_4) {
    *(undefined4 *)param_4 = local_8;
    *(undefined4 *)((int)param_4 + 4) = uStack_4;
  }
  return;
}

