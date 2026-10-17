
/* WARNING: Removing unreachable block (ram,0x00477982) */
/* WARNING: Removing unreachable block (ram,0x00477994) */
/* WARNING: Removing unreachable block (ram,0x004779af) */
/* WARNING: Removing unreachable block (ram,0x00477990) */
/* WARNING: Removing unreachable block (ram,0x00477a3e) */
/* WARNING: Removing unreachable block (ram,0x00477a57) */
/* WARNING: Removing unreachable block (ram,0x00477a7e) */
/* WARNING: Removing unreachable block (ram,0x00477a80) */
/* WARNING: Removing unreachable block (ram,0x00477b15) */
/* WARNING: Removing unreachable block (ram,0x00477a4f) */

void FUN_00477940(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x20);
    iVar3 = *(int *)(iVar1 + 0x20);
    iVar2 = *(int *)(iVar1 + 0x1c);
    for (iVar5 = iVar2; iVar5 != iVar3; iVar5 = iVar5 + 0x90) {
      FUN_00461b20(0);
    }
    iVar4 = (int)((ulonglong)((longlong)(iVar4 - iVar2) * -0x38e38e39) >> 0x20);
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * 0x90;
  }
  iVar1 = *(int *)(param_1 + 0x200);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x20);
    iVar3 = *(int *)(iVar1 + 0x20);
    iVar2 = *(int *)(iVar1 + 0x1c);
    for (iVar5 = iVar2; iVar5 != iVar3; iVar5 = iVar5 + 0x90) {
      FUN_00461b20(0);
    }
    iVar4 = (int)((ulonglong)((longlong)(iVar4 - iVar2) * -0x38e38e39) >> 0x20);
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * 0x90;
  }
  return;
}

