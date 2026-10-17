
void FUN_00422e50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_9c [7];
  undefined4 uStack_80;
  uint *puStack_7c;
  undefined4 local_70 [8];
  undefined1 local_50 [32];
  uint local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_30[0] = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = s_UNDEFINED_MODULE_0066c638;
  local_1c = s_UNDEFINED_ROOM_0066c628;
  local_18 = 0;
  local_14 = 0;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  do {
    puStack_7c = (uint *)local_50;
    uStack_80 = 0x422ea2;
    puVar1 = (undefined4 *)FUN_00480310();
    puVar3 = puVar1;
    puVar4 = local_70;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puStack_7c = local_30;
    puVar3 = auStack_9c;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00438e50();
  } while ((local_30[0] & 0x60) != 0);
  puVar1 = local_70;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

