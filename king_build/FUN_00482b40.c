
void FUN_00482b40(void)

{
  int iVar1;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640380;
  local_c = ExceptionList;
  local_1c = (int *)&stack0x00000004;
  ExceptionList = &local_c;
  FUN_00490cf0(&stack0x00000004,&local_10,&local_18,&local_14);
  local_4 = 0;
  if (local_10 == DAT_0066eec0) {
    iVar1 = (local_18 - *local_1c) + local_14;
    while (iVar1 != 0) {
      local_2c = (int *)&stack0x00000004;
      FUN_00490cf0(&stack0x00000004,&local_20,&local_28,&local_24);
      local_4._0_1_ = 1;
      if (local_20 == DAT_0066ed68) {
        FUN_00480c20(&local_2c,&stack0x00000004);
      }
      else if (local_20 == DAT_0066ede4) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_00480ff0(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      else if (local_20 == DAT_0066ee28) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_00481450(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      else if (local_20 == DAT_0066ee48) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_00481bf0(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      else if (local_20 == DAT_0066ee6c) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_00482190(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      else if (local_20 == DAT_0066ee90) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_00482570(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      else if (local_20 == DAT_0066eeb8) {
        iVar1 = (local_28 - *local_2c) + local_24;
        while (iVar1 != 0) {
          FUN_004828c0(&stack0x00000004);
          iVar1 = (local_28 - *local_2c) + local_24;
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00490d20(local_2c,local_28,local_24);
      iVar1 = (local_18 - *local_1c) + local_14;
    }
  }
  local_4 = 0xffffffff;
  FUN_00490d20(local_1c,local_18,local_14);
  ExceptionList = local_c;
  return;
}

