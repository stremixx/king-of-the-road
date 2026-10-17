
undefined4 __thiscall
FUN_0048def0(int param_1,double *param_2,double *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_d8 [192];
  undefined4 local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0064099b;
  local_14 = ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 0x248);
  pdVar4 = &local_f8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  local_f0 = local_f0 - param_2[1];
  if (*(double *)(param_1 + 0x260) + *param_3 <
      SQRT((local_f8 - *param_2) * (local_f8 - *param_2) +
           (local_e8 - param_2[2]) * (local_e8 - param_2[2]) + local_f0 * local_f0)) {
    ExceptionList = local_14;
    return 0;
  }
  if ((double)CONCAT44(param_8,param_7) < (double)CONCAT44(param_6,param_5)) {
    ExceptionList = &local_14;
    uVar1 = FUN_0048def0(param_2,param_3,param_4,param_7,param_8,param_5,param_6);
    ExceptionList = local_14;
    return uVar1;
  }
  local_18 = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0048e520(local_d8,param_1,param_2);
  uVar1 = FUN_0048e7b0(local_d8,param_3,param_4,param_5,param_6,param_7,param_8,3);
  ExceptionList = local_14;
  return uVar1;
}

