
int FUN_0042b380(void)

{
  int *piVar1;
  
  piVar1 = DAT_0068bb78;
  while( true ) {
    if (piVar1 == DAT_0068bb7c) {
      return 0;
    }
    if (*(char *)(*piVar1 + 0x1c) != '\0') break;
    piVar1 = piVar1 + 1;
  }
  return *piVar1;
}

