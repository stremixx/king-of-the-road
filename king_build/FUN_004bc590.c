
undefined4 FUN_004bc590(int param_1,undefined1 *param_2)

{
  if (param_1 == 0x3bd) {
    switch(*param_2) {
    case 1:
      FUN_004ba180(param_2 + 4,param_2 + 0x10,0);
      return 1;
    case 2:
      FUN_004ba260(param_2 + 4,param_2 + 0x10,0);
      return 1;
    case 3:
      FUN_004bb510(param_2 + 4,param_2 + 0x10,param_2 + 0x1c,*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),0);
      return 1;
    case 4:
      FUN_004ba6b0(param_2 + 4,param_2 + 0x10,*(undefined4 *)(param_2 + 0x1c),0);
      return 1;
    case 5:
      FUN_004bace0(param_2 + 4,param_2 + 0x10,*(undefined4 *)(param_2 + 0x1c),0);
      return 1;
    case 6:
      FUN_004bafe0(param_2 + 4,*(undefined4 *)(param_2 + 0x10),0);
      return 1;
    case 7:
    case 8:
      return 1;
    case 9:
      FUN_004bc320(param_2 + 4,param_2 + 0x10,0);
      return 1;
    case 10:
      FUN_004bc520(param_2 + 4,0);
      return 1;
    }
  }
  return 0;
}

