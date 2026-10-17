
int FUN_004a5dc0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 0x10);
  piVar1 = (int *)(param_2 + 0x10);
  if (iVar4 == *(int *)(param_2 + 0x14)) {
    if ((uint)((*(int *)(param_2 + 0x18) - iVar4) / 0xc) < 8) {
      iVar5 = *(int *)(param_2 + 0x14);
      iVar3 = FUN_004a46c0(8,iVar4,iVar5);
      iVar2 = *(int *)(param_2 + 0x14);
      for (iVar6 = *piVar1; iVar6 != iVar2; iVar6 = iVar6 + 0xc) {
        FUN_00492340();
      }
      iVar2 = (*(int *)(param_2 + 0x18) - *piVar1) / 0xc;
      if (iVar2 != 0) {
        FUN_0044b440(*piVar1,iVar2 * 0xc);
      }
      *piVar1 = iVar3;
      *(int *)(param_2 + 0x18) = iVar3 + 0x60;
      *(int *)(param_2 + 0x14) = iVar3 + ((iVar5 - iVar4) / 0xc) * 0xc;
    }
    if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x18)) {
      iVar4 = FUN_0044c6b0(*(int *)(param_2 + 0x14),param_3);
    }
    else {
      FUN_00460920();
      iVar4 = *(int *)(param_2 + 0x14) + 0xc;
      *(int *)(param_2 + 0x14) = iVar4;
    }
    if ((((*param_3 == 0) && (iVar4 = param_3[2], iVar4 == 0)) && (iVar4 = param_3[1], iVar4 == 0))
       && ((iVar5 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c), iVar4 = iVar5 * 0x2e8ba2e9,
           1 < (uint)(iVar5 / 0x2c) && (iVar4 = *(int *)(param_1 + 0x78), iVar4 == 0)))) {
      iVar4 = FUN_004a5a90(param_1,0x1f);
      return iVar4;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x14);
    if (iVar4 != *(int *)(param_2 + 0x18)) {
      if (iVar4 != 0) {
        FUN_00455dc0(param_3);
      }
      iVar4 = *(int *)(param_2 + 0x14) + 0xc;
      *(int *)(param_2 + 0x14) = iVar4;
      return iVar4;
    }
    iVar4 = FUN_0044c6b0(iVar4,param_3);
  }
  return iVar4;
}

