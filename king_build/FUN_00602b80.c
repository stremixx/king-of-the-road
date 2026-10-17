
undefined4 __thiscall FUN_00602b80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18));
  cVar1 = *pcVar2;
  *param_2 = *(undefined4 *)(pcVar2 + 1);
  if (cVar1 != '-') {
    return 3;
  }
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + 5 + *(int *)(param_1 + 0x18));
  return 0;
}

