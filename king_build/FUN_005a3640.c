
void __thiscall FUN_005a3640(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x20) = param_2;
    switch(*(undefined4 *)(param_2 + 0x10)) {
    case 2:
      *(int *)(param_2 + 0x74) = param_1;
      return;
    case 3:
      *(int *)(param_2 + 0x70) = param_1;
      return;
    case 4:
      *(int *)(param_2 + 0x40) = param_1;
      return;
    case 5:
      *(int *)(param_2 + 0x3c) = param_1;
      return;
    default:
      *(undefined4 *)(param_1 + 0x20) = 0;
      break;
    case 0x11:
      *(int *)(param_2 + 0x48) = param_1;
      return;
    }
  }
  return;
}

