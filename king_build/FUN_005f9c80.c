
void __fastcall FUN_005f9c80(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
    FUN_005e5e30((undefined4 *)(param_1 + 0x14));
    if (1 < *(int *)(param_1 + 0x30)) {
      do {
        local_10 = *(undefined4 *)(param_1 + 0x38);
        local_c = *(undefined4 *)(param_1 + 0x3c);
        local_8 = *(undefined4 *)(param_1 + 0x40);
        FUN_005e5e30(&local_10);
        FUN_005e4b90(&local_10);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}

