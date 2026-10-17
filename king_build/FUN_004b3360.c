
undefined4 FUN_004b3360(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  int local_8c [2];
  uint local_84;
  undefined4 local_80;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643dd2;
  local_c = ExceptionList;
  local_80 = 0;
  ExceptionList = &local_c;
  FUN_004b2bf0(1);
  FUN_004b2770();
  *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  FUN_004a2550(local_8c,0);
  local_4 = 1;
  do {
    while( true ) {
      FUN_004b2bf0(1);
      puVar2 = (undefined4 *)FUN_004b27c0(local_7c,0);
      if (*(int *)*puVar2 == 0x5c) break;
      puVar2 = (undefined4 *)FUN_004b27c0(local_3c,0);
      if (*(int *)*puVar2 == 0x22) {
        puVar4 = &local_8e;
        local_8e = 0;
        FUN_004b8250(puVar4);
        FUN_0047ac10(puVar4);
        FUN_004b36a0();
        FUN_00455dc0(local_8c);
        local_80 = 1;
        local_4 = local_4 & 0xffffff00;
        FUN_00492340();
        ExceptionList = local_c;
        return param_1;
      }
      puVar2 = (undefined4 *)FUN_004b27c0(local_1c,0);
      local_8e = *(undefined1 *)*puVar2;
      puVar4 = &local_8e;
      FUN_004b8250(puVar4);
      FUN_0047ac10(puVar4);
LAB_004b35d0:
      FUN_004b2bf0(1);
      FUN_004b2770();
      *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    }
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
    FUN_004b2bf0(1);
    puVar2 = (undefined4 *)FUN_004b27c0(local_2c,0);
    if (*(int *)*puVar2 != 0x6e) {
      puVar2 = (undefined4 *)FUN_004b27c0(local_4c,0);
      if (*(int *)*puVar2 == 0x72) {
        local_8f = 0xd;
        if (local_8c[0] == 0) {
          FUN_004a5470(0,1);
        }
        if ((local_84 & 0x10000) != 0) {
          FUN_004a5470(4,1);
        }
        iVar3 = *(int *)(local_8c[0] + 0x10);
        if (iVar3 == *(int *)(local_8c[0] + 0x14)) {
          puVar4 = &local_8f;
          goto LAB_004b35c8;
        }
        puVar4 = &local_8f;
      }
      else {
        puVar2 = (undefined4 *)FUN_004b27c0(local_6c,0);
        if (*(int *)*puVar2 == 0x74) {
          local_8f = 9;
          if (local_8c[0] == 0) {
            FUN_004a5470(0,1);
          }
          if ((local_84 & 0x10000) != 0) {
            FUN_004a5470(4,1);
          }
          iVar3 = *(int *)(local_8c[0] + 0x10);
          if (iVar3 == *(int *)(local_8c[0] + 0x14)) {
            puVar4 = &local_8f;
LAB_004b35c8:
            FUN_0044be90(iVar3,puVar4);
            goto LAB_004b35d0;
          }
          puVar4 = &local_8f;
        }
        else {
          puVar2 = (undefined4 *)FUN_004b27c0(local_5c,0);
          local_8d = *(undefined1 *)*puVar2;
          if (local_8c[0] == 0) {
            FUN_004a5470(0,1);
          }
          if ((local_84 & 0x10000) != 0) {
            FUN_004a5470(4,1);
          }
          iVar3 = *(int *)(local_8c[0] + 0x10);
          if (iVar3 == *(int *)(local_8c[0] + 0x14)) {
            puVar4 = &local_8d;
            goto LAB_004b35c8;
          }
          puVar4 = &local_8d;
        }
      }
      iVar1 = local_8c[0];
      FUN_004608a0(iVar3,puVar4);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      goto LAB_004b35d0;
    }
    local_8f = 10;
    if (local_8c[0] == 0) {
      FUN_004a5470(0,1);
    }
    if ((local_84 & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    iVar1 = local_8c[0];
    iVar3 = *(int *)(local_8c[0] + 0x10);
    if (iVar3 == *(int *)(local_8c[0] + 0x14)) {
      FUN_0044be90(iVar3,&local_8f);
    }
    else {
      FUN_004608a0(iVar3,&local_8f);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    }
    FUN_004b2bf0(1);
    FUN_004b2770();
    *(int *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1;
  } while( true );
}

