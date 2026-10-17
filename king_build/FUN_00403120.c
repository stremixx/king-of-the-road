
void FUN_00403120(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0068be64 - DAT_0068be60 >> 2 != 0) {
    do {
      *(uint *)(*(int *)(DAT_0068be60 + uVar1 * 4) + 0x10) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(DAT_0068be64 - DAT_0068be60 >> 2));
  }
  uVar1 = 0;
  if (DAT_0068be9c - DAT_0068be98 >> 2 != 0) {
    do {
      *(uint *)(*(int *)(DAT_0068be98 + uVar1 * 4) + 0xc) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2));
  }
  uVar1 = 0;
  if (DAT_0068c03c - DAT_0068c038 >> 2 != 0) {
    do {
      *(uint *)(*(int *)(DAT_0068c038 + uVar1 * 4) + 0xc) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(DAT_0068c03c - DAT_0068c038 >> 2));
  }
  uVar1 = 0;
  if (DAT_0068c02c - DAT_0068c028 >> 2 != 0) {
    do {
      *(uint *)(*(int *)(DAT_0068c028 + uVar1 * 4) + 0xc) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(DAT_0068c02c - DAT_0068c028 >> 2));
  }
  return;
}

