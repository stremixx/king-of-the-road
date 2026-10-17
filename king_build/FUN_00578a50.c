
void FUN_00578a50(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,s_pool____NULL_0067bec0,
                 s_C__Nek_VRAPPLVS_TRUCK_mmt_cpp_0067bed0,0x19,s_Mar_19_2002_006714f8);
  }
  iVar1 = FUN_00578b50();
  if (iVar1 == 0) {
    return;
  }
  DAT_006f3b28 = 0;
  DAT_006f3b2c = *(undefined4 *)(iVar1 + 8);
  DAT_006f3b30 = *(undefined4 *)(iVar1 + 0xc);
  DAT_006f3b34 = *(undefined4 *)(iVar1 + 0x10);
  *(int *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}

