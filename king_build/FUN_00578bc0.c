
void __thiscall FUN_00578bc0(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,s_pThis____NULL_0067bef0,
                 s_C__Nek_VRAPPLVS_TRUCK_mmt_cpp_0067bed0,0x6c,s_Mar_19_2002_006714f8);
  }
  if (*(int *)(param_1 + 8) == param_2) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 0xc) = param_2;
  *(int *)(param_1 + 4) = param_2;
  return;
}

