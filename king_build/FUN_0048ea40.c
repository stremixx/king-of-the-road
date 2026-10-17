
void __thiscall FUN_0048ea40(double *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  double local_cc [24];
  int local_c;
  
  iVar1 = (*(int *)(param_1 + 0x18) << 3) >> 3;
  uVar2 = 0;
  local_c = 0;
  pdVar3 = param_1;
  if (iVar1 != 1) {
    do {
      if (local_cc + local_c != (double *)0x0) {
        local_cc[local_c] = (double)((iVar1 - uVar2) - 1) * *pdVar3;
      }
      uVar2 = uVar2 + 1;
      local_c = local_c + 1;
      iVar1 = (*(int *)(param_1 + 0x18) << 3) >> 3;
      pdVar3 = pdVar3 + 1;
    } while (uVar2 < iVar1 - 1U);
  }
  pdVar3 = local_cc;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    param_2 = param_2 + 1;
  }
  return;
}

