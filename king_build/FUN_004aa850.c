
int * FUN_004aa850(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643418;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  piVar1 = (int *)FUN_00631d33(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 0;
    piVar1[2] = 0;
    *piVar1 = (int)&PTR_FUN_0064b024;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)*piVar1)();
    if (iVar2 != 0xff) {
      uVar3 = (**(code **)(*piVar1 + 4))(s_Unspecified_00670168);
      FUN_004a5670(2,1,uVar3);
      *unaff_FS_OFFSET = local_c;
      return param_1;
    }
    *param_1 = (int)piVar1;
    uVar4 = (**(code **)*piVar1)();
    param_1[2] = uVar4 & 0xff;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  *param_1 = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

