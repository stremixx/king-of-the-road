
void __fastcall FUN_005062e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00505fd0(0);
  *(undefined4 *)(param_1 + 0x8bc) = uVar1;
  uVar1 = FUN_00505fd0(1);
  *(undefined4 *)(param_1 + 0x8c0) = uVar1;
  uVar1 = FUN_00505fd0(2);
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  iVar2 = FUN_00505fd0(3);
  *(int *)(param_1 + 0x8c8) = iVar2;
  if ((((*(int *)(param_1 + 0x8bc) != 0) && (*(int *)(param_1 + 0x8c0) != 0)) &&
      (*(int *)(param_1 + 0x8c4) != 0)) && (iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x8b8) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  return;
}

