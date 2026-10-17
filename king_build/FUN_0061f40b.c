
uint FUN_0061f40b(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0061d6ac(param_1);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_00624826(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  FUN_0061d6fe(param_1);
  return uVar2;
}

