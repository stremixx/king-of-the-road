
void __thiscall FUN_00578cd0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1b0) == 100) {
    FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_TRUCK_mmt_cpp_0067bed0,0x8e,s_Mar_19_2002_006714f8);
    return;
  }
  *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x1b0) * 4) = param_2;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  return;
}

