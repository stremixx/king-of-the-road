
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409520(void)

{
  int *piVar1;
  
  _DAT_0068c0a0 = 0;
  for (piVar1 = DAT_0068bbf8; piVar1 != DAT_0068bbfc; piVar1 = piVar1 + 1) {
    _DAT_0068c0a0 = _DAT_0068c0a0 + (*(int *)(*piVar1 + 0x20) - *(int *)(*piVar1 + 0x1c)) / 0x24;
  }
  if (_DAT_0068c0a0 < DAT_0068c0b0 + DAT_0068be58 + DAT_0068be48 + DAT_0068be38) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x80a,
                 s_Too_many_cars_for_sale_and_for_h_0066bb3c,&DAT_0068c120,&DAT_0068c120);
  }
  return;
}

