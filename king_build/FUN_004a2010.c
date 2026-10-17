
void __fastcall FUN_004a2010(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    iVar1 = param_1[9];
    for (puVar2 = (undefined4 *)param_1[5]; puVar2 < (undefined4 *)(iVar1 + 4); puVar2 = puVar2 + 1)
    {
      FUN_0044b440(*puVar2,0x200);
    }
    if (param_1[1] != 0) {
      FUN_0044b440(*param_1,param_1[1] * 4);
    }
  }
  return;
}

