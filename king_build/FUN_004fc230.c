
void __thiscall
FUN_004fc230(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2638) = 0;
  }
  else if (((0 < param_2) && (param_2 < 4)) && (*(int *)(param_1 + 0x2638) != param_2)) {
    *(int *)(param_1 + 0x2638) = param_2;
    FUN_004f0ac0(2,param_3,param_4);
    FUN_004f1650(param_5);
    FUN_004f1770(param_6);
    return;
  }
  return;
}

