
int * FUN_004a6a00(int *param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_44 [56];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00642f37;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_004a71e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(int *)(param_2 + 0x70) == *(int *)(param_2 + 0x74)) {
    FUN_004aa590(*(int *)(param_2 + 0x70),uVar4);
  }
  else {
    FUN_004ab690();
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 0x2c;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004a73b0();
  iVar1 = *(int *)(param_2 + 0x70);
  piVar5 = (int *)(iVar1 + -0x28);
  iVar2 = *(int *)(iVar1 + -0x28);
  if ((((iVar2 != 0) && ((*(uint *)(iVar1 + -0x20) & 0x10000) == 0)) &&
      (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar5 + 4) == 0)) &&
     ((cVar3 = FUN_00408fd0(piVar5,&param_3), cVar3 == '\0' && ((int *)*piVar5 != (int *)0x0)))) {
    (**(code **)(*(int *)*piVar5 + 0xc))(1);
  }
  if ((param_5 & 0x10000) == 0) {
    *(undefined4 *)(iVar1 + -0x24) = 0;
    if (param_3 == (int *)0x0) {
      *piVar5 = 0;
      *(undefined4 *)(iVar1 + -0x20) = 0;
    }
    else {
      *piVar5 = (int)param_3;
      *(uint *)(iVar1 + -0x20) = param_5;
      param_3[1] = param_3[1] + 1;
    }
  }
  else {
    *(uint *)(iVar1 + -0x20) = param_5;
    *piVar5 = (int)param_3;
    *(undefined4 *)(iVar1 + -0x24) = param_4;
  }
  iVar1 = *(int *)(param_2 + 0x6c);
  FUN_0040c060(iVar1 + -0x38 + ((*(int *)(param_2 + 0x70) - iVar1) / 0x2c) * 0x2c);
  FUN_004a6550(param_2);
  if ((*(int *)(param_2 + 0x6c) == *(int *)(param_2 + 0x70)) ||
     (piVar5 = *(int **)(*(int *)(param_2 + 0x70) + -0x1c),
     piVar5 == *(int **)(*(int *)(param_2 + 0x70) + -0x18))) {
    piVar5 = (int *)FUN_004aa850(auStack_44,0);
    if ((piVar5[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar1;
        param_1[2] = piVar5[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar5[2];
      *param_1 = *piVar5;
      param_1[1] = piVar5[1];
    }
    FUN_00492340();
    if ((param_5 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (param_3 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    param_3[1] = param_3[1] + -1;
    iVar1 = param_3[1];
  }
  else {
    if ((piVar5[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar1;
        param_1[2] = piVar5[2];
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
    }
    else {
      param_1[2] = piVar5[2];
      *param_1 = *piVar5;
      param_1[1] = piVar5[1];
    }
    if ((param_5 & 0x10000) != 0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (param_3 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    param_3[1] = param_3[1] + -1;
    iVar1 = param_3[1];
  }
  if ((iVar1 == 0) && (param_3 != (int *)0x0)) {
    local_4 = local_4 & 0xffffff00;
    (**(code **)(*param_3 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

