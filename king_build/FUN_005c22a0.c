
int FUN_005c22a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  local_8 = 0;
  iVar1 = FUN_005c2370();
  if (iVar1 < 0) {
    FUN_005d2250(s_msavi__UpdateProgress___failed_0067e6dc,iVar1);
    return iVar1;
  }
  if (DAT_00701f00 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = DAT_00701ed0;
  iVar3 = DAT_00701ed4;
  iVar2 = (**(code **)(*DAT_00701f00 + 0x2c))
                    (DAT_00701f00,DAT_00701ed0,DAT_00701ed4,&local_8,local_4,0,0,0);
  if (iVar2 < 0) {
    FUN_005d2250(s_msavi__HandleNotification___Lock_0067e6b0,iVar2);
    return iVar2;
  }
  FUN_005c2210(iVar1,iVar3);
  (**(code **)(*DAT_00701f00 + 0x4c))(DAT_00701f00,iVar1,iVar3,0,0);
  DAT_00701ed0 = (DAT_00701ed0 + iVar3) % DAT_00701ec4;
  return 0;
}

