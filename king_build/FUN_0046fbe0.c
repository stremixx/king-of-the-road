
void FUN_0046fbe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar3 < (uint)param_1[2]) {
    puVar5 = param_2 + 3;
    iVar6 = ((int)param_2 - (int)param_1) / 0xc;
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        puVar5[-3] = param_2[-3];
        puVar5[-2] = param_2[-2];
        puVar5[-1] = param_2[-1];
        param_2 = param_2 + -3;
        puVar5 = puVar5 + -3;
      } while (iVar6 != 0);
    }
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[-1];
  while (uVar3 < uVar4) {
    *param_2 = param_2[-3];
    param_2[1] = param_2[-2];
    param_2[2] = param_2[-1];
    uVar4 = param_2[-4];
    param_2 = param_2 + -3;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}

