
void * FUN_0047b620(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint _Size;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ff88;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  if (param_1 == 0) {
    piVar3 = (void *)0x0;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd8;
  }
  else {
    _Size = param_1 * 8;
    if (_Size < 0x81) {
      ExceptionList = &local_10;
      FUN_00401aa0();
      local_8 = 0;
      piVar3 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar3 == (int *)0x0) {
        local_18 = 0x14;
        piVar3 = (int *)FUN_0045a160(_Size,&local_18);
        if (local_18 != 1) {
          puVar2 = (undefined4 *)((int)piVar3 + _Size);
          *(undefined4 **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = puVar2;
          iVar4 = 1;
          puVar1 = puVar2;
          if (local_18 != 2) {
            do {
              puVar2 = puVar1 + param_1 * 2;
              *puVar1 = puVar2;
              iVar4 = iVar4 + 1;
              puVar1 = puVar2;
            } while (local_18 + -1 != iVar4);
          }
          *puVar2 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd8;
      piVar3 = _malloc(_Size);
      if (piVar3 == (void *)0x0) {
        piVar3 = (int *)FUN_00458210(_Size);
      }
    }
  }
  local_8 = 1;
  FUN_0047d690(param_2,param_3,piVar3,param_1);
  ExceptionList = local_10;
  return piVar3;
}

