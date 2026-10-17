
int __thiscall FUN_004cd2a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x48) < 0x83) {
    if ((param_2 == 0) && (param_3 != 0)) {
      if (*(int *)(param_1 + 0x70) != 1) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_004ccda0(*(int *)(param_1 + 0x68),param_2);
      if (iVar1 == 0) {
        FUN_004ccbf0(*(undefined4 *)(param_1 + 0x68));
      }
      else {
        FUN_004ccdf0(*(undefined4 *)(param_1 + 0x68),param_1);
        (**(code **)(*DAT_006951c0 + 0x48))(DAT_006951c0,*(undefined4 *)(param_1 + 0x74),param_1);
      }
      if (iVar1 == *(int *)(param_1 + 0x70)) {
        return 0;
      }
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x70) = 1;
        DAT_006951bc = DAT_006951bc + 1;
        iVar1 = (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(param_1 + 0x74),1);
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    DAT_006951bc = DAT_006951bc + -1;
    iVar1 = (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(param_1 + 0x74),0);
  }
  else {
    if (param_2 == *(int *)(param_1 + 0x70)) {
      return 0;
    }
    if (param_2 == 0) {
      iVar1 = (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(param_1 + 0x74),0);
      *(undefined4 *)(param_1 + 0x70) = 0;
      return iVar1;
    }
    iVar1 = (**(code **)(*DAT_006951c0 + 0x48))
                      (DAT_006951c0,*(undefined4 *)(param_1 + 0x74),param_1);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(param_1 + 0x74),1);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x70) = 1;
        return iVar1;
      }
    }
  }
  return iVar1;
}

