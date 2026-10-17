
undefined4 __thiscall FUN_0060bbe0(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2 << 4);
  *(void **)(param_1 + 0xc) = pvVar1;
  pvVar1 = _malloc(param_2 * 0x28 + 1);
  *(void **)(param_1 + 0x10) = pvVar1;
  pvVar1 = _malloc(param_3 * 4);
  *(void **)(param_1 + 8) = pvVar1;
  *(int *)(param_1 + 0x3c) = param_3;
  if ((*(int *)(param_1 + 0xc) != 0) && (pvVar1 != (void *)0x0)) {
    return 1;
  }
  FUN_0060bc70();
  FUN_0060a190(0x88762714,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_terrain_grd_cpp_006849f4,0xf0,s_Mar_19_2002_006714f8);
  return 0;
}

