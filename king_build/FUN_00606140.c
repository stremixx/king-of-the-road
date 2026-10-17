
void FUN_00606140(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 8);
  if (*piVar2 == 0) {
    return;
  }
  if (piVar2[1] == 0) {
    return;
  }
  iVar5 = *(int *)(*piVar2 + 0xc);
  if (*(int *)(piVar2[1] + 0xc) == param_1) {
    if (iVar5 == param_1) goto LAB_006061ba;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x30) == 0) {
        return;
      }
      iVar5 = *(int *)(*(int *)(iVar1 + 0x20) + 8);
      if (iVar5 != *(int *)(*(int *)(*(int *)(iVar1 + 0x30) + 0x20) + 8)) {
        return;
      }
      goto LAB_00606216;
    }
    if (*(int *)(*(int *)(param_1 + 0x34) + 0x34) != 0) {
      return;
    }
    iVar5 = 0;
  }
  else {
    if (iVar5 != param_1) {
      FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_greed_inl_00683954,0x114,s_Mar_19_2002_006714f8);
      return;
    }
LAB_006061ba:
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
      iVar5 = 0;
      if (*(int *)(iVar1 + 0x30) != 0) {
        return;
      }
    }
    else {
      if (*(int *)(iVar3 + 0x34) == 0) {
        return;
      }
      iVar5 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      if (iVar5 != *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0x20) + 8)) {
        return;
      }
LAB_00606216:
      if (iVar5 != 0) goto LAB_0060622d;
    }
  }
  piVar4 = (int *)piVar2[2];
  if (piVar4 == (int *)0x0) {
    return;
  }
  if ((*piVar4 != 0) && (piVar4[1] != 0)) {
    return;
  }
LAB_0060622d:
  FUN_00605b80(piVar2,iVar5);
  return;
}

