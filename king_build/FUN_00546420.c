
void __fastcall FUN_00546420(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = ~*(uint *)(param_1 + 0x51a4) >> 7 & 1;
  if (((uVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2540) + 0x90) != 0)) ||
     (*(int *)(param_1 + 0x5178) == 0)) {
    uVar4 = 0;
    uVar3 = *(undefined4 *)(&DAT_006d107c + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  else {
    uVar4 = 1;
    uVar3 = *(undefined4 *)(&DAT_006d107c + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  FUN_004e4132(uVar3,uVar4);
  if (((uVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2540) + 0x90) != 0)) ||
     (*(int *)(param_1 + 0x517c) == 0)) {
    uVar4 = 0;
    uVar3 = *(undefined4 *)(&DAT_006d108c + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  else {
    uVar4 = 1;
    uVar3 = *(undefined4 *)(&DAT_006d108c + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  FUN_004e4132(uVar3,uVar4);
  if (((uVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2540) + 0x7c) != 0)) ||
     (*(int *)(param_1 + 0x517c) == 0)) {
    uVar4 = 0;
    uVar3 = *(undefined4 *)(&DAT_006d1090 + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  else {
    uVar4 = 1;
    uVar3 = *(undefined4 *)(&DAT_006d1090 + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  FUN_004e4132(uVar3,uVar4);
  if (((uVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2540) + 0x7c) != 0)) ||
     (*(int *)(param_1 + 0x5178) == 0)) {
    if (*(int *)(param_1 + 0x51b4) == 0) {
      uVar4 = 0;
      uVar3 = *(undefined4 *)(&DAT_006d107c + *(int *)(param_1 + 0x28b4) * 0x5d0);
    }
    else {
      uVar4 = 2;
      uVar3 = *(undefined4 *)(&DAT_006d107c + *(int *)(param_1 + 0x28b4) * 0x5d0);
    }
  }
  else {
    uVar4 = 1;
    uVar3 = *(undefined4 *)(&DAT_006d107c + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  FUN_004e4132(uVar3,uVar4);
  if (((uVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x2540) + 0x7c) != 0)) ||
     (*(int *)(param_1 + 0x5178) == 0)) {
    if (*(int *)(param_1 + 0x51b4) == 0) {
      uVar4 = 0;
      uVar3 = *(undefined4 *)(&DAT_006d1080 + *(int *)(param_1 + 0x28b4) * 0x5d0);
    }
    else {
      uVar4 = 2;
      uVar3 = *(undefined4 *)(&DAT_006d1080 + *(int *)(param_1 + 0x28b4) * 0x5d0);
    }
  }
  else {
    uVar4 = 1;
    uVar3 = *(undefined4 *)(&DAT_006d1080 + *(int *)(param_1 + 0x28b4) * 0x5d0);
  }
  FUN_004e4132(uVar3,uVar4);
  if (*(int *)(param_1 + 0x51b4) == 0) {
    iVar2 = 0;
    do {
      FUN_005e10c0(*(undefined4 *)(&DAT_006d10ec + (iVar2 + *(int *)(param_1 + 0x28b4) * 0x174) * 4)
                   ,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  else {
    iVar2 = 0;
    do {
      FUN_005e10c0(*(undefined4 *)(&DAT_006d10ec + (iVar2 + *(int *)(param_1 + 0x28b4) * 0x174) * 4)
                   ,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  FUN_005e10c0(*(undefined4 *)(&DAT_006d114c + *(int *)(param_1 + 0x28b4) * 0x5d0),0);
  FUN_005e10c0(*(undefined4 *)(&DAT_006d1150 + *(int *)(param_1 + 0x28b4) * 0x5d0),0);
  if ((*(int *)(param_1 + 0x51b8) == 0) && (*(int *)(param_1 + 0x51b4) == 0)) {
    FUN_005e10c0(*(undefined4 *)(param_1 + 0x5014),0);
    return;
  }
  FUN_005e10c0(*(undefined4 *)(param_1 + 0x5014),1);
  return;
}

