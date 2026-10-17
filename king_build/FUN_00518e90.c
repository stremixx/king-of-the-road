
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00518e90(int *param_1,int param_2)

{
  float10 fVar1;
  
  param_1[0x5c] = param_2;
  if (param_1[0x5e] == 2) {
    FUN_005c30b0(s_truck_00676338,DAT_006cdc30 + 0x18c,0);
    if (DAT_00695850 == 0) {
      (**(code **)(*DAT_006cdbe0 + 0x24))();
      return;
    }
    fVar1 = (float10)thunk_FUN_00603580();
    *(double *)(param_1 + 0x60) = (double)fVar1;
  }
  else if (param_1[0x5e] == 3) {
    FUN_005c30b0(s_truck_00676338,0,0);
    if (DAT_00695850 == 0) {
      (**(code **)(*DAT_006cdbe0 + 0x24))();
      return;
    }
    _DAT_0069586c = &LAB_00512a80;
    (**(code **)(*param_1 + 0x24))();
    return;
  }
  (**(code **)(*param_1 + 0x24))();
  return;
}

