
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00588b50(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = param_2 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar1;
  if (_DAT_0064b240 < fVar1) {
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  }
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}

