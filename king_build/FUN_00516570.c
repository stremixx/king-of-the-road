
void __thiscall FUN_00516570(int *param_1,int param_2)

{
  *(short *)((int)param_1 + 0x176) = (short)param_1[0x60];
  *(ushort *)(param_1 + 0x62) = (ushort)(5 < (short)param_1[0x60]);
  param_1[0x5c] = param_2;
  *(undefined2 *)(param_1 + 0x5d) = *(undefined2 *)((int)param_1 + 0x17e);
  *(short *)((int)param_1 + 0x17a) = (short)param_1[0x61];
  *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)((int)param_1 + 0x186);
  (**(code **)(*param_1 + 0x24))();
  return;
}

