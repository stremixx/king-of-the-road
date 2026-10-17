
void __thiscall FUN_00528f90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      if (*(int *)(*param_1 + iVar1 + 0x20) == param_2) {
        *(undefined2 *)(*param_1 + iVar1 + 0x24) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  return;
}

