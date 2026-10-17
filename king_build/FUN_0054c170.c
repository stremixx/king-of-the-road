
void __thiscall FUN_0054c170(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2aac) == 1) && (param_2 != 1)) {
    FUN_004fc190();
  }
  if (param_2 == 1) {
    if ((*(int *)(param_1 + 0x2aac) != 1) &&
       ((*(int *)(param_1 + 0x51ac) == 0 || (*(int *)(param_1 + 0xf98) == 3)))) {
      if (*(int *)(param_1 + 0x2aac) == 2) {
        iVar1 = FUN_004e2140(param_1 + 0x1b0,0x42c80000);
        if (iVar1 != 0) {
          (**(code **)(*(int *)(param_1 + 0x10) + 0x90))(&DAT_007015b0,0);
        }
      }
      FUN_004e20b1(param_1 + 0x1b0,s__Vehicle__set_vehin_mode_2_006791ec,0x42c80000);
      FUN_004fc1b0(3,*(undefined4 *)(param_1 + 0x330),param_1 + 0x204,param_1 + 0x1b0,
                   param_1 + 0x1bc);
      *(undefined4 *)(param_1 + 0x2aac) = 1;
      *(undefined4 *)(param_1 + 0x51ac) = 0;
      *(undefined4 *)(param_1 + 0x2aac) = 1;
      return;
    }
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x50d0) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0x50d4) = DAT_007015b4;
    *(undefined4 *)(param_1 + 0x50d8) = DAT_007015b8;
    *(undefined4 *)(param_1 + 0x50e8) = DAT_007015b0;
    *(undefined4 *)(param_1 + 0x50ec) = DAT_007015b4;
    *(undefined4 *)(param_1 + 0x50f0) = DAT_007015b8;
  }
  *(int *)(param_1 + 0x2aac) = param_2;
  return;
}

