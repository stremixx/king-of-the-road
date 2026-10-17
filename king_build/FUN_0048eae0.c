
void __thiscall FUN_0048eae0(double *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 local_cc;
  int local_c;
  
  uVar3 = 0;
  uVar1 = (*(int *)(param_1 + 0x18) << 3) >> 3;
  local_c = 0;
  pdVar5 = param_1;
  if (uVar1 != 0) {
    do {
      if ((double *)(&local_cc + local_c) != (double *)0x0) {
        (&local_cc)[local_c] = *pdVar5 / (double)(uVar1 - uVar3);
      }
      local_c = local_c + 1;
      uVar3 = uVar3 + 1;
      uVar1 = (*(int *)(param_1 + 0x18) << 3) >> 3;
      pdVar5 = pdVar5 + 1;
    } while (uVar3 < uVar1);
  }
  iVar2 = local_c * 8;
  if (&local_cc + local_c != (undefined8 *)0x0) {
    *(undefined4 *)(&local_cc + local_c) = 0;
    *(undefined4 *)((int)&local_cc + iVar2 + 4) = 0;
  }
  local_c = local_c + 1;
  puVar4 = &local_cc;
  for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *(undefined4 *)puVar4;
    puVar4 = (undefined8 *)((int)puVar4 + 4);
    param_2 = param_2 + 1;
  }
  return;
}

