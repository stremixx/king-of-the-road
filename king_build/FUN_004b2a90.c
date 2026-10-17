
void __thiscall FUN_004b2a90(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char local_81 [129];
  
  FUN_0061c369(local_81 + 1,s___d__d__00670458,*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44));
  pcVar3 = local_81;
  uVar2 = 0xffffffff;
  do {
    pcVar3 = pcVar3 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
  } while (*pcVar3 != '\0');
  FUN_0044c1c0(*(undefined4 *)(param_2 + 4),local_81 + 1,local_81 + ~uVar2);
  FUN_0044c1c0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38));
  puVar1 = *(undefined1 **)(param_2 + 4);
  local_81[0] = '\n';
  if (puVar1 == *(undefined1 **)(param_2 + 8)) {
    FUN_0044be90(puVar1,local_81);
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 10;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x44) != 1 && -1 < *(int *)(param_1 + 0x44) + -1) {
    do {
      puVar1 = *(undefined1 **)(param_2 + 4);
      local_81[0] = ' ';
      if (puVar1 == *(undefined1 **)(param_2 + 8)) {
        FUN_0044be90(puVar1,local_81);
      }
      else {
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 0x20;
        }
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x44) + -1);
  }
  puVar1 = *(undefined1 **)(param_2 + 4);
  local_81[0] = '^';
  if (puVar1 == *(undefined1 **)(param_2 + 8)) {
    FUN_0044be90(puVar1,local_81);
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x5e;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar1 = *(undefined1 **)(param_2 + 4);
  local_81[0] = '\n';
  if (puVar1 == *(undefined1 **)(param_2 + 8)) {
    FUN_0044be90(puVar1,local_81);
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 10;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar1 = *(undefined1 **)(param_2 + 4);
  local_81[0] = '\0';
  if (puVar1 != *(undefined1 **)(param_2 + 8)) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    return;
  }
  FUN_0044be90(puVar1,local_81);
  return;
}

