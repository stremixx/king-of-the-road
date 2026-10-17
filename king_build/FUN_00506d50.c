
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00506d50(int param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00506bb0(param_2,0x3dcccccd);
  fVar2 = (float10)param_2 * (float10)*(float *)(&DAT_00696874 + param_1 * 0x970) *
          (float10)_DAT_0064c9f8;
  if ((float10)_DAT_0064a660 < fVar2) {
    fVar2 = (float10)_DAT_0064b240;
  }
  return (fVar2 + (float10)_DAT_0064b240) * fVar1 * (float10)param_3 * (float10)_DAT_0064b440 +
         (float10)param_2 * (float10)*(float *)(&DAT_00696878 + param_1 * 0x970) * (float10)param_2;
}

