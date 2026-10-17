
void FUN_00484ce0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_2[1];
  piVar3 = (int *)*param_2;
  if (((piVar3 != piVar2) && (1 < (uint)(((int)piVar2 - (int)piVar3) / 0xc))) &&
     (piVar3 = piVar3 + 3, piVar3 != piVar2)) {
    do {
      iVar1 = *piVar3;
      for (piVar2 = (int *)*param_2; piVar2 != piVar3; piVar2 = piVar2 + 3) {
        *(undefined1 *)(*(int *)(*(int *)(DAT_0068be60 + *piVar2 * 4) + 0xc4 + param_1 * 4) + iVar1)
             = *(undefined1 *)((int)piVar2 + 10);
      }
      piVar3 = piVar3 + 3;
    } while (piVar3 != (int *)param_2[1]);
  }
  return;
}

