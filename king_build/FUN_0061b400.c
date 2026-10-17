
undefined4 __thiscall FUN_0061b400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064997c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x9cf8) = 0x46ea6000;
  *(undefined4 *)(param_1 + 0x9cfc) = 0x46ea6000;
  piVar1 = (int *)FUN_00631d33(0xc);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_00631d33(0x102010);
    local_4._0_1_ = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_0061d173(iVar2,0x10,0x10201,&LAB_0061b5a0,FUN_004030a0);
    }
    local_4._0_1_ = 0;
    *piVar1 = iVar2;
    iVar2 = FUN_00631d33(0x102010);
    local_4._0_1_ = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_0061d173(iVar2,0x10,0x10201,&LAB_0061b5a0,FUN_004030a0);
    }
    local_4._0_1_ = 0;
    piVar1[1] = iVar2;
    iVar2 = FUN_00631d33(0x102010);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar2 == 0) {
      piVar1[2] = 0;
    }
    else {
      FUN_0061d173(iVar2,0x10,0x10201,&LAB_0061b5a0,FUN_004030a0);
      piVar1[2] = iVar2;
    }
  }
  local_4 = 0xffffffff;
  *(int **)(param_1 + 0x9d00) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00613210(*(undefined4 *)(param_1 + 0x9d04),*(undefined4 *)(param_1 + 0x9d08));
    if (iVar2 != 0) {
      ExceptionList = local_c;
      return 1;
    }
  }
  FUN_0060a190(0x88762714,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_terrain_TMesh_in_00684d04,0xaf,s_Mar_19_2002_006714f8);
  ExceptionList = local_c;
  return 0;
}

