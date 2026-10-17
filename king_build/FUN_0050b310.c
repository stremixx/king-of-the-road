
undefined4 FUN_0050b310(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_a0 [32];
  undefined1 local_80 [128];
  
  FUN_0050ad70();
  puVar3 = local_80;
  iVar2 = 4;
  do {
    uVar1 = FUN_0050b090(local_a0,puVar3 + (param_2 - (int)local_80),param_3);
    FUN_0050ad40(uVar1);
    puVar3 = puVar3 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0050ada0(local_80);
  return param_1;
}

