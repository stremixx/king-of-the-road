
int * __thiscall FUN_004a4c80(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_8;
  undefined4 local_4;
  
  piVar2 = param_3;
  bVar7 = true;
  iVar4 = *param_1;
  iVar5 = *(int *)(*param_1 + 4);
  while (iVar5 != 0) {
    iVar4 = FUN_004b8250();
    param_3 = *(int **)(iVar4 + 0xc);
    iVar4 = FUN_004b8250();
    iVar4 = FUN_0061d520(*(undefined4 *)(iVar4 + 0xc),param_3);
    bVar7 = iVar4 < 0;
    iVar4 = iVar5;
    if (bVar7) {
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
  }
  local_8 = iVar4;
  if (!bVar7) {
LAB_004a4d94:
    param_3 = (int *)(local_8 + 0x10);
    if (*piVar2 == 0) {
      FUN_004a5470(0,1);
    }
    if ((piVar2[2] & 0x10000U) != 0) {
      FUN_004a5470(4,1);
    }
    local_4 = *(undefined4 *)(*piVar2 + 0xc);
    iVar5 = FUN_004b8250();
    iVar5 = FUN_0061d520(*(undefined4 *)(iVar5 + 0xc),local_4);
    if (iVar5 < 0) {
      if ((iVar4 == *param_1) || (cVar3 = FUN_004a50b0(piVar2,iVar4 + 0x10), cVar3 != '\0')) {
        iVar6 = FUN_004a5360(piVar2);
        *(int *)(iVar4 + 8) = iVar6;
        iVar5 = *param_1;
        if (iVar4 == iVar5) {
          *(int *)(iVar5 + 4) = iVar6;
          *(int *)(*param_1 + 0xc) = iVar6;
        }
        else if (iVar4 == *(int *)(iVar5 + 8)) {
          *(int *)(iVar5 + 8) = iVar6;
        }
      }
      else {
        iVar6 = FUN_004a5360(piVar2);
        *(int *)(iVar4 + 0xc) = iVar6;
        if (iVar4 == *(int *)(*param_1 + 0xc)) {
          *(int *)(*param_1 + 0xc) = iVar6;
        }
      }
      *(int *)(iVar6 + 4) = iVar4;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      FUN_004a4f00(iVar6,*param_1 + 4);
      param_1[1] = param_1[1] + 1;
      *param_2 = iVar6;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    param_3 = (int *)((uint)param_3 & 0xffffff00);
    FUN_004a5340(&local_8,&param_3);
    return param_2;
  }
  if (iVar4 != *(int *)(*param_1 + 8)) {
    FUN_004a4eb0();
    goto LAB_004a4d94;
  }
  if (iVar4 != *param_1) {
    iVar5 = FUN_004b8250();
    uVar1 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = FUN_004b8250();
    iVar5 = FUN_0061d520(*(undefined4 *)(iVar5 + 0xc),uVar1);
    if (-1 < iVar5) {
      iVar5 = FUN_004a5360(piVar2);
      *(int *)(iVar4 + 0xc) = iVar5;
      if (iVar4 == *(int *)(*param_1 + 0xc)) {
        *(int *)(*param_1 + 0xc) = iVar5;
      }
      goto LAB_004a4d56;
    }
  }
  iVar5 = FUN_004a5360(piVar2);
  *(int *)(iVar4 + 8) = iVar5;
  iVar6 = *param_1;
  if (iVar4 == iVar6) {
    *(int *)(iVar6 + 4) = iVar5;
    *(int *)(*param_1 + 0xc) = iVar5;
  }
  else if (iVar4 == *(int *)(iVar6 + 8)) {
    *(int *)(iVar6 + 8) = iVar5;
  }
LAB_004a4d56:
  *(int *)(iVar5 + 4) = iVar4;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  FUN_004a4f00(iVar5,*param_1 + 4);
  param_1[1] = param_1[1] + 1;
  *param_2 = iVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

