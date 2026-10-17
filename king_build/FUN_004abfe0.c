
void __thiscall FUN_004abfe0(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006435c8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  iVar5 = (param_2 >> 9) + 1;
  local_18 = (int *)((param_2 >> 9) + 3);
  local_1c = (int *)0x8;
  ppiVar3 = &local_18;
  if (local_18 < (int *)0x9) {
    ppiVar3 = &local_1c;
  }
  piVar2 = *ppiVar3;
  ExceptionList = &local_10;
  param_1[1] = piVar2;
  piVar4 = (void *)0x0;
  puVar1 = &stack0xffffffd4;
  if (piVar2 != (int *)0x0) {
    local_1c = (int *)((int)piVar2 * 4);
    if (local_1c < (int *)0x81) {
      puVar1 = (undefined1 *)((int)local_1c + 7);
      local_1c = (int *)(&DAT_0068c120 + ((uint)puVar1 >> 3) * 4);
      FUN_00401aa0();
      local_8 = 0;
      piVar4 = (int *)*local_1c;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_0044bcf0((uint)puVar1 & 0xfffffff8);
      }
      else {
        *local_1c = *piVar4;
      }
      DAT_0068c164 = 0;
      puVar1 = local_14;
    }
    else {
      local_14 = &stack0xffffffd4;
      piVar4 = _malloc((size_t)local_1c);
      puVar1 = local_14;
      if (piVar4 == (void *)0x0) {
        piVar4 = (int *)FUN_00458210(local_1c);
        puVar1 = local_14;
      }
    }
  }
  local_14 = puVar1;
  *param_1 = piVar4;
  local_8 = 1;
  piVar4 = (int *)((int)piVar4 + ((uint)(param_1[1] - iVar5) >> 1) * 4);
  piVar2 = piVar4 + iVar5;
  FUN_004ac400(piVar4,piVar2);
  param_1[5] = piVar4;
  iVar5 = *piVar4;
  param_1[3] = iVar5;
  param_1[4] = iVar5 + 0x200;
  param_1[9] = piVar2 + -1;
  iVar5 = piVar2[-1];
  param_1[7] = iVar5;
  param_1[8] = iVar5 + 0x200;
  param_1[2] = param_1[3];
  param_1[6] = (param_2 & 0x1ff) + param_1[7];
  ExceptionList = local_10;
  return;
}

