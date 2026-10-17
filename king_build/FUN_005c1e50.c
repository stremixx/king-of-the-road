
int FUN_005c1e50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_005d2250(s_msavi__LPWAVEFORMATEX_lpwfxForma_0067e504,0);
    return -0x7fffbffb;
  }
  if (param_2 == 0) {
    FUN_005d2250(s_msavi__WaveSoundRead_fun___NULL_0067e4e0,0);
    return -0x7fffbffb;
  }
  DAT_00701f10 = param_2;
  DAT_00701f0c = param_3;
  DAT_00701f08 = param_1;
  if (DAT_00701f04 != (int *)0x0) {
    (**(code **)(*DAT_00701f04 + 8))(DAT_00701f04);
    DAT_00701f04 = (int *)0x0;
  }
  if (DAT_00701f00 != (int *)0x0) {
    (**(code **)(*DAT_00701f00 + 8))(DAT_00701f00);
    DAT_00701f00 = (int *)0x0;
  }
  DAT_00701ed8 = 0;
  DAT_00701edc = 0;
  iVar1 = FUN_005c1f00();
  if (iVar1 < 0) {
    FUN_005d2250(s_msavi__Couldn_t_create_sound_buf_0067e4b8,iVar1);
    return iVar1;
  }
  return 0;
}

