
void __fastcall FUN_00491060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0064aec0;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1[3] + 0x10) = param_1[4];
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0xc) = param_1[3];
  }
  *param_1 = &PTR_LAB_0064aed4;
  return;
}

