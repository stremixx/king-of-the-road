
/* WARNING: Removing unreachable block (ram,0x004a0d8a) */
/* WARNING: Removing unreachable block (ram,0x004a0d9a) */
/* WARNING: Removing unreachable block (ram,0x004a0cdf) */
/* WARNING: Removing unreachable block (ram,0x004a0c77) */
/* WARNING: Removing unreachable block (ram,0x004a0c8b) */
/* WARNING: Removing unreachable block (ram,0x004a0c93) */
/* WARNING: Removing unreachable block (ram,0x004a0cc2) */
/* WARNING: Removing unreachable block (ram,0x004a0d9e) */

int * FUN_004a0bf0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *local_18 [2];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064282f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar1 = FUN_00491cd0(param_2);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_004a0970(local_18,param_2);
    if ((piVar2[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar1;
        param_1[2] = piVar2[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar2[2];
      *param_1 = *piVar2;
      param_1[1] = piVar2[1];
    }
    if (((((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
        (local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0)) && (local_18[0] != (int *)0x0))
    {
      (**(code **)(*local_18[0] + 0xc))();
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

