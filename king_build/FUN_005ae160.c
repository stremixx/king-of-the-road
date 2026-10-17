
void __fastcall FUN_005ae160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x20ec) = DAT_00701dd4;
  uVar1 = DAT_00701ddc;
  *(undefined4 *)(param_1 + 0x20f0) = DAT_00701dd8;
  *(undefined4 *)(param_1 + 0x20f4) = uVar1;
  if ((*(int *)(param_1 + 0x21ac) == 1) || (*(int *)(param_1 + 0x21ac) == 2)) {
    iVar2 = *(int *)(param_1 + 0x2030);
    while (0 < iVar2) {
      FUN_0050b580(param_1);
      iVar2 = *(int *)(param_1 + 0x2030) + -1;
      *(int *)(param_1 + 0x2030) = iVar2;
    }
  }
  return;
}

