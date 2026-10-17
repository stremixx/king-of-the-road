
void FUN_00604770(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  
  if (DAT_007230f4 != (int *)0x0) {
    iVar1 = *DAT_007230f4;
    uVar2 = FUN_00603d80(param_1);
    (**(code **)(iVar1 + 0x3c))(DAT_007230f4,uVar2);
    DAT_00683354 = unaff_ESI;
    return;
  }
  DAT_00683354 = param_1;
  return;
}

