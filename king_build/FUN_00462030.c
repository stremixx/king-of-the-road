
void * FUN_00462030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063f4a8;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd8;
  if (param_1 == 0) {
    piVar3 = (void *)0x0;
    local_14 = &stack0xffffffd8;
  }
  else {
    uVar4 = param_1 * 4;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      local_8 = 0;
      piVar3 = *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      if (piVar3 == (int *)0x0) {
        uVar4 = uVar4 + 7 & 0xfffffff8;
        local_18 = 0x14;
        piVar3 = (int *)FUN_0045a160(uVar4,&local_18);
        if (local_18 != 1) {
          puVar2 = (undefined4 *)((int)piVar3 + uVar4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar2;
          iVar5 = 1;
          puVar1 = puVar2;
          if (local_18 != 2) {
            do {
              puVar2 = (undefined4 *)((int)puVar1 + uVar4);
              *puVar1 = puVar2;
              iVar5 = iVar5 + 1;
              puVar1 = puVar2;
            } while (local_18 + -1 != iVar5);
          }
          *puVar2 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      local_14 = &stack0xffffffd8;
      piVar3 = _malloc(uVar4);
      if (piVar3 == (void *)0x0) {
        piVar3 = (int *)FUN_00458210(uVar4);
      }
    }
  }
  local_8 = 1;
  FUN_0046b5a0(param_2,param_3,piVar3,param_1);
  *unaff_FS_OFFSET = local_10;
  return piVar3;
}

