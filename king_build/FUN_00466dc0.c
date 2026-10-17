
int * FUN_00466dc0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f699;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  piVar3 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (piVar3 != (int *)0x0) {
      if ((param_1[2] & 0x10000U) == 0) {
        piVar3[1] = 0;
        if (*param_1 == 0) {
          *piVar3 = 0;
          piVar3[2] = 0;
        }
        else {
          *piVar3 = *param_1;
          piVar3[2] = param_1[2];
          *(int *)(*piVar3 + 4) = *(int *)(*piVar3 + 4) + 1;
        }
      }
      else {
        piVar3[2] = param_1[2];
        *piVar3 = *param_1;
        piVar3[1] = param_1[1];
      }
      iVar2 = (param_1[4] - param_1[3]) / 0x18;
      local_8 = 2;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0044b6e0(iVar2 * 0x18);
      }
      piVar3[3] = iVar1;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1 + iVar2 * 0x18;
      local_8 = 3;
      iVar2 = FUN_004661a0(param_1[3],param_1[4],iVar1,param_3);
      piVar3[4] = iVar2;
    }
    piVar3 = piVar3 + 6;
  }
  *unaff_FS_OFFSET = local_10;
  return piVar3;
}

