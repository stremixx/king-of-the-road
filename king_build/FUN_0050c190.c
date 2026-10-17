
undefined4 * FUN_0050c190(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645626;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005686e0();
  if (iVar1 == 2) {
    puVar2 = (undefined4 *)FUN_00631d33(0xc);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    pcVar4 = s_m_15_cursor_msk_006751e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00631d33(0xc);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    pcVar4 = s_m_16_cursor_msk_006751d0;
  }
  uVar3 = FUN_005eea00(pcVar4);
  *puVar2 = uVar3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  ExceptionList = local_c;
  return puVar2;
}

