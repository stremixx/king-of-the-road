
void __thiscall FUN_005f1800(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x40);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    if (param_3 == 1) {
      FUN_005ab300(param_2);
      return;
    }
    if (param_3 == 2) {
      FUN_005ab2f0(param_2);
      return;
    }
  }
  return;
}

