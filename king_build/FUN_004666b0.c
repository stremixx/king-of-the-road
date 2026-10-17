
void FUN_004666b0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xc);
  while (cVar1 == '\0') {
    FUN_004666b0(*(undefined4 *)(param_1 + 0x14),param_2);
    param_1 = *(int *)(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0xc);
  }
  FUN_004693e0(param_1,param_2);
  return;
}

