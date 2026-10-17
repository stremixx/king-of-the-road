
undefined4 __thiscall FUN_00602ad0(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = (char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18));
  cVar1 = *pcVar2;
  *param_2 = *(undefined4 *)(pcVar2 + 1);
  if (cVar1 != '\a') {
    return 3;
  }
  *param_4 = (int)*(char *)(*(int *)(param_1 + 4) + 5 + *(int *)(param_1 + 0x18));
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 4;
    *(undefined4 *)(iVar3 + param_3) =
         *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 + 6 + *(int *)(param_1 + 0x18));
    iVar3 = iVar4;
  } while (iVar4 < 0x18);
  return 0;
}

