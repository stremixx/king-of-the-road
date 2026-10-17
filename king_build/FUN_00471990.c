
void __thiscall FUN_00471990(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)*param_2;
  iVar1 = *param_2;
  *param_2 = iVar1 + 2;
  *param_1 = *(undefined4 *)(iVar1 + 2);
  iVar1 = *param_2;
  piVar4 = (int *)(iVar1 + 4);
  *param_2 = (int)piVar4;
  iVar2 = *piVar4;
  *param_2 = iVar1 + 8;
  if (iVar2 == -1) {
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 10) = 0xff;
    return;
  }
  uVar3 = *(undefined4 *)(DAT_0068be98 + iVar2 * 4);
  *(undefined1 *)((int)param_1 + 10) = 0xff;
  param_1[1] = uVar3;
  return;
}

