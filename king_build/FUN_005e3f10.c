
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e3f10(int *param_1,int param_2)

{
  if ((*(int *)(param_1[3] + 0xfac) != 2) && (*param_1 == 2)) {
    if (*(code **)(param_2 + 0x7d4) != (code *)0x0) {
      if (*(uint *)(param_2 + 2000) < (uint)param_1[4]) {
        (**(code **)(param_2 + 0x7d4))(param_1,0);
      }
      else {
        if (param_1[7] != 0) {
          FUN_005d2250(s_index__00682268,param_1[1]);
          FUN_005d2520(s_in_load___objct__NULL_00682250,0);
        }
        *param_1 = 1;
        *(int *)(param_2 + 2000) = *(int *)(param_2 + 2000) - param_1[4];
        _DAT_0071f890 = DAT_00701dfc;
        (**(code **)(param_2 + 0x7d4))(param_1,1);
        if (param_1[4] != 0) {
          DAT_00720704 = DAT_00720704 + 1;
          FUN_004843e0(*(undefined4 *)(param_2 + 2000),param_1,0);
          return;
        }
      }
    }
  }
  return;
}

