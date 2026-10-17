
void FUN_0050fde0(void)

{
  int iVar1;
  char *pcVar2;
  
  DAT_006cdcb0 = 0;
  if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      DAT_006743e0 = (-(uint)((char)DAT_006f1c78 != '\0') & 0xfffffe3e) + 4000;
    }
    else {
      DAT_006743e0 = ((1 < *(int *)(DAT_006cdbf8 + 0x180)) - 1 & 0x46) + 900;
    }
  }
  else {
    DAT_006743e0 = 900;
  }
  iVar1 = FUN_005686e0();
  if (iVar1 == 2) {
    DAT_006cdcbc = FUN_005eea00(s_m15_loadpix_txr_00675614);
    pcVar2 = s_m15_loadrunner_txr_00675600;
  }
  else {
    iVar1 = FUN_005686e0();
    if (iVar1 != 3) goto LAB_0050fe95;
    DAT_006cdcbc = FUN_005eea00(s_m16_loadpix_txr_006755f0);
    pcVar2 = s_m16_loadrunner_txr_006755dc;
  }
  DAT_006cdcc0 = FUN_005eea00(pcVar2);
LAB_0050fe95:
  if ((*(byte *)(DAT_006cdcbc + 0x34) & 2) == 0) {
    FUN_005ba4e0(0);
  }
  if ((*(byte *)(DAT_006cdcc0 + 0x34) & 2) == 0) {
    FUN_005ba4e0(0);
  }
  return;
}

