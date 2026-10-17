
int * __thiscall FUN_00549830(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006469c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[2] = (int)(float)*(double *)(DAT_006ee15c + 0xb98);
  param_1[3] = 0;
  param_1[1] = param_3;
  puVar1 = (undefined4 *)FUN_00631d33(0x90);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(s__FlameLamp_006790a0,0x15,1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005acbd0();
    *puVar1 = &PTR_FUN_0064c434;
    puVar1[0x22] = 1;
    puVar1[0x23] = 0;
  }
  *param_1 = (int)puVar1;
  puVar1[0x22] = 1;
  local_4 = 0xffffffff;
  *(undefined4 *)(*param_1 + 0x8c) = 1;
  *(undefined4 *)(*param_1 + 0x38) = 2;
  *(undefined4 *)(*param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(*param_1 + 0x70) = 0x3f70f0e9;
  *(undefined4 *)(*param_1 + 0x74) = 0x3f3ebebe;
  *(undefined4 *)(*param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(*param_1 + 0x58) = 0;
  *(undefined4 *)(*param_1 + 0x5c) = 0x3da3d70a;
  if (*(int **)(DAT_006ee15c + 0x210) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_006ee15c + 0x210) + 0x14))(0,*param_1);
  }
  FUN_00549a00(param_2);
  FUN_00549970(param_3);
  ExceptionList = pvStack_c;
  return param_1;
}

