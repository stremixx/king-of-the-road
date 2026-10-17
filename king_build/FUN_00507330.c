
bool FUN_00507330(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0062fed4(param_2);
  return (*(uint *)(*(int *)(*piVar1 + 4) + 8 + (int)piVar1) & 6) == 0;
}

