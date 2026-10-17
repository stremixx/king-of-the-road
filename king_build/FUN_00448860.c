
undefined4 * __thiscall FUN_00448860(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    piVar2 = (undefined4 *)0x0;
  }
  else {
    uVar4 = param_2 * 4;
    local_10 = param_1;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      local_4 = 0;
      piVar2 = *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      if (piVar2 == (int *)0x0) {
        uVar4 = uVar4 + 7 & 0xfffffff8;
        local_10 = (undefined4 *)0x14;
        piVar2 = (int *)FUN_0045a160(uVar4,&local_10);
        if (local_10 != (undefined4 *)0x1) {
          puVar3 = (undefined4 *)((int)piVar2 + uVar4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar3;
          iVar5 = 1;
          puVar1 = puVar3;
          if (local_10 != (undefined4 *)0x2) {
            do {
              puVar3 = (undefined4 *)((int)puVar1 + uVar4);
              *puVar1 = puVar3;
              iVar5 = iVar5 + 1;
              puVar1 = puVar3;
            } while ((int)local_10 + -1 != iVar5);
          }
          *puVar3 = 0;
        }
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = *piVar2;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar2 = _malloc(uVar4);
      if (piVar2 == (undefined4 *)0x0) {
        piVar2 = (int *)FUN_00458210(uVar4);
      }
    }
  }
  *param_1 = piVar2;
  param_1[1] = piVar2;
  param_1[2] = piVar2 + param_2;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *piVar2 = *param_3;
    piVar2 = piVar2 + 1;
  }
  param_1[1] = piVar2;
  ExceptionList = local_c;
  return param_1;
}

