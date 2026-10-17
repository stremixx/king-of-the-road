
undefined4 * __thiscall FUN_00459680(undefined4 *param_1,int *param_2)

{
  uint _Size;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063eee0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar1 = param_2[1] - *param_2 >> 2;
  piVar2 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    _Size = iVar1 * 4;
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_0044bcf0(_Size + 7 & 0xfffffff8);
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
  }
  *param_1 = piVar2;
  param_1[1] = piVar2;
  param_1[2] = (void *)((int)piVar2 + iVar1 * 4);
  local_4 = 1;
  uVar3 = FUN_0046b5a0(*param_2,param_2[1],piVar2,iVar1);
  param_1[1] = uVar3;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

