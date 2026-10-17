
/* WARNING: Removing unreachable block (ram,0x0048afdc) */

undefined2 * FUN_0048afb0(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  
  if ((param_1 != (undefined2 *)0x0) && (param_1[1] != 0)) {
    *param_1 = 1;
    param_1[2] = (undefined2)param_2;
    param_1[3] = 1;
    return param_1;
  }
  puVar1 = (undefined2 *)&DAT_0066f400;
  if (param_2 != 0) {
    puVar1 = (undefined2 *)&DAT_0066f3f8;
  }
  return puVar1;
}

