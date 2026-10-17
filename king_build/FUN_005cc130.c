
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005cc130(int param_1,int param_2,float param_3,float param_4,float param_5,undefined4 param_6,
            undefined4 param_7,float param_8)

{
  undefined1 local_30 [48];
  
  FUN_005ab330(local_30,param_3 + DAT_00701590 * _DAT_0064b248,
               DAT_00701594 * _DAT_0064b248 + param_4,DAT_00701598 * _DAT_0064b248 + param_5);
  *(float *)(param_2 + 0x20) = (param_8 * _DAT_0064b738) / (float)(*(int *)(param_1 + 0x20) + 1);
  *(float *)(param_1 + 0xc) = param_8 * _DAT_0064b320;
  FUN_005cbd50(0,local_30,param_2);
  return;
}

