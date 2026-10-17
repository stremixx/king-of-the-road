
void FUN_005685e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_005e4980(*param_1);
  while (iVar1 != 0) {
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (499 < iVar1 % 1000) {
      *param_1 = (iVar1 / 1000) * 1000;
    }
    iVar2 = iVar2 + 1;
    if (500 < iVar2) {
      FUN_005d2520(s_Not_found_free_anm_index_0067a728,0);
    }
    iVar1 = FUN_005e4980(*param_1);
  }
  return;
}

