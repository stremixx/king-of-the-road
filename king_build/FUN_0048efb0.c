
void __thiscall FUN_0048efb0(int param_1,undefined4 *param_2)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  double local_264;
  double local_25c;
  double local_254;
  undefined4 local_24c [144];
  int local_c;
  
  uVar4 = 0;
  local_c = 0;
  iVar3 = (*(int *)(param_1 + 0x240) * 0x18) / 0x18;
  if (iVar3 != 1) {
    pdVar2 = (double *)(param_1 + 0x10);
    do {
      dVar1 = (double)((iVar3 - uVar4) - 1);
      local_264 = pdVar2[-2] * dVar1;
      local_25c = pdVar2[-1] * dVar1;
      local_254 = *pdVar2 * dVar1;
      if (local_24c + local_c * 6 != (undefined4 *)0x0) {
        pdVar5 = &local_264;
        puVar6 = local_24c + local_c * 6;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *(undefined4 *)pdVar5;
          pdVar5 = (double *)((int)pdVar5 + 4);
          puVar6 = puVar6 + 1;
        }
      }
      pdVar2 = pdVar2 + 3;
      uVar4 = uVar4 + 1;
      local_c = local_c + 1;
      iVar3 = (*(int *)(param_1 + 0x240) * 0x18) / 0x18;
    } while (uVar4 < iVar3 - 1U);
  }
  puVar6 = local_24c;
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *puVar6;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

