
void FUN_004174c0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_00417560(param_1);
  piVar1 = DAT_006898e0;
  if (cVar2 == '\0') {
    for (; (piVar1 != DAT_006898e4 && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
    }
    if (piVar1 == DAT_006898e4) {
      if (DAT_006898e4 == DAT_006898e8) {
        FUN_00453860(DAT_006898e4,&param_1);
      }
      else {
        FUN_00460970(DAT_006898e4,&param_1);
        DAT_006898e4 = DAT_006898e4 + 1;
      }
    }
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  FUN_004772b0(param_1);
  *(undefined1 *)(param_1 + 0x368) = 1;
  return;
}

