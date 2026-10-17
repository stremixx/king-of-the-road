
void FUN_006094a0(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = param_2;
  iVar3 = param_1;
  if (param_1 == *(int *)(param_2 + 0x38)) {
    uVar5 = FUN_00606110(param_1);
    *(undefined4 *)(iVar6 + 0x38) = uVar5;
  }
  psVar1 = (short *)(iVar6 + 0x40);
  *psVar1 = *psVar1 + -1;
  *(undefined4 *)(*(int *)(**(int **)(iVar3 + 8) + 0xc) + 0x48) = 0;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 8) + 4) + 0xc) + 0x48) = 0;
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    *(undefined4 *)(*(int *)(**(int **)(iVar3 + 0xc) + 0xc) + 0x48) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 4) + 0xc) + 0x48) = 0;
  }
  FUN_00612db0(iVar3);
  piVar2 = *(int **)(iVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    param_1 = 0;
    FUN_00609880(*(undefined4 *)(**(int **)(iVar3 + 8) + 0xc),
                 *(undefined4 *)((*(int **)(iVar3 + 8))[1] + 0xc),&param_2);
  }
  else {
    FUN_00609b20(*(undefined4 *)(**(int **)(iVar3 + 8) + 0xc),
                 *(undefined4 *)((*(int **)(iVar3 + 8))[1] + 0xc),*(undefined4 *)(*piVar2 + 0xc),
                 *(undefined4 *)(piVar2[1] + 0xc),&param_2,&param_1);
  }
  iVar6 = **(int **)(iVar3 + 8);
  if (iVar6 != 0) {
    FUN_006096f0();
    FUN_00631d5c(iVar6);
  }
  iVar6 = *(int *)(*(int *)(iVar3 + 8) + 4);
  if (iVar6 != 0) {
    FUN_006096f0();
    FUN_00631d5c(iVar6);
  }
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  **(undefined4 **)(iVar3 + 8) = 0;
  *(int *)(*(int *)(iVar3 + 8) + 0xc) = param_2;
  *(int *)(*(int *)(*(int *)(iVar3 + 8) + 0xc) + 0x28) = *(int *)(iVar3 + 8);
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    iVar6 = **(int **)(iVar3 + 0xc);
    if (iVar6 != 0) {
      FUN_006096f0();
      FUN_00631d5c(iVar6);
    }
    iVar6 = *(int *)(*(int *)(iVar3 + 0xc) + 4);
    if (iVar6 != 0) {
      FUN_006096f0();
      FUN_00631d5c(iVar6);
    }
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + 4) = 0;
    **(undefined4 **)(iVar3 + 0xc) = 0;
    *(int *)(*(int *)(iVar3 + 0xc) + 0xc) = param_1;
    *(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0xc) + 0x28) = *(int *)(iVar3 + 0xc);
  }
  if (iVar3 != 0) {
    FUN_00609040();
    FUN_00631d5c(iVar3);
  }
  if ((*(int *)(param_2 + 0x48) != 0) ||
     ((iVar3 = *(int *)(param_2 + 0x40), iVar3 == 0 && (*(int *)(param_2 + 0x44) == 0))))
  goto LAB_006096db;
  piVar2 = *(int **)(*(int *)(param_2 + 0x28) + 8);
  if ((*piVar2 == 0) || (piVar2[1] == 0)) goto LAB_006096db;
  iVar6 = *(int *)(*piVar2 + 0xc);
  if (*(int *)(piVar2[1] + 0xc) == param_2) {
    if (iVar6 == param_2) goto LAB_0060967a;
    if (iVar3 == 0) {
      if (*(int *)(*(int *)(param_2 + 0x44) + 0x44) != 0) goto LAB_006096db;
      iVar6 = 0;
    }
    else if ((*(int *)(iVar3 + 0x40) == 0) ||
            (iVar6 = *(int *)(*(int *)(iVar3 + 0x28) + 8),
            iVar6 != *(int *)(*(int *)(*(int *)(iVar3 + 0x40) + 0x28) + 8))) goto LAB_006096db;
  }
  else {
    if (iVar6 != param_2) {
      FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_terrain_grd_inl_0068399c,0x174,s_Mar_19_2002_006714f8);
      goto LAB_006096db;
    }
LAB_0060967a:
    iVar4 = *(int *)(param_2 + 0x44);
    if (iVar4 == 0) {
      if (*(int *)(iVar3 + 0x40) != 0) goto LAB_006096db;
      iVar6 = 0;
    }
    else if ((*(int *)(iVar4 + 0x44) == 0) ||
            (iVar6 = *(int *)(*(int *)(iVar4 + 0x28) + 8),
            iVar6 != *(int *)(*(int *)(*(int *)(iVar4 + 0x44) + 0x28) + 8))) goto LAB_006096db;
  }
  FUN_00608660(piVar2,iVar6);
LAB_006096db:
  if (param_1 != 0) {
    FUN_00609770(param_1);
  }
  return;
}

