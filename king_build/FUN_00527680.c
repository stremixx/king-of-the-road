
void FUN_00527680(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_006957a8;
  if (DAT_006957a8 == 0) {
    DAT_006f23f4 = param_2;
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(DAT_006957a8 + 0x34) = *(undefined4 *)(DAT_006957a8 + 0x30);
    if ((iVar1 == DAT_006cdbe0) && (iVar1 = *(int *)(DAT_006cdbe0 + 0x174), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x30);
    }
  }
  else {
    iVar2 = FUN_005d3160();
    if (iVar2 == 1) {
      *(undefined4 *)(iVar1 + 0x34) = DAT_006cdbc0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x34) = DAT_006cdbc4;
    }
    if ((iVar1 == DAT_006cdbe0) && (*(int *)(DAT_006cdbe0 + 0x174) != 0)) {
      *(undefined4 *)(*(int *)(DAT_006cdbe0 + 0x174) + 0x34) = DAT_006cdbc0;
      DAT_006f23f4 = param_2;
      return;
    }
  }
  DAT_006f23f4 = param_2;
  return;
}

