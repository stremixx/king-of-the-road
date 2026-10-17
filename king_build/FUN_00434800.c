
void FUN_00434800(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_0068a8f0;
  if (piVar2 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(piVar2);
      if (iVar1 != 0) {
        iVar1 = FUN_0040a950(piVar2);
        if ((*(byte *)(iVar1 + 0x58) & 4) == 0) {
          iVar1 = FUN_0040a950(piVar2);
          *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffffbbf;
        }
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0068a8f0);
  }
  return;
}

