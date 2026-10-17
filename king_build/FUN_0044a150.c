
undefined4 * FUN_0044a150(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar3 = param_2;
  puStack_8 = &LAB_0063e3c7;
  local_c = ExceptionList;
  if (param_2 == (char *)0x0) {
    *param_1 = 0xffffffff;
    return param_1;
  }
  param_2 = (char *)0x0;
  cVar2 = *pcVar3;
  local_4 = 0;
  pcVar4 = pcVar3;
  while (cVar2 != '\0') {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  ExceptionList = &local_c;
  puVar5 = (undefined4 *)FUN_0044f2e0(0,pcVar3,(int)pcVar4 - (int)pcVar3);
  if (param_2 != (char *)0x0) {
    FUN_0044b580();
  }
  param_2 = (char *)puVar5;
  FUN_0044b150(local_14,&param_2);
  puVar5 = (undefined4 *)param_2;
  if (local_14[0] != 0) {
    local_4 = 0xffffffff;
    *param_1 = *(undefined4 *)(local_14[0] + 8);
    if ((param_2 != (char *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)((int)param_2 + 4)), LVar6 == 0)) {
      switch((char)puVar5[2]) {
      case '\0':
        FUN_00459c80();
        FUN_0044b440(puVar5,0x18);
        ExceptionList = local_c;
        return param_1;
      case '\x01':
        FUN_0045aa00();
        FUN_0044b580();
        FUN_0044b580();
        FUN_0044b440(puVar5,0x1c);
        ExceptionList = local_c;
        return param_1;
      case '\x02':
        FUN_00459f00();
        FUN_0044b440(puVar5 + -1,0x28);
        break;
      case '\x03':
        FUN_00459e60();
        FUN_0044b440(puVar5,0x1c);
        ExceptionList = local_c;
        return param_1;
      }
    }
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = 0xffffffff;
  local_4 = 0xffffffff;
  if ((param_2 != (char *)0x0) &&
     (LVar6 = InterlockedDecrement((LONG *)((int)param_2 + 4)), LVar6 == 0)) {
    switch((char)puVar5[2]) {
    case '\0':
      if (puVar5[5] != puVar5[4]) {
        FUN_0045aa00();
      }
      FUN_0045a9e0(puVar5[5],*puVar5);
      FUN_0044b440(puVar5,0x18);
      ExceptionList = local_c;
      return param_1;
    case '\x01':
      FUN_0045aa00();
      FUN_0044b580();
      FUN_0044b580();
      uVar7 = 0x1c;
      break;
    case '\x02':
      puVar5 = puVar5 + -1;
      *puVar5 = &PTR_FUN_0064a5a0;
      local_4 = 2;
      FUN_0044b580();
      *puVar5 = &PTR_LAB_0064a598;
      local_4 = 0xffffffff;
      FUN_00459e60();
      uVar7 = 0x28;
      break;
    case '\x03':
      FUN_0045aa00();
      if ((*(char *)(puVar5 + 6) != '\0') && ((undefined4 *)puVar5[5] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)puVar5[5])(1);
      }
      uVar7 = 0x1c;
      break;
    default:
      goto switchD_0044a31c_default;
    }
    FUN_0044b440(puVar5,uVar7);
  }
switchD_0044a31c_default:
  ExceptionList = local_c;
  return param_1;
}

