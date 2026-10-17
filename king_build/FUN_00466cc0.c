
undefined4 * FUN_00466cc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f661;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; iVar3 = 0, param_1 != param_2; param_1 = param_1 + 6) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      iVar2 = param_1[3];
      iVar1 = param_1[2];
      param_3[2] = 0;
      iVar2 = iVar2 - iVar1;
      param_3[3] = 0;
      param_3[4] = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_0044b6e0(iVar2);
      }
      param_3[2] = iVar3;
      param_3[3] = iVar3;
      param_3[4] = iVar3 + iVar2;
      iVar2 = param_1[3];
      iVar1 = param_1[2];
      FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
      param_3[3] = (iVar3 - iVar1) + iVar2;
    }
    param_3 = param_3 + 6;
  }
  ExceptionList = local_10;
  return param_3;
}

