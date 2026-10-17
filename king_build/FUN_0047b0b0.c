
void __thiscall FUN_0047b0b0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if ((uint)(param_1[2] - iVar1 >> 3) < param_2) {
    iVar2 = param_1[1];
    iVar3 = FUN_0047b620(param_2,iVar1,iVar2);
    iVar4 = param_1[2] - *param_1 >> 3;
    if (iVar4 != 0) {
      FUN_0044b440(*param_1,iVar4 * 8);
    }
    *param_1 = iVar3;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 3) * 8;
    param_1[2] = iVar3 + param_2 * 8;
  }
  return;
}

