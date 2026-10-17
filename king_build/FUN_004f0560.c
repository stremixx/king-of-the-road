
void __fastcall FUN_004f0560(int param_1)

{
  undefined1 uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  
  FUN_004f0080();
  FUN_004efdb0();
  FUN_004843e0();
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x19b4) = 1;
  *(undefined1 *)(param_1 + 0x19ba) = 0;
  if (0 < *(int *)(param_1 + 0xdd4)) {
    psVar2 = (short *)(param_1 + 0x19a4);
    puVar5 = (undefined4 *)(param_1 + 0xdd8);
    psVar4 = (short *)(param_1 + 0x110);
    do {
      if (*psVar4 == 0) {
        *puVar5 = puVar5[0x471];
        *psVar2 = 1;
      }
      if ((*(char *)(param_1 + 0x19b4) == '\0') || (*psVar2 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + 0x19b4) = uVar1;
      if ((*(char *)(param_1 + 0x19ba) == '\0') && (*psVar2 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + 0x19ba) = uVar1;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      psVar2 = psVar2 + 1;
      psVar4 = psVar4 + 0x7c;
    } while (iVar3 < *(int *)(param_1 + 0xdd4));
  }
  if (3 < *(int *)(param_1 + 0xdd4)) {
    if ((*(short *)(param_1 + 0x19a8) == 0) || (*(short *)(param_1 + 0x19aa) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x19b7) = uVar1;
  }
  if ((*(short *)(param_1 + 0x19a4) != 0) && (*(short *)(param_1 + 0x19a6) != 0)) {
    *(undefined1 *)(param_1 + 0x19b5) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x19b5) = 0;
  return;
}

