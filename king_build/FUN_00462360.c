
int * __thiscall FUN_00462360(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0063f4d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = param_3 - param_2 >> 2;
  param_1[1] = 0;
  param_1[1] = iVar1;
  local_8 = 0;
  *param_1 = iVar1;
  param_1[2] = 0;
  if (0x1fffffff < iVar1) {
    param_1[1] = 0x1fffffff;
  }
  while (0 < param_1[1]) {
    pvVar2 = _malloc(param_1[1] * 4);
    param_1[2] = (int)pvVar2;
    if (pvVar2 != (void *)0x0) break;
    param_1[1] = param_1[1] / 2;
  }
  if (0 < param_1[1]) {
    FUN_0046afa0(param_1[2],param_1[1],param_2,param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

