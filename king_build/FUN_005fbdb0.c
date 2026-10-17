
void __fastcall FUN_005fbdb0(int *param_1)

{
  if ((int *)param_1[0x10] != (int *)0x0) {
    DAT_00722a00 = *(int *)param_1[0x10];
    while (DAT_00722a00 != 0) {
      (**(code **)(*param_1 + 0x20))(&LAB_005fbdf0,0);
      DAT_00722a00 = FUN_005bc690();
    }
  }
  return;
}

