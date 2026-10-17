
undefined4 * __fastcall FUN_004886c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_48;
  char *pcStack_44;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006406f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcStack_44 = (char *)0x2c;
  local_4 = 1;
  uStack_3 = 0;
  piVar1 = param_1 + 6;
  uStack_48 = 0x488706;
  iVar2 = FUN_0044b6e0();
  *piVar1 = iVar2;
  *(int *)iVar2 = iVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  pcStack_44 = s____DefaultRoom_0066b934;
  local_4 = 2;
  uStack_48 = 0x488725;
  pcStack_44 = (char *)FUN_00488490();
  local_4 = 3;
  FUN_004896a0(&uStack_48);
  FUN_00489830(local_34);
  _local_4 = CONCAT31(uStack_3,2);
  pcStack_44 = (char *)0x48874e;
  FUN_004884f0();
  pcStack_44 = s_DEFAULT_ROUTE_0066f35c;
  uStack_48 = 0x48875a;
  FUN_004888b0();
  param_1[7] = *piVar1;
  param_1[7] = *(undefined4 *)(*piVar1 + 4);
  ExceptionList = local_c;
  return param_1;
}

