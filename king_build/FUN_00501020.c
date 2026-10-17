
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00501020(int param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  if ((((*(short *)(param_1 + 0x274a) != 0) && (-1 < param_2)) && (param_2 < 0x1b)) &&
     ((_DAT_0064b254 <= param_3 && (param_3 <= _DAT_0064b240)))) {
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + (param_2 * 5 + 0xf28) * 4) = uVar1;
    *(float *)(param_1 + param_2 * 0x14 + 0x3cac) = param_3;
  }
  return;
}

