
void FUN_0048c5f0(short *param_1,short *param_2)

{
  if (param_1 == (short *)0x0) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_operation_on_uninitialized_Integ_0066f430);
  }
  if (param_1 != param_2) {
    param_2 = (short *)FUN_0048ad80(param_2,param_1);
  }
  if (*param_2 != 0) {
    param_2[2] = (ushort)(param_2[2] == 0);
  }
  return;
}

