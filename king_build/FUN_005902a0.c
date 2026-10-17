
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005902a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [52];
  undefined1 local_9c [12];
  undefined1 local_90 [144];
  
  if (param_1[0x503] != 0) {
    FUN_005eebf0();
    local_e8 = DAT_00701590 * _DAT_0064b310 + (float)param_1[0x86];
    local_e4 = DAT_00701594 * _DAT_0064b310 + (float)param_1[0x87];
    local_e0 = DAT_00701598 * _DAT_0064b310 + (float)param_1[0x88];
    local_dc = local_e8 - DAT_00701590 * _DAT_0064b2e8;
    local_d8 = local_e4 - DAT_00701594 * _DAT_0064b2e8;
    local_d4 = local_e0 - DAT_00701598 * _DAT_0064b2e8;
    iVar1 = FUN_004e69f8(param_1[200],param_1,0,&local_e8,&local_dc,local_d0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xe0))(local_9c,local_90,param_2);
    }
  }
  return;
}

