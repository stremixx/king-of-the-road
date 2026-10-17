
void __thiscall FUN_00517170(int *param_1,int param_2)

{
  param_1[0x5c] = param_2;
  (**(code **)(*param_1 + 0x24))();
  *(uint *)(param_1[0x60] + 0x11c) = *(uint *)(param_1[0x60] + 0x11c) | 2;
  if (*(short *)((int)param_1 + 0x18a) == 0) {
    *(uint *)(param_1[0x60] + 0x11c) = *(uint *)(param_1[0x60] + 0x11c) & 0xfffffffd;
  }
  *(undefined2 *)((int)param_1 + 0x17a) = *(undefined2 *)((int)param_1 + 0x18a);
  *(short *)(param_1 + 0x5d) = (short)param_1[0x61];
  *(undefined2 *)((int)param_1 + 0x176) = *(undefined2 *)((int)param_1 + 0x186);
  *(short *)(param_1 + 0x5e) = (short)param_1[0x62];
  *(short *)(param_1 + 0x5f) = (short)param_1[99];
  return;
}

