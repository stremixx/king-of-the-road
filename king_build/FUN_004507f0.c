
undefined4 * __thiscall FUN_004507f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint _Size;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e750;
  local_c = ExceptionList;
  iVar1 = (param_2[1] - *param_2) / 0x18;
  piVar2 = (void *)0x0;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    _Size = iVar1 * 0x18;
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
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
  }
  *param_1 = piVar2;
  param_1[1] = piVar2;
  param_1[2] = (void *)((int)piVar2 + iVar1 * 0x18);
  local_4 = 1;
  uVar3 = FUN_004661a0(*param_2,param_2[1],piVar2,iVar1);
  param_1[1] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

