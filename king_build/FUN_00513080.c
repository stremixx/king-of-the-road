
void __fastcall FUN_00513080(int param_1)

{
  int iVar1;
  
  FUN_00530730(*(undefined4 *)(param_1 + 0x500));
  if (DAT_006957f0 == 2) {
    DAT_006d0e38 = &DAT_006d095a;
  }
  iVar1 = 0;
  do {
    if ((&DAT_006d0e20)[iVar1] == 0) {
      *(undefined4 *)(param_1 + 0x210 + iVar1 * 4) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x210 + iVar1 * 4) = (&DAT_006d0e20)[iVar1] + -0x6d08a8 >> 1;
    }
    if (iVar1 == 0) {
      if (DAT_006d0fa0 == 0) {
        *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 0x2cc) =
             *(int *)(DAT_006d0fa0 + 8) +
             (DAT_006d0fc8 + 0x96 + ((DAT_006d0fa0 + -0x6d0b10) / 0xc) * 2) * 2;
      }
    }
    else if (iVar1 == 3) {
      if (DAT_006d0f9c == 0) {
        *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
      }
      else {
        *(uint *)(param_1 + 0x2d8) =
             (uint)(DAT_006d0fc8 == 0) +
             (DAT_006d0fc8 + 0x96 + ((DAT_006d0f9c + -0x6d0b10) / 0xc) * 2) * 2 ^
             *(uint *)(DAT_006d0f9c + 8);
      }
    }
    else if (iVar1 == 1) {
      if (DAT_006d0f98 == 0) {
        *(undefined4 *)(param_1 + 0x2d0) = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 0x2d0) =
             *(int *)(DAT_006d0f98 + 8) + 300 + ((DAT_006d0f98 + -0x6d0b10) / 0xc) * 4;
      }
    }
    else if (iVar1 == 2) {
      if (DAT_006d0f98 == 0) {
        *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
      }
      else {
        *(uint *)(param_1 + 0x2d4) =
             (*(uint *)(DAT_006d0f98 + 8) ^ 1) + 300 + ((DAT_006d0f98 + -0x6d0b10) / 0xc) * 4;
      }
    }
    else if ((&DAT_006d0edc)[iVar1] == 0) {
      *(undefined4 *)(param_1 + 0x2cc + iVar1 * 4) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x2cc + iVar1 * 4) = (&DAT_006d0edc)[iVar1] + -0x6d08a8 >> 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2f);
  return;
}

