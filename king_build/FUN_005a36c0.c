
void __thiscall FUN_005a36c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005f1c30(param_2);
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  puVar1 = (undefined4 *)FUN_005ab330(local_30,*puVar1,puVar1[1],puVar1[2]);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

