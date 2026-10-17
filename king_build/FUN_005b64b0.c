
void __thiscall FUN_005b64b0(ushort *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  if ((param_3 != 0) || (-1 < (int)param_2)) {
    if (DAT_0071f868 != (int *)0x0) {
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0x2a) == 0) {
          return;
        }
        pbVar1 = (byte *)(*(int *)(param_1 + 0x2a) + 0x18 + param_2 * 3);
        param_2 = ((*pbVar1 | 0xffffff00) << 8 | (uint)pbVar1[1]) << 8 | (uint)pbVar1[2];
      }
      local_18 = (uint)*param_1;
      local_14 = (uint)param_1[1];
      local_20 = 0;
      local_1c = 0;
      (**(code **)(*DAT_0071f868 + 0x28))(DAT_0071f868,1,&local_20,1,param_2,0x3f800000,0);
      return;
    }
    local_8 = (uint)*param_1;
    local_4 = (uint)param_1[1];
    local_c = 0;
    local_10 = 0;
    FUN_005b6640(param_1,&local_10,param_2,param_3);
  }
  return;
}

