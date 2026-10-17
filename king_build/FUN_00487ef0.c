
void FUN_00487ef0(undefined4 *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  double local_68 [9];
  double local_20;
  double local_18;
  double local_10;
  
  pdVar3 = local_68;
  pdVar2 = (double *)(param_2 + 8);
  iVar5 = 4;
  do {
    iVar6 = 3;
    pdVar1 = (double *)(param_3 + 0x18);
    pdVar4 = pdVar3;
    do {
      pdVar3 = pdVar4 + 1;
      iVar6 = iVar6 + -1;
      *pdVar4 = *pdVar2 * *pdVar1 + pdVar1[-3] * pdVar2[-1] + pdVar1[3] * pdVar2[1];
      pdVar1 = pdVar1 + 1;
      pdVar4 = pdVar3;
    } while (iVar6 != 0);
    pdVar2 = pdVar2 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = local_20 + *(double *)(param_3 + 0x48);
  local_18 = local_18 + *(double *)(param_3 + 0x50);
  local_10 = local_10 + *(double *)(param_3 + 0x58);
  pdVar2 = local_68;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}

