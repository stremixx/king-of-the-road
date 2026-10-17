
int * __thiscall FUN_00592480(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    if (((param_1 == (int *)0x0) || (param_1[1] != 0)) || (*param_1 != 0)) {
      FUN_005923c0(s_ListItem__put_on_head___this__NU_0067cfc8);
    }
    puVar2 = (undefined4 *)*param_2;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      param_2 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *param_2 = param_1;
    param_1[1] = (int)param_2;
  }
  return param_1;
}

