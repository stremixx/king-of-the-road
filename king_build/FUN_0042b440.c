
void FUN_0042b440(void)

{
  int *piVar1;
  
  piVar1 = DAT_0068bb78;
  if (DAT_0068bb78 != DAT_0068bb7c) {
    do {
      if (*(char *)(*piVar1 + 0x1c) != '\0') {
        FUN_0042b140(*piVar1,0);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != DAT_0068bb7c);
  }
  return;
}

