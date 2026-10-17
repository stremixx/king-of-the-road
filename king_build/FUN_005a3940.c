
void __thiscall FUN_005a3940(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_88 [12];
  int iStack_58;
  int iStack_54;
  undefined1 *puStack_50;
  int local_4c;
  char *local_48;
  undefined4 *local_44;
  undefined1 local_30 [48];
  
  if (param_2 != 0) {
    local_44 = (undefined4 *)param_2;
    local_48 = (char *)0x5a395b;
    FUN_005a3640();
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == 2) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x70);
    }
    else if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x3c);
    }
    else if (iVar3 == 0x11) {
      iVar3 = *(int *)(param_2 + 0x44);
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 == 0) {
        if (*(int *)(*(int *)(param_2 + 0x40) + 0x10) == 0xb) {
          *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x40) + 0x38;
        }
        else {
          local_44 = (undefined4 *)0x0;
          local_48 = s_Illegel_type_of_node_for__Motion_0067d830;
          local_4c = 0x5a399d;
          FUN_005d2520();
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    local_44 = *(undefined4 **)(param_1 + 0x20);
    local_48 = (char *)0x5a39b9;
    uVar1 = FUN_005e1180();
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    puVar4 = (undefined4 *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x30) == 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x34);
      local_4c = *puVar2;
      local_48 = (char *)puVar2[1];
      local_44 = (undefined4 *)puVar2[2];
      puStack_50 = local_30;
      iStack_54 = 0x5a39f3;
      puVar2 = (undefined4 *)FUN_005ab330();
      puVar5 = puVar4;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    else {
      local_48 = (char *)0x5a39cf;
      local_44 = puVar4;
      FUN_005f1c30();
    }
    local_44 = (undefined4 *)(param_1 + 200);
    local_48 = (char *)(param_1 + 0xc0);
    local_4c = param_1 + 0xb8;
    puStack_50 = (undefined1 *)(param_1 + 0xb0);
    iStack_54 = param_1 + 0xa8;
    iStack_58 = param_1 + 0xa0;
    puVar2 = puVar4;
    puVar5 = auStack_88;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_005de000();
    puVar2 = (undefined4 *)(param_1 + 0x6c);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

