
int * __thiscall FUN_0060b460(int *param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    if ((int *)*piVar1 == param_1) {
      *piVar1 = 0;
    }
    else if ((int *)piVar1[1] == param_1) {
      piVar1[1] = 0;
    }
    else {
      FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_btr_h_006839bc,0x23,s_Mar_19_2002_006714f8);
    }
  }
  if (*param_1 != 0) {
    FUN_0060b460(1);
  }
  if (param_1[1] != 0) {
    FUN_0060b460(1);
  }
  if ((param_2 & 1) != 0) {
    FUN_00631d5c(param_1);
  }
  return param_1;
}

