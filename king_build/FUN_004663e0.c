
int * FUN_004663e0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f611;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; iVar3 = 0, param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (int *)0x0) {
      iVar2 = param_3[1];
      iVar1 = *param_3;
      *param_1 = 0;
      iVar2 = iVar2 - iVar1 >> 2;
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_0044b6e0(iVar2 << 2);
      }
      *param_1 = iVar3;
      param_1[1] = iVar3;
      param_1[2] = iVar3 + iVar2 * 4;
      iVar2 = (param_3[1] - *param_3 >> 2) * 4;
      FUN_0061c980(iVar3,*param_3,iVar2);
      param_1[1] = iVar2 + iVar3;
    }
    param_1 = param_1 + 3;
  }
  ExceptionList = local_10;
  return param_1;
}

