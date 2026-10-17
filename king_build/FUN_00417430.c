
void FUN_00417430(int param_1)

{
  int *piVar1;
  
  if (DAT_006898e0 != DAT_006898e4) {
    piVar1 = DAT_006898e0;
    do {
      if (param_1 + 8 == *piVar1 + 8) {
        if (piVar1 + 1 != DAT_006898e4) {
          FUN_0046b1d0(piVar1 + 1,DAT_006898e4,piVar1,param_1,0);
        }
        DAT_006898e4 = DAT_006898e4 + -1;
        break;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != DAT_006898e4);
  }
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  FUN_004772b0(param_1);
  *(undefined1 *)(param_1 + 0x368) = 1;
  return;
}

