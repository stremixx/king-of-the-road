
float10 FUN_00506d10(int param_1,float param_2,int param_3)

{
  return ((float10)*(float *)(&DAT_00696898 + (param_3 + param_1 * 0x25c) * 4) *
          (float10)*(float *)(&DAT_00696894 + param_1 * 0x970) * (float10)param_2) /
         (float10)*(float *)(&DAT_0069682c + param_1 * 0x970);
}

