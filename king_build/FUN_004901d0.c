
void __thiscall FUN_004901d0(double *param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  double local_cc [24];
  int local_c;
  
  dVar1 = *param_3;
  uVar3 = 0;
  local_c = 0;
  pdVar4 = param_1;
  if ((*(int *)(param_1 + 0x18) << 3) >> 3 != 0) {
    do {
      if (local_cc + local_c != (double *)0x0) {
        local_cc[local_c] = dVar1 * *pdVar4;
      }
      uVar3 = uVar3 + 1;
      local_c = local_c + 1;
      pdVar4 = pdVar4 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x18) << 3) >> 3));
  }
  pdVar4 = local_cc;
  for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *(undefined4 *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    param_2 = param_2 + 1;
  }
  return;
}

