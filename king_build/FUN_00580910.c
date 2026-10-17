
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00580910(int *param_1,undefined4 param_2,int param_3)

{
  if (*(float *)(param_3 + 0x2c) < _DAT_0064f614) {
    *(undefined4 *)(param_3 + 0x2c) = 0xc47a0000;
    (**(code **)(*param_1 + 0x90))(&DAT_007015b0,s_set_Pos_1_0067c40c);
    (**(code **)(*param_1 + 0x94))(&DAT_007015b0,s_set_Pos_2_0067c400);
  }
  (**(code **)(*param_1 + 0x88))(param_2,param_3);
  (**(code **)(*param_1 + 0x3c))();
  return;
}

