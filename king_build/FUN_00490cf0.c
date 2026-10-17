
undefined4 FUN_00490cf0(int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_2 = *(undefined4 *)*param_1;
  iVar1 = *param_1;
  puVar3 = (undefined4 *)(iVar1 + 4);
  *param_1 = (int)puVar3;
  uVar2 = *puVar3;
  *param_1 = iVar1 + 8;
  *param_4 = uVar2;
  *param_3 = *param_1;
  return 0;
}

