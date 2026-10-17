
int FUN_0062b3c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    DAT_00779f9c = DAT_00779f9c + -1;
    if (DAT_00779f9c < 0) {
      uVar1 = FUN_0062b4b0();
      do {
        if (uVar1 == 0x1fe) {
          DAT_0077a1c8 = 1;
          return iVar3;
        }
        if (uVar1 < 0x100) {
          *(char *)(iVar3 + param_2) = (char)uVar1;
          iVar3 = iVar3 + 1;
          if (iVar3 == param_1) {
            return iVar3;
          }
        }
        else {
          DAT_00779f9c = uVar1 - 0xfd;
          iVar2 = FUN_0062ba20();
          DAT_00779fb8 = (iVar3 - iVar2) - 1U & 0x1fff;
          while (DAT_00779f9c = DAT_00779f9c + -1, -1 < DAT_00779f9c) {
            *(undefined1 *)(iVar3 + param_2) = *(undefined1 *)(DAT_00779fb8 + param_2);
            DAT_00779fb8 = DAT_00779fb8 + 1 & 0x1fff;
            iVar3 = iVar3 + 1;
            if (iVar3 == param_1) {
              return iVar3;
            }
          }
        }
        uVar1 = FUN_0062b4b0();
      } while( true );
    }
    *(undefined1 *)(iVar3 + param_2) = *(undefined1 *)(DAT_00779fb8 + param_2);
    DAT_00779fb8 = DAT_00779fb8 + 1 & 0x1fff;
    iVar3 = iVar3 + 1;
  } while (iVar3 != param_1);
  return iVar3;
}

