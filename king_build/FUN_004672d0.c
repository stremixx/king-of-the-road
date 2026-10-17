
int * FUN_004672d0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f721;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  for (; iVar3 = 0, param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[1] - *param_1;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_0044b6e0(iVar2);
      }
      *param_3 = iVar3;
      param_3[1] = iVar3;
      param_3[2] = iVar2 + iVar3;
      iVar2 = param_1[1];
      iVar1 = *param_1;
      FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
      param_3[1] = (iVar3 - iVar1) + iVar2;
    }
    param_3 = param_3 + 3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}

