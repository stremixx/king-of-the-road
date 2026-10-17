
void * FUN_00461b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint _Size;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063f468;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd8;
  piVar3 = (void *)0x0;
  puVar2 = &stack0xffffffd8;
  if (param_1 != 0) {
    _Size = param_1 * 0x18;
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_8 = 0;
      piVar3 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar3 == (int *)0x0) {
        local_18 = 0x14;
        piVar3 = (int *)FUN_0045a160(_Size,&local_18);
        if (local_18 != 1) {
          puVar4 = (undefined4 *)((int)piVar3 + _Size);
          *(undefined4 **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = puVar4;
          iVar5 = 1;
          puVar1 = puVar4;
          if (local_18 != 2) {
            do {
              puVar4 = puVar1 + param_1 * 6;
              *puVar1 = puVar4;
              iVar5 = iVar5 + 1;
              puVar1 = puVar4;
            } while (local_18 + -1 != iVar5);
          }
          *puVar4 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar3;
      }
      DAT_0068c164 = 0;
      puVar2 = local_14;
    }
    else {
      local_14 = &stack0xffffffd8;
      piVar3 = _malloc(_Size);
      puVar2 = local_14;
      if (piVar3 == (void *)0x0) {
        piVar3 = (int *)FUN_00458210(_Size);
        puVar2 = local_14;
      }
    }
  }
  local_14 = puVar2;
  local_8 = 1;
  FUN_004661a0(param_2,param_3,piVar3,param_1);
  *unaff_FS_OFFSET = local_10;
  return piVar3;
}

