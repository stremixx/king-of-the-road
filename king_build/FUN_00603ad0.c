
undefined4 __thiscall FUN_00603ad0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00603c50();
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[3] = param_2;
    param_1[2] = param_2;
    *param_1 = param_2;
    param_1[4] = param_3;
    local_10 = 0;
    param_1[1] = param_3;
    local_8 = 0;
    local_14 = 0x46464952;
    local_4 = 0;
    local_c = 0x45564157;
    cVar1 = FUN_00603cc0(&local_14,0);
    if (cVar1 == '\0') {
      puVar2 = (undefined2 *)FUN_00631d33(0x12);
      param_1[5] = (int)puVar2;
      *puVar2 = 1;
      *(undefined2 *)(param_1[5] + 2) = 1;
      *(undefined4 *)(param_1[5] + 4) = 0x2b11;
      *(undefined4 *)(param_1[5] + 8) = 0x2b11;
      *(undefined2 *)(param_1[5] + 0xc) = 1;
      *(undefined2 *)(param_1[5] + 0xe) = 8;
      *(undefined2 *)(param_1[5] + 0x10) = 0;
      return 1;
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_28 = 0x20746d66;
    cVar1 = FUN_00603cc0(&local_28,&local_14);
    if (((cVar1 != '\0') && (param_1[5] = param_1[3], *(short *)param_1[3] == 1)) &&
       (cVar1 = FUN_00603c90(&local_28), cVar1 != '\0')) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_28 = 0x61746164;
      local_18 = 0;
      cVar1 = FUN_00603cc0(&local_28,&local_14);
      if (cVar1 != '\0') {
        *param_1 = param_1[3];
        param_1[1] = local_24;
        cVar1 = FUN_00603c90(&local_28);
        if ((cVar1 != '\0') && (cVar1 = FUN_00603c90(&local_14), cVar1 != '\0')) {
          return 1;
        }
      }
    }
    FUN_00603c50();
  }
  return 0;
}

