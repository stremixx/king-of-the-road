
void __fastcall FUN_004ce190(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  iVar1 = __ftol();
  iVar1 = iVar1 % 0xc;
  if (iVar1 < 4) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),0);
    cVar3 = '\x03';
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar2 = __ftol();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),uVar2);
    cVar3 = (uVar2 != 0) + '\x03';
  }
  else {
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),2);
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x2c),5);
      FUN_005d29a0(1);
      return;
    }
    if (iVar1 < 10) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),3);
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x2c),0);
      FUN_005d29a0(1);
      return;
    }
    if (iVar1 == 10) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      uVar2 = __ftol();
      uVar2 = uVar2 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),(uVar2 != 0) + '\x03');
      FUN_005e10c0(*(undefined4 *)(param_1 + 0x2c),uVar2);
      FUN_005d29a0(1);
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x28),5);
    cVar3 = '\x02';
  }
  FUN_005e10c0(*(undefined4 *)(param_1 + 0x2c),cVar3);
  FUN_005d29a0(1);
  return;
}

