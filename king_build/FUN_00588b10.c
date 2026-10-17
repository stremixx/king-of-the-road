
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00588b10(int param_1,float param_2)

{
  undefined4 uVar1;
  
  if ((_DAT_0064b254 <= param_2) && (param_2 <= _DAT_0064b240)) {
    *(float *)(param_1 + 0xc) = param_2;
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}

