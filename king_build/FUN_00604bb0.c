
void __fastcall FUN_00604bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    piVar2 = (int *)FUN_00604b80(*(undefined2 *)(param_1 + 0x24));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))();
    }
  }
  else {
    iVar1 = FUN_00604b50(CONCAT22((short)((uint)*(int *)(param_1 + 0x38) >> 0x10),
                                  *(undefined2 *)(param_1 + 0x24)));
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x48))(*(int **)(param_1 + 0x38));
      return;
    }
  }
  return;
}

