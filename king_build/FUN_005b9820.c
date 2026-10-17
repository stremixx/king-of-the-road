
uint __thiscall FUN_005b9820(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  param_2 = param_2 >> 8;
  iVar1 = FUN_005d31c0();
  if (iVar1 == 4) {
    if (param_2 < DAT_0067e02c) {
      if (DAT_00701de8 < param_2) {
        iVar1 = ((DAT_0067e02c - param_2) * 0xff) / (DAT_0067e02c - DAT_00701de8);
      }
      else {
        iVar1 = 0xff;
      }
    }
    else {
      iVar1 = 0;
    }
    uVar2 = FUN_005b9aa0(*(undefined1 *)(param_1 + 0x32c));
    return uVar2 | (-1 - iVar1) * 0x1000000;
  }
  if (DAT_0067e02c <= param_2) {
    return **(uint **)(param_1 + 8);
  }
  if (param_2 <= DAT_00701de8) {
    return *(uint *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 800) * 4);
  }
  return *(uint *)(*(int *)(param_1 + 8) +
                  (((DAT_0067e02c - param_2) * *(int *)(param_1 + 800)) /
                  (DAT_0067e02c - DAT_00701de8)) * 4);
}

