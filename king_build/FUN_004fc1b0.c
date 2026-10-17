
void __thiscall
FUN_004fc1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2638) = 0;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x2638) = 1;
    return;
  case 2:
  case 3:
    FUN_004f0ac0(2,param_3,param_4);
    FUN_004f1650(param_5);
    FUN_004f1770(param_6);
    *(undefined4 *)(param_1 + 0x2638) = param_2;
  }
  return;
}

