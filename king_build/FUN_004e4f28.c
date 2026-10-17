
void FUN_004e4f28(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [48];
  
  FUN_005aba00(local_34,param_1 + 4);
  puVar1 = (undefined4 *)FUN_0043f690(local_40,param_1 + 0x34,local_34);
  *(undefined4 *)(param_1 + 0x34) = *puVar1;
  *(undefined4 *)(param_1 + 0x38) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3c) = puVar1[2];
  puVar1 = (undefined4 *)FUN_004cb300(local_4c,param_1 + 0x40,local_34);
  *(undefined4 *)(param_1 + 0x40) = *puVar1;
  *(undefined4 *)(param_1 + 0x44) = puVar1[1];
  *(undefined4 *)(param_1 + 0x48) = puVar1[2];
  return;
}

