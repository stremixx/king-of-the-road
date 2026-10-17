
int FUN_0045bf10(int param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  bool bVar2;
  void **ppvVar3;
  char cVar4;
  int *local_18;
  int local_14;
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063f050;
  local_4 = 0;
  ppvVar3 = &pvStack_c;
  pvStack_c = ExceptionList;
  for (; ExceptionList = ppvVar3, param_1 != param_2; param_1 = param_1 + 0xc) {
    if (*(char *)(param_1 + 8) == '\x02') {
      FUN_00407e60(&local_18,param_1);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (((local_18 == param_3) && (local_10 == param_5)) && (local_14 == param_4)) {
LAB_0045bfcb:
        bVar2 = true;
      }
      else {
        if (param_3 == (int *)0x0) {
          FUN_004a5470(0,1);
        }
        if ((param_5 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        cVar4 = FUN_004b6670(&local_18,param_3[3]);
        if (cVar4 != '\0') goto LAB_0045bfcb;
        bVar2 = false;
      }
      local_4 = local_4 & 0xffffff00;
      if ((((local_10 & 0x10000) == 0) && (local_18 != (int *)0x0)) &&
         ((local_18[1] = local_18[1] + -1, local_18[1] == 0 && (local_18 != (int *)0x0)))) {
        (**(code **)(*local_18 + 0xc))(1);
      }
      if (bVar2) break;
    }
    ppvVar3 = ExceptionList;
  }
  local_4 = 0xffffffff;
  if ((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
     (iVar1 = param_3[1], param_3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_3 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

