
void __fastcall FUN_0052f7b0(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = 0x127;
  do {
    if (param_1[1] == '\0') {
      *param_1 = 0;
    }
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

