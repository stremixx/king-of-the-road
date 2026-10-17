
void FUN_006232f2(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_00687970 == param_1) {
    PTR_LOOP_00687970 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00685950) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_0077d808,0,param_1);
    return;
  }
  DAT_00685960 = 0xffffffff;
  return;
}

