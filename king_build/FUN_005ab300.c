
void __thiscall FUN_005ab300(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_30 [48];
  
  puVar1 = (undefined4 *)FUN_005ab130(local_30,param_2,param_1);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

