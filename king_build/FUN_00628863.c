
undefined4 FUN_00628863(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_0077d7e8);
  bVar2 = DAT_0077d7e4 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_0077d7e8);
    FUN_006238a4(0x13);
  }
  uVar1 = FUN_006288bc(param_1,param_2);
  if (bVar2) {
    FUN_00623905(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_0077d7e8);
  }
  return uVar1;
}

