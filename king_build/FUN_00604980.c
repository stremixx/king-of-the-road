
void __fastcall FUN_00604980(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00603d80(*(undefined4 *)(param_1 + 0x1c));
  iVar2 = FUN_00603d80(*(undefined4 *)(param_1 + 0x20));
  iVar3 = iVar1;
  if (iVar1 <= iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  *(int *)(param_1 + 0x40) = iVar2 - iVar1;
  if (iVar3 < -10000) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffd8f0;
  }
  if (iVar2 - iVar1 < -10000) {
    *(undefined4 *)(param_1 + 0x40) = 0xffffd8f0;
  }
  if (10000 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 10000;
  }
  return;
}

