
void __fastcall FUN_00418590(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x58);
  uVar2 = *(int *)(param_1 + 0x60) - (int)piVar1;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  uVar2 = *(int *)(param_1 + 0x54) - (int)piVar1;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x40);
  uVar2 = *(int *)(param_1 + 0x48) - (int)piVar1;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x34);
  uVar2 = *(int *)(param_1 + 0x3c) - (int)piVar1;
  if (uVar2 != 0) {
    if (0x80 < uVar2) {
      FUN_0061c888(piVar1);
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}

