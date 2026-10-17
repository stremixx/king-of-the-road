
uint __fastcall FUN_00604e70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = __ftol();
    param_1[3] = uVar2 % uVar1;
    return uVar2 / uVar1;
  }
  param_1[3] = 0;
  return 0;
}

