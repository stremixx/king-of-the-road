
void __fastcall FUN_004439e0(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063df48;
  iVar3 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x78);
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pvStack_c = ExceptionList;
  for (; ExceptionList = ppvVar2, iVar5 != iVar3; iVar5 = iVar5 + 0x10) {
    FUN_00460d40(iVar5);
    ppvVar2 = ExceptionList;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  iVar3 = *(int *)(param_1 + 0x80) - (int)piVar1 >> 4;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 0x10;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      ExceptionList = pvStack_c;
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    FUN_00434030();
  }
  ExceptionList = pvStack_c;
  return;
}

