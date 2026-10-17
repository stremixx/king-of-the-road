
void __thiscall FUN_0053dc00(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2c);
  do {
    iVar1 = iVar1 + 1;
    if (param_2 != iVar1) {
      uVar3 = *puVar2;
    }
    else {
      uVar3 = *puVar2;
    }
    FUN_004e4132(uVar3,param_2 == iVar1);
    puVar2 = puVar2 + 1;
  } while (iVar1 < 3);
  return;
}

