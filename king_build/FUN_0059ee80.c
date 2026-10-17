
void __fastcall FUN_0059ee80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 6;
  puVar2 = param_1 + 2;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x1a] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x1b] = 0;
  return;
}

