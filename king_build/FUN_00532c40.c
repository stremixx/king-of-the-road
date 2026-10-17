
undefined4 FUN_00532c40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_5c [8];
  undefined1 *puStack_3c;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_3c = (undefined1 *)local_30;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_30[0] = 0;
  puVar2 = auStack_5c;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = s_UNDEFINED_MODULE_0066c638;
  local_1c = s_UNDEFINED_ROOM_0066c628;
  local_18 = 0;
  local_14 = 0;
  FUN_00438e50();
  if ((local_30[0] & 0xc) == 0) {
    return 0;
  }
  return 1;
}

