
int FUN_00604140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00603e50(0xffffffff,DAT_00723104);
  if (iVar1 == 0) {
    iVar1 = FUN_00603690(3,param_1);
    if (iVar1 != 0) {
      return 3;
    }
    iVar1 = FUN_006041b0();
    if (iVar1 != 0) {
      FUN_006036b0();
      return iVar1;
    }
    fVar2 = (float10)FUN_006047b0();
    DAT_007230ec = (float)fVar2;
    FUN_00604770(DAT_00683354);
    DAT_007230d8 = param_2;
    iVar1 = 0;
  }
  return iVar1;
}

