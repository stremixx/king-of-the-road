
void __fastcall FUN_005b8bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[199]) {
    do {
      FUN_00631d5c(*(undefined4 *)(*param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[199]);
  }
  FUN_00631d5c(*param_1);
  iVar1 = 0;
  if (0 < param_1[199]) {
    do {
      FUN_004843e0(*(undefined2 *)(param_1[1] + iVar1 * 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[199]);
  }
  FUN_00631d5c(param_1[1]);
  iVar1 = 0;
  if (0 < param_1[200]) {
    do {
      FUN_00631d5c(*(undefined4 *)(param_1[2] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[200]);
  }
  FUN_00631d5c(param_1[2]);
  iVar1 = 0;
  if (0 < param_1[200]) {
    do {
      FUN_004843e0(*(undefined2 *)(param_1[3] + iVar1 * 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[200]);
  }
  FUN_00631d5c(param_1[3]);
  iVar1 = 0;
  if (0 < param_1[0xc9]) {
    do {
      FUN_00631d5c(*(undefined4 *)(param_1[4] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0xc9]);
  }
  FUN_00631d5c(param_1[4]);
  iVar1 = 0;
  if (0 < param_1[0xc9]) {
    do {
      FUN_004843e0(*(undefined2 *)(param_1[5] + iVar1 * 2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0xc9]);
  }
  FUN_00631d5c(param_1[5]);
  return;
}

