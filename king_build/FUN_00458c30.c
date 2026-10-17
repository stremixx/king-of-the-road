
int * __thiscall FUN_00458c30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  if (param_2 != param_1) {
    iVar2 = *param_2;
    iVar5 = *param_1;
    iVar1 = param_2[1];
    uVar4 = iVar1 - iVar2 >> 4;
    if ((uint)(param_1[2] - iVar5 >> 4) < uVar4) {
      iVar1 = FUN_00461de0(uVar4,iVar2,iVar1);
      iVar2 = param_1[1];
      for (iVar5 = *param_1; iVar5 != iVar2; iVar5 = iVar5 + 0x10) {
        FUN_0046c840(0);
      }
      iVar2 = param_1[2] - *param_1 >> 4;
      if (iVar2 != 0) {
        FUN_0044b440(*param_1,iVar2 << 4);
      }
      *param_1 = iVar1;
      param_1[2] = uVar4 * 0x10 + iVar1;
    }
    else {
      uVar3 = param_1[1] - iVar5 >> 4;
      if (uVar3 < uVar4) {
        local_4 = (int)(uVar3 * 0x10) >> 4;
        if (0 < local_4) {
          do {
            FUN_0042c0c0(iVar2);
            iVar2 = iVar2 + 0x10;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
        FUN_004662a0((param_1[1] - *param_1 >> 4) * 0x10 + *param_2,param_2[1],param_1[1],param_2);
      }
      else {
        iVar5 = FUN_0047c550(iVar2,iVar1,iVar5,param_2,0);
        iVar2 = param_1[1];
        for (; iVar5 != iVar2; iVar5 = iVar5 + 0x10) {
          FUN_00602380();
        }
      }
    }
    param_1[1] = uVar4 * 0x10 + *param_1;
  }
  param_1[3] = param_2[3];
  return param_1;
}

