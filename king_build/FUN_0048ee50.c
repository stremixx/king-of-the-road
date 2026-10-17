
void __thiscall FUN_0048ee50(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_920;
  undefined4 local_91c [144];
  undefined4 local_6dc;
  undefined4 local_6d8 [144];
  undefined4 local_498;
  undefined1 local_494 [580];
  undefined1 local_250 [580];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00640a91;
  local_c = ExceptionList;
  if (&stack0x00000000 != (undefined1 *)0x91c) {
    puVar1 = param_1;
    puVar5 = local_91c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar4 = 1;
  local_6dc = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  local_920 = param_1;
  if (1 < (uint)((param_1[0x90] * 0x18) / 0x18)) {
    do {
      local_920 = local_920 + 6;
      if (&stack0x00000000 != (undefined1 *)0x6d8) {
        puVar1 = local_920;
        puVar5 = local_6d8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      local_498 = 1;
      local_4._0_1_ = 1;
      FUN_0048f0b0(local_494,param_3);
      local_4 = CONCAT31(local_4._1_3_,2);
      puVar1 = (undefined4 *)FUN_0048f370(local_250,local_6d8);
      iVar2 = param_1[0x90];
      puVar5 = local_91c;
      for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      local_4 = local_4 & 0xffffff00;
    } while (uVar4 < (uint)((iVar2 * 0x18) / 0x18));
  }
  puVar1 = local_91c;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  ExceptionList = local_c;
  return;
}

