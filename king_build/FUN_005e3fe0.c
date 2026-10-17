
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e3fe0(int *param_1,int param_2)

{
  if ((*param_1 == 1) && (*(int *)(param_2 + 0x7d8) != 0)) {
    *param_1 = 2;
    *(int *)(param_2 + 2000) = *(int *)(param_2 + 2000) + param_1[4];
    _DAT_0071f890 = DAT_00701dfc;
    (**(code **)(param_2 + 0x7d8))(param_1,0);
    if (param_1[4] != 0) {
      DAT_00720704 = DAT_00720704 + -1;
      FUN_004843e0(*(undefined4 *)(param_2 + 2000),param_1,1);
    }
  }
  return;
}

