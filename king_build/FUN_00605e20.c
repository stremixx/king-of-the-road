
void FUN_00605e20(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_2;
  iVar3 = param_1;
  if (param_1 == *(int *)(param_2 + 0x2c)) {
    uVar6 = FUN_00606110(param_1);
    *(undefined4 *)(iVar7 + 0x2c) = uVar6;
  }
  psVar1 = (short *)(iVar7 + 0x34);
  *psVar1 = *psVar1 + -1;
  *(undefined4 *)(*(int *)(**(int **)(iVar3 + 8) + 0xc) + 0x38) = 0;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 8) + 4) + 0xc) + 0x38) = 0;
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    *(undefined4 *)(*(int *)(**(int **)(iVar3 + 0xc) + 0xc) + 0x38) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 4) + 0xc) + 0x38) = 0;
  }
  FUN_00612db0(iVar3);
  piVar2 = *(int **)(iVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    param_1 = 0;
    FUN_00606240(*(undefined4 *)(**(int **)(iVar3 + 8) + 0xc),
                 *(undefined4 *)((*(int **)(iVar3 + 8))[1] + 0xc),&param_2);
  }
  else {
    FUN_00606410(*(undefined4 *)(**(int **)(iVar3 + 8) + 0xc),
                 *(undefined4 *)((*(int **)(iVar3 + 8))[1] + 0xc),*(undefined4 *)(*piVar2 + 0xc),
                 *(undefined4 *)(piVar2[1] + 0xc),&param_2,&param_1);
  }
  iVar7 = **(int **)(iVar3 + 8);
  if (iVar7 != 0) {
    FUN_00606090();
    FUN_00631d5c(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar3 + 8) + 4);
  if (iVar7 != 0) {
    FUN_00606090();
    FUN_00631d5c(iVar7);
  }
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  **(undefined4 **)(iVar3 + 8) = 0;
  *(int *)(*(int *)(iVar3 + 8) + 0xc) = param_2;
  *(int *)(*(int *)(*(int *)(iVar3 + 8) + 0xc) + 0x20) = *(int *)(iVar3 + 8);
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    iVar7 = **(int **)(iVar3 + 0xc);
    if (iVar7 != 0) {
      FUN_00606090();
      FUN_00631d5c(iVar7);
    }
    iVar7 = *(int *)(*(int *)(iVar3 + 0xc) + 4);
    if (iVar7 != 0) {
      FUN_00606090();
      FUN_00631d5c(iVar7);
    }
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + 4) = 0;
    **(undefined4 **)(iVar3 + 0xc) = 0;
    *(int *)(*(int *)(iVar3 + 0xc) + 0xc) = param_1;
    *(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0xc) + 0x20) = *(int *)(iVar3 + 0xc);
  }
  if (iVar3 != 0) {
    FUN_00605e10();
    FUN_00631d5c(iVar3);
  }
  if ((*(int *)(param_2 + 0x38) != 0) ||
     ((iVar3 = *(int *)(param_2 + 0x30), iVar3 == 0 && (*(int *)(param_2 + 0x34) == 0))))
  goto LAB_0060606f;
  piVar2 = *(int **)(*(int *)(param_2 + 0x20) + 8);
  if ((*piVar2 == 0) || (piVar2[1] == 0)) goto LAB_0060606f;
  iVar7 = *(int *)(*piVar2 + 0xc);
  if (*(int *)(piVar2[1] + 0xc) == param_2) {
    if (iVar7 == param_2) goto LAB_00605ffa;
    if (iVar3 != 0) {
      if ((*(int *)(iVar3 + 0x30) == 0) ||
         (iVar7 = *(int *)(*(int *)(iVar3 + 0x20) + 8),
         iVar7 != *(int *)(*(int *)(*(int *)(iVar3 + 0x30) + 0x20) + 8))) goto LAB_0060606f;
      goto LAB_00606052;
    }
    if (*(int *)(*(int *)(param_2 + 0x34) + 0x34) != 0) goto LAB_0060606f;
    iVar7 = 0;
LAB_00606056:
    piVar5 = (int *)piVar2[2];
    if ((piVar5 == (int *)0x0) || ((*piVar5 != 0 && (piVar5[1] != 0)))) goto LAB_0060606f;
  }
  else {
    if (iVar7 != param_2) {
      FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_greed_inl_00683954,0x114,s_Mar_19_2002_006714f8);
      goto LAB_0060606f;
    }
LAB_00605ffa:
    iVar4 = *(int *)(param_2 + 0x34);
    if (iVar4 == 0) {
      if (*(int *)(iVar3 + 0x30) != 0) goto LAB_0060606f;
      iVar7 = 0;
      goto LAB_00606056;
    }
    if ((*(int *)(iVar4 + 0x34) == 0) ||
       (iVar7 = *(int *)(*(int *)(iVar4 + 0x20) + 8),
       iVar7 != *(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0x20) + 8))) goto LAB_0060606f;
LAB_00606052:
    if (iVar7 == 0) goto LAB_00606056;
  }
  FUN_00605b80(piVar2,iVar7);
LAB_0060606f:
  if (param_1 != 0) {
    FUN_00606140(param_1);
  }
  return;
}

