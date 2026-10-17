
undefined4
FUN_004e5d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  double local_c;
  
  uVar2 = FUN_004bde20(local_18,param_2,param_4);
  fVar3 = (float10)FUN_004e1080(param_3,uVar2);
  fVar4 = (float10)FUN_004e1080(param_3,param_5);
  local_c = (double)((float10)(double)fVar3 / fVar4);
  fVar1 = (float)((float10)(double)fVar3 / fVar4);
  uVar2 = FUN_004bdd80(local_24,param_5,fVar1,fVar1);
  FUN_004bddd0(param_1,param_4,uVar2);
  return param_1;
}

