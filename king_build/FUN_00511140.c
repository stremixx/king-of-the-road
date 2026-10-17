
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00511140(double param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 uStack_1c;
  double dStack_18;
  double dStack_10;
  double dStack_8;
  
  uStack_1c = 0x511153;
  fVar2 = (float10)(**(code **)(**(int **)(DAT_006d0fd8 + 0x268) + 0x54))();
  dStack_10 = (double)fVar2;
  uStack_1c = 0x511173;
  fVar2 = (float10)FUN_004eaf00();
  dStack_8 = (double)fVar2;
  uStack_1c = 0x511194;
  fVar2 = (float10)FUN_004eaf10();
  dStack_18 = (double)((float10)_DAT_0064b240 - fVar2);
  param_1 = dStack_10 * _DAT_0064a838 + param_1;
  FUN_00568670(&uStack_1c);
  uVar1 = FUN_0043f700();
  if ((uVar1 & 0x2000000) == 0) {
    fVar2 = (float10)param_1;
  }
  else {
    FUN_00568670(&uStack_1c);
    fVar2 = (float10)FUN_004773b0();
    fVar2 = fVar2 + (float10)param_1;
  }
  if (_DAT_0064a798 < dStack_18) {
    fVar3 = ((float10)dStack_18 - (float10)_DAT_0064a798) * (float10)dStack_8;
    fVar2 = fVar3 + fVar3 + fVar2;
  }
  return fVar2;
}

