
/* WARNING: Removing unreachable block (ram,0x0045695c) */
/* WARNING: Removing unreachable block (ram,0x00456983) */
/* WARNING: Removing unreachable block (ram,0x00456966) */
/* WARNING: Removing unreachable block (ram,0x004568d8) */

int FUN_00456830(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar5 = param_4;
  uVar4 = param_3;
  iVar1 = param_2;
  puStack_8 = &LAB_0063ec38;
  piVar2 = (int *)0x0;
  local_14 = (int *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_1 != iVar1; param_1 = param_1 + 0x68) {
    if (uVar4 == (*(uint *)(param_1 + 0x30) & uVar5)) {
      if (piVar2 == (int *)0x0) {
        FUN_0045d300(0,&param_1);
        piVar2 = local_14;
      }
      else {
        piVar3 = (int *)0x0;
        if (piVar2 != (int *)0x0) {
          *piVar2 = param_1;
          piVar3 = local_14;
        }
        local_14 = piVar3 + 1;
        piVar2 = local_14;
      }
    }
  }
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return iVar1;
  }
  uVar4 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
  uVar5 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_5 + 0xdc) = uVar4;
  *(uint *)(param_5 + 0xe0) = uVar5;
  *(int *)(param_5 + uVar4 * 4) = *(int *)(param_5 + uVar4 * 4) - *(int *)(param_5 + uVar5 * 4);
  ExceptionList = local_c;
  return *(int *)((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)((int)piVar2 >> 2)) * 4
                 );
}

