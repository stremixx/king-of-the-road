
undefined4 * __thiscall FUN_0047a210(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint _Size;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fe78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  piVar3 = (void *)0x0;
  _Size = param_2[2] - param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (_Size != 0) {
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
      piVar3 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0044bcf0(_Size + 7 & 0xfffffff8);
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar3 = _malloc(_Size);
      if (piVar3 == (void *)0x0) {
        piVar3 = (int *)FUN_00458210(_Size);
      }
    }
  }
  param_1[1] = piVar3;
  param_1[2] = piVar3;
  param_1[3] = (int)piVar3 + _Size;
  iVar1 = param_2[2];
  iVar2 = param_2[1];
  FUN_0061c980(piVar3,iVar2,iVar1 - iVar2);
  param_1[2] = (int)piVar3 + (iVar1 - iVar2);
  ExceptionList = local_c;
  return param_1;
}

