
undefined4 * FUN_004af560(undefined4 *param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  void **ppvVar1;
  int *piVar2;
  int iVar3;
  int *local_18 [2];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006438d7;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (0 < param_2) {
    do {
      if ((char)param_5 != '\x02') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        if ((param_5 & 0x10000) != 0) {
          ExceptionList = pvStack_c;
          return param_1;
        }
        if (param_3 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return param_1;
        }
        param_3[1] = param_3[1] + -1;
        if (param_3[1] != 0) {
          ExceptionList = pvStack_c;
          return param_1;
        }
        if (param_3 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return param_1;
        }
        goto LAB_004af768;
      }
      piVar2 = (int *)FUN_00409000(local_18,&param_3);
      local_4._0_1_ = 2;
      if (((((param_3 != (int *)0x0) && ((param_5 & 0x10000) == 0)) &&
           (param_3[1] = param_3[1] + -1, param_3[1] == 0)) &&
          (((param_3 != (int *)*piVar2 || (param_5 != piVar2[2])) || (param_4 != piVar2[1])))) &&
         (param_3 != (int *)0x0)) {
        (**(code **)(*param_3 + 0xc))(1);
      }
      param_5 = piVar2[2];
      if ((param_5 & 0x10000) == 0) {
        param_4 = 0;
        param_3 = (int *)*piVar2;
        if (param_3 == (int *)0x0) {
          param_3 = (int *)0x0;
          param_5 = 0;
        }
        else {
          param_5 = piVar2[2];
          param_3[1] = param_3[1] + 1;
        }
      }
      else {
        param_3 = (int *)*piVar2;
        param_4 = piVar2[1];
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if ((((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
         ((local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0 && (local_18[0] != (int *)0x0))
         )) {
        (**(code **)(*local_18[0] + 0xc))(1);
      }
      iVar3 = iVar3 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar3 < param_2);
  }
  ExceptionList = ppvVar1;
  if ((char)param_5 == '\x02') {
    FUN_00407e60(param_1,&param_3);
    if (((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
        (param_3[1] = param_3[1] + -1, param_3[1] == 0)) && (param_3 != (int *)0x0)) {
LAB_004af768:
      local_4 = local_4 & 0xffffff00;
      (**(code **)(*param_3 + 0xc))(1);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_4 = local_4 & 0xffffff00;
    if ((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
       ((param_3[1] = param_3[1] + -1, param_3[1] == 0 && (param_3 != (int *)0x0)))) {
      (**(code **)(*param_3 + 0xc))(1);
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

