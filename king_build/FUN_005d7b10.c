
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d7b10(int param_1,int param_2)

{
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_80;
  undefined4 local_6c;
  undefined4 local_58;
  undefined4 local_4;
  
  if (DAT_0071f868 != (int *)0x0) {
    if (param_2 == -1) {
      param_2 = DAT_0071f80c;
    }
    local_b4 = 0;
    local_c4 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_58 = 0;
    local_6c = 0;
    local_4 = 0x80070057;
    local_b0 = 0;
    local_80 = 0;
    local_ac = 0;
    local_c8 = param_1;
    _DAT_0071f810 = param_2;
    (**(code **)(*DAT_0071f868 + 0x10))(DAT_0071f868,&LAB_005d7a10,&local_d0);
    DAT_0071f7f4 = param_1;
    DAT_0071f7f8 = local_b8;
    return;
  }
  DAT_0071f7f4 = param_1;
  if (param_1 == 2) {
    DAT_0071f7f8 = 4;
  }
  return;
}

