
void __fastcall FUN_005b6140(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0xc) & 0x1000) == 0) || (DAT_0071f868 == 0)) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      piVar2 = (int *)(param_1 + 0x38);
      do {
        if ((*(uint *)(param_1 + 0xc) & 0x220) == 0) {
          FUN_00631d5c(piVar2[-8]);
        }
        if (*piVar2 != 0) {
          FUN_004843e0(*piVar2);
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x14));
    }
    if (((*(uint *)(param_1 + 0xc) & 0x4000) != 0) && ((*(uint *)(param_1 + 0xc) & 0x220) == 0)) {
      FUN_00631d5c(*(undefined4 *)(param_1 + 0x30));
    }
  }
  return;
}

