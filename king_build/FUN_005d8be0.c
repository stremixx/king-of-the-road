
void __thiscall FUN_005d8be0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198 [100];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x1d4) != param_2) {
    if (*(int *)(param_1 + 0x1d4) == *(int *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x4c) + 0x24)) {
      FUN_005d2520(s_Try_to_unload_module_with_viewer_00681a74,*(undefined4 *)(param_2 + 0x3c));
    }
    local_1b0 = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_19c = 0;
    local_4 = 0;
    local_8 = 0;
    puVar2 = local_198;
    for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_1ac = *(undefined4 *)(param_1 + 0x1d4);
    local_1a8 = param_2;
    FUN_005ea330(FUN_005d8c80,&local_1b0);
  }
  return;
}

