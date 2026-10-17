
undefined4 FUN_00490d90(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = ((param_1[1] - *param_2) - *param_1) - 4;
  *(uint *)(*param_2 + *param_1) = uVar2;
  uVar2 = uVar2 & 3;
  if (uVar2 != 0) {
    param_1 = (int *)DAT_00690c2c;
    FUN_0046e460(piVar1[1],&param_1,(int)&param_2 - uVar2);
  }
  return 0;
}

