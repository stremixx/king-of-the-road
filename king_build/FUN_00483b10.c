
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00483b10(void)

{
  if ((DAT_006cdbcc != 0) && (*(int *)(DAT_006cdbcc + 0x54c) != 0)) {
    return (float10)*(double *)(*(int *)(DAT_006cdbcc + 0x54c) + 0xb98);
  }
  return (float10)_DAT_0064a668;
}

