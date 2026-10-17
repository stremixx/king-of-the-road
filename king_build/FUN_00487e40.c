
void __fastcall FUN_00487e40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(*param_1 + iVar2 * 8);
      if (iVar1 != 0) {
        FUN_00631d5c(iVar1);
        *(undefined4 *)(*param_1 + iVar2 * 8) = 0;
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*param_1 + -4 + iVar2 * 8) = 0;
    } while (iVar2 < param_1[1]);
  }
  param_1[2] = 0;
  return;
}

