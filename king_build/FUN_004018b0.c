
void __thiscall FUN_004018b0(int param_1,char *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = *param_2;
    while ((cVar1 != '\0' && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)))) {
      param_2 = param_2 + 1;
      *(char *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) = cVar1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      cVar1 = *param_2;
    }
  }
  return;
}

