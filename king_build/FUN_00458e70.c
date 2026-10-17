
void * FUN_00458e70(int param_1,int param_2,int param_3)

{
  uint _Size;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ee38;
  local_c = ExceptionList;
  if (param_1 == 0) {
    piVar4 = (void *)0x0;
    ExceptionList = &local_c;
  }
  else {
    _Size = param_1 * 8;
    if (_Size < 0x81) {
      ExceptionList = &local_c;
      FUN_00401aa0();
      local_4 = 0;
      piVar4 = *(int **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      if (piVar4 == (int *)0x0) {
        param_1 = 0x14;
        piVar4 = (int *)FUN_0045a160(_Size,&param_1);
        if (param_1 != 1) {
          puVar3 = (undefined4 *)((int)piVar4 + _Size);
          *(undefined4 **)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = puVar3;
          iVar5 = 1;
          puVar1 = puVar3;
          if (param_1 != 2) {
            do {
              puVar3 = puVar1 + iVar2 * 2;
              *puVar1 = puVar3;
              iVar5 = iVar5 + 1;
              puVar1 = puVar3;
            } while (param_1 + -1 != iVar5);
          }
          *puVar3 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4) = *piVar4;
      }
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &local_c;
      piVar4 = _malloc(_Size);
      if (piVar4 == (void *)0x0) {
        piVar4 = (int *)FUN_00458210(_Size);
      }
    }
  }
  FUN_0061c980(piVar4,param_2,(param_3 - param_2 >> 3) << 3);
  ExceptionList = local_c;
  return piVar4;
}

