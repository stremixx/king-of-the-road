
void __thiscall
FUN_005a5f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,byte param_6)

{
  if ((param_6 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
  }
  if ((param_6 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x34) = param_5;
  }
  return;
}

