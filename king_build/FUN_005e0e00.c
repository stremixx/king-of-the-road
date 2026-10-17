
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e0e00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10 [3];
  
  _DAT_0071e768 = 0;
  _DAT_0071e76c = 0;
  _DAT_0071e758 = 0;
  _DAT_0071e75c = 0;
  _DAT_0071ef80 = 0;
  _DAT_0071ef84 = 0;
  _DAT_0071e770 = 0;
  _DAT_0071e774 = 0;
  iVar5 = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x2f7] = 0;
  if (param_1[0x8a] != 0) {
    param_1[0x2e6] = param_1[0x8c];
    param_1[0x8a] = 0;
    param_1[0x2e7] = param_1[0x8d];
  }
  FUN_005b6580();
  FUN_005b5830();
  if (param_1[0x2ec] == 0) {
    FUN_005b5b90(*(undefined4 *)(*(int *)(param_1[0x75] + 100) + *(int *)(param_1[0x75] + 0x8c) * 4)
                );
    FUN_004843e0();
    iVar4 = 0;
    local_10[1] = 0;
    local_10[0] = 0;
    iVar1 = *(int *)(param_1[0x75] + 0x48);
    if (0 < iVar1) {
      iVar3 = *(int *)(param_1[0x75] + 0x4c);
      do {
        if ((((*(byte *)(iVar3 + 0x20) & 1) != 0) && (iVar2 = *(int *)(iVar3 + 0x4c), iVar2 != 0))
           && ((*(byte *)(iVar2 + 0x34) & 1) != 0)) {
          if (iVar4 == 0) {
            iVar4 = 1;
            local_10[0] = iVar3;
            local_10[1] = iVar3;
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x40);
            local_10[iVar4] = iVar3;
            if (iVar2 == 0x10) break;
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x7c;
      } while (iVar5 < iVar1);
    }
    FUN_005afb70(local_10[0],local_10[1]);
    FUN_005d7ce0(0);
  }
  FUN_005d2f00();
  FUN_005b5840();
  *(double *)(param_1 + 0x7c) = (double)CONCAT44(_DAT_0071e76c,_DAT_0071e768) * _DAT_0064a648;
  *(double *)(param_1 + 0x7e) = (double)CONCAT44(_DAT_0071e75c,_DAT_0071e758) * _DAT_0064a648;
  *(double *)(param_1 + 0x80) = (double)CONCAT44(_DAT_0071ef84,_DAT_0071ef80) * _DAT_0064a648;
  *(double *)(param_1 + 0x9c) = (double)CONCAT44(_DAT_0071e774,_DAT_0071e770) * _DAT_0064a648;
  if (param_1[0x2f7] == 0) {
    if ((param_1[0x2f4] != 0) && ((param_1[0x79] == 0 || (*(int *)(param_1[0x79] + 0x14) == 0)))) {
      (**(code **)(*param_1 + 0x8c))();
      param_1[0x2f4] = 0;
    }
  }
  else if (*(int *)(DAT_007206b0 + 0x158) != 0) {
    FUN_005fc7d0();
    return;
  }
  return;
}

