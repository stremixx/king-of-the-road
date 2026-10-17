
undefined4 * __thiscall FUN_0048f680(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint _Size;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640ab0;
  local_c = ExceptionList;
  iVar1 = (param_2[1] - *param_2) / 0x244;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    _Size = iVar1 * 0x244;
    if (_Size < 0x81) {
      param_2 = (int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      FUN_00401aa0();
      local_4 = 0;
      piVar3 = (int *)*param_2;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0044bcf0(_Size + 7 & 0xfffffff8);
      }
      else {
        *param_2 = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar3 = _malloc(_Size);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_00458210(_Size);
      }
    }
  }
  *param_1 = piVar3;
  param_1[1] = piVar3;
  param_1[2] = piVar3 + iVar1 * 0x91;
  local_4 = 1;
  uVar4 = FUN_00490550(*piVar2,piVar2[1],piVar3,param_2);
  param_1[1] = uVar4;
  ExceptionList = local_c;
  return param_1;
}

