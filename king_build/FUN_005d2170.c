
void __thiscall FUN_005d2170(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 - param_1[2]) / *param_1;
  if (((int)uVar1 < 0) || (param_1[1] <= uVar1)) {
    FUN_005d2520(s_Illegal_free_u_d__head_1__0067ea80,0);
  }
  if (*(char *)(uVar1 + param_1[3]) == '\0') {
    FUN_005d2520(s_Illegal_free_u_d__heap_2__0067ea64,0);
    *(undefined1 *)(uVar1 + param_1[3]) = 0;
    return;
  }
  *(undefined1 *)(uVar1 + param_1[3]) = 0;
  return;
}

