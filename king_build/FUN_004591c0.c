
int * FUN_004591c0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint _Size;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ee78;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_2 != 0) {
    _Size = param_2 + 8U & 0xfffffff8;
    if (_Size == 0) {
      piVar2 = (void *)0x0;
    }
    else if (_Size < 0x81) {
      FUN_00401aa0();
      local_8 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_0044bcf0(_Size);
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar2;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar2 = _malloc(_Size);
      if (piVar2 == (void *)0x0) {
        piVar2 = (int *)FUN_00458210(_Size);
      }
    }
    FUN_0061c980(piVar2,param_1,param_2);
    *(undefined1 *)((int)piVar2 + param_2) = 0;
    local_8 = 1;
    piVar1 = (int *)FUN_0044b6e0(0x18);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_2;
      piVar1[1] = 1;
      piVar1[5] = (int)piVar2;
      piVar1[4] = (int)piVar2;
      piVar1[2] = piVar1[2] & 0xffffff00;
      *(undefined1 *)(piVar1 + 3) = 1;
      *(undefined1 *)((int)piVar1 + 0xd) = 0;
      *unaff_FS_OFFSET = local_10;
      return piVar1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return (int *)0x0;
}

