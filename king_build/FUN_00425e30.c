
undefined4 FUN_00425e30(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x1fc) == 0)) ||
     ((iVar1 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_1 + 0x1fc) + 4) * 4) + 0x20)
      , iVar1 != 2 && (iVar1 != 3)))) {
    if (((param_2 == 0) ||
        ((*(int *)(param_2 + 0x1fc) != 0 &&
         ((iVar1 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_2 + 0x1fc) + 4) * 4) +
                           0x20), iVar1 == 2 || (iVar1 == 3)))))) &&
       (cVar2 = FUN_00425de0(), cVar2 == '\0')) {
      return 0;
    }
  }
  else if (((param_2 == 0) || (*(int *)(param_2 + 0x1fc) == 0)) ||
          ((iVar1 = *(int *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(param_2 + 0x1fc) + 4) * 4) +
                            0x20), iVar1 != 2 && (iVar1 != 3)))) {
    return 0;
  }
  return 1;
}

