
void __thiscall FUN_00440eb0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = param_1;
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  param_1[0x36] = param_2;
  uVar4 = 0;
  iVar1 = 1;
  do {
    iVar3 = param_2 - iVar1;
    uVar2 = uVar4 % 0x37;
    uVar4 = uVar4 + 0x15;
    param_1[uVar2] = iVar1;
    param_2 = param_1[uVar2];
    iVar1 = iVar3;
  } while (uVar4 < 0x46e);
  iVar1 = 4;
  do {
    uVar4 = 0;
    piVar5 = param_1;
    do {
      uVar2 = uVar4 + 0x1f;
      uVar4 = uVar4 + 1;
      *piVar5 = *piVar5 - param_1[uVar2 % 0x37];
      piVar5 = piVar5 + 1;
    } while (uVar4 < 0x37);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x37] = 0;
  param_1[0x38] = 0x1f;
  return;
}

