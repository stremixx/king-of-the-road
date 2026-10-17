
undefined4 __thiscall FUN_0048de00(int param_1,double *param_2,double *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d0 [192];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064097b;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 0x248);
  pdVar4 = &local_f0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  local_e8 = local_e8 - param_2[1];
  if (SQRT((local_f0 - *param_2) * (local_f0 - *param_2) +
           (local_e0 - param_2[2]) * (local_e0 - param_2[2]) + local_e8 * local_e8) <=
      *(double *)(param_1 + 0x260) + *param_3) {
    local_10 = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_0048e520(local_d0,param_1,param_2);
    uVar1 = FUN_0048e7b0(local_d0,param_3,param_4,0,0,0,0x3ff00000,3);
  }
  else {
    uVar1 = 0;
  }
  ExceptionList = local_c;
  return uVar1;
}

