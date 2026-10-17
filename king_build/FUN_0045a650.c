
uint * FUN_0045a650(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  LONG LVar5;
  uint *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063efa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (uint *)FUN_0044b6e0(0x1c);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    piVar2 = param_2;
    if (*(byte *)((int)param_2 + 0xd) <= *(byte *)((int)param_1 + 0xd)) {
      piVar2 = param_1;
    }
    cVar1 = *(char *)((int)piVar2 + 0xd);
    *puVar3 = *param_1 + *param_2;
    puVar3[1] = 1;
    puVar3[5] = (uint)param_1;
    *(char *)((int)puVar3 + 0xd) = cVar1 + '\x01';
    puVar3[2] = puVar3[2] & 0xffffff01 | 1;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[4] = 0;
    puVar3[6] = (uint)param_2;
  }
  puVar6 = (uint *)0x0;
  if ((0x14 < *(byte *)((int)puVar3 + 0xd)) &&
     ((*puVar3 < 1000 || (0x2d < *(byte *)((int)puVar3 + 0xd))))) {
    local_8 = 0;
    puVar4 = (uint *)FUN_00462850(puVar3);
    LVar5 = InterlockedDecrement((LONG *)(puVar3 + 1));
    if (LVar5 == 0) {
      switch((char)puVar3[2]) {
      case '\0':
        if (puVar3[5] != puVar3[4]) {
          FUN_0045aa00();
        }
        FUN_0045a9e0(puVar3[5],*puVar3);
        FUN_0044b440(puVar3,0x18);
        ExceptionList = local_10;
        return puVar4;
      case '\x01':
        FUN_0045aa00();
        FUN_0044b580();
        FUN_0044b580();
        FUN_0044b440(puVar3,0x1c);
        ExceptionList = local_10;
        return puVar4;
      case '\x02':
        if (puVar3 != (uint *)0x0) {
          puVar6 = puVar3 + -1;
        }
        FUN_00459f00();
        FUN_0044b440(puVar6,0x28);
        break;
      case '\x03':
        FUN_00459e60();
        FUN_0044b440(puVar3,0x1c);
        ExceptionList = local_10;
        return puVar4;
      }
    }
    ExceptionList = local_10;
    return puVar4;
  }
  ExceptionList = local_10;
  return puVar3;
}

