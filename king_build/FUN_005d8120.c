
undefined4 * __thiscall FUN_005d8120(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_3 + 0x2c);
  FUN_005d7dc0(param_2,piVar1,0);
  *param_1 = &PTR_FUN_00651228;
  iVar2 = *piVar1;
  iVar3 = *(int *)(param_3 + 0x30);
  *piVar1 = *piVar1 + -iVar2;
  *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + -iVar2;
  *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + -iVar3;
  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + -iVar3;
  param_1[0xe] = param_3;
  param_1[0xf] = 0;
  param_1[4] = param_1[4] | 4;
  return param_1;
}

