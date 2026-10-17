
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004e5c4e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  float local_1c;
  undefined1 local_18 [12];
  double local_c;
  
  FUN_004bde20(local_18,param_5,param_4);
  fVar3 = (float10)FUN_005aabc0(local_18);
  local_1c = (float)fVar3;
  if ((float)_DAT_0064a648 <= local_1c) {
    FUN_005aad50(local_28,local_1c);
    uVar2 = FUN_004bde20(local_34,param_2,param_4);
    fVar3 = (float10)FUN_004e1080(param_3,uVar2);
    fVar4 = (float10)FUN_004e1080(param_3,local_18);
    local_c = (double)((float10)(double)fVar3 / fVar4);
    fVar1 = (float)((float10)(double)fVar3 / fVar4);
    uVar2 = FUN_004bdd80(local_40,local_18,fVar1,fVar1);
    FUN_004bddd0(param_1,param_4,uVar2);
  }
  else {
    FUN_004e5bf2(param_1,param_2,param_3,param_4);
  }
  return param_1;
}

