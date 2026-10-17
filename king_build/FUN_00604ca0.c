
void FUN_00604ca0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00723084;
joined_r0x00604ca9:
  do {
    if (piVar1 == (int *)0x0) {
      while (iVar2 = FUN_00604b50(0xffff), iVar2 != 0) {
        FUN_006049d0();
      }
      return;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    if (iVar2 == 0) {
      if (DAT_007230d8 != (code *)0x0) {
        (*DAT_007230d8)(piVar1[6]);
      }
      (**(code **)(*piVar1 + 0x18))();
      if (piVar1[10] == 0) {
        piVar1 = (int *)piVar1[4];
        FUN_006038f0();
        goto joined_r0x00604ca9;
      }
    }
    piVar1 = (int *)piVar1[4];
  } while( true );
}

