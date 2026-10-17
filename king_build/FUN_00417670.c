
void FUN_00417670(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_00417560(param_1);
  piVar1 = DAT_0068bec0;
  if (cVar2 == '\0') {
    for (; (piVar1 != DAT_0068bec4 && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
    }
    if (piVar1 == DAT_0068bec4) {
      if (DAT_0068bec4 == DAT_0068bec8) {
        FUN_00453860(DAT_0068bec4,&param_1);
      }
      else {
        FUN_00460970(DAT_0068bec4,&param_1);
        DAT_0068bec4 = DAT_0068bec4 + 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 100) = 5;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x4000;
  FUN_004772b0(param_1);
  *(undefined1 *)(param_1 + 0x368) = 1;
  return;
}

