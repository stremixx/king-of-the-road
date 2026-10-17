
uint __thiscall FUN_00611f40(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2[3] == 0) {
    iVar1 = *param_2;
  }
  else {
    iVar1 = FUN_00611ea0(param_2[3]);
    if (iVar1 == 1) {
      FUN_0060cc20(param_2[3]);
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 == 4) {
        return 1;
      }
      FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,&DAT_006716e0,
                   s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x108,s_Mar_19_2002_006714f8);
      return 0;
    }
    iVar1 = FUN_00609f10(param_2[3]);
    if (iVar1 != 0) {
      FUN_0060cc20(param_2[3]);
      return 1;
    }
    FUN_00604fc0(param_2,param_1);
    iVar1 = *param_2;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00611f40(iVar1);
  }
  uVar3 = 0;
  if (param_2[1] != 0) {
    uVar3 = FUN_00611f40(param_2[1]);
  }
  return uVar3 & uVar2;
}

