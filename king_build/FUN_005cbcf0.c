
void __thiscall FUN_005cbcf0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1[1] != 100) && (*param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_005cb330(param_2,param_1[3],param_3);
    puVar3 = (undefined4 *)(*param_1 + param_1[1] * 0x38);
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = param_1[1] + 1;
  }
  return;
}

