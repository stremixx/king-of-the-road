
undefined4 __thiscall FUN_004cd3f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  
  if ((*(int *)(param_1 + 4) != 0) && (DAT_00695184 != 0)) {
    iVar2 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar2;
    iVar1 = *(int *)(param_1 + 0xc) + iVar2 * 0x78;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x68 + iVar2 * 0x78) + 0x48) < 0x83) {
      if (*(int *)(iVar1 + 0x70) == 1) {
        DAT_006951bc = DAT_006951bc + -1;
        (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(iVar1 + 0x74),0);
      }
    }
    else if (*(int *)(iVar1 + 0x70) != 0) {
      (**(code **)(*DAT_006951c0 + 0xb0))(DAT_006951c0,*(undefined4 *)(iVar1 + 0x74),0);
      *(undefined4 *)(iVar1 + 0x70) = 0;
      uVar3 = FUN_004ccf60(unaff_ESI);
      return uVar3;
    }
    uVar3 = FUN_004ccf60(param_2);
    return uVar3;
  }
  return 0x80004005;
}

