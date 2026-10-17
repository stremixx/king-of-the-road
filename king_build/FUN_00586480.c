
undefined4 FUN_00586480(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == DAT_0067c04a) {
    for (iVar1 = DAT_006f549c; (iVar1 != 0 && (iVar1 != 4)); iVar1 = *(int *)(iVar1 + 4)) {
      if (*param_2 == *(int *)(iVar1 + 0x328)) {
        (**(code **)(*(int *)(iVar1 + -0x17c) + 0xc4))(param_2);
        return 1;
      }
    }
  }
  return 0;
}

