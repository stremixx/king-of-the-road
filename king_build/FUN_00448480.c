
undefined4 * __thiscall FUN_00448480(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint _Size;
  int iVar5;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e1e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_10 = param_1;
  if (param_2 == 0) {
    piVar2 = (void *)0x0;
  }
  else {
    _Size = param_2 * 0x10;
    if (_Size < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        local_14 = 0x14;
        piVar2 = (int *)FUN_0045a160(_Size,&local_14);
        if (local_14 != 1) {
          puVar4 = (undefined4 *)((int)piVar2 + _Size);
          *(undefined4 **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = puVar4;
          iVar5 = 1;
          puVar1 = puVar4;
          if (local_14 != 2) {
            do {
              puVar4 = puVar1 + param_2 * 4;
              *puVar1 = puVar4;
              iVar5 = iVar5 + 1;
              puVar1 = puVar4;
            } while (local_14 + -1 != iVar5);
          }
          *puVar4 = 0;
        }
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
  param_1[2] = (void *)(param_2 * 0x10 + (int)piVar2);
  local_4 = 1;
  uVar3 = FUN_004663a0(piVar2,param_2,param_3,param_2);
  param_1[1] = uVar3;
  ExceptionList = local_c;
  return param_1;
}

