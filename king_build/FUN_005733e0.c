
void __fastcall FUN_005733e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_22c [48];
  undefined4 local_1fc [124];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646fab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f240;
  param_1[0x44] = &PTR_LAB_0064f108;
  param_1[0x62] = &PTR_LAB_0064f104;
  param_1[4] = &PTR_LAB_0064f154;
  puVar6 = local_1fc;
  for (iVar5 = 0x31; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4 = 0;
  thunk_FUN_00554c10();
  FUN_0041d3f0(param_1 + 0x1427);
  uVar1 = FUN_0057d570(local_22c);
  FUN_0057d5d0(uVar1);
  uVar2 = FUN_004cf600();
  uVar3 = FUN_004cf610(uVar2);
  iVar5 = FUN_004cf630(uVar3);
  iVar4 = FUN_004cf620();
  FUN_004cd6a0(iVar4 + iVar5 * 1000,uVar3,uVar2,uVar1);
  FUN_005e48c0();
  local_4 = 0xffffffff;
  FUN_00544520();
  ExceptionList = local_c;
  return;
}

