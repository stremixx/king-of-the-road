
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427fc0(undefined4 param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 local_80 [128];
  
  fVar2 = (float10)FUN_00401000();
  _DAT_0068c118 = (double)fVar2;
  FUN_0061c369(local_80,s_YOU_ARE__d_0066caa8,param_1);
  uVar1 = FUN_0040e1d0(local_80);
  FUN_0061c369(local_80,&DAT_0066c9c4,uVar1);
  FUN_00483da0(local_80);
  return;
}

