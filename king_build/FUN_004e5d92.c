
undefined4
FUN_004e5d92(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,double *param_6)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  uVar1 = FUN_004bde20(local_10,param_2,param_4);
  fVar2 = (float10)FUN_004e1080(param_3,uVar1);
  fVar3 = (float10)FUN_004e1080(param_3,param_5);
  *param_6 = (double)((float10)(double)fVar2 / fVar3);
  uVar1 = FUN_004bdd80(local_1c,param_5,(float)*param_6,(float)*param_6);
  FUN_004bddd0(param_1,param_4,uVar1);
  return param_1;
}

