
undefined4 FUN_00490d40(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_0046e460(param_1[1],param_2,param_2 + 4);
  *param_3 = piVar1[1] - *piVar1;
  param_1 = (int *)DAT_00690c2c;
  FUN_0046e460(piVar1[1],&param_1,&param_2);
  return 0;
}

