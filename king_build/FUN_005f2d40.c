
undefined4 __thiscall FUN_005f2d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_005eee30(param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005b4670(param_1 + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = false;
  if ((*(char **)(param_1 + 0xc) != (char *)0x0) && ((DAT_00701dec & 0x4000) != 0)) {
    iVar2 = _strncmp(*(char **)(param_1 + 0xc),&DAT_00682594,3);
    if (iVar2 == 0) {
      DAT_00701dec = DAT_00701dec & 0xffffbfff;
      bVar1 = true;
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0xe,0);
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x17,8);
    }
  }
  FUN_005f16f0(0,param_2,param_3);
  if (bVar1) {
    DAT_00701dec = DAT_00701dec | 0x4000;
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0xe,1);
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x17,4);
  }
  return 1;
}

