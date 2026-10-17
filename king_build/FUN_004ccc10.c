
undefined4 FUN_004ccc10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    uVar2 = 1;
    if (iVar1 == 1) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 3;
        *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      return uVar2;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            if (param_2 != 0) {
              *(undefined4 *)(param_1 + 0x4c) = 1;
              *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
              return uVar2;
            }
            *(undefined4 *)(param_1 + 0x4c) = 3;
            *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
          }
          return uVar2;
        }
        if (param_2 != 0) {
          *(undefined4 *)(param_1 + 0x4c) = 4;
          return uVar2;
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = 3;
      return uVar2;
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 2;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return 0;
}

