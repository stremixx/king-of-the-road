
int FUN_005c20d0(void)

{
  int iVar1;
  
  if (DAT_00701f00 == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_005c23e0();
  if (iVar1 < 0) {
    FUN_005d2250(s_masvi__RestoreBuffers___failed_0067e668,iVar1);
    return iVar1;
  }
  iVar1 = FUN_005c2150();
  if (iVar1 < 0) {
    FUN_005d2250(s_masvi__FillBuffer___failed_0067e64c,iVar1);
    return iVar1;
  }
  iVar1 = (**(code **)(*DAT_00701f00 + 0x30))(DAT_00701f00,0,0,1);
  if (iVar1 < 0) {
    FUN_005d2250(s_masvi__g_pDSBuffer_>Play___faile_0067e628,iVar1);
    return iVar1;
  }
  return 0;
}

