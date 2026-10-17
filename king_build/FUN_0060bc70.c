
void __fastcall FUN_0060bc70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_004030a0();
    FUN_00631d5c(iVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

