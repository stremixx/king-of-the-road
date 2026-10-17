
void FUN_00609770(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x48) == 0) &&
     ((iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0 || (*(int *)(param_1 + 0x44) != 0)))) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 8);
    if ((*piVar2 != 0) && (piVar2[1] != 0)) {
      iVar3 = *(int *)(*piVar2 + 0xc);
      if (*(int *)(piVar2[1] + 0xc) == param_1) {
        if (iVar3 != param_1) {
          if (iVar1 == 0) {
            if (*(int *)(*(int *)(param_1 + 0x44) + 0x44) != 0) {
              return;
            }
            FUN_00608660(piVar2,0);
            return;
          }
          if (*(int *)(iVar1 + 0x40) == 0) {
            return;
          }
          iVar3 = *(int *)(*(int *)(iVar1 + 0x28) + 8);
          if (iVar3 != *(int *)(*(int *)(*(int *)(iVar1 + 0x40) + 0x28) + 8)) {
            return;
          }
          FUN_00608660(piVar2,iVar3);
          return;
        }
      }
      else if (iVar3 != param_1) {
        FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                     s_C__Nek_VRAPPLVS_terrain_grd_inl_0068399c,0x174,s_Mar_19_2002_006714f8);
        return;
      }
      iVar3 = *(int *)(param_1 + 0x44);
      if (iVar3 == 0) {
        if (*(int *)(iVar1 + 0x40) == 0) {
          FUN_00608660(piVar2,0);
          return;
        }
      }
      else if ((*(int *)(iVar3 + 0x44) != 0) &&
              (iVar1 = *(int *)(*(int *)(iVar3 + 0x28) + 8),
              iVar1 == *(int *)(*(int *)(*(int *)(iVar3 + 0x44) + 0x28) + 8))) {
        FUN_00608660(piVar2,iVar1);
        return;
      }
    }
  }
  return;
}

