
uint FUN_00425d00(void)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  
  piVar2 = DAT_006898e0;
  do {
    if (piVar2 == DAT_006898e4) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = 0;
    if (*piVar2 != -8) {
      iVar1 = *(int *)(*piVar2 + 0x204);
      in_EAX = 0;
      if ((iVar1 == 0) ||
         ((in_EAX = *(uint *)(*(int *)(DAT_0068bf38 + *(int *)(iVar1 + 4) * 4) + 0x20), in_EAX != 2
          && (in_EAX != 3)))) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

