
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ea0fd(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_2c0 [400];
  CHAR local_130 [300];
  
  iVar1 = Ordinal_115(0x101,local_2c0);
  if (iVar1 == 0) {
    DAT_00695db8 = Ordinal_23(2,1,0);
    if (DAT_00695db8 == -1) {
      uVar2 = Ordinal_111();
      wsprintfA(local_130,s_socket___Error____08d_0067323c,uVar2);
      uVar2 = 0xffffffff;
    }
    else {
      _DAT_00695da8 = 2;
      _DAT_00695dac = Ordinal_10(s_193_125_41_66_00673254);
      _DAT_00695daa = Ordinal_9(5000);
      iVar1 = Ordinal_4(DAT_00695db8,&DAT_00695da8,0x10);
      if (iVar1 < 0) {
        uVar2 = Ordinal_111();
        wsprintfA(local_130,s_connect_Error___08d__08X_00673264,uVar2,uVar2);
        Ordinal_3(DAT_00695db8);
        FUN_004e1de6(local_130);
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = Ordinal_111();
    wsprintfA(local_130,s_at_WSAStartup_Error____08d_00673220,uVar2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

