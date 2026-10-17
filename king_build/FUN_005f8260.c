
void __fastcall FUN_005f8260(undefined4 *param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_8c [120];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006491ce;
  local_14 = ExceptionList;
  switch(*param_1) {
  case 1:
  case 2:
    ExceptionList = &local_14;
    puVar5 = (undefined4 *)FUN_00631d33();
    if (puVar5 == (undefined4 *)0x0) {
      param_1[2] = 0;
      FUN_005e4d00();
      ExceptionList = local_14;
      return;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    param_1[2] = puVar5;
    FUN_005e4d00();
    ExceptionList = local_14;
    return;
  case 3:
  case 4:
    ExceptionList = &local_14;
    puVar5 = (undefined4 *)FUN_00631d33();
    if (puVar5 == (undefined4 *)0x0) {
      param_1[2] = 0;
      FUN_005e4d50();
      ExceptionList = local_14;
      return;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    param_1[2] = puVar5;
    FUN_005e4d50();
    ExceptionList = local_14;
    return;
  case 5:
    ExceptionList = &local_14;
    puVar5 = (undefined4 *)FUN_00631d33();
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    param_1[2] = puVar5;
    FUN_005e4d00();
    break;
  case 6:
    ExceptionList = &local_14;
    iVar6 = FUN_005aa810();
    param_1[1] = iVar6;
    piVar2 = (int *)FUN_00631d33(iVar6 * 0x30 + 4);
    piVar7 = (int *)0x0;
    local_c = 0;
    if (piVar2 != (int *)0x0) {
      piVar7 = piVar2 + 1;
      *piVar2 = iVar6;
      FUN_0061d173();
    }
    iVar6 = 0;
    local_c = 0xffffffff;
    param_1[2] = piVar7;
    if (0 < (int)param_1[1]) {
      do {
        FUN_005e5fd0();
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[1]);
      ExceptionList = local_14;
      return;
    }
    break;
  case 7:
    iVar6 = param_1[1];
    ExceptionList = &local_14;
    iVar3 = FUN_00631d33();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else if (-1 < iVar6 + -1) {
      puVar5 = (undefined4 *)(iVar3 + 8);
      do {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    param_1[2] = iVar3;
    iVar6 = 0;
    if (0 < (int)param_1[1]) {
      iVar3 = 0;
      do {
        FUN_005aae80();
        if ((0 < iVar3) &&
           (iVar4 = FUN_005aad90(iVar3 + param_1[2],iVar3 + param_1[2] + -0xc), iVar4 != 0)) {
          pfVar1 = (float *)(iVar3 + param_1[2]);
          FUN_0061c369(local_8c,s_Point_is_equivalent_in_sequence___00682b20,(double)*pfVar1,
                       (double)pfVar1[1],(double)*(float *)(iVar3 + 8 + param_1[2]));
          FUN_005d2520(local_8c,0);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar6 < (int)param_1[1]);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

