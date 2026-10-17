
void __thiscall FUN_00596c60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_30 [48];
  
  *(int *)(param_1 + 0x60) = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_0057d570(local_30);
    uVar2 = FUN_00547800(uVar1);
    FUN_00598420(uVar2,uVar1);
  }
  return;
}

