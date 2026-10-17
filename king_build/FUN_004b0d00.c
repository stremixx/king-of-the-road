
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b0d00(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char local_81 [129];
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar3 = param_2[1];
    local_81[0] = '#';
    if (iVar3 == param_2[2]) {
      FUN_0044be90(iVar3,local_81);
    }
    else {
      FUN_004608a0(iVar3,local_81);
      param_2[1] = param_2[1] + 1;
    }
    iVar3 = param_2[1];
    local_81[0] = 'i';
    if (iVar3 == param_2[2]) {
      FUN_0044be90(iVar3,local_81);
    }
    else {
      FUN_004608a0(iVar3,local_81);
      param_2[1] = param_2[1] + 1;
    }
  }
  FUN_0061c369(local_81 + 1,&DAT_00670350,*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  pcVar5 = local_81;
  uVar4 = 0xffffffff;
  do {
    pcVar5 = pcVar5 + 1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
  } while (*pcVar5 != '\0');
  FUN_0044c1c0(param_2[1],local_81 + 1,local_81 + ~uVar4);
  pcVar5 = (char *)*param_2;
  if (pcVar5 != (char *)param_2[1]) {
    do {
      iVar3 = FUN_0061e299((int)*pcVar5);
      if (iVar3 == 0x45) {
        pcVar2 = (char *)param_2[1];
        local_81[0] = '#';
        if ((pcVar2 == (char *)param_2[2]) || (pcVar5 != pcVar2)) {
          FUN_0044be90(pcVar5,local_81);
        }
        else {
          if (pcVar2 != (char *)0x0) {
            *pcVar2 = '#';
          }
          param_2[1] = param_2[1] + 1;
        }
        break;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != (char *)param_2[1]);
  }
  if (*(double *)(param_1 + 0x18) != _DAT_0064a668) {
    puVar1 = (undefined1 *)param_2[1];
    local_81[0] = '@';
    if (puVar1 == (undefined1 *)param_2[2]) {
      FUN_0044be90(puVar1,local_81);
    }
    else {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0x40;
      }
      param_2[1] = param_2[1] + 1;
    }
    FUN_0061c369(local_81 + 1,&DAT_00670350,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
    pcVar5 = local_81;
    uVar4 = 0xffffffff;
    do {
      pcVar5 = pcVar5 + 1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
    } while (*pcVar5 != '\0');
    FUN_0044c1c0(param_2[1],local_81 + 1,local_81 + ~uVar4);
    pcVar5 = (char *)*param_2;
    if (pcVar5 != (char *)param_2[1]) {
      do {
        iVar3 = FUN_0061e299((int)*pcVar5);
        if (iVar3 == 0x45) {
          pcVar2 = (char *)param_2[1];
          local_81[0] = '#';
          if ((pcVar2 == (char *)param_2[2]) || (pcVar5 != pcVar2)) {
            FUN_0044be90(pcVar5,local_81);
          }
          else {
            if (pcVar2 != (char *)0x0) {
              *pcVar2 = '#';
            }
            param_2[1] = param_2[1] + 1;
          }
          break;
        }
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != (char *)param_2[1]);
    }
  }
  puVar1 = (undefined1 *)param_2[1];
  local_81[0] = '\0';
  if (puVar1 == (undefined1 *)param_2[2]) {
    FUN_0044be90(puVar1,local_81);
    return;
  }
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  param_2[1] = param_2[1] + 1;
  return;
}

