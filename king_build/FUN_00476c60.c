
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00476c60(int ***param_1,int ***param_2)

{
  int ***pppiVar1;
  char cVar2;
  int **ppiVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  int ***local_3c;
  undefined1 local_32 [2];
  undefined1 *local_30;
  char ***local_2c [4];
  char ***local_1c;
  char **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fd40;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return 0xfffffffb;
  }
  if (param_2[0x2c] != DAT_0068a8f0) {
    return 0xfffffffc;
  }
  if (param_1[0x2c] != DAT_0068a8f0) {
    return 0xfffffff4;
  }
  local_3c = param_2;
  ExceptionList = &local_c;
  ppiVar3 = (int **)FUN_0047bf10(param_1[0x28],param_1[0x29],&param_2);
  if (ppiVar3 != param_1[0x29]) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  local_3c = param_2;
  ppiVar3 = (int **)FUN_0047bf10(param_2[0x28],param_2[0x29],&param_1);
  if (ppiVar3 != param_2[0x29]) {
    ExceptionList = local_c;
    return 0xfffffffe;
  }
  if (param_1[0x24] == param_1[0x25]) {
    if (param_1[0x17] == (int **)0x1) {
      local_3c = (int ***)s_NO_LICENCES_0066eae0;
      uVar4 = FUN_0040e1d0();
      FUN_0056a570(uVar4);
    }
    ExceptionList = local_c;
    return 0xfffffffd;
  }
  local_30 = (undefined1 *)&local_3c;
  local_3c = param_2;
  fVar5 = (float10)FUN_00477470();
  *(double *)(param_2 + 0xd8) = (double)fVar5;
  local_3c = param_2;
  local_30 = (undefined1 *)&local_3c;
  fVar5 = (float10)FUN_004736c0();
  fVar6 = (float10)*(double *)(param_2 + 0xd8) * (float10)_DAT_0064a770 + fVar5;
  if (fVar6 < (float10)*(double *)(param_1 + 0x22)) {
    *(double *)(param_1 + 0x22) = (double)((float10)*(double *)(param_1 + 0x22) - fVar6);
    local_3c = (int ***)local_32;
    *(double *)(param_2 + 0x22) =
         (double)((float10)*(double *)(param_2 + 0xd8) * (float10)_DAT_0064a770 +
                  (float10)*(double *)(param_2 + 0x22) + fVar5);
    *(double *)(param_2 + 0x30) =
         *(double *)(param_2 + 0xd8) * _DAT_0064a770 + *(double *)(param_2 + 0x30);
    local_2c[0] = (char ***)param_2;
    FUN_00478a20();
    pppiVar1 = param_1;
    local_4 = 0;
    ppiVar3 = param_1[0x29];
    if (ppiVar3 == param_1[0x2a]) {
      local_3c = (int ***)local_2c;
      FUN_004795d0(ppiVar3);
    }
    else {
      local_3c = (int ***)local_2c;
      FUN_0047c450(ppiVar3);
      pppiVar1[0x29] = pppiVar1[0x29] + 4;
    }
    local_4 = 0xffffffff;
    local_3c = (int ***)0x476eaf;
    FUN_0044a450();
    local_30 = (undefined1 *)&local_3c;
    local_3c = param_1;
    FUN_00477480();
    local_3c = (int ***)(local_32 + 1);
    local_1c = (char ***)param_1;
    FUN_00478a20();
    local_4 = 1;
    param_2[0x2c] = (int **)local_1c;
    local_3c = (int ***)local_18;
    FUN_0044c100();
    local_4 = 0xffffffff;
    local_3c = (int ***)0x476f10;
    FUN_0044a450();
    if (param_2[0x19] == (int **)0x101) {
      local_30 = (undefined1 *)&local_3c;
      local_3c = param_2;
      FUN_00419830();
    }
    param_2[0x88] = (int **)0x0;
    local_30 = (undefined1 *)&local_3c;
    param_2[0x89] = (int **)0x0;
    local_3c = param_1;
    FUN_004772b0();
    local_3c = param_2;
    local_30 = (undefined1 *)&local_3c;
    FUN_004772b0();
    param_1[0x2b] = param_1[0x28];
    if (((int)param_1[0x29] - (int)param_1[0x28] & 0xfffffff0U) == 0x10) {
      local_3c = param_1;
      local_30 = (undefined1 *)&local_3c;
      FUN_00476ad0();
    }
    ExceptionList = local_c;
    return 0;
  }
  local_3c = param_1;
  local_30 = (undefined1 *)&local_3c;
  cVar2 = FUN_00417560();
  if ((cVar2 != '\0') && (param_1[0x17] == (int **)0x1)) {
    local_3c = (int ***)s_NO_MONEY_TO_HIRE_0066eacc;
    uVar4 = FUN_0040e1d0();
    FUN_0056a570(uVar4);
  }
  ExceptionList = local_c;
  return 0xfffffffa;
}

