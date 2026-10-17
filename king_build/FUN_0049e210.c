
int * FUN_0049e210(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *local_18 [2];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006423d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_004a2930(local_18,0,param_2);
  if ((piVar1[2] & 0x10000U) == 0) {
    param_1[1] = 0;
    if (*piVar1 == 0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = *piVar1;
      param_1[2] = piVar1[2];
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
    }
  }
  else {
    param_1[2] = piVar1[2];
    *param_1 = *piVar1;
    param_1[1] = piVar1[1];
  }
  if (((local_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) {
    local_18[0][1] = local_18[0][1] + -1;
    if ((local_18[0][1] == 0) && (local_18[0] != (int *)0x0)) {
      (**(code **)(*local_18[0] + 0xc))(1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

