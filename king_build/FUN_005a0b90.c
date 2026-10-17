
void __fastcall FUN_005a0b90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064758b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x16f34);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar1 + 1;
    *puVar1 = 500;
    FUN_0061d173(puVar5,0xbc,500,FUN_005a0cd0,FUN_005a2c20);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x10) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0060a190(0x88762713,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_TRUCK_wasm_cpp_0067d368,0x690,s_Mar_19_2002_006714f8);
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 1) {
    iVar2 = 0;
    do {
      uVar4 = uVar4 + 1;
      *(int *)(iVar2 + 8 + *(int *)(param_1 + 0x10)) = iVar2 + 0xbc + *(int *)(param_1 + 0x10);
      iVar2 = iVar2 + 0xbc;
    } while (uVar4 < *(int *)(param_1 + 0xc) - 1U);
  }
  uVar4 = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + -0xb4 + *(int *)(param_1 + 0xc) * 0xbc) = 0;
  if (1 < *(uint *)(param_1 + 0xc)) {
    iVar2 = 0xbc;
    do {
      iVar3 = *(int *)(param_1 + 0x10) + iVar2;
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0xbc;
      *(int *)(iVar3 + 0xc) = iVar3 + -0xbc;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  uVar4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = 0;
    do {
      uVar4 = uVar4 + 1;
      *(int *)(*(int *)(param_1 + 0x10) + 0x10 + iVar2) = param_1;
      iVar2 = iVar2 + 0xbc;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
  FUN_004843e0();
  ExceptionList = local_c;
  return;
}

