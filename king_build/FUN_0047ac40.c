
void __thiscall FUN_0047ac40(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if ((uint)((param_1[2] - iVar1) / 0xc) < param_2) {
    iVar2 = param_1[1];
    iVar4 = FUN_00459420(param_2,iVar1,iVar2);
    iVar3 = (param_1[2] - *param_1) / 0xc;
    if (iVar3 != 0) {
      FUN_0044b440(*param_1,iVar3 * 0xc);
    }
    *param_1 = iVar4;
    param_1[1] = iVar4 + ((iVar2 - iVar1) / 0xc) * 0xc;
    param_1[2] = iVar4 + param_2 * 0xc;
  }
  return;
}

