
void __fastcall FUN_004f1d10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 0xdd4);
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x19bb) = 0;
  *(undefined1 *)(param_1 + 0x19bc) = 1;
  if (0 < iVar1) {
    do {
      if ((*(char *)(param_1 + 0x19bc) == '\0') || (*(char *)(iVar2 + 0x19c4 + param_1) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0x19bc) = uVar3;
      if ((*(char *)(param_1 + 0x19bb) == '\0') && (*(char *)(iVar2 + 0x19c4 + param_1) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      *(undefined1 *)(param_1 + 0x19bb) = uVar3;
    } while (iVar2 < iVar1);
  }
  if (3 < iVar1) {
    if ((*(char *)(param_1 + 0x19c4) == '\0') || (*(char *)(param_1 + 0x19c6) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x19c0) = uVar3;
    if (3 < iVar1) {
      if ((*(char *)(param_1 + 0x19c5) == '\0') || (*(char *)(param_1 + 0x19c7) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0x19c1) = uVar3;
    }
  }
  if ((*(char *)(param_1 + 0x19c4) == '\0') || (*(char *)(param_1 + 0x19c5) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x19be) = uVar3;
  if (3 < iVar1) {
    if ((*(char *)(param_1 + 0x19c6) == '\0') || (*(char *)(param_1 + 0x19c7) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x19bf) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x19bd) = *(undefined1 *)(param_1 + 0x19bc);
  if (((*(char *)(param_1 + 0x19c4) == '\0') && (*(short *)(param_1 + 0x19a4) == 0)) ||
     ((*(char *)(param_1 + 0x19c5) == '\0' && (*(short *)(param_1 + 0x19a6) == 0)))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  *(char *)(param_1 + 0x19c2) = cVar4;
  if (3 < iVar1) {
    if (((*(char *)(param_1 + 0x19c6) == '\0') && (*(short *)(param_1 + 0x19a8) == 0)) ||
       ((*(char *)(param_1 + 0x19c7) == '\0' && (*(short *)(param_1 + 0x19aa) == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x19c3) = uVar3;
  }
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x19f4) = 0;
  }
  if (*(char *)(param_1 + 0x19c3) != '\0') {
    *(undefined4 *)(param_1 + 0x19f8) = 0;
  }
  return;
}

