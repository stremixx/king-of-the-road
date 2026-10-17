
undefined4 FUN_0050b9c0(void)

{
  int iVar1;
  
  if (((*(int *)(DAT_006cdbcc + 0x510) != 0) || (*(int *)(DAT_006cdbcc + 0x504) != 0)) ||
     (*(int *)(DAT_006cdbcc + 0x508) != 0)) {
    iVar1 = FUN_0050b850();
    if (iVar1 != 0) {
      *(undefined4 *)(DAT_006cdbcc + 0x508) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x504) = 0;
      *(undefined4 *)(DAT_006cdbcc + 0x510) = 0;
      FUN_0050b970();
      FUN_004e1230(1);
      return 1;
    }
  }
  return 0;
}

