
void __fastcall FUN_0048ed40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[0x90] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = param_1;
    puVar3 = (undefined4 *)register0x00000010;
    for (iVar1 = 6; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
  }
  iVar1 = param_1[0x90];
  param_1[0x90] = iVar1 + 1;
  if (param_1 + (iVar1 + 1) * 6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)&stack0x0000001c;
    puVar4 = param_1 + (iVar1 + 1) * 6;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  param_1[0x90] = param_1[0x90] + 1;
  return;
}

