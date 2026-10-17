
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0062684c(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 in_ST1;
  
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    fVar1 = (float10)FUN_00626646();
    return fVar1;
  }
  if (SUB104(in_ST1,0) != 0 || (int)((unkuint10)in_ST1 >> 0x20) != 0) {
    fVar1 = (float10)FUN_00626646(in_ST1 * (float10)_DAT_00688114);
    return fVar1;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

