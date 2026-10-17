
void __fastcall FUN_00554af0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(byte *)(param_1 + 0x51a4) & 0x80) != 0) {
    iVar4 = *(int *)(param_1 + 0x2540);
    iVar2 = *(int *)(iVar4 + 0x2c);
    if ((iVar2 < 2) || (*(int *)(iVar4 + 0x40) < 2)) {
      if ((iVar2 < 1) || (*(int *)(iVar4 + 0x40) < 1)) {
        if ((iVar2 < 1) || (2 < *(int *)(iVar4 + 4))) {
          if ((*(int *)(iVar4 + 0x40) < 1) || (2 < *(int *)(iVar4 + 4))) {
            if (*(int *)(iVar4 + 0x18) < 1) {
              uVar5 = 0;
            }
            else {
              uVar5 = 3;
            }
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 3;
      }
    }
    else {
      uVar5 = 4;
    }
    FUN_00588ae0(uVar5);
    iVar4 = 0;
    piVar1 = (int *)(*(int *)(param_1 + 0x2540) + 4);
    piVar3 = (int *)(param_1 + 0x523c);
    do {
      if (*piVar3 != *piVar1) {
        *(undefined4 *)(param_1 + 0x4f50) = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar4 < 9);
    piVar3 = (int *)(param_1 + 0x5260);
    iVar4 = 0;
    piVar1 = piVar3;
    do {
      if (*piVar1 != piVar1[8]) {
        *(undefined4 *)(param_1 + 0x4f50) = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 < 8);
    if (*(int *)(param_1 + 0x4f50) != 0) {
      FUN_00545970();
    }
    iVar4 = 0;
    piVar1 = (int *)(param_1 + 0x523c);
    do {
      iVar2 = iVar4 + 0x14;
      *piVar1 = *(int *)(iVar4 + 4 + *(int *)(param_1 + 0x2540));
      iVar4 = iVar2;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0xb4);
    iVar4 = 8;
    do {
      *piVar3 = piVar3[8];
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(int *)(param_1 + 0x4f50) != 0) {
      *(undefined4 *)(param_1 + 0x4f50) = 0;
      FUN_00545970();
    }
  }
  return;
}

